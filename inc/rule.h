#pragma once

#include <Windows.h>

#include <string>
#include <vector>
#include <functional>

namespace Pt
{

enum class RuleAction
{
    None = 0,
    AddSunlight,
    SubtractSunlight,
    SpawnZombieRandom,
    SpawnZombieRow,
    FullscreenZombie,
    KillAllZombies,
    PlantInvincible,
    PlantWeak,
    ZombieInvincible,
    ZombieWeak,
    DirectWin,
    UnlockSunLimit,
};

struct Rule
{
    int id = 0;
    std::string keyword;
    std::string gift_name;
    RuleAction action = RuleAction::None;
    int value = 0;
    std::string sound;
    bool enabled = true;
};

using RuleCallback = std::function<void(const Rule &)>;

class RuleEngine
{
  public:
    RuleEngine();
    ~RuleEngine();

    bool LoadRules(const std::wstring &path);
    bool SaveRules(const std::wstring &path);
    void AddRule(const Rule &rule);
    void RemoveRule(int id);
    const std::vector<Rule> &GetRules() const;
    const Rule *MatchDanmaku(const std::string &content) const;
    const Rule *MatchGift(const std::string &gift_name, int gift_value) const;
    void ExecuteRule(const Rule &rule);
    void SetExecuteCallback(RuleCallback callback);
    int GetNextId() const;

  private:
    std::vector<Rule> m_rules;
    RuleCallback m_callback;
    int m_next_id = 1;
};

} // namespace Pt
