#pragma once

#include <Windows.h>

#include <functional>
#include <map>
#include <string>
#include <thread>
#include <vector>

namespace Pt
{

enum class DanmakuType
{
    Unknown = 0,
    Text = 1,
    Gift = 2,
    Like = 3,
    Member = 4,
    Subscribe = 5,
};

struct DanmakuMessage
{
    DanmakuType type = DanmakuType::Unknown;
    std::string user_name;
    std::string content;
    std::string gift_name;
    int gift_value = 0;
    int gift_count = 0;
    uint64_t timestamp = 0;
};

using DanmakuCallback = std::function<void(const DanmakuMessage &)>;

class DouyinClient
{
  public:
    DouyinClient();
    ~DouyinClient();

    bool Connect(const std::string &room_id);
    void Disconnect();
    bool IsConnected() const;
    void SetDanmakuCallback(DanmakuCallback callback);
    std::string GetRoomId() const;
    std::string GetUserName() const;

  private:
    void HeartbeatThread();
    void ReceiveThread();
    std::vector<uint8_t> EncodeMessage(const std::string &text);
    bool DecodeMessage(const uint8_t *data, size_t len, DanmakuMessage &msg);

  private:
    SOCKET m_socket = INVALID_SOCKET;
    bool m_connected = false;
    std::string m_room_id;
    std::string m_user_name;
    DanmakuCallback m_callback;
    std::thread m_heartbeat_thread;
    std::thread m_receive_thread;
    bool m_running = false;
};

} // namespace Pt
