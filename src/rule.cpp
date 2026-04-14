#include "../inc/rule.h"

#include <fstream>
#include <sstream>

namespace Pt
{

RuleEngine::RuleEngine()
{
}

RuleEngine::~RuleEngine()
{
}

bool RuleEngine::LoadRules(const std::wstring &path)
{
    std::ifstream file(path);
    if (!file.is_open())
        return false;

    std::stringstream buffer;
    buffer << file.rdbuf();
    std::string content = buffer.str();

    size_t rules_start = content.find("\"rules\"");
    if (rules_start == std::string::npos)
        return false;

    size_t array_start = content.find("[", rules_start);
    size_t array_end = content.find("]", array_start);
    if (array_start == std::string::npos || array_end == std::string::npos)
        return false;

    std::string rules_array = content.substr(array_start + 1, array_end - array_start - 1);

    size_t pos = 0;
    while (pos < rules_array.size())
    {
        size_t obj_start = rules_array.find("{", pos);
        if (obj_start == std::string::npos)
            break;
        size_t obj_end = rules_array.find("}", obj_start);
        if (obj_end == std::string::npos)
            break;

        std::string rule_obj = rules_array.substr(obj_start + 1, obj_end - obj_start - 1);
        Rule rule;

        size_t id_pos = rule_obj.find("\"id\"");
        if (id_pos != std::string::npos)
        {
            size_t colon = rule_obj.find(":", id_pos);
            size_t comma = rule_obj.find(",", colon);
            std::string id_str = rule_obj.substr(colon + 1, comma - colon - 1);
            rule.id = atoi(id_str.c_str());
        }

        size_t kw_pos = rule_obj.find("\"keyword\"");
        if (kw_pos != std::string::npos)
        {
            size_t colon = rule_obj.find(":", kw_pos);
            size_t comma = rule_obj.find(",", colon);
            size_t start = rule_obj.find("\"", colon + 1) + 1;
            size_t end = rule_obj.find("\"", start);
            rule.keyword = rule_obj.substr(start, end - start);
        }

        size_t gift_pos = rule_obj.find("\"gift_name\"");
        if (gift_pos != std::string::npos)
        {
            size_t colon = rule_obj.find(":", gift_pos);
            size_t comma = rule_obj.find(",", colon);
            size_t start = rule_obj.find("\"", colon + 1) + 1;
            size_t end = rule_obj.find("\"", start);
            rule.gift_name = rule_obj.substr(start, end - start);
        }

        size_t action_pos = rule_obj.find("\"action\"");
        if (action_pos != std::string::npos)
        {
            size_t colon = rule_obj.find(":", action_pos);
            size_t comma = rule_obj.find(",", colon);
            size_t start = rule_obj.find("\"", colon + 1) + 1;
            size_t end = rule_obj.find("\"", start);
            std::string action_str = rule_obj.substr(start, end - start);

            if (action_str == "add_sunlight")
                rule.action = RuleAction::AddSunlight;
            else if (action_str == "subtract_sunlight")
                rule.action = RuleAction::SubtractSunlight;
            else if (action_str == "spawn_zombie_random")
                rule.action = RuleAction::SpawnZombieRandom;
            else if (action_str == "spawn_zombie_row")
                rule.action = RuleAction::SpawnZombieRow;
            else if (action_str == "fullscreen_zombie")
                rule.action = RuleAction::FullscreenZombie;
            else if (action_str == "kill_all_zombies")
                rule.action = RuleAction::KillAllZombies;
            else if (action_str == "plant_invincible")
                rule.action = RuleAction::PlantInvincible;
            else if (action_str == "plant_weak")
                rule.action = RuleAction::PlantWeak;
            else if (action_str == "zombie_invincible")
                rule.action = RuleAction::ZombieInvincible;
            else if (action_str == "zombie_weak")
                rule.action = RuleAction::ZombieWeak;
            else if (action_str == "direct_win")
                rule.action = RuleAction::DirectWin;
            else if (action_str == "unlock_sun_limit")
                rule.action = RuleAction::UnlockSunLimit;
            else
                rule.action = RuleAction::None;
        }

        size_t value_pos = rule_obj.find("\"value\"");
        if (value_pos != std::string::npos)
        {
            size_t colon = rule_obj.find(":", value_pos);
            size_t comma = rule_obj.find(",", colon);
            std::string value_str = rule_obj.substr(colon + 1, comma - colon - 1);
            rule.value = atoi(value_str.c_str());
        }

        size_t sound_pos = rule_obj.find("\"sound\"");
        if (sound_pos != std::string::npos)
        {
            size_t colon = rule_obj.find(":", sound_pos);
            size_t comma = rule_obj.find(",", colon);
            size_t start = rule_obj.find("\"", colon + 1) + 1;
            size_t end = rule_obj.find("\"", start);
            rule.sound = rule_obj.substr(start, end - start);
        }

        size_t enabled_pos = rule_obj.find("\"enabled\"");
        if (enabled_pos != std::string::npos)
        {
            size_t colon = rule_obj.find(":", enabled_pos);
            size_t comma = rule_obj.find(",", colon);
            std::string enabled_str = rule_obj.substr(colon + 1, comma - colon - 1);
            rule.enabled = (enabled_str == "true" || enabled_str == "1");
        }

        m_rules.push_back(rule);
        if (rule.id >= m_next_id)
            m_next_id = rule.id + 1;
        pos = obj_end + 1;
    }

    return true;
}

bool RuleEngine::SaveRules(const std::wstring &path)
{
    std::ofstream file(path);
    if (!file.is_open())
        return false;

    file << "{\n  \"rules\": [\n";

    for (size_t i = 0; i < m_rules.size(); ++i)
    {
        const Rule &rule = m_rules[i];
        file << "    {\n";
        file << "      \"id\": " << rule.id << ",\n";
        file << "      \"keyword\": \"" << rule.keyword << "\",\n";
        file << "      \"gift_name\": \"" << rule.gift_name << "\",\n";

        std::string action_str;
        switch (rule.action)
        {
            case RuleAction::AddSunlight: action_str = "add_sunlight"; break;
            case RuleAction::SubtractSunlight: action_str = "subtract_sunlight"; break;
            case RuleAction::SpawnZombieRandom: action_str = "spawn_zombie_random"; break;
            case RuleAction::SpawnZombieRow: action_str = "spawn_zombie_row"; break;
            case RuleAction::FullscreenZombie: action_str = "fullscreen_zombie"; break;
            case RuleAction::KillAllZombies: action_str = "kill_all_zombies"; break;
            case RuleAction::PlantInvincible: action_str = "plant_invincible"; break;
            case RuleAction::PlantWeak: action_str = "plant_weak"; break;
            case RuleAction::ZombieInvincible: action_str = "zombie_invincible"; break;
            case RuleAction::ZombieWeak: action_str = "zombie_weak"; break;
            case RuleAction::DirectWin: action_str = "direct_win"; break;
            case RuleAction::UnlockSunLimit: action_str = "unlock_sun_limit"; break;
            default: action_str = "none"; break;
        }
        file << "      \"action\": \"" << action_str << "\",\n";
        file << "      \"value\": " << rule.value << ",\n";
        file << "      \"sound\": \"" << rule.sound << "\",\n";
        file << "      \"enabled\": " << (rule.enabled ? "true" : "false") << "\n";
        file << "    }" << (i < m_rules.size() - 1 ? "," : "") << "\n";
    }

    file << "  ]\n}\n";
    return true;
}

void RuleEngine::AddRule(const Rule &rule)
{
    m_rules.push_back(rule);
    if (rule.id >= m_next_id)
        m_next_id = rule.id + 1;
}

void RuleEngine::RemoveRule(int id)
{
    for (auto it = m_rules.begin(); it != m_rules.end(); ++it)
    {
        if (it->id == id)
        {
            m_rules.erase(it);
            return;
        }
    }
}

const std::vector<Rule> &RuleEngine::GetRules() const
{
    return m_rules;
}

const Rule *RuleEngine::MatchDanmaku(const std::string &content) const
{
    for (const auto &rule : m_rules)
    {
        if (!rule.enabled)
            continue;
        if (!rule.keyword.empty() && content.find(rule.keyword) != std::string::npos)
            return &rule;
    }
    return nullptr;
}

const Rule *RuleEngine::MatchGift(const std::string &gift_name, int gift_value) const
{
    for (const auto &rule : m_rules)
    {
        if (!rule.enabled)
            continue;
        if (!rule.gift_name.empty() && rule.gift_name == gift_name)
            return &rule;
    }
    return nullptr;
}

void RuleEngine::ExecuteRule(const Rule &rule)
{
    if (m_callback)
        m_callback(rule);
}

void RuleEngine::SetExecuteCallback(RuleCallback callback)
{
    m_callback = callback;
}

int RuleEngine::GetNextId() const
{
    return m_next_id;
}

} // namespace Pt
