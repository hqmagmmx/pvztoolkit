#pragma once

#include <Windows.h>

#include <string>
#include <map>
#include <vector>

namespace Pt
{

class AudioPlayer
{
  public:
    AudioPlayer();
    ~AudioPlayer();

    bool Initialize();
    bool LoadSound(const std::string &name, const std::string &path);
    void PlaySound(const std::string &name);
    void StopAll();
    bool IsLoaded(const std::string &name) const;

  private:
    std::map<std::string, std::vector<uint8_t>> m_sounds;
};

} // namespace Pt
