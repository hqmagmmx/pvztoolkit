#include "../inc/audio.h"

#include <mmsystem.h>

#pragma comment(lib, "winmm.lib")

namespace Pt
{

AudioPlayer::AudioPlayer()
{
}

AudioPlayer::~AudioPlayer()
{
    StopAll();
}

bool AudioPlayer::Initialize()
{
    return true;
}

bool AudioPlayer::LoadSound(const std::string &name, const std::string &path)
{
    std::wstring wpath(path.begin(), path.end());

    MCI_OPEN_PARMS open_parms;
    open_parms.lpstrDeviceType = L"waveaudio";
    open_parms.lpstrElementName = wpath.c_str();

    MCIERROR error = mciSendCommand(0, MCI_OPEN, MCI_OPEN_ELEMENT | MCI_OPEN_TYPE, (DWORD_PTR)&open_parms);
    if (error)
        return false;

    MCI_GENERIC_PARMS close_parms;
    mciSendCommand(open_parms.wDeviceID, MCI_CLOSE, 0, (DWORD_PTR)&close_parms);

    std::vector<uint8_t> dummy;
    m_sounds[name] = dummy;
    return true;
}

void AudioPlayer::PlaySound(const std::string &name)
{
    auto it = m_sounds.find(name);
    if (it == m_sounds.end())
        return;

    std::wstring wname(name.begin(), name.end());
    PlaySound(wname.c_str(), nullptr, SND_FILENAME | SND_ASYNC);
}

void AudioPlayer::StopAll()
{
    PlaySound(nullptr, nullptr, SND_PURGE);
}

bool AudioPlayer::IsLoaded(const std::string &name) const
{
    return m_sounds.find(name) != m_sounds.end();
}

} // namespace Pt
