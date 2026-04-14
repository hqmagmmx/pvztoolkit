#include "../inc/douyin.h"

#include <winhttp.h>
#include <wincrypt.h>
#include <ws2tcpip.h>

#pragma comment(lib, "winhttp.lib")
#pragma comment(lib, "ws2_32.lib")
#pragma comment(lib, "crypt32.lib")

namespace Pt
{

static const char s_base64_chars[] =
    "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";

static std::string GenerateRandomString(size_t length)
{
    static const char s_chars[] =
        "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    std::string result;
    result.reserve(length);
    for (size_t i = 0; i < length; ++i)
        result += s_chars[rand() % (sizeof(s_chars) - 1)];
    return result;
}

static std::string Base64Encode(const uint8_t *data, size_t len)
{
    std::string ret;
    int i = 0, j = 0;
    uint8_t char_array_3[3], char_array_4[4];

    while (len--)
    {
        char_array_3[i++] = *(data++);
        if (i == 3)
        {
            char_array_4[0] = (char_array_3[0] & 0xfc) >> 2;
            char_array_4[1] = ((char_array_3[0] & 0x03) << 4) + ((char_array_3[1] & 0xf0) >> 4);
            char_array_4[2] = ((char_array_3[1] & 0x0f) << 2) + ((char_array_3[2] & 0xc0) >> 6);
            char_array_4[3] = char_array_3[2] & 0x3f;
            for (i = 0; i < 4; i++)
                ret += s_base64_chars[char_array_4[i]];
            i = 0;
        }
    }

    if (i)
    {
        for (j = i; j < 3; j++)
            char_array_3[j] = '\0';
        char_array_4[0] = (char_array_3[0] & 0xfc) >> 2;
        char_array_4[1] = ((char_array_3[0] & 0x03) << 4) + ((char_array_3[1] & 0xf0) >> 4);
        char_array_4[2] = ((char_array_3[1] & 0x0f) << 2) + ((char_array_3[2] & 0xc0) >> 6);
        for (j = 0; j < i + 1; j++)
            ret += s_base64_chars[char_array_4[j]];
        while (i++ < 3)
            ret += '=';
    }
    return ret;
}

static bool Sha1Hash(const uint8_t *data, size_t len, uint8_t *hash_out)
{
    HCRYPTHASH hHash = 0;
    HCRYPTPROV hCrypt = 0;

    if (!CryptAcquireContext(&hCrypt, nullptr, nullptr, PROV_RSA_AES, CRYPT_VERIFYCONTEXT))
        return false;
    if (!CryptCreateHash(hCrypt, CALG_SHA1, 0, 0, &hHash))
    {
        CryptReleaseContext(hCrypt, 0);
        return false;
    }
    if (!CryptHashData(hHash, data, len, 0))
    {
        CryptDestroyHash(hHash);
        CryptReleaseContext(hCrypt, 0);
        return false;
    }

    DWORD hash_len = 20;
    if (!CryptGetHashParam(hHash, HP_HASHVAL, hash_out, &hash_len, 0))
    {
        CryptDestroyHash(hHash);
        CryptReleaseContext(hCrypt, 0);
        return false;
    }

    CryptDestroyHash(hHash);
    CryptReleaseContext(hCrypt, 0);
    return true;
}

DouyinClient::DouyinClient()
{
    WSADATA wsa_data;
    WSAStartup(MAKEWORD(2, 2), &wsa_data);
}

DouyinClient::~DouyinClient()
{
    Disconnect();
    WSACleanup();
}

bool DouyinClient::Connect(const std::string &room_id)
{
    if (m_connected)
        Disconnect();

    m_room_id = room_id;

    std::string host = "webcast6-ws.douyin.com";
    std::string path = "/webcast/push/ws/v2/";

    ADDRINFO hints = {};
    hints.ai_family = AF_UNSPEC;
    hints.ai_socktype = SOCK_STREAM;

    ADDRINFO *result = nullptr;
    if (getaddrinfo(host.c_str(), "443", &hints, &result) != 0)
        return false;

    m_socket = socket(result->ai_family, result->ai_socktype, result->ai_protocol);
    if (m_socket == INVALID_SOCKET)
    {
        freeaddrinfo(result);
        return false;
    }

    if (connect(m_socket, result->ai_addr, (int)result->ai_addrlen) == SOCKET_ERROR)
    {
        closesocket(m_socket);
        m_socket = INVALID_SOCKET;
        freeaddrinfo(result);
        return false;
    }
    freeaddrinfo(result);

    std::string ws_key = GenerateRandomString(16);
    uint8_t key_hash[20];
    std::string key_string = ws_key + "258EAFA5-E914-47DA-95CA-C5AB0DC85B11";
    Sha1Hash((const uint8_t *)key_string.c_str(), key_string.length(), key_hash);
    std::string key_encoded = Base64Encode(key_hash, 20);

    char request[2048];
    snprintf(request, sizeof(request),
             "GET %s HTTP/1.1\r\n"
             "Host: %s\r\n"
             "Upgrade: websocket\r\n"
             "Connection: Upgrade\r\n"
             "Sec-WebSocket-Key: %s\r\n"
             "Sec-WebSocket-Version: 13\r\n"
             "User-Agent: Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36\r\n"
             "\r\n",
             path.c_str(), host.c_str(), key_encoded.c_str());

    if (send(m_socket, request, (int)strlen(request), 0) == SOCKET_ERROR)
    {
        closesocket(m_socket);
        m_socket = INVALID_SOCKET;
        return false;
    }

    char response[1024];
    int received = recv(m_socket, response, sizeof(response) - 1, 0);
    if (received <= 0 || strstr(response, "101") == nullptr)
    {
        closesocket(m_socket);
        m_socket = INVALID_SOCKET;
        return false;
    }

    m_connected = true;
    m_running = true;

    m_heartbeat_thread = std::thread(&DouyinClient::HeartbeatThread, this);
    m_receive_thread = std::thread(&DouyinClient::ReceiveThread, this);

    return true;
}

void DouyinClient::Disconnect()
{
    m_running = false;

    if (m_heartbeat_thread.joinable())
        m_heartbeat_thread.join();
    if (m_receive_thread.joinable())
        m_receive_thread.join();

    if (m_socket != INVALID_SOCKET)
    {
        uint8_t close_frame[2] = {0x88, 0x00};
        send(m_socket, (const char *)close_frame, 2, 0);
        closesocket(m_socket);
        m_socket = INVALID_SOCKET;
    }
    m_connected = false;
}

bool DouyinClient::IsConnected() const
{
    return m_connected;
}

void DouyinClient::SetDanmakuCallback(DanmakuCallback callback)
{
    m_callback = callback;
}

std::string DouyinClient::GetRoomId() const
{
    return m_room_id;
}

std::string DouyinClient::GetUserName() const
{
    return m_user_name;
}

void DouyinClient::HeartbeatThread()
{
    while (m_running && m_connected)
    {
        std::this_thread::sleep_for(std::chrono::seconds(25));
        if (!m_running || !m_connected)
            break;
        uint8_t ping_frame[2] = {0x89, 0x00};
        send(m_socket, (const char *)ping_frame, 2, 0);
    }
}

void DouyinClient::ReceiveThread()
{
    std::vector<uint8_t> buffer;
    buffer.reserve(8192);

    while (m_running && m_connected)
    {
        uint8_t chunk[4096];
        int received = recv(m_socket, (char *)chunk, sizeof(chunk), 0);

        if (received <= 0)
        {
            m_connected = false;
            break;
        }

        buffer.insert(buffer.end(), chunk, chunk + received);

        while (buffer.size() >= 2)
        {
            uint8_t first_byte = buffer[0];
            uint8_t second_byte = buffer[1];

            bool masked = (second_byte & 0x80) != 0;
            uint64_t payload_len = second_byte & 0x7F;

            int header_len = 2;
            if (payload_len == 126)
                header_len = 4;
            else if (payload_len == 127)
                header_len = 10;

            if (buffer.size() < (size_t)header_len)
                break;

            uint64_t data_offset = header_len + (masked ? 4 : 0);

            if (buffer.size() < data_offset + payload_len)
                break;

            std::vector<uint8_t> payload(payload_len);
            for (size_t i = 0; i < payload_len; ++i)
            {
                if (masked)
                {
                    uint8_t mask_key[4];
                    mask_key[0] = buffer[header_len];
                    mask_key[1] = buffer[header_len + 1];
                    mask_key[2] = buffer[header_len + 2];
                    mask_key[3] = buffer[header_len + 3];
                    payload[i] = buffer[data_offset + i] ^ mask_key[i % 4];
                }
                else
                {
                    payload[i] = buffer[data_offset + i];
                }
            }

            buffer.erase(buffer.begin(), buffer.begin() + data_offset + payload_len);

            uint8_t opcode = first_byte & 0x0F;
            if (opcode == 0x8)
            {
                m_connected = false;
                break;
            }
            else if (opcode == 0x1)
            {
                DanmakuMessage msg;
                if (DecodeMessage(payload.data(), payload.size(), msg))
                {
                    if (m_callback)
                        m_callback(msg);
                }
            }
            else if (opcode == 0x9)
            {
                uint8_t pong_frame[2] = {0x8A, 0x00};
                send(m_socket, (const char *)pong_frame, 2, 0);
            }
        }
    }
}

std::vector<uint8_t> DouyinClient::EncodeMessage(const std::string &text)
{
    std::vector<uint8_t> result;
    result.push_back(0x81);

    size_t len = text.length();
    if (len < 126)
    {
        result.push_back((uint8_t)len);
    }
    else if (len < 65536)
    {
        result.push_back(126);
        result.push_back((len >> 8) & 0xFF);
        result.push_back(len & 0xFF);
    }
    else
    {
        result.push_back(127);
        for (int i = 7; i >= 0; --i)
            result.push_back((len >> (i * 8)) & 0xFF);
    }

    result.insert(result.end(), text.begin(), text.end());
    return result;
}

bool DouyinClient::DecodeMessage(const uint8_t *data, size_t len, DanmakuMessage &msg)
{
    if (len < 2)
        return false;

    std::string json_str((const char *)data, len);

    size_t type_pos = json_str.find("\"msg_type\"");
    if (type_pos != std::string::npos)
    {
        size_t colon_pos = json_str.find(":", type_pos);
        if (colon_pos != std::string::npos)
        {
            size_t value_start = colon_pos + 1;
            while (value_start < json_str.size() &&
                   (json_str[value_start] == ' ' || json_str[value_start] == '\"'))
                value_start++;
            size_t value_end = value_start;
            while (value_end < json_str.size() && json_str[value_end] != ',' && json_str[value_end] != '\"')
                value_end++;
            std::string type_val = json_str.substr(value_start, value_end - value_start);

            if (type_val == "1" || type_val == "chat" || type_val == "text")
                msg.type = DanmakuType::Text;
            else if (type_val == "2" || type_val == "gift")
                msg.type = DanmakuType::Gift;
            else if (type_val == "3" || type_val == "like")
                msg.type = DanmakuType::Like;
        }
    }

    size_t content_pos = json_str.find("\"content\"");
    if (content_pos == std::string::npos)
        content_pos = json_str.find("\"text\"");
    if (content_pos == std::string::npos)
        content_pos = json_str.find("\"msg\"");
    if (content_pos != std::string::npos)
    {
        size_t colon_pos = json_str.find(":", content_pos);
        if (colon_pos != std::string::npos)
        {
            size_t value_start = colon_pos + 1;
            while (value_start < json_str.size() &&
                   (json_str[value_start] == ' ' || json_str[value_start] == '\"'))
                value_start++;
            size_t value_end = value_start;
            while (value_end < json_str.size() && json_str[value_end] != '\"')
                value_end++;
            msg.content = json_str.substr(value_start, value_end - value_start);
        }
    }

    size_t name_pos = json_str.find("\"nickname\"");
    if (name_pos == std::string::npos)
        name_pos = json_str.find("\"user_name\"");
    if (name_pos != std::string::npos)
    {
        size_t colon_pos = json_str.find(":", name_pos);
        if (colon_pos != std::string::npos)
        {
            size_t value_start = colon_pos + 1;
            while (value_start < json_str.size() &&
                   (json_str[value_start] == ' ' || json_str[value_start] == '\"'))
                value_start++;
            size_t value_end = value_start;
            while (value_end < json_str.size() && json_str[value_end] != '\"')
                value_end++;
            msg.user_name = json_str.substr(value_start, value_end - value_start);
        }
    }

    size_t gift_pos = json_str.find("\"gift_name\"");
    if (gift_pos != std::string::npos)
    {
        size_t colon_pos = json_str.find(":", gift_pos);
        if (colon_pos != std::string::npos)
        {
            size_t value_start = colon_pos + 1;
            while (value_start < json_str.size() &&
                   (json_str[value_start] == ' ' || json_str[value_start] == '\"'))
                value_start++;
            size_t value_end = value_start;
            while (value_end < json_str.size() && json_str[value_end] != '\"')
                value_end++;
            msg.gift_name = json_str.substr(value_start, value_end - value_start);
        }
    }

    return !msg.content.empty() || !msg.gift_name.empty();
}

} // namespace Pt
