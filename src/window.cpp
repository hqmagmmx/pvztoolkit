
#include "../inc/window.h"
#include "../inc/douyin.h"
#include "../inc/rule.h"
#include "../inc/audio.h"

#define IDI_ICON 1001

namespace Pt
{

const char *plants[] =
    {
        "Peashooter",
        "Sunflower",
        "Cherry Bomb",
        "Wall-nut",
        "Potato Mine",
        "Snow Pea",
        "Chomper",
        "Repeater",
        "Puff-shroom",
        "Sun-shroom",
        "Fume-shroom",
        "Grave Buster",
        "Hypno-shroom",
        "Scaredy-shroom",
        "Ice-shroom",
        "Doom-shroom",
        "Lily Pad",
        "Squash",
        "Threepeater",
        "Tangle Kelp",
        "Jalapeno",
        "Spikeweed",
        "Torchwood",
        "Tall-nut",
        "Sea-shroom",
        "Plantern",
        "Cactus",
        "Blover",
        "Split Pea",
        "Starfruit",
        "Pumpkin",
        "Magnet-shroom",
        "Cabbage-pult",
        "Flower Pot",
        "Kernel-pult",
        "Coffee Bean",
        "Garlic",
        "Umbrella Leaf",
        "Marigold",
        "Melon-pult",
        "Gatling Pea",
        "Twin Sunflower",
        "Gloom-shroom",
        "Cattail",
        "Winter Melon",
        "Gold Magnet",
        "Spikerock",
        "Cob Cannon",
};

const char *zombies[] =
    {
        "Zombie",
        "Flag Zombie",
        "Conehead Zombie",
        "Pole Vaulting Zombie",
        "Buckethead Zombie",
        "Newspaper Zombie",
        "Screen Door Zombie",
        "Football Zombie",
        "Dancing Zombie",
        "Backup Dancer",
        "Ducky Tube Zombie",
        "Snorkel Zombie",
        "Zomboni",
        "Zombie Bobsled Team",
        "Dolphin Rider Zombie",
        "Jack-in-the-Box Zombie",
        "Balloon Zombie",
        "Digger Zombie",
        "Pogo Zombie",
        "Zombie Yeti",
        "Bungee Zombie",
        "Ladder Zombie",
        "Catapult Zombie",
        "Gargantuar",
        "Imp",
        "Dr. Zomboss",
        "Peashooter Zombie",
        "Wall-nut Zombie",
        "Jalapeno Zombie",
        "Gatling Pea Zombie",
        "Squash Zombie",
        "Tall-nut Zombie",
        "GigaGargantuar",
};

#ifdef _PTK_CHINESE_UI
#else
const char *zombies_s[] =
    {
        "Zombie",
        "Flag ~",
        "Conehead ~",
        "Pole Vaulting ~",
        "Buckethead ~",
        "Newspaper ~",
        "Screen Door ~",
        "Football ~",
        "Dancing ~",
        "Backup Dancer",
        "Ducky Tube ~",
        "Snorkel ~",
        "Zomboni",
        "~ Bobsled Team",
        "Dolphin Rider ~",
        "Jack-in-the-Box ~",
        "Balloon ~",
        "Digger ~",
        "Pogo ~",
        "~ Yeti",
        "Bungee ~",
        "Ladder ~",
        "Catapult ~",
        "Gargantuar",
        "Imp",
        "Dr. Zomboss",
        "Peashooter ~",
        "Wall-nut ~",
        "Jalapeno ~",
        "Gatling Pea ~",
        "Squash ~",
        "Tall-nut ~",
        "GigaGargantuar",
};
#endif

const char *modes[] =
    {
        "Adventure",
        "Survival: Day",
        "Survival: Night",
        "Survival: Pool",
        "Survival: Fog",
        "Survival: Roof",
        "Survival: Day (Hard)",
        "Survival: Night (Hard)",
        "Survival: Pool (Hard)",
        "Survival: Fog (Hard)",
        "Survival: Roof (Hard)",
        "Survival: Day (Endless)",
        "Survival: Night (Endless)",
        "Survival: Endless",
        "Survival: Fog (Endless)",
        "Survival: Roof (Endless)",
        "ZomBotany",
        "Wall-nut Bowling",
        "Slot Machine",
        "It's Raining Seeds",
        "Beghouled",
        "Invisi-ghoul",
        "Seeing Stars",
        "Zombiquarium",
        "Beghouled Twist",
        "Big Trouble Little Zombie",
        "Portal Combat",
        "Column Like You See'Em",
        "Bobseld Bonanza",
        "Zombie Nimble Zombie Quick",
        "Whack a Zombie",
        "Last Stand",
        "ZomBotany 2",
        "Wall-nut Bowling 2",
        "Pogo Party",
        "Dr. Zomboss's Revenge",
        "Art Challenge Wall-nut",
        "Sunny Day",
        "Unsodded",
        "Big Time",
        "Art Challenge Sunflower",
        "Air Raid",
        "Ice Level",
        "Zen Garden",
        "High Gravity",
        "Grave Danger",
        "Can You Dig It?",
        "Dark Stormy Night",
        "Bungee Blitz",
        "Squirrel",
        "Tree of Wisdom",
        "Vasebreaker",
        "To the Left",
        "Third Vase",
        "Chain Reaction",
        "M is for Metal",
        "Scary Potter",
        "Hokey Pokey",
        "Another Chain Reaction",
        "Ace of Vase",
        "Vasebreaker Endless",
        "I, Zombie",
        "I, Zombie Too",
        "Can You Dig It?",
        "Totally Nuts",
        "Dead Zeppelin",
        "Me Smash!",
        "ZomBoogie",
        "Three Hit Wonder",
        "All your brainz r belong to us",
        "I, Zombie Endless",
        "Upsell",
        "Intro",
};

#ifdef _PTK_CHINESE_UI
const char *plants_zh[] =
    {
        "豌豆射手",
        "向日葵",
        "樱桃炸弹",
        "坚果",
        "土豆雷",
        "寒冰射手",
        "大嘴花",
        "双发射手",
        "小喷菇",
        "阳光菇",
        "大喷菇",
        "墓碑吞噬者",
        "魅惑菇",
        "胆小菇",
        "寒冰菇",
        "毁灭菇",
        "睡莲",
        "倭瓜",
        "三线射手",
        "缠绕海草",
        "火爆辣椒",
        "地刺",
        "火炬树桩",
        "高坚果",
        "海蘑菇",
        "路灯花",
        "仙人掌",
        "三叶草",
        "裂荚射手",
        "杨桃",
        "南瓜头",
        "磁力菇",
        "卷心菜投手",
        "花盆",
        "玉米投手",
        "咖啡豆",
        "大蒜",
        "叶子保护伞",
        "金盏花",
        "西瓜投手",
        "机枪射手",
        "双子向日葵",
        "忧郁蘑菇",
        "香蒲",
        "冰瓜",
        "吸金磁",
        "地刺王",
        "玉米加农炮",
};

const char *zombies_zh[] =
    {
        "普僵",
        "旗帜",
        "路障",
        "撑杆",
        "铁桶",
        "读报",
        "铁门",
        "橄榄",
        "舞王",
        "伴舞",
        "鸭子",
        "潜水",
        "冰车",
        "雪橇",
        "海豚",
        "小丑",
        "气球",
        "矿工",
        "跳跳",
        "雪人",
        "蹦极",
        "扶梯",
        "投篮",
        "白眼",
        "小鬼",
        "僵王",
        "豌豆",
        "坚果",
        "辣椒",
        "机枪",
        "倭瓜",
        "高墙",
        "红眼",
};

const char *modes_zh[] =
    {
        "冒险模式",
        "生存模式: 白天",
        "生存模式: 黑夜",
        "生存模式: 泳池",
        "生存模式: 雾夜",
        "生存模式: 屋顶",
        "生存模式: 白天 (困难)",
        "生存模式: 黑夜 (困难)",
        "生存模式: 泳池 (困难)",
        "生存模式: 雾夜 (困难)",
        "生存模式: 屋顶 (困难)",
        "生存模式: 白天 (无尽)",
        "生存模式: 黑夜 (无尽)",
        "生存模式: 无尽",
        "生存模式: 雾夜 (无尽)",
        "生存模式: 屋顶 (无尽)",
        "植物僵尸",
        "坚果保龄球",
        "老虎机",
        "雨中种植物",
        "宝石迷阵",
        "隐形食脑者",
        "看星星",
        "僵尸水族馆",
        "宝石迷阵转转看",
        "小僵尸大麻烦",
        "保护传送门",
        "你看, 他们像柱子一样",
        "雪橇区",
        "僵尸快跑",
        "锤僵尸",
        "谁笑到最后",
        "植物僵尸 2",
        "坚果保龄球 2",
        "跳跳舞会",
        "僵王博士的复仇",
        "坚果艺术",
        "晴天",
        "无草皮之地",
        "重要时间",
        "太阳花艺术",
        "空袭",
        "冰冻关卡",
        "禅境花园",
        "超乎寻常的压力",
        "坟墓模式",
        "你能把它挖出来吗?",
        "暴风雨之夜",
        "蹦极闪电战",
        "松鼠",
        "智慧树",
        "破罐者",
        "一路向左",
        "第三个罐子",
        "连锁反应",
        "M 的意思是金属",
        "胆怯的制陶工",
        "变戏法",
        "另一个连锁反应",
        "罐子王牌",
        "无尽的试炼",
        "我是僵尸",
        "我也是僵尸",
        "你能把它挖出来吗?",
        "完全傻了",
        "死亡飞艇",
        "我烂了!",
        "僵尸摇摆",
        "三连击",
        "你所有大脑都是属于我的",
        "我是僵尸无尽版",
        "促销",
        "介绍",
};
#endif

Fl_Choice_::Fl_Choice_(int x, int y, int w, int h, const char *l)
    : Fl_Choice(x, y, w, h, l)
{
}

Fl_Choice_::~Fl_Choice_()
{
}

int Fl_Choice_::handle(int event)
{
    switch (event)
    {
    case FL_ENTER:
        scrollable = true;
        return 1;
    case FL_LEAVE:
        scrollable = false;
        return 1;
    case FL_MOUSEWHEEL:
        if (scrollable)
        {
            if (Fl::event_dy() == -1) // 向上滚
            {
                int v = this->value() - 1;
                if (v < 0)
                    v = 0;
                this->value(v);
            }
            else // 向下滚
            {
                int v = this->value() + 1;
                if (v > this->size())
                    v = this->size();
                this->value(v);
            }
            redraw();
            do_callback();
        }
        return 1;
    default:
        return Fl_Choice::handle(event);
    }
}

Fl_Input_::Fl_Input_(int x, int y, int w, int h, const char *l)
    : Fl_Input(x, y, w, h, l)
{
}

Fl_Input_::~Fl_Input_()
{
}

int Fl_Input_::handle(int event)
{
    switch (event)
    {
    case FL_DND_RELEASE:
        this->value("");
        return 1;
    default:
        return Fl_Input::handle(event);
    }
}

SpawnTable::SpawnTable(int X, int Y, int W, int H, const char *L = 0)
    : Fl_Table(X, Y, W, H, L)
{
    // 宽: 75 + 35 * 20 + (35 + 25) + 2 = 837
    // 高: (18 + 3) + 18 * 33       + 2 = 617

    rows(ROWS);
    row_header(1);
#ifdef _PTK_CHINESE_UI
    row_header_width(75);
#else
    row_header_width(175);
#endif
    row_height_all(18);
    row_resize(0);

    cols(COLS);
    col_header(1);
    col_header_height(18 + 3);
    col_width_all(35);
    col_width(20 + 1 - 1, 35 + 25);
    col_resize(0);

    box(FL_NO_BOX); // 无边框

    end();
}

SpawnTable::~SpawnTable()
{
}

void SpawnTable::UpdateData(std::array<int, 1000> zombies_list)
{
    for (size_t r = 0; r < ROWS; r++)
        for (size_t c = 0; c < COLS; c++)
            data[r][c] = 0;
    total = 0;

    for (size_t i = 0; i < 20; i++)
    {
        for (size_t j = 0; j < 50; j++)
        {
            if (zombies_list[i * 50 + j] >= 33 || zombies_list[i * 50 + j] < 0)
                continue;
            data[zombies_list[i * 50 + j]][i] += 1;
            data[zombies_list[i * 50 + j]][20 + 1 - 1] += 1;
            total += 1;
        }
    }

    this->redraw();
}

void SpawnTable::draw_cell(TableContext context, int ROW = 0, int COL = 0, //
                           int X = 0, int Y = 0, int W = 0, int H = 0)
{
    static char s[100]; // 缓冲

    // 单波某种僵尸一般不超过 20 只，单轮某种僵尸一般不超过 300 只
    Fl_Color c_n = 0xffffff00u - 0x01000100u * (std::min(data[ROW][COL], 20) * 0xffu / 30);   // 背景颜色
    Fl_Color c_t = 0xffffff00u - 0x01010100u * (std::min(data[ROW][COL], 300) * 0xffu / 500); // 背景颜色(总数)
    Fl_Color c_f = 0xcccccc00u;                                                               // 旗帜波边框

    int Ys = 0; // 因为不画缺少的种类造成的纵向偏移
    for (int r = 0; r < ROW; r++)
        if (data[r][20 + 1 - 1] == 0)
            Ys += 18;

    switch (context)
    {
    case CONTEXT_STARTPAGE:
        extern Fl_Font ui_font;
#ifdef _PTK_CHINESE_UI
        fl_font(ui_font, 13);
#else
        fl_font(ui_font, 12);
#endif
        return;

    case CONTEXT_COL_HEADER:
        if (total == 0) // 僵尸列表为空时不画波数表头
            break;

        if (COL == (20 + 1 - 1)) // 最后一列改为显示总数
            sprintf_s(s, "%s", std::string("(" + std::to_string(total) + ")").c_str());
        else
            sprintf_s(s, "w%i", COL + 1);

        fl_push_clip(X, Y, W, H);
        {
            fl_draw_box(FL_THIN_UP_BOX, X, Y, W, H, col_header_color());
            fl_color(FL_BLACK);
            fl_draw(s, X, Y, W, H, FL_ALIGN_CENTER);
        }
        fl_pop_clip();

        return;

    case CONTEXT_ROW_HEADER:
        if (data[ROW][20 + 1 - 1] == 0) // 不画不出的僵尸种类
            break;

#ifdef _PTK_CHINESE_UI
        sprintf_s(s, "%s", std::string("[" + std::to_string(ROW) + "]" + " " + zombies_zh[ROW] + "  ").c_str());
#else
        sprintf_s(s, "%s", std::string("[" + std::to_string(ROW) + "]" + " " + zombies_s[ROW] + "  ").c_str());
#endif

        fl_push_clip(X, Y - Ys, W, H);
        {
            fl_draw_box(FL_THIN_UP_BOX, X, Y - Ys, W, H, row_header_color());
            fl_color(FL_BLACK);
#ifdef _PTK_CHINESE_UI
            fl_draw(s, X, Y - Ys, W, H, FL_ALIGN_RIGHT);
#else
            fl_draw(s, X, Y - Ys, W, H, FL_ALIGN_LEFT);
#endif
        }
        fl_pop_clip();

        return;

    case CONTEXT_CELL:
        if (data[ROW][20 + 1 - 1] == 0) // 不画不出的僵尸种类
            break;

        if (data[ROW][COL] == 0) // 某波某种僵尸数量为 0 干脆不显示
            sprintf_s(s, "");
        else
            sprintf_s(s, "%i", data[ROW][COL]);

        fl_push_clip(X, Y - Ys, W, H);
        {
            // 背景
            fl_color((COL == (20 + 1 - 1)) ? c_t : c_n);
            fl_rectf(X, Y - Ys, W, H);
            // 数据
            fl_color(FL_GRAY0);
            fl_draw(s, X, Y - Ys, W, H, FL_ALIGN_CENTER);
            // 边框
            fl_color((COL == (10 - 1) || COL == (20 - 1)) ? c_f : color());
            fl_rect(X, Y - Ys, W, H);
        }
        fl_pop_clip();

        return;

    default:
        return;
    }
}

SpawnWindow::SpawnWindow(int width, int height, const char *title)
    : Fl_Double_Window(width, height, title)
{
    // 参数 width height title 均被忽略

    // 设置窗口标题
#ifdef _PTK_CHINESE_UI
    this->copy_label("出怪数量统计");
#else
    this->copy_label("Spawning Counting");
#endif

// 设置窗口大小
// 表格大小 837 x 617
#ifdef _PTK_CHINESE_UI
    const int m = 5;
    const int b = 7;
    const int tw = 837;
    const int th = 617;
    const int rhw = 75;
    const int chh = 18 + 3;
#else
    const int m = 5;
    const int b = 7;
    const int tw = 937;
    const int th = 617;
    const int rhw = 175;
    const int chh = 18 + 3;
#endif
    const int w = m + tw + m;
    const int h = m + th + b;
    this->size(w, h);

    table_spawn = new SpawnTable(m, m, tw, th);
    button_update_details = new Fl_Button(m, m, rhw, chh, "···");
    button_zombies_list = new Fl_Menu_Button(m, m, tw, th, nullptr);
#ifdef _PTK_CHINESE_UI
    box_mask_spawn_types = new Fl_Box(m, m + chh, rhw, h * 33, nullptr);
#endif
    this->end();

#ifdef _PTK_CHINESE_UI
    button_zombies_list->add("[刷新]");
    button_zombies_list->add("[保存]");
    button_zombies_list->add("[加载]");
#else
    button_zombies_list->add("[ Refresh ]");
    button_zombies_list->add("[ Save ]");
    button_zombies_list->add("[ Load ]");
#endif
    button_zombies_list->type(Fl_Menu_Button::POPUP3);
    button_zombies_list->value(0);

#ifdef _PTK_CHINESE_UI
    extern Fl_Font ui_font;
    button_zombies_list->textfont(ui_font);

    emoji = IsWindows8OrGreater();
    button_zombies_list->replace(0, EMOJI("🔄", "[刷新]"));
    button_zombies_list->replace(1, EMOJI("💾", "[保存]"));
    button_zombies_list->replace(2, EMOJI("🔖", "[加载]"));
#else
    button_update_details->copy_tooltip("Refresh");
#endif
}

SpawnWindow::~SpawnWindow()
{
}

void SpawnWindow::UpdateData(std::array<int, 1000> zombies_list)
{
    table_spawn->UpdateData(zombies_list);

    int zombies_count[33] = {0};
    for (size_t i = 0; i < 20; i++)
    {
        for (size_t j = 0; j < 50; j++)
        {
            if (zombies_list[i * 50 + j] >= 33 || zombies_list[i * 50 + j] < 0)
                continue;
            zombies_count[zombies_list[i * 50 + j]] += 1;
        }
    }
    int deleted_rows = 0;
    for (int r = 0; r < 33; r++)
        if (zombies_count[r] == 0)
            deleted_rows += 1;

    if (this->on)
    {
        std::string zs;
        for (int r = 0; r < 33; r++)
            if (zombies_count[r] != 0)
#ifdef _PTK_CHINESE_UI
                zs += std::string("[" + std::to_string(r) + "]" + "  " + zombies[r] + "\n");
        box_mask_spawn_types->copy_tooltip(zs.c_str());
#else
                zs += std::string("[" + std::to_string(r) + "]" + "  " + zombies_s[r] + "\n");
#endif
    }
    else
    {
#ifdef _PTK_CHINESE_UI
        box_mask_spawn_types->copy_tooltip(nullptr);
#endif
    }

#ifdef _PTK_CHINESE_UI
    int w = deleted_rows == 33 ? 450 : 5 + 837 + 5;
#else
    int w = deleted_rows == 33 ? 450 : 5 + 937 + 5;
#endif
    int h = 5 + 617 + 7 - deleted_rows * 18;
    this->ww = w;
    this->hh = h;
    this->size(w, h);
    this->redraw();
}

void SpawnWindow::resize(int X, int Y, int W, int H)
{
    Fl_Double_Window::resize(X, Y, this->ww, this->hh);
}

void SpawnWindow::tooltips(bool on)
{
#ifdef _PTK_CHINESE_UI
    button_update_details->copy_tooltip(on ? "Refresh" : "刷新");

    if (on) // this->on
    {
        std::string zs;
        for (int r = 0; r < 33; r++)
            if (table_spawn->data[r][20 + 1 - 1] != 0) // zombies_count[r]
                zs += std::string("[" + std::to_string(r) + "]" + "  " + zombies[r] + "\n");
        box_mask_spawn_types->copy_tooltip(zs.c_str());
    }
    else
    {
        box_mask_spawn_types->copy_tooltip(nullptr);
    }

    this->copy_label(on ? "Spawning Counting" : "出怪数量统计");
#endif

    this->on = on;
}

Window::Window(int width, int height, const char *title)
    : Fl_Double_Window(width, height, title)
{
    // 参数 width height title 均被忽略

    // 设置窗口标题
#ifdef _PTK_CHINESE_UI
    this->copy_label("PvZ Toolkit - 植物大战僵尸辅助工具");
#else
    this->copy_label("PvZ Toolkit - Plants vs. Zombies Tool Kit");
#endif

    // 坐标系统
#ifdef _PTK_CHINESE_UI
    const int m = 10;  // 控件边距
    const int th = 30; // 选项卡高度
    const int tb = 5;  // 选项卡底部边框
    const int iw = 95; // 控件宽度 (1/4)
    const int ih = 25; // 控件高度 (1/6)
    const int R = 6;   // 控件行数
    const int C = 4;   // 控件列数
#else
    const int m = 8;    // 控件边距
    const int th = 27;  // 选项卡高度
    const int tb = 5;   // 选项卡底部边框
    const int iw = 120; // 控件宽度 (1/4)
    const int ih = 24;  // 控件高度 (1/7)
    const int R = 7;    // 控件行数
    const int C = 4;    // 控件列数
#endif
    const int x = m + m;           // 第一个控件的 x 坐标
    const int y = m + th + tb + m; // 第一个控件的 y 坐标

    // 设置窗口大小
    const int w = iw * C + m * 2 + m * (C + 1);           // 宽度 450 536
    const int h = ih * R + m * 2 + m * (R + 1) + th + tb; // 高度 275 280
    this->size(w, h);

    // 根据列数返回 x 坐标
    auto c = [=](int col) -> int
    {
        return x + (iw + m) * (col - 1);
    };

    // 根据行数返回 y 坐标
    auto r = [=](int row) -> int
    {
        return y + (ih + m) * (row - 1);
    };

#ifdef _PTK_CHINESE_UI

    // 主窗体
    {
        tabs = new Fl_Tabs(m, m, w - m * 2, h - m * 2);
        {
            group_resource = new Fl_Group(m, m + th, w - m * 2, h - m * 2 - th, "资源");
            {
                check_unlock_sun_limit = new Fl_Round_Button(c(1) + 8, r(1), iw - 76, ih, "");
                input_sun = new Fl_Value_Input(c(1) + 45, r(1), iw - 15, ih, "");
                button_sun = new Fl_Button(c(2) + 40 - 10, r(1), iw - 45, ih, "阳光");
                box_money = new Fl_Box(c(1) + 8, r(2), iw - 76, ih, "钱包");
                input_money = new Fl_Value_Input(c(1) + 45, r(2), iw - 15, ih, "");
                button_money = new Fl_Button(c(2) + 40 - 10, r(2), iw - 45, ih, "金币");
                check_auto_collected = new Fl_Check_Button(c(3), r(3), iw - 15, ih, "自动收集");
                check_not_drop_loot = new Fl_Check_Button(c(4), r(3), iw, ih, "不掉战利品");
                check_fertilizer = new Fl_Check_Button(c(3), r(1), iw - 15, ih, "花肥无限");
                check_bug_spray = new Fl_Check_Button(c(4), r(1), iw, ih, "杀虫剂无限");
                check_tree_food = new Fl_Check_Button(c(3), r(2), iw - 15, ih, "树肥无限");
                check_chocolate = new Fl_Check_Button(c(4), r(2), iw, ih, "巧克力无限");
                box_wisdom_tree = new Fl_Box(c(1) + 8, r(3), iw - 76, ih, "树高");
                input_wisdom_tree = new Fl_Value_Input(c(1) + 45, r(3), iw - 15, ih, "");
                button_wisdom_tree = new Fl_Button(c(2) + 40 - 10, r(3), iw - 45, ih, "英尺");
                check_free_planting = new Fl_Check_Button(c(1), r(4), iw - 15, ih, "免费用卡");
                check_placed_anywhere = new Fl_Check_Button(c(2), r(4), iw - 15, ih, "随意放置");
                check_fast_belt = new Fl_Check_Button(c(3), r(4), iw - 15, ih, "无缝传送");
                check_lock_shovel = new Fl_Check_Button(c(4), r(4), iw - 15, ih, "连续铲子");
                choice_mode = new Fl_Choice_(c(1), r(5), iw + m + iw + 20, ih, "");
                choice_adventure = new Fl_Choice_(c(3) + 20, r(5), iw - 20 + 15, ih, "");
                button_mix = new Fl_Button(c(4) + 15, r(5), iw - 15, ih, "混乱关卡");
                input_level = new Fl_Value_Input(c(3) + 20, r(6), iw - 20 + 15, ih, "");
                button_level = new Fl_Button(c(4) + 15, r(6), iw - 15, ih, "无尽轮数");
                button_unlock = new Fl_Button(c(1), r(6), iw + 8, ih, "通关存档");
                check_brightest_cob_cannon = new Fl_Check_Button(c(2) + 14, r(6), 18, ih, "");
                button_direct_win = new Fl_Button(c(2) + 20 + 15, r(6), iw - 15, ih, "直接过关");
            }
            group_resource->end();

            group_battle = new Fl_Group(m, m + th, w - m * 2, h - m * 2 - th, "战场");
            {
                choice_row = new Fl_Choice_(c(1), r(1), iw - 10, ih, "");
                choice_col = new Fl_Choice_(c(1), r(2), iw - 10, ih, "");
                choice_plant = new Fl_Choice_(c(2) - 10, r(1), iw + 10 + 40, ih, "");
                choice_zombie = new Fl_Choice_(c(2) - 10, r(2), iw + 10 + 40, ih, "");
                button_put_plant = new Fl_Button(c(3) + 40, r(1), iw - 40 + 20, ih, "种植物");
                check_imitater = new Fl_Check_Button(c(4) + 20, r(1), iw - 20, ih, "模仿者");
                button_put_zombie = new Fl_Button(c(3) + 40, r(2), iw - 40 + 20, ih, "出僵尸");
                button_put_ladder = new Fl_Button(c(3) + 40, r(3), iw - 40 + 20, ih, "搭梯子");
                button_put_grave = new Fl_Button(c(4) + 20, r(2), iw - 20, ih, "冒墓碑");
                button_put_rake = new Fl_Button(c(4) + 20, r(3), iw - 20, ih, "放钉耙");
                button_lawn_mower = new Fl_Menu_Button(c(1), r(3), iw - 10, ih, "小推车");
                choice_item = new Fl_Choice_(c(2) - 10, r(3), iw + 10 - 20, ih, "");
                button_clear = new Fl_Button(c(2) + iw - 20 + m, r(3), iw - 45, ih, "清除");
                check_plant_invincible = new Fl_Check_Button(c(1), r(4), iw - 15, ih, "植物无敌");
                check_plant_weak = new Fl_Check_Button(c(2), r(4), iw - 15, ih, "植物脆弱");
                check_zombie_invincible = new Fl_Check_Button(c(3), r(4), iw - 15, ih, "僵尸无敌");
                check_zombie_weak = new Fl_Check_Button(c(4), r(4), iw - 15, ih, "僵尸虚弱");
                check_reload_instantly = new Fl_Check_Button(c(1), r(5), iw - 15, ih, "立刻装填");
                check_lock_butter = new Fl_Check_Button(c(2), r(5), iw - 15, ih, "只投黄油");
                check_stop_spawning = new Fl_Check_Button(c(3), r(5), iw - 15, ih, "暂停刷怪");
                check_stop_zombies = new Fl_Check_Button(c(4), r(5), iw - 15, ih, "停滞不前");
                check_mushroom_awake = new Fl_Check_Button(c(1), r(6), iw - 15, ih, "蘑菇睡醒");
                check_no_crater = new Fl_Check_Button(c(2), r(6), iw - 15, ih, "核弹无坑");
                check_no_ice_trail = new Fl_Check_Button(c(3), r(6), iw - 15, ih, "冰车无痕");
                check_zombie_not_explode = new Fl_Check_Button(c(4), r(6), iw - 15, ih, "丑椒不爆");
            }
            group_battle->end();

            group_lineup = new Fl_Group(m, m + th, w - m * 2, h - m * 2 - th, "阵型");
            {
                choice_slot = new Fl_Choice_(c(1), r(1), iw - 10, ih, "");
                choice_seed = new Fl_Choice_(c(2) - 10, r(1), iw + 10 + 40, ih, "");
                button_seed = new Fl_Button(c(3) + 40, r(1), iw - 40 + 20, ih, "换卡片");
                check_seed_imitater = new Fl_Check_Button(c(4) + 20, r(1), iw - 20, ih, "模仿者");
                check_lineup_mode = new Fl_Check_Button(c(1), r(2), iw + 12, ih, "快捷布阵模式");
                button_auto_ladder = new Fl_Button(c(2) + 12, r(2), iw - 12, ih, "智能搭梯");
                button_put_lily_pad = new Fl_Menu_Button(c(3), r(2), iw, ih, "水路睡莲");
                button_put_flower_pot = new Fl_Menu_Button(c(4), r(2), iw, ih, "屋顶花盆");
                button_reset = new Fl_Button(c(1), r(3), iw + 12, ih, "重置场地");
                choice_scene = new Fl_Choice_(c(2) + 12, r(3), iw - 12, ih, "");
                button_load_lineup = new Fl_Button(c(3), r(3), iw * 2 + 10, ih, "加载阵型列表文件 (***.yml)");
                choice_lineup_name[0] = new Fl_Choice_(c(3), r(3), iw * 2 + 10, ih, "");
                choice_lineup_name[1] = new Fl_Choice_(c(3), r(3), iw * 2 + 10, ih, "");
                choice_lineup_name[2] = new Fl_Choice_(c(3), r(3), iw * 2 + 10, ih, "");
                choice_lineup_name[3] = new Fl_Choice_(c(3), r(3), iw * 2 + 10, ih, "");
                choice_lineup_name[4] = new Fl_Choice_(c(3), r(3), iw * 2 + 10, ih, "");
                choice_lineup_name[5] = new Fl_Choice_(c(3), r(3), iw * 2 + 10, ih, "");
                buffer_lineup_string = new Fl_Text_Buffer();
                editor_lineup_string = new Fl_Text_Editor(c(1), r(4), iw * 4 + 10 * 3, ih * 2 + 10 + 2, "");
                button_get_lineup = new Fl_Button(c(1), r(6), iw - 15, ih, "获取代码");
                button_copy_lineup = new Fl_Button(c(2) - 15, r(6), iw - 15, ih, "复制导出");
                button_paste_lineup = new Fl_Button(c(3) + 15 + 15, r(6), iw - 15, ih, "粘贴导入");
                button_set_lineup = new Fl_Button(c(4) + 15, r(6), iw - 15, ih, "布置阵型");
                button_capture = new Fl_Button(c(3) - 15 - 15, r(6), 15 * 4 - m, ih, "截图");
            }
            group_lineup->end();

            group_spawn = new Fl_Group(m, m + th, w - m * 2, h - m * 2 - th, "出怪");
            {
                const int tmp[20] = {
                    2, 3, 4, 5, 6,      //
                    7, 8, 11, 12, 14,   //
                    15, 16, 17, 18, 19, //
                    20, 21, 22, 23, 32  //
                };
                memcpy(spawn_type, tmp, sizeof(tmp));
                for (size_t row = 0; row < 4; row++)
                    for (size_t col = 0; col < 5; col++)
                    {
                        int _x = x + 8 + (iw - 22 + m) * col;
                        int _y = y + 5 + (ih + 7 + m) * row;
                        check_zombie[row * 5 + col] = new Fl_Check_Button(_x, _y, iw - 42, ih, "");
                        this->xy[row * 5 + col][0] = _x;
                        this->xy[row * 5 + col][1] = _y;
                    }
                button_show_details = new Fl_Button(c(1), r(6), iw, ih, "查看详情");
                choice_giga_weight = new Fl_Choice_(c(2) + 5, r(6), iw - 20, ih, "");
                check_giga_limit = new Fl_Check_Button(c(3) - 55 + 40, r(6), iw - 40, ih, "变速");
                button_set_spawn = new Fl_Button(c(4) - 55, r(6), iw + 55 - 5, ih, "极限出怪 (均匀填充)");
                button_spawn_extra = new Fl_Menu_Button(m, m + th, w - m * 2, h - m * 2 - th - 42, nullptr);
                button_spawn_mode = new Fl_Menu_Button(c(4) - 55, r(6), iw + 55 - 5, ih, "选择刷怪模式：");
            }
            group_spawn->end();

            group_others = new Fl_Group(m, m + th, w - m * 2, h - m * 2 - th, "杂项");
            {
                choice_music = new Fl_Choice_(c(1), r(1), iw + m + iw - 15, ih, "");
                button_music = new Fl_Button(c(3) - 15, r(1), iw, ih, "背景音乐");
                button_userdata = new Fl_Button(c(4) - 15, r(1), iw + 15, ih, "存档文件夹");
                check_no_fog = new Fl_Check_Button(c(1), r(2), iw - 15, ih, "清除浓雾");
                check_see_vase = new Fl_Check_Button(c(2) - 15, r(2), iw - 15, ih, "罐子透视");
                check_background = new Fl_Check_Button(c(3) - 30, r(2), iw + 15, ih, "允许后台运行");
                check_readonly = new Fl_Check_Button(c(4) - 15, r(2), iw + 15, ih, "禁止存档删档");
                button_file = new Fl_Button(c(1), r(3), iw - 20, ih, "选择文件");
                input_file = new Fl_Input_(c(2) - 20, r(3), iw + 20 + m + iw + 45, ih, "");
                button_unpack = new Fl_Button(c(4) + 45, r(3), iw - 45, ih, "解包");
                button_dir = new Fl_Button(c(1), r(4), iw - 20, ih, "选择目录");
                input_dir = new Fl_Input_(c(2) - 20, r(4), iw + 20 + m + iw + 45, ih, "");
                button_pack = new Fl_Button(c(4) + 45, r(4), iw - 45, ih, "打包");
                choice_debug = new Fl_Choice_(c(1), r(5), iw - 30, ih, "");
                button_debug = new Fl_Button(c(2) - 30, r(5), iw - 40, ih, "调试");
                choice_speed = new Fl_Choice_(c(3) - 70 + 10, r(5), iw - 30, ih, "");
                button_speed = new Fl_Button(c(4) - 100 + 10, r(5), iw - 40, ih, "速度");
                check_limbo_page = new Fl_Check_Button(c(4) - 15, r(5), iw + 15, ih, "显示隐藏页面");
                choice_scheme = new Fl_Choice_(c(1), r(6), iw - 15, ih, "");
                check_tooltips = new Fl_Check_Button(c(2) - 15, r(6), iw + 35, ih, "English Tooltips");
                button_document = new Fl_Button(c(3) + 30, r(6), iw - 15, ih, "文档");
                button_about = new Fl_Button(c(4) + 15, r(6), iw - 15, ih, "关于 ...");
            }
            group_others->end();

            // Douyin danmaku panel
            group_danmaku = new Fl_Group(m, m + th, w - m * 2, h - m * 2 - th, "弹幕");
            {
                input_room_id = new Fl_Input_(c(1), r(1), iw * 2 + m, ih, "直播间号");
                button_danmaku_connect = new Fl_Button(c(3) - 15, r(1), iw + 15, ih, "连接");
                box_danmaku_status = new Fl_Box(c(4) - 15, r(1), iw + 15, ih, "未连接");
                buffer_danmaku_log = new Fl_Text_Buffer();
                editor_danmaku_log = new Fl_Text_Editor(c(1), r(2), w - m * 2 - 20, h - m * 2 - th - 60, "弹幕日志");
                editor_danmaku_log->buffer(buffer_danmaku_log);
                editor_danmaku_log->textfont(ms_font);
                editor_danmaku_log->textsize(12);
                editor_danmaku_log->readonly();
            }
            group_danmaku->end();
        }
        tabs->end();

        box_mask_resource = new Fl_Box(10 + 1 + (40 + 2) * 0, 10, 40, 30, "");
        box_mask_battle = new Fl_Box(10 + 1 + (40 + 2) * 1, 10, 40, 30, "");
        box_mask_lineup = new Fl_Box(10 + 1 + (40 + 2) * 2, 10, 40, 30, "");
        box_mask_spawn = new Fl_Box(10 + 1 + (40 + 2) * 3, 10, 40, 30, "");
        box_mask_others = new Fl_Box(10 + 1 + (40 + 2) * 4, 10, 40, 30, "");

        game_status = new Fl_Box(230, 12, 190, 25, "");
        game_status_tip = new Fl_Box(425, 12, 15, 25, "");
    }
    this->end();

#else

    // 主窗体
    {
        tabs = new Fl_Tabs(m, m, w - m * 2, h - m * 2);
        {
            group_resource = new Fl_Group(m, m + th, w - m * 2, h - m * 2 - th, "Resources");
            {
                box_sun = new Fl_Box(c(1), r(1), iw - 40, ih, "Sunlight");
                input_sun = new Fl_Value_Input(c(1) + iw - 40 + m, r(1), 40 + 45 - m, ih, "");
                button_sun = new Fl_Button(c(2) + 45, r(1), iw - 45 - 5, ih, "Value");
                box_money = new Fl_Box(c(1), r(2), iw - 40, ih, "Wallet (x10)");
                input_money = new Fl_Value_Input(c(1) + iw - 40 + m, r(2), 40 + 45 - m, ih, "");
                button_money = new Fl_Button(c(2) + 45, r(2), iw - 45 - 5, ih, "Coins");
                box_wisdom_tree = new Fl_Box(c(1), r(3), iw - 40, ih, "Wisdom Tree");
                input_wisdom_tree = new Fl_Value_Input(c(1) + iw - 40 + m, r(3), 40 + 45 - m, ih, "");
                button_wisdom_tree = new Fl_Button(c(2) + 45, r(3), iw - 45 - 5, ih, "Feet");
                check_unlock_sun_limit = new Fl_Round_Button(c(3), r(1), iw + m + iw - 75, ih, "No Upper Limit to Sunlight");
                check_fertilizer = new Fl_Check_Button(c(3), r(2), iw, ih, "Infinite Fertilizer");
                check_bug_spray = new Fl_Check_Button(c(4), r(2), iw, ih, "Infinite Bug Spray");
                check_tree_food = new Fl_Check_Button(c(3), r(3), iw, ih, "Infinite Tree Food");
                check_chocolate = new Fl_Check_Button(c(4), r(3), iw, ih, "Infinite Chocolate");
                check_auto_collected = new Fl_Check_Button(c(1), r(4), iw, ih, "Auto Collected");
                check_not_drop_loot = new Fl_Check_Button(c(2), r(4), iw, ih, "Don\'t Drop Loot");
                check_free_planting = new Fl_Check_Button(c(3), r(4), iw, ih, "Free Planting");
                check_placed_anywhere = new Fl_Check_Button(c(4), r(4), iw, ih, "Place Anywhere");
                button_unlock = new Fl_Button(c(1), r(5), iw + m + iw - 18 - 40 - 12, ih, "Get Gold Sunflower Trophy");
                check_fast_belt = new Fl_Check_Button(c(3) - 18 - 40, r(5), iw + 40, ih, "Seamless Conveyor Belt");
                check_lock_shovel = new Fl_Check_Button(c(4) - 18, r(5), iw + 18, ih, "Shovel Continuously");
                choice_mode = new Fl_Choice_(c(1), r(6), iw + m + iw + 20, ih, "");
                choice_adventure = new Fl_Choice_(c(3) + 20, r(6), iw - 20, ih, "");
                button_mix = new Fl_Button(c(4), r(6), iw, ih, "Modify Mode");
                button_direct_win = new Fl_Button(c(1), r(7), iw - 5, ih, "Level Complete");
                check_brightest_cob_cannon = new Fl_Check_Button(c(2) - 5, r(7), iw + 5 + 20, ih, "End with Brightest Cob");
                input_level = new Fl_Value_Input(c(3) + 20, r(7), iw - 20, ih, "");
                button_level = new Fl_Button(c(4), r(7), iw, ih, "Endless Rounds");
            }
            group_resource->end();

            group_battle = new Fl_Group(m, m + th, w - m * 2, h - m * 2 - th, "Battlefield");
            {
                auto r = [=](int row) -> int
                {
                    return y + (ih + m) * (row - 1) + row * 4 + 2;
                };
                choice_row = new Fl_Choice_(c(1), r(1), iw - 10, ih, "");
                choice_col = new Fl_Choice_(c(1), r(2), iw - 10, ih, "");
                choice_plant = new Fl_Choice_(c(2) - 10, r(1), iw + 10 + 35 * 2, ih, "");
                choice_zombie = new Fl_Choice_(c(2) - 10, r(2), iw + 10 + 35 * 2, ih, "");
                button_put_plant = new Fl_Button(c(3) + 35 * 2, r(1), iw - 35, ih, "Put Plant");
                check_imitater = new Fl_Check_Button(c(4) + 35 * 1, r(1), iw - 35, ih, "Imitater");
                button_put_zombie = new Fl_Button(c(3) + 35 * 2, r(2), iw - 35, ih, "Put Zombie");
                button_put_grave = new Fl_Button(c(4) + 35 * 1, r(2), iw - 35, ih, "Put Grave");
                button_put_ladder = new Fl_Button(c(3) + 35 * 2, r(3), iw - 35, ih, "Put Ladder");
                button_put_rake = new Fl_Button(c(4) + 35 * 1, r(3), iw - 35, ih, "Put Rake");
                button_lawn_mower = new Fl_Menu_Button(c(1), r(3), iw - 10, ih, "Lawn Mower");
                choice_item = new Fl_Choice_(c(2) - 10, r(3), 100, ih, "");
                button_clear = new Fl_Button(c(2) - 10 + 100 + m, r(3), (iw + 10 + 35 * 2) - 100 - m, ih, "Clear All");
                check_plant_invincible = new Fl_Check_Button(c(1), r(4), iw + 5, ih, "Plant Invincible");
                check_plant_weak = new Fl_Check_Button(c(2) + 5, r(4), iw - 20, ih, "Plant Weak");
                check_reload_instantly = new Fl_Check_Button(c(1), r(5), iw + 5, ih, "Reload Instantly");
                check_lock_butter = new Fl_Check_Button(c(2) + 5, r(5), iw - 20, ih, "Always Butter");
                check_mushroom_awake = new Fl_Check_Button(c(1), r(6), iw + 5, ih, "Mushroom Awake");
                check_no_crater = new Fl_Check_Button(c(2) + 5, r(6), iw - 20, ih, "No Crater");
                check_zombie_invincible = new Fl_Check_Button(c(3), r(4), iw + 8, ih, "Zombie Invincible");
                check_zombie_weak = new Fl_Check_Button(c(4) + 8, r(4), iw - 8, ih, "Zombie Weak");
                check_stop_spawning = new Fl_Check_Button(c(3), r(5), iw + 8, ih, "Pause Spawning");
                check_stop_zombies = new Fl_Check_Button(c(4) + 8, r(5), iw - 8, ih, "Stay in Place");
                check_no_ice_trail = new Fl_Check_Button(c(3), r(6), iw + 8, ih, "No Ice Trail");
                check_zombie_not_explode = new Fl_Check_Button(c(4) + 8, r(6), iw - 8, ih, "Never Explode");
            }
            group_battle->end();

            group_lineup = new Fl_Group(m, m + th, w - m * 2, h - m * 2 - th, "Setups");
            {
                choice_slot = new Fl_Choice_(c(1), r(1), iw - 10, ih, "");
                choice_seed = new Fl_Choice_(c(2) - 10, r(1), iw + 10 + 35 * 2, ih, "");
                button_seed = new Fl_Button(c(3) + 35 * 2, r(1), iw - 35 + 20, ih, "Replace Seed");
                check_seed_imitater = new Fl_Check_Button(c(4) + 35 * 1 + 20, r(1), iw - 35 - 20, ih, "Imitater");
                check_lineup_mode = new Fl_Check_Button(c(1), r(2), iw - 10, ih, "Lineup Mode");
                button_auto_ladder = new Fl_Button(c(2) - 10, r(2), iw - 10, ih, "Smart Laddering");
                button_put_lily_pad = new Fl_Menu_Button(c(3) - 5 - 15, r(2), iw + 5, ih, "Pool \'s Lily Pad");
                button_put_flower_pot = new Fl_Menu_Button(c(4) - 15, r(2), iw + 15, ih, "Roof \'s Flower Pot");
                button_reset = new Fl_Button(c(1), r(3), iw - 10, ih, "Reset Scene");
                choice_scene = new Fl_Choice_(c(2) - 10, r(3), iw - 10, ih, "");
                button_load_lineup = new Fl_Button(c(3) - 10 - 10, r(3), iw * 2 + m + 10 + 10, ih, "Load Lineup List File (***.yml)");
                choice_lineup_name[0] = new Fl_Choice_(c(3) - 10 - 10, r(3), iw * 2 + m + 10 + 10, ih, "");
                choice_lineup_name[1] = new Fl_Choice_(c(3) - 10 - 10, r(3), iw * 2 + m + 10 + 10, ih, "");
                choice_lineup_name[2] = new Fl_Choice_(c(3) - 10 - 10, r(3), iw * 2 + m + 10 + 10, ih, "");
                choice_lineup_name[3] = new Fl_Choice_(c(3) - 10 - 10, r(3), iw * 2 + m + 10 + 10, ih, "");
                choice_lineup_name[4] = new Fl_Choice_(c(3) - 10 - 10, r(3), iw * 2 + m + 10 + 10, ih, "");
                choice_lineup_name[5] = new Fl_Choice_(c(3) - 10 - 10, r(3), iw * 2 + m + 10 + 10, ih, "");
                buffer_lineup_string = new Fl_Text_Buffer();
                editor_lineup_string = new Fl_Text_Editor(c(1), r(4), iw * 4 + m * 3, ih * 2 + m * 1, "");
                button_get_lineup = new Fl_Button(c(1), r(6), iw + 60, ih, "Get Lineup Code");
                button_copy_lineup = new Fl_Button(c(1), r(7), iw + 60, ih, "Copy (Export)");
                button_set_lineup = new Fl_Button(c(4) - 60, r(6), iw + 60, ih, "Apply Current Setup");
                button_paste_lineup = new Fl_Button(c(4) - 60, r(7), iw + 60, ih, "Paste (Import)");
                button_capture = new Fl_Button(c(2) + 60 + 10, r(6), iw + m + iw - 60 - 60 - 20, ih + m + ih, "Screenshot\nto\nClipboard");
            }
            group_lineup->end();

            group_spawn = new Fl_Group(m, m + th, w - m * 2, h - m * 2 - th, "Spawning");
            {
                const int tmp[20] = {
                    2, 3, 4, 5,     //
                    6, 7, 8, 11,    //
                    12, 14, 15, 16, //
                    17, 18, 19, 20, //
                    21, 22, 23, 32  //
                };
                memcpy(spawn_type, tmp, sizeof(tmp));
                for (size_t row = 0; row < 5; row++)
                    for (size_t col = 0; col < 4; col++)
                        check_zombie[row * 4 + col] = new Fl_Check_Button(c(col + 1), r(row + 1), iw, ih, "");
                choice_giga_weight = new Fl_Choice_(c(3), r(6), iw - 48, ih, "GigaGargantuar\'s Weight in Non-huge Waves:");
                check_giga_limit = new Fl_Check_Button(c(1), r(7), iw + m + iw, ih, "No GigaGargantuar in 11th ~ 19th Waves");
                button_show_details = new Fl_Button(c(4), r(6), iw, ih, "Show Details");
                button_set_spawn = new Fl_Button(c(4) - 80, r(7), iw + 80, ih, "Extreme (Filling Evenly)");
                button_spawn_extra = new Fl_Menu_Button(m, m + th, iw * 4 + m * 5, ih * 7 + m * 8, nullptr);
                button_spawn_mode = new Fl_Menu_Button(c(4) - 80, r(7), iw + 80, ih, "Select Spawning Mode: ");
            }
            group_spawn->end();

            group_others = new Fl_Group(m, m + th, w - m * 2, h - m * 2 - th, "Others");
            {
                choice_music = new Fl_Choice_(c(1), r(1), iw + 50, ih, "");
                button_music = new Fl_Button(c(2) + 50, r(1), iw + 15, ih, "Background Music");
                button_userdata = new Fl_Button(c(3) + 50 + 15, r(1), iw + m + iw - 50 - 15, ih, "Open Userdata Folder");
                check_no_fog = new Fl_Check_Button(c(1), r(2), iw - 10, ih, "Clear Fog");
                check_see_vase = new Fl_Check_Button(c(2) - 10, r(2), iw, ih, "Transparent Vase");
                check_readonly = new Fl_Check_Button(c(4) - 15, r(2), iw + 15, ih, "Userdata Readonly");
                button_file = new Fl_Button(c(1), r(3), iw - 10, ih, "Choose File");
                input_file = new Fl_Input_(c(2) - 10, r(3), iw + 10 + m + iw + 45, ih, "");
                button_unpack = new Fl_Button(c(4) + 45, r(3), iw - 45, ih, "Extract");
                button_dir = new Fl_Button(c(1), r(4), iw - 10, ih, "Choose Folder");
                input_dir = new Fl_Input_(c(2) - 10, r(4), iw + 10 + m + iw + 45, ih, "");
                button_pack = new Fl_Button(c(4) + 45, r(4), iw - 45, ih, "Pack");
                choice_debug = new Fl_Choice_(c(1), r(5), iw - 10, ih, "");
                button_debug = new Fl_Button(c(2) - 10, r(5), iw - 30, ih, "Debug");
                choice_speed = new Fl_Choice_(c(1), r(6), iw - 10, ih, "");
                button_speed = new Fl_Button(c(2) - 10, r(6), iw - 30, ih, "Speed");
                check_limbo_page = new Fl_Check_Button(c(3), r(5), iw + 5, ih, "Show Limbo Page");
                check_background = new Fl_Check_Button(c(3), r(6), iw + m + iw - 40, ih, "Enable PvZ to Run in Background");
                choice_scheme = new Fl_Choice_(c(1), r(7), iw - 10, ih, "");
                button_document = new Fl_Button(c(3), r(7), iw, ih, "Document");
                button_about = new Fl_Button(c(4), r(7), iw, ih, "About ...");
            }
            group_others->end();

            // Douyin danmaku panel
            group_danmaku = new Fl_Group(m, m + th, w - m * 2, h - m * 2 - th, "Danmaku");
            {
                input_room_id = new Fl_Input_(c(1), r(1), iw * 2 + m, ih, "Room ID");
                button_danmaku_connect = new Fl_Button(c(3) - 15, r(1), iw + 15, ih, "Connect");
                box_danmaku_status = new Fl_Box(c(4) - 15, r(1), iw + 15, ih, "Disconnected");
                buffer_danmaku_log = new Fl_Text_Buffer();
                editor_danmaku_log = new Fl_Text_Editor(c(1), r(2), w - m * 2 - 20, h - m * 2 - th - 60, "Danmaku Log");
                editor_danmaku_log->buffer(buffer_danmaku_log);
                editor_danmaku_log->textfont(ms_font);
                editor_danmaku_log->textsize(12);
                editor_danmaku_log->readonly();
            }
            group_danmaku->end();
        }
        tabs->end();

        game_status = new Fl_Box(330, 10, 190, 25, "");
    }
    this->end();
#endif

    // 默认值

    // 选项卡颜色
    group_resource->selection_color(FL_DARK2);
    group_battle->selection_color(FL_DARK2);
    group_lineup->selection_color(FL_DARK2);
    group_spawn->selection_color(FL_DARK2);
    group_others->selection_color(FL_DARK2);
    tabs->selection_color(FL_WHITE);

    // 阳光
    input_sun->bounds(0, 9990);
    input_sun->value(8000);

    // 金钱
    input_money->bounds(0, 99999);
    input_money->value(80000);

    // 智慧树
    input_wisdom_tree->bounds(0, 1000);
    input_wisdom_tree->value(1000);

    for (size_t i = 0; i < 73; i++)
#ifdef _PTK_CHINESE_UI
        choice_mode->add(("[" + std::to_string(i) + "]" + " " + modes_zh[i]).c_str());
#else
        choice_mode->add(("[" + std::to_string(i) + "]" + " " + modes[i]).c_str());
#endif

    // 默认无尽模式
    choice_mode->value(13);

    for (size_t j = 1; j <= 5; j++)
        for (size_t k = 1; k <= 10; k++)
            choice_adventure->add((std::to_string(j) + " - " + std::to_string(k)).c_str());

    choice_adventure->value(39); // 4-10
    choice_adventure->deactivate();

    // 默认刚结束时炮最亮
    check_brightest_cob_cannon->value(1);

    // 1010 * 2 + 2 = 2022
    input_level->bounds(0, 999999);
    input_level->value(1010);

#ifdef _PTK_CHINESE_UI
    choice_row->add("所有行");
    choice_row->add("第 1 行");
    choice_row->add("第 2 行");
    choice_row->add("第 3 行");
    choice_row->add("第 4 行");
    choice_row->add("第 5 行");
    choice_row->add("第 6 行");
#else
    choice_row->add("All Rows");
    choice_row->add("1st Row");
    choice_row->add("2nd Row");
    choice_row->add("3rd Row");
    choice_row->add("4th Row");
    choice_row->add("5th Row");
    choice_row->add("6th Row");
#endif

    choice_row->value(1); // 第 1 行

#ifdef _PTK_CHINESE_UI
    choice_col->add("所有列");
    choice_col->add("第 1 列");
    choice_col->add("第 2 列");
    choice_col->add("第 3 列");
    choice_col->add("第 4 列");
    choice_col->add("第 5 列");
    choice_col->add("第 6 列");
    choice_col->add("第 7 列");
    choice_col->add("第 8 列");
    choice_col->add("第 9 列");
#else
    choice_col->add("All Columns");
    choice_col->add("1st Column");
    choice_col->add("2nd Column");
    choice_col->add("3rd Column");
    choice_col->add("4th Column");
    choice_col->add("5th Column");
    choice_col->add("6th Column");
    choice_col->add("7th Column");
    choice_col->add("8th Column");
    choice_col->add("9th Column");
#endif

    choice_col->value(1); // 第 1 列

    for (size_t i = 0; i < 48; i++)
    {
#ifdef _PTK_CHINESE_UI
        std::string p = "[" + std::to_string(i) + "]" + " " + plants_zh[i];
#else
        std::string p = "[" + std::to_string(i) + "]" + " " + plants[i];
#endif
        choice_plant->add(p.c_str());
    }
    choice_plant->value(0);

    for (size_t i = 0; i < 33; i++)
    {
#ifdef _PTK_CHINESE_UI
        std::string z = "[" + std::to_string(i) + "]" + " " + zombies_zh[i];
#else
        std::string z = "[" + std::to_string(i) + "]" + " " + zombies[i];
#endif
        choice_zombie->add(z.c_str());
    }
    choice_zombie->value(0);

#ifdef _PTK_CHINESE_UI
    button_lawn_mower->add("[启动]");
    button_lawn_mower->add("[删除]");
    button_lawn_mower->add("[恢复]");
#else
    button_lawn_mower->add("[ Start ]");
    button_lawn_mower->add("[ Delete ]");
    button_lawn_mower->add("[ Restore ]");
#endif

#ifdef _PTK_CHINESE_UI
    choice_item->add("植物");
    choice_item->add("僵尸");
    choice_item->add("梯子");
    choice_item->add("墓碑");
    choice_item->add("钉耙");
#else
    choice_item->add("Plant");
    choice_item->add("Zombie");
    choice_item->add("Ladder");
    choice_item->add("Grave");
    choice_item->add("Rake");
#endif

    choice_item->value(3); // 墓碑

#ifdef _PTK_CHINESE_UI
    choice_slot->add("第 1 格");
    choice_slot->add("第 2 格");
    choice_slot->add("第 3 格");
    choice_slot->add("第 4 格");
    choice_slot->add("第 5 格");
    choice_slot->add("第 6 格");
    choice_slot->add("第 7 格");
    choice_slot->add("第 8 格");
    choice_slot->add("第 9 格");
    choice_slot->add("第 10 格");
#else
    choice_slot->add("1st Seed");
    choice_slot->add("2nd Seed");
    choice_slot->add("3rd Seed");
    choice_slot->add("4th Seed");
    choice_slot->add("5th Seed");
    choice_slot->add("6th Seed");
    choice_slot->add("7th Seed");
    choice_slot->add("8th Seed");
    choice_slot->add("9th Seed");
    choice_slot->add("10th Seed");
#endif

    choice_slot->value(0); // 第一格卡槽

    for (size_t i = 0; i < 48; i++)
    {
#ifdef _PTK_CHINESE_UI
        std::string p = "[" + std::to_string(i) + "]" + " " + plants_zh[i];
#else
        std::string p = "[" + std::to_string(i) + "]" + " " + plants[i];
#endif
        choice_seed->add(p.c_str());
    }

    choice_seed->value(0); // 第一张卡片

    for (size_t i = 0; i < 8; i++)
    {
        std::string label;
        for (unsigned int col = 1; col <= 9; col++)
            label += (lily_pad_col_lower[i] <= col && col <= lily_pad_col_upper[i])
                         ? "■"
                         : "□";
        button_put_lily_pad->add(label.c_str());
    }

    for (size_t i = 0; i < 7; i++)
    {
        std::string label;
        for (unsigned int col = 1; col <= 9; col++)
            label += (flower_pot_col_lower[i] <= col && col <= flower_pot_col_upper[i])
                         ? "■"
                         : "□";
        button_put_flower_pot->add(label.c_str());
    }

#ifdef _PTK_CHINESE_UI
    choice_scene->add("[0] 白天");
    choice_scene->add("[1] 黑夜");
    choice_scene->add("[2] 泳池");
    choice_scene->add("[3] 雾夜");
    choice_scene->add("[4] 屋顶");
    choice_scene->add("[5] 月夜");
#else
    choice_scene->add("[0] Day");
    choice_scene->add("[1] Night");
    choice_scene->add("[2] Pool");
    choice_scene->add("[3] Fog");
    choice_scene->add("[4] Roof");
    choice_scene->add("[5] Moon");
#endif

    choice_scene->value(2); // 泳池

    lineups.clear();
    lineup_count[0] = 0;
    lineup_count[1] = 0;
    lineup_count[2] = 0;
    lineup_count[3] = 0;
    lineup_count[4] = 0;
    lineup_count[5] = 0;

    choice_lineup_name[0]->hide();
    choice_lineup_name[1]->hide();
    choice_lineup_name[2]->hide();
    choice_lineup_name[3]->hide();
    choice_lineup_name[4]->hide();
    choice_lineup_name[5]->hide();

    editor_lineup_string->buffer(buffer_lineup_string);
    editor_lineup_string->wrap_mode(Fl_Text_Editor::WRAP_AT_BOUNDS, 0);
    editor_lineup_string->deactivate(); // 不可编辑

    // 出怪名称
    for (size_t i = 0; i < 20; i++)
#ifdef _PTK_CHINESE_UI
        check_zombie[i]->copy_label(zombies_zh[spawn_type[i]]);
#else
        check_zombie[i]->copy_label(zombies_s[spawn_type[i]]);
#endif

    // 非旗帜波红眼权重范围
    for (size_t weight = 1000; weight <= 6000; weight += 100)
        choice_giga_weight->add(std::to_string(weight).c_str());
    choice_giga_weight->value(0);

    // 默认极限出怪的情况
    choice_giga_weight->deactivate();
    check_giga_limit->activate();

#ifdef _PTK_CHINESE_UI
    button_spawn_extra->add("[清空已选]", 0, cb_clear_checked_zombies, this);
    button_spawn_extra->add("[取消限制]", 0, cb_disable_limit_species, this);
    button_spawn_extra->add("[切换布局]", 0, cb_switch_layout_xwz, this);
#else
    button_spawn_extra->add("[ Clear Checked Zombies ]", 0, cb_clear_checked_zombies, this);
    button_spawn_extra->add("[ Disable Species Limit ]", 0, cb_disable_limit_species, this);
#endif
    button_spawn_extra->type(Fl_Menu_Button::POPUP3);
    button_spawn_extra->value(0);

#ifdef _PTK_CHINESE_UI
    button_spawn_mode->add("自然出怪 (游戏生成)", 0, cb_switch_spawn_mode, this);
    button_spawn_mode->add("极限出怪 (均匀填充)", 0, cb_switch_spawn_mode, this);
    button_spawn_mode->add("模拟出怪 (加权随机)", 0, cb_switch_spawn_mode, this);
#else
    button_spawn_mode->add("Natural  (Game Generate)", 0, cb_switch_spawn_mode, this);
    button_spawn_mode->add("Extreme  (Filling Evenly)", 0, cb_switch_spawn_mode, this);
    button_spawn_mode->add("Simulate (Weighted Random)", 0, cb_switch_spawn_mode, this);
#endif
    button_spawn_mode->type(Fl_Menu_Button::POPUP3);
    button_spawn_mode->value(1); // 默认极限刷怪

    choice_music->add("[1] Grasswalk");
    choice_music->add("[2] Moongrains");
    choice_music->add("[3] Watery Graves");
    choice_music->add("[4] Rigor Mormist");
    choice_music->add("[5] Graze the Roof");
    choice_music->add("[6] Choose Your Seeds");
    choice_music->add("[7] Crazy Dave");
    choice_music->add("[8] Zen Garden");
    choice_music->add("[9] Cerebrawl");
    choice_music->add("[10] Loonboon");
    choice_music->add("[11] Ultimate Battle");
    choice_music->add("[12] Brainiac Maniac");

    choice_music->value(4); // Graze the Roof

#ifdef _PTK_CHINESE_UI
    choice_debug->add("关闭");
    choice_debug->add("出怪");
    choice_debug->add("音乐");
    choice_debug->add("内存");
    choice_debug->add("碰撞");
#else
    choice_debug->add("Off");
    choice_debug->add("Spawning");
    choice_debug->add("Music");
    choice_debug->add("Memory");
    choice_debug->add("Collision");
#endif

    choice_debug->value(0); // 关闭

    choice_speed->add("10x");
    choice_speed->add("5x");
    choice_speed->add("2x");
    choice_speed->add("1x");
    choice_speed->add("0.5x");
    choice_speed->add("0.2x");
    choice_speed->add("0.1x");

    choice_speed->value(3); // 1x

    choice_scheme->add("base");
    choice_scheme->add("plastic");
    choice_scheme->add("gtk+");
    choice_scheme->add("gleam");
    choice_scheme->add("oxy");

    choice_scheme->value(0); // base

    // 默认打开后台运行和显示隐藏游戏
    check_background->value(1);
    check_limbo_page->value(1);

    // 默认显示出怪选项卡
    tabs->value(group_spawn);

    // 回调函数

    choice_mode->callback(cb_mode, this); // cb_tooltips
    choice_adventure->callback(cb_tooltips, this);

    choice_row->callback(cb_tooltips, this);
    choice_col->callback(cb_tooltips, this);
    choice_plant->callback(cb_tooltips, this);
    choice_zombie->callback(cb_tooltips, this);

    choice_item->callback(cb_tooltips, this);
    choice_slot->callback(cb_tooltips, this);
    choice_seed->callback(cb_tooltips, this);

    button_load_lineup->callback(cb_load_lineup, this);
    choice_scene->callback(cb_switch_lineup_scene, this); // cb_tooltips
    choice_lineup_name[0]->callback(cb_show_lineup_string, this);
    choice_lineup_name[1]->callback(cb_show_lineup_string, this);
    choice_lineup_name[2]->callback(cb_show_lineup_string, this);
    choice_lineup_name[3]->callback(cb_show_lineup_string, this);
    choice_lineup_name[4]->callback(cb_show_lineup_string, this);
    choice_lineup_name[5]->callback(cb_show_lineup_string, this);
    button_copy_lineup->callback(cb_copy_lineup, this);
    button_paste_lineup->callback(cb_paste_lineup, this);

    check_zombie[0]->callback(cb_spawn_mutex_0, this);
    check_zombie[3]->callback(cb_spawn_mutex_3, this);
    for (size_t i = 0; i < 20; i++)
    {
        int t = spawn_type[i];
        if ((i != 0) && (i != 3) && (t != 19) && (t != 20))
            check_zombie[i]->callback(cb_spawn_count_check, this);
    }

    choice_music->callback(cb_tooltips, this);

    button_file->callback(cb_open_file, this);
    button_dir->callback(cb_open_dir, this);

    choice_debug->callback(cb_tooltips, this);
    choice_speed->callback(cb_tooltips, this);

    choice_scheme->callback(cb_scheme, this); // cb_tooltips
    // check_tooltips->callback(cb_tooltips, this); // 重载
    button_document->callback(cb_document, this);
    button_about->callback(cb_about, this);

    // 设置字体

    extern Fl_Font ui_font;
    extern Fl_Font ms_font;

#ifdef _PTK_CHINESE_UI

    for (int i = 0; i < this->children(); i++)
        this->child(i)->labelfont(ui_font);
    {
        for (int i = 0; i < tabs->children(); i++)
        {
            tabs->child(i)->labelfont(ui_font);
            tabs->child(i)->labelsize(tabs->child(i)->labelsize() + 1);
        }
        {
            for (int i = 0; i < group_resource->children(); i++)
                group_resource->child(i)->labelfont(ui_font);
            input_sun->textfont(ui_font);
            input_money->textfont(ui_font);
            input_wisdom_tree->textfont(ui_font);
            choice_mode->textfont(ui_font);
            choice_adventure->textfont(ui_font);
            input_level->textfont(ui_font);
        }
        {
            for (int i = 0; i < group_battle->children(); i++)
                group_battle->child(i)->labelfont(ui_font);
            choice_row->textfont(ui_font);
            choice_col->textfont(ui_font);
            choice_plant->textfont(ui_font);
            choice_zombie->textfont(ui_font);
            button_lawn_mower->textfont(ui_font);
            choice_item->textfont(ui_font);
        }
        {
            for (int i = 0; i < group_lineup->children(); i++)
                group_lineup->child(i)->labelfont(ui_font);
            choice_slot->textfont(ui_font);
            choice_seed->textfont(ui_font);
            // button_put_lily_pad
            // button_put_flower_pot
            choice_scene->textfont(ui_font);
            choice_lineup_name[0]->textfont(ui_font);
            choice_lineup_name[1]->textfont(ui_font);
            choice_lineup_name[2]->textfont(ui_font);
            choice_lineup_name[3]->textfont(ui_font);
            choice_lineup_name[4]->textfont(ui_font);
            choice_lineup_name[5]->textfont(ui_font);
            editor_lineup_string->textfont(ms_font); // 阵型字符串特殊字体
            editor_lineup_string->textsize(15);
        }
        {
            for (int i = 0; i < group_spawn->children(); i++)
                group_spawn->child(i)->labelfont(ui_font);
            choice_giga_weight->textfont(ui_font);
            button_spawn_extra->textfont(ui_font);
            button_spawn_mode->textfont(ui_font);
        }
        {
            for (int i = 0; i < group_others->children(); i++)
                group_others->child(i)->labelfont(ui_font);
            choice_music->textfont(ui_font);
            input_file->textfont(ui_font);
            input_dir->textfont(ui_font);
            choice_debug->textfont(ui_font);
            choice_speed->textfont(ui_font);
            choice_scheme->textfont(ui_font);
        }
    }

#else

    const int font_size = 12;

    for (int i = 0; i < this->children(); i++)
        this->child(i)->labelsize(font_size);
    {
        for (int i = 0; i < tabs->children(); i++)
        {
            tabs->child(i)->labelsize(font_size);
            tabs->child(i)->labelsize(tabs->child(i)->labelsize() + 1);
        }
        {
            for (int i = 0; i < group_resource->children(); i++)
                group_resource->child(i)->labelsize(font_size);
            input_sun->textsize(font_size);
            input_money->textsize(font_size);
            input_wisdom_tree->textsize(font_size);
            choice_mode->textsize(font_size);
            choice_adventure->textsize(font_size);
            input_level->textsize(font_size);
        }
        {
            for (int i = 0; i < group_battle->children(); i++)
                group_battle->child(i)->labelsize(font_size);
            choice_row->textsize(font_size);
            choice_col->textsize(font_size);
            choice_plant->textsize(font_size);
            choice_zombie->textsize(font_size);
            button_lawn_mower->textsize(font_size);
            choice_item->textsize(font_size);
        }
        {
            for (int i = 0; i < group_lineup->children(); i++)
                group_lineup->child(i)->labelsize(font_size);
            choice_slot->textsize(font_size);
            choice_seed->textsize(font_size);
            // button_put_lily_pad
            // button_put_flower_pot
            choice_scene->textsize(font_size);
            choice_lineup_name[0]->textsize(font_size);
            choice_lineup_name[1]->textsize(font_size);
            choice_lineup_name[2]->textsize(font_size);
            choice_lineup_name[3]->textsize(font_size);
            choice_lineup_name[4]->textsize(font_size);
            choice_lineup_name[5]->textsize(font_size);
            choice_lineup_name[0]->textfont(ui_font);
            choice_lineup_name[1]->textfont(ui_font);
            choice_lineup_name[2]->textfont(ui_font);
            choice_lineup_name[3]->textfont(ui_font);
            choice_lineup_name[4]->textfont(ui_font);
            choice_lineup_name[5]->textfont(ui_font);
            editor_lineup_string->textfont(ms_font); // 阵型字符串特殊字体
            editor_lineup_string->textsize(14);
        }
        {
            for (int i = 0; i < group_spawn->children(); i++)
                group_spawn->child(i)->labelsize(font_size);
            choice_giga_weight->textsize(font_size);
            button_spawn_extra->textsize(font_size);
            button_spawn_mode->textsize(font_size);
        }
        {
            for (int i = 0; i < group_others->children(); i++)
                group_others->child(i)->labelsize(font_size);
            choice_music->textsize(font_size);
            input_file->textsize(font_size);
            input_dir->textsize(font_size);
            choice_debug->textsize(font_size);
            choice_speed->textsize(font_size);
            choice_scheme->textsize(font_size);
        }
    }

#endif

#ifdef _PTK_CHINESE_UI

    // Emoji

    emoji = IsWindows8OrGreater();
    emoji_i = IsWindows8Point1OrGreater();

    if (emoji)
    {
        box_money->copy_label("💰");
        box_wisdom_tree->copy_label("🌳");
        button_capture->copy_label("📷");
    }

    button_unlock->copy_label(EMOJI("🏆", "通关存档"));

    button_lawn_mower->replace(0, EMOJI("➡️", "[启动]"));
    button_lawn_mower->replace(1, EMOJI("🆑", "[删除]"));
    button_lawn_mower->replace(2, EMOJI("🔄", "[恢复]"));

    button_reset->copy_label(EMOJI("⏳", "重置场地"));

    button_spawn_extra->replace(0, EMOJI("❌", "[清空已选]"));
    button_spawn_extra->replace(1, EMOJI("❎", "[取消限制]"));
    button_spawn_extra->replace(2, EMOJI("🔀", "[切换布局]"));

    button_show_details->copy_label(EMOJI("📈", "查看详情"));

    button_music->copy_label(EMOJI("🎵", "背景音乐"));
    button_userdata->copy_label(EMOJI("💾", "存档文件夹"));
    button_document->copy_label(EMOJI("🌏", "文档"));

#endif

    // 默认运行的回调函数

    // 自动导入阵型列表
    import_lineup_list(true);

    // 获取阵型的字符串
    choice_scene->do_callback();

#ifdef _PTK_CHINESE_UI
    // 设置控件工具提示
    check_tooltips->do_callback();
#endif

    // this->show(); // 在 main() 里带参调用

    ReadSettings(); // 读取设置

    // 窗口居中显示
    this->position((Fl::w() - this->w()) / 2, (Fl::h() - this->h()) / 2);

    // 默认焦点控件
    button_sun->take_focus();
}

Window::~Window()
{
    WriteSettings(); // 保存设置
}

float Window::MinScale()
{
    float min_scale = 1.0f;

    int dpi = 96;
    HDC dc = GetDC(nullptr);
    if (dc != nullptr)
    {
        // int virtual_width = GetDeviceCaps(dc, HORZRES);
        // int physical_width = GetDeviceCaps(dc, DESKTOPHORZRES);
        // dpi = 96 * physical_width / virtual_width;
        int dpi_x = GetDeviceCaps(dc, LOGPIXELSX);
        int dpi_y = GetDeviceCaps(dc, LOGPIXELSY);
        dpi = (dpi_x + dpi_y) / 2;
        ReleaseDC(nullptr, dc);
    }

    min_scale = static_cast<int>(dpi / 96) * 1.0f;
    if (min_scale < 1.0f)
        min_scale = 1.0f;

    return min_scale;
}

void Window::ReadSettings()
{
    // 注册表配置版本 v1

    bool first_open = true;

    HKEY hKey;
    DWORD r = RegOpenKeyExW(HKEY_CURRENT_USER, L"Software\\Cube Studio\\PvZ Toolkit\\v1", //
                            0, KEY_QUERY_VALUE, &hKey);
    if (r == ERROR_SUCCESS)
    {
        first_open = false;

        LSTATUS status;
        DWORD dwType;
        DWORD dwSize;

#ifdef _PTK_CHINESE_UI
        int tooltips = 0; // 提示
#endif
        DWORD scale = 0x3f800000;                    // 缩放
        int scheme = 0;                              // 样式
        wchar_t types[21] = L"00000000000000000000"; // 出怪
        int mode = 1;                                // 模式
        int sun = 8000;                              // 阳光
        int money = 80000;                           // 金币
        int level = 1010;                            // 轮数
        unsigned int page = 3;                       // 页面

#ifdef _PTK_CHINESE_UI
        dwType = REG_DWORD;
        dwSize = sizeof(tooltips);
        status = RegQueryValueExW(hKey, L"ToolTips", 0, &dwType, (LPBYTE)&tooltips, &dwSize);
        if (status == ERROR_SUCCESS)
        {
            check_tooltips->value(tooltips);
            check_tooltips->do_callback();
        }
#endif

        dwType = REG_DWORD;
        dwSize = sizeof(scale);
        status = RegQueryValueExW(hKey, L"ScaleFactor", 0, &dwType, (LPBYTE)&scale, &dwSize);
        if (status == ERROR_SUCCESS)
        {
            float factor = *(float *)(&scale);
            // std::cout << "ScaleFactor: " << factor << std::endl;
            if (factor != 1.0f) // TODO: Do what?
                Fl::screen_scale(this->screen_num(), factor);
        }

        dwType = REG_DWORD;
        dwSize = sizeof(scheme);
        status = RegQueryValueExW(hKey, L"Scheme", 0, &dwType, (LPBYTE)&scheme, &dwSize);
        if (status == ERROR_SUCCESS)
        {
            if (0 <= scheme && scheme < 5)
            {
                choice_scheme->value(scheme);
                choice_scheme->do_callback();
            }
        }

        dwType = REG_SZ;
        dwSize = sizeof(types);
        status = RegQueryValueExW(hKey, L"SpawnTypes", 0, &dwType, (LPBYTE)&types, &dwSize);
        if (status == ERROR_SUCCESS)
        {
            for (size_t i = 0; i < 20; i++)
                this->check_zombie[i]->value(types[i] == L'1' ? 1 : 0);
            cb_spawn_count_check();
        }

        dwType = REG_DWORD;
        dwSize = sizeof(mode);
        status = RegQueryValueExW(hKey, L"SpawnMode", 0, &dwType, (LPBYTE)&mode, &dwSize);
        if (status == ERROR_SUCCESS)
        {
            if (0 <= mode && mode < 3)
            {
                button_spawn_mode->value(mode);
                cb_switch_spawn_mode();
            }
        }

        dwType = REG_DWORD;
        dwSize = sizeof(sun);
        status = RegQueryValueExW(hKey, L"ValueSun", 0, &dwType, (LPBYTE)&sun, &dwSize);
        if (status == ERROR_SUCCESS)
        {
            if (0 <= sun && sun <= 9990)
                input_sun->value(sun);
        }

        dwType = REG_DWORD;
        dwSize = sizeof(money);
        status = RegQueryValueExW(hKey, L"ValueMoney", 0, &dwType, (LPBYTE)&money, &dwSize);
        if (status == ERROR_SUCCESS)
        {
            if (0 <= money && money <= 99999)
                input_money->value(money);
        }

        dwType = REG_DWORD;
        dwSize = sizeof(level);
        status = RegQueryValueExW(hKey, L"ValueLevel", 0, &dwType, (LPBYTE)&level, &dwSize);
        if (status == ERROR_SUCCESS)
        {
            if (0 <= level && level <= 999999)
                input_level->value(level);
        }

        dwType = REG_DWORD;
        dwSize = sizeof(page);
        status = RegQueryValueExW(hKey, L"CurrentPage", 0, &dwType, (LPBYTE)&page, &dwSize);
        if (status == ERROR_SUCCESS)
        {
            std::vector<Fl_Widget *> vp = {
                group_resource,
                group_battle,
                group_lineup,
                group_spawn,
                group_others,
            };
            if (0 <= page && page < vp.size())
            {
                tabs->value(vp[page]);
            }
        }

        RegCloseKey(hKey);
    }

    if (first_open)
    {
#ifdef _PTK_CHINESE_UI
        // 0804  2052  zh-CN  Chinese (Simplified) - China
        // 0404  1028  zh-TW  Chinese (Traditional) - Taiwan
        // 0C04  3076  zh-HK  Chinese - Hong Kong SAR
        // 1404  5124  zh-MO  Chinese - Macao SAR
        // 1004  4100  zh-SG  Chinese - Singapore
        LANGID li = GetUserDefaultLangID();
        // std::cout << "LangID: " << li << std::endl;
        // 非中文区域显示英语提示框
        bool non_chinese = li != 2052 && //
                           li != 1028 && //
                           li != 3076 && //
                           li != 5124 && //
                           li != 4100;
        if (non_chinese)
        {
            check_tooltips->value(1);
            check_tooltips->do_callback();
        }
#endif

        // 初次启动缩放
        if (this->MinScale() != 1.0f)
        {
            Fl::screen_scale(this->screen_num(), this->MinScale());
#ifdef _PTK_CHINESE_UI
            fl_message_title("界面缩放");
            std::string text = std::string()                                 //
                               + "同时按 Ctrl 和 + / - 键可放大缩小窗口，\n" //
                               + "单独按 Esc 键可恢复默认的窗口大小。";      //
#else
            fl_message_title("DPI Scaling");
            std::string text = std::string()                                                          //
                               + "Press the Ctrl and + / - keys simultaneously to zoom in and out,\n" //
                               + "Press the Esc key alone to restore default 100% window size.";      //
#endif
            fl_message(text.c_str());
        }

#pragma warning(disable : 4996)
        DWORD dwVersion = 0;
        DWORD dwBuild = 0;
        dwVersion = GetVersion();
        if (dwVersion < 0x80000000)
            dwBuild = (DWORD)(HIWORD(dwVersion));
#pragma warning(default : 4996)

        int scheme = 0;
        if (dwBuild >= 22000)      // 11
            scheme = 2;            //       gtk+
        else if (dwBuild >= 10240) // 10
            scheme = 2;            //       gtk+
        else if (dwBuild >= 9600)  // 8.1
            scheme = 4;            //       oxy
        else if (dwBuild >= 9200)  // 8
            scheme = 4;            //       oxy
        else if (dwBuild >= 7600)  // 7
            scheme = 3;            //       gleam
        else if (dwBuild >= 6000)  // Vista
            scheme = 3;            //       gleam
        else if (dwBuild >= 2600)  // XP
            scheme = 1;            //       plastic
        else if (dwBuild >= 2195)  // 2000
            scheme = 0;            //       base
        choice_scheme->value(scheme);
        choice_scheme->do_callback();

        // 第一次打开时显示文档
#ifdef _PTK_CHINESE_UI
        fl_message_title("在线文档");
        int c = fl_choice("这是你首次运行 PvZ Toolkit，要先阅读一下在线教程文档吗？\n" //
                          "也可以在修改器界面的“杂项”页面点击“文档”按钮来访问。",      //
                          "No", "Yes", 0);
#else
        fl_message_title("Online Document");
        int c = fl_choice("This is your first time running PvZ Toolkit, do you want to read the manual first?\n" //
                          "You can also access it later by clicking \"Document\" button at \"Others\" page.",    //
                          "No", "Yes", 0);
#endif
        if (c == 1)
            cb_document();
    }
}

void Window::WriteSettings()
{
    // 注册表配置版本 v1

#ifdef _PTK_CHINESE_UI
    // 提示
    int tooltips = check_tooltips->value();
#endif

    // 缩放
    float scale = Fl::screen_scale(this->screen_num());

    // 样式
    int scheme = choice_scheme->value();

    // 出怪
    wchar_t types[21] = {0};
    for (size_t i = 0; i < 20; i++)
        types[i] = (this->check_zombie[i]->value() == 1 ? L'1' : L'0');

    // 模式
    int mode = button_spawn_mode->value();

    // 阳光
    int sun = static_cast<int>(input_sun->value());

    // 金币
    int money = static_cast<int>(input_money->value());

    // 轮数
    int level = static_cast<int>(input_level->value());

    // 页面
    std::map<Fl_Widget *, unsigned int> mp = {
        {group_resource, 0},
        {group_battle, 1},
        {group_lineup, 2},
        {group_spawn, 3},
        {group_others, 4},
    };
    unsigned int page = mp[tabs->value()];

    HKEY hKey;
    DWORD ret;
    ret = RegOpenKeyExW(HKEY_CURRENT_USER, L"Software\\Cube Studio\\PvZ Toolkit\\v1", //
                        0, KEY_SET_VALUE, &hKey);
    if (ret != ERROR_SUCCESS)
        ret = RegCreateKeyExW(HKEY_CURRENT_USER, L"Software\\Cube Studio\\PvZ Toolkit\\v1", //
                              0, nullptr, 0, KEY_SET_VALUE, nullptr, &hKey, nullptr);
    if (ret == ERROR_SUCCESS)
    {
#ifdef _PTK_CHINESE_UI
        RegSetValueExW(hKey, L"ToolTips", 0, REG_DWORD, (LPBYTE)&tooltips, sizeof(tooltips));
#endif
        RegSetValueExW(hKey, L"ScaleFactor", 0, REG_DWORD, (LPBYTE)&scale, sizeof(scale));
        RegSetValueExW(hKey, L"Scheme", 0, REG_DWORD, (LPBYTE)&scheme, sizeof(scheme));
        RegSetValueExW(hKey, L"SpawnTypes", 0, REG_SZ, (LPBYTE)&types, sizeof(types));
        RegSetValueExW(hKey, L"SpawnMode", 0, REG_DWORD, (LPBYTE)&mode, sizeof(mode));
        RegSetValueExW(hKey, L"ValueSun", 0, REG_DWORD, (LPBYTE)&sun, sizeof(sun));
        RegSetValueExW(hKey, L"ValueMoney", 0, REG_DWORD, (LPBYTE)&money, sizeof(money));
        RegSetValueExW(hKey, L"ValueLevel", 0, REG_DWORD, (LPBYTE)&level, sizeof(level));
        RegSetValueExW(hKey, L"CurrentPage", 0, REG_DWORD, (LPBYTE)&page, sizeof(page));
        RegCloseKey(hKey);
    }
}

void Window::cb_find_result(void *w, int result)
{
    ((Window *)w)->cb_find_result(result);
}

void Window::cb_find_result(int result)
{
    // 重新找到游戏时应用所有已选功能
    if (result != PVZ_NOT_FOUND && result != PVZ_OPEN_ERROR && result != PVZ_UNSUPPORTED)
        this->keep_selected_feature();

#ifdef _PVZ_BETA_LEAK_SUPPORT
    // 某些版本只实现了部分功能
    if (result == PVZ_BETA_0_1_1_1014_EN)
    {
        check_tree_food->deactivate();
        input_wisdom_tree->deactivate();
        button_wisdom_tree->deactivate();
    }
    else
#endif
    {
        check_tree_food->activate();
        input_wisdom_tree->activate();
        button_wisdom_tree->activate();
    }

    this->result = result;
    cb_find_result_tooltip();
}

void Window::cb_find_result_tooltip(Fl_Widget *, void *w)
{
    ((Window *)w)->cb_find_result_tooltip();
}

#ifdef _PTK_CHINESE_UI

void Window::cb_find_result_tooltip()
{
    bool on = check_tooltips->value() == 1;

    switch (result)
    {
#ifdef _PVZ_BETA_LEAK_SUPPORT
    case PVZ_BETA_0_1_1_1014_EN:
        game_status->copy_label("0.1.1.1014 英语测试版");
        game_status->copy_tooltip(on ? "0.1.1.1014 Beta (en)" : nullptr);
        break;
    case PVZ_BETA_0_9_9_1029_EN:
        game_status->copy_label("0.9.9.1029 英语测试版");
        game_status->copy_tooltip(on ? "0.9.9.1029 Beta (en)" : nullptr);
        break;
#endif
    case PVZ_1_0_0_1051_EN:
        game_status->copy_label("1.0.0.1051 英语原始版");
        game_status->copy_tooltip(on ? "1.0.0.1051 (en)" : nullptr);
        break;
    case PVZ_1_2_0_1065_EN:
        game_status->copy_label("1.2.0.1065 英语修复版");
        game_status->copy_tooltip(on ? "1.2.0.1065 (en)" : nullptr);
        break;
    case PVZ_1_0_4_7924_ES:
        game_status->copy_label("1.0.4.7924 西班牙语版");
        game_status->copy_tooltip(on ? "1.0.4.7924 (es)" : nullptr);
        break;
    case PVZ_1_0_7_3556_ES:
        game_status->copy_label("1.0.7.3556 西班牙语版");
        game_status->copy_tooltip(on ? "1.0.7.3556 (es)" : nullptr);
        break;
    case PVZ_1_0_7_3467_RU:
        game_status->copy_label("1.0.7.3467 俄罗斯语版");
        game_status->copy_tooltip(on ? "1.0.7.3467 (ru)" : nullptr);
        break;
    case PVZ_GOTY_1_2_0_1073_EN:
        game_status->copy_label("1.2.0.1073 英语年度版");
        game_status->copy_tooltip(on ? "1.2.0.1073 GOTY Origin (en)" : nullptr);
        break;
    case PVZ_GOTY_1_2_0_1096_EN:
        game_status->copy_label("1.2.0.1096 英语年度版");
        game_status->copy_tooltip(on ? "1.2.0.1096 GOTY Steam (en)" : nullptr);
        break;
    case PVZ_GOTY_1_2_0_1093_DE_ES_FR_IT:
        game_status->copy_label("1.2.0.1093 多国语言年度版");
        game_status->copy_tooltip(on ? "1.2.0.1093 GOTY Origin (de/es/fr/it)" : nullptr);
        break;
    case PVZ_GOTY_1_1_0_1056_ZH:
        game_status->copy_label("1.1.0.1056 粘度汗化版");
        game_status->copy_tooltip(on ? "1.1.0.1056 GOTY 2010 (zh)" : nullptr);
        if (!this->bad_version_warned)
        {
            this->bad_version_warned = true;
            fl_message_title("温馨提示");
            int c = fl_choice("这个版本的游戏存在着严重的问题，随时可能会崩溃。\n" //
                              "建议更换使用其他能正常运行的版本，现在去下载吗？",  //
                              "No", "Yes", 0);
            if (c == 1)
                ShellExecuteW(nullptr, L"open", L"https://pvz.lmintlcx.com/download/", //
                              nullptr, nullptr, SW_SHOWNORMAL);
        }
        break;
    case PVZ_GOTY_1_1_0_1056_JA:
        game_status->copy_label("1.1.0.1056 日语年度版");
        game_status->copy_tooltip(on ? "1.1.0.1056 GOTY (ja)" : nullptr);
        break;
    case PVZ_GOTY_1_1_0_1056_ZH_2012_06:
        game_status->copy_label("1.1.0.1056 年度加强版");
        game_status->copy_tooltip(on ? "1.1.0.1056 GOTY 2012 (zh)" : nullptr);
        break;
    case PVZ_GOTY_1_1_0_1056_ZH_2012_07:
        game_status->copy_label("1.1.0.1056 年度加强版");
        game_status->copy_tooltip(on ? "1.1.0.1056 GOTY 2012 (zh)" : nullptr);
        break;
    case PVZ_UNSUPPORTED:
        game_status->copy_label("不支持的游戏版本");
        game_status->copy_tooltip(on ? "Unsupported PvZ Version" : nullptr);
        break;
    case PVZ_OPEN_ERROR:
        game_status->copy_label("打开游戏进程出错");
        game_status->copy_tooltip(on ? "Error Opening PvZ Process" : nullptr);
        break;
    case PVZ_NOT_FOUND:
    default:
        game_status->copy_label("没有找到游戏窗口");
        game_status->copy_tooltip(on ? "PvZ Window Not Found" : nullptr);
        break;
    }

    if (result == PVZ_NOT_FOUND)
    {
        game_status_tip->copy_label(emoji_i ? "🛈" : "i");
        game_status_tip->copy_tooltip(on ? "Please run Plants vs. Zombies first."
                                         : "请先打开植物大战僵尸游戏。");
    }
    else if (result == PVZ_OPEN_ERROR)
    {
        game_status_tip->copy_label(emoji_i ? "🛈" : "i");
        game_status_tip->copy_tooltip(on ? "Please try run PvZ Toolkit as administrator."
                                         : "请尝试用管理员权限运行修改器。");
    }
    else if (result == PVZ_UNSUPPORTED)
    {
        game_status_tip->copy_label(emoji_i ? "🛈" : "i");
        game_status_tip->copy_tooltip(on ? "Contact author to add support for this version."
                                         : "联系作者给这个版本添加支持。");
    }
#ifdef _PVZ_BETA_LEAK_SUPPORT
    else if (result == PVZ_BETA_0_1_1_1014_EN)
    {
        game_status_tip->copy_label(emoji_i ? "🛈" : "i");
        game_status_tip->copy_tooltip(on ? "Partial support for beta version."
                                         : "测试版内存布局与正式版差别较大，\n"
                                           "对测试版本仅提供有限的功能支持。");
    }
    else if (result == PVZ_BETA_0_9_9_1029_EN)
    {
        game_status_tip->copy_label(emoji_i ? "🛈" : "i");
        game_status_tip->copy_tooltip(on ? "Partial support for beta version."
                                         : "对测试版本仅提供有限的功能支持。");
    }
#endif
    else if (result == PVZ_GOTY_1_1_0_1056_ZH)
    {
        game_status_tip->copy_label(emoji_i ? "🛈" : "i");
        game_status_tip->copy_tooltip(on ? "Suggest to replace this buggy game version."
                                         : "建议换掉这个有严重问题的游戏版本。");
    }
    else
    {
        game_status_tip->copy_label("");
        game_status_tip->copy_tooltip(nullptr);

        SYSTEMTIME time_now;
        GetLocalTime(&time_now);
        if (time_now.wYear > 2009 && time_now.wMonth == 5 && time_now.wDay == 5)
        {
            game_status_tip->copy_label("🎂");
            game_status_tip->copy_tooltip("Plants vs. Zombies (May 5, 2009)");
        }
    }

    game_status->redraw();
    game_status_tip->redraw();
}

#else

void Window::cb_find_result_tooltip()
{
    switch (result)
    {
#ifdef _PVZ_BETA_LEAK_SUPPORT
    case PVZ_BETA_0_1_1_1014_EN:
        game_status->copy_label("0.1.1.1014 Beta (en)");
        break;
    case PVZ_BETA_0_9_9_1029_EN:
        game_status->copy_label("0.9.9.1029 Beta (en)");
        break;
#endif
    case PVZ_1_0_0_1051_EN:
        game_status->copy_label("1.0.0.1051 (en)");
        break;
    case PVZ_1_2_0_1065_EN:
        game_status->copy_label("1.2.0.1065 (en)");
        break;
    case PVZ_1_0_4_7924_ES:
        game_status->copy_label("1.0.4.7924 (es)");
        break;
    case PVZ_1_0_7_3556_ES:
        game_status->copy_label("1.0.7.3556 (es)");
        break;
    case PVZ_1_0_7_3467_RU:
        game_status->copy_label("1.0.7.3467 (ru)");
        break;
    case PVZ_GOTY_1_2_0_1073_EN:
        game_status->copy_label("1.2.0.1073 GOTY Origin (en)");
        break;
    case PVZ_GOTY_1_2_0_1096_EN:
        game_status->copy_label("1.2.0.1096 GOTY Steam (en)");
        break;
    case PVZ_GOTY_1_2_0_1093_DE_ES_FR_IT:
        game_status->copy_label("1.2.0.1093 GOTY Origin (de/es/fr/it)");
        break;
    case PVZ_GOTY_1_1_0_1056_ZH:
        game_status->copy_label("1.1.0.1056 GOTY 2010 (zh)");
        if (!this->bad_version_warned)
        {
            this->bad_version_warned = true;
            fl_message_title("Warning");
            int c = fl_choice("This version of game has serious issues and may crash at any time.\n" //
                              "It is recommended to use another version that can run normally.\n"    //
                              "Would you like to download it now?",                                  //
                              "No", "Yes", 0);
            if (c == 1)
                ShellExecuteW(nullptr, L"open", L"https://pvz.lmintlcx.com/download/", //
                              nullptr, nullptr, SW_SHOWNORMAL);
        }
        break;
    case PVZ_GOTY_1_1_0_1056_JA:
        game_status->copy_label("1.1.0.1056 GOTY (ja)");
        break;
    case PVZ_GOTY_1_1_0_1056_ZH_2012_06:
        game_status->copy_label("1.1.0.1056 GOTY 2012 (zh)");
        break;
    case PVZ_GOTY_1_1_0_1056_ZH_2012_07:
        game_status->copy_label("1.1.0.1056 GOTY 2012 (zh)");
        break;
    case PVZ_UNSUPPORTED:
        game_status->copy_label("Unsupported PvZ Version");
        break;
    case PVZ_OPEN_ERROR:
        game_status->copy_label("Error Opening PvZ Process");
        break;
    case PVZ_NOT_FOUND:
    default:
        game_status->copy_label("PvZ Window Not Found");
        break;
    }

    if (result == PVZ_NOT_FOUND)
    {
        game_status->copy_tooltip("Please run Plants vs. Zombies first.");
    }
    else if (result == PVZ_OPEN_ERROR)
    {
        game_status->copy_tooltip("Please try run PvZ Toolkit as administrator.");
    }
    else if (result == PVZ_UNSUPPORTED)
    {
        game_status->copy_tooltip("Contact author to add support for this version.");
    }
#ifdef _PVZ_BETA_LEAK_SUPPORT
    else if (result == PVZ_BETA_0_1_1_1014_EN || result == PVZ_BETA_0_9_9_1029_EN)
    {
        game_status->copy_tooltip("Partial support for beta version.");
    }
#endif
    else if (result == PVZ_GOTY_1_1_0_1056_ZH)
    {
        game_status->copy_tooltip("Suggest to replace this buggy game version.");
    }
    else
    {
        game_status->copy_tooltip(nullptr);
    }

    game_status->redraw();
}

#endif

void Window::keep_selected_feature()
{
    std::vector<Fl_Check_Button *> check_buttons = {
        check_auto_collected,
        check_not_drop_loot,
        check_fertilizer,
        check_bug_spray,
        check_tree_food,
        check_chocolate,
        check_free_planting,
        check_placed_anywhere,
        check_fast_belt,
        check_lock_shovel,
        check_plant_invincible,
        check_plant_weak,
        check_zombie_invincible,
        check_zombie_weak,
        check_reload_instantly,
        check_mushroom_awake,
        check_stop_spawning,
        check_stop_zombies,
        check_lock_butter,
        check_no_crater,
        check_no_ice_trail,
        check_zombie_not_explode,
        check_no_fog,
        check_see_vase,
        check_background,
        check_readonly,
        check_limbo_page,
        check_lineup_mode, // 这个放在最后
    };

    if (check_unlock_sun_limit->value() == 1)
        check_unlock_sun_limit->do_callback();

    for (size_t i = 0; i < check_buttons.size(); i++)
    {
        if (check_buttons[i]->value() == 1)
            check_buttons[i]->do_callback();
    }
}

void Window::cb_mode(Fl_Widget *, void *w)
{
    ((Window *)w)->cb_mode();
}

void Window::cb_mode()
{
    if (choice_mode->value() == 0) // 冒险模式
        choice_adventure->activate();
    else
        choice_adventure->deactivate();

    cb_tooltips();
}

void Window::cb_load_lineup(Fl_Widget *, void *w)
{
    ((Window *)w)->cb_load_lineup();
}

void Window::cb_load_lineup()
{
    import_lineup_list(false);
}

void Window::import_lineup_list(bool automatic)
{
    if (automatic)
    {
        wchar_t find_path[MAX_PATH] = {0};
        GetCurrentDirectoryW(MAX_PATH, find_path);
        wcscat_s(find_path, L"\\*");
        WIN32_FIND_DATA ffd;
        HANDLE hf;
        hf = FindFirstFileW(find_path, &ffd);
        if (hf != INVALID_HANDLE_VALUE)
        {
            do
            {
                std::wstring name = ffd.cFileName;
                if (name == L"." || name == L"..")
                    continue;
                std::wstring ext = name.substr(name.find_last_of(L".") + 1);
                if (ext == L"yml")
                {
                    import_lineup_list_file(name);
                    // std::wcout << L"导入阵型列表: " << name << std::endl;
                }
            } while (FindNextFileW(hf, &ffd) != 0);
            FindClose(hf);
        }
    }
    else
    {
        TCHAR szFileName[MAX_PATH];
        OPENFILENAME ofn;
        ZeroMemory(&ofn, sizeof(ofn));
        ofn.lStructSize = sizeof(ofn);
        ofn.hwndOwner = nullptr;
        ofn.lpstrFilter = L"YAML(*.yml)\0*.yml\0";
        ofn.nFilterIndex = 1;
        ofn.lpstrFile = szFileName;
        ofn.lpstrFile[0] = '\0';
        ofn.nMaxFile = sizeof(szFileName);
        ofn.lpstrFileTitle = nullptr;
        ofn.nMaxFileTitle = 0;
        ofn.lpstrInitialDir = nullptr;
        ofn.Flags = OFN_PATHMUSTEXIST | OFN_FILEMUSTEXIST;
        if (GetOpenFileNameW(&ofn) == TRUE)
        {
#ifdef _DEBUG
            std::wcout << L"打开文件: " << std::wstring(szFileName) << std::endl;
#endif
            import_lineup_list_file(szFileName);
        }
    }

    if (this->lineups.empty())
        return;

    // 排序
    auto LessThan = [&](const Lineup &l1, const Lineup &l2)
    {
        return l1.weight < l2.weight;
    };
    std::sort(this->lineups.begin(), this->lineups.end(), LessThan);

    // 插入
    for (size_t i = 0; i < this->lineups.size(); i++)
    {
        uint32_t scene = static_cast<uint32_t>(this->lineups[i].scene);
        std::string name = this->lineups[i].lineup_name;

        while (choice_lineup_name[scene]->find_index(name.c_str()) != -1)
            name += " "; // 相同名字的在后面补空格

        choice_lineup_name[scene]->add(name.c_str());
        lineup_count[scene]++;
    }

    for (size_t i = 0; i < 6; i++)
        if (choice_lineup_name[i]->size() > 0)
            choice_lineup_name[i]->value(0);

    button_load_lineup->hide();
    cb_switch_lineup_scene();
}

void Window::import_lineup_list_file(std::wstring file)
{
    std::ifstream ifs(file.c_str());
    if (!ifs)
        return;

    std::vector<std::tuple<int, std::string>> err_lst;

    int line = 0;
    std::string str;
    while (std::getline(ifs, str))
    {
        line++;
        if (line == 1) // 第一行
        {
            if (str != "#! pvztoolkit")
                break;
        }
        else
        {
            if (str.empty() || str[0] == '#') // 空行或者注释
            {
                continue;
            }
            else
            {
                std::regex re("\".*\": ([a-zA-Z0-9+/=]{1,}|[a-zA-Z0-9-_=]{1,})");
                if (std::regex_match(str, re))
                {
                    size_t p = str.find_last_of(": ");
                    std::string name = str.substr(0 + 1, p - 3);
                    std::string code = str.substr(p + 1);
                    Lineup lineup(name, code);
                    if (lineup.OK())
                    {
                        this->lineups.push_back(lineup);
                    }
                    else
                    {
                        std::tuple err = {line, str};
                        err_lst.push_back(err);
                    }
                }
                else
                {
                    std::tuple err = {line, str};
                    err_lst.push_back(err);
                }
            }
        }
    }

    if (err_lst.size() > 0)
    {
#ifdef _PTK_CHINESE_UI
        std::wstring title = file + L" " + L"阵型列表文件格式错误";
#else
        std::wstring title = file + L" " + L"Lineup List File Format Error";
#endif
        std::wstring text;
        for (size_t i = 0; i < err_lst.size(); i++)
        {
            if (i > 11)
            {
#ifdef _PTK_CHINESE_UI
                text += std::wstring() + L"\n" + L"（还有更多的没有显示……）";
#else
                text += std::wstring() + L"\n" + L"( More to show ... )";
#endif
                break;
            }
            auto [l, s] = err_lst[i];
#ifdef _PTK_CHINESE_UI
            if (s.length() > 49)
                s = s.substr(0, 48) + " ...";
            text += std::wstring()                            //
                    + L"第 " + std::to_wstring(l) + L" 行： " //
                    + utf8_decode(s) + L"\n";                 //
#else
            if (s.length() > 59)
                s = s.substr(0, 58) + " ...";
            text += std::wstring()                           //
                    + L"Line " + std::to_wstring(l) + L" : " //
                    + utf8_decode(s) + L"\n";                //
#endif
        }
        fl_message_title(utf8_encode(title).c_str());
        fl_message(utf8_encode(text).c_str());
    }
}

void Window::cb_switch_lineup_scene(Fl_Widget *, void *w)
{
    ((Window *)w)->cb_switch_lineup_scene();
}

void Window::cb_switch_lineup_scene()
{
    if (this->lineups.empty())
        return;

    for (size_t i = 0; i < 6; i++)
    {
        if (i == choice_scene->value())
            choice_lineup_name[i]->show();
        else
            choice_lineup_name[i]->hide();
    }

    cb_tooltips();
    cb_show_lineup_string();
}

void Window::cb_show_lineup_string(Fl_Widget *, void *w)
{
    ((Window *)w)->cb_show_lineup_string();
}

void Window::cb_show_lineup_string()
{
    if (lineup_count[choice_scene->value()] == 0)
    {
        buffer_lineup_string->text("");
        return;
    }

    int index = 0;
    for (int i = 0; i < choice_scene->value(); i++)
        index += lineup_count[i];
    index += choice_lineup_name[choice_scene->value()]->value();

#ifdef _DEBUG
    std::cout << index << " " << this->lineups[index].lineup_name << std::endl;
#endif

    buffer_lineup_string->text(this->lineups[index].lineup_code.c_str());
}

void Window::cb_copy_lineup(Fl_Widget *, void *w)
{
    ((Window *)w)->cb_copy_lineup();
}

void Window::cb_copy_lineup()
{
    Fl::copy(buffer_lineup_string->text(), buffer_lineup_string->length(), 1, Fl::clipboard_plain_text);
}

void Window::cb_paste_lineup(Fl_Widget *, void *w)
{
    ((Window *)w)->cb_paste_lineup();
}

void Window::cb_paste_lineup()
{
    buffer_lineup_string->text("");
    Fl_Text_Editor::kf_paste(0, editor_lineup_string);

    std::string str = buffer_lineup_string->text();

    // 去掉不可见字符
    str.erase(std::remove(str.begin(), str.end(), '\r'), str.end());
    str.erase(std::remove(str.begin(), str.end(), '\n'), str.end());
    str.erase(std::remove(str.begin(), str.end(), '\t'), str.end());
    str.erase(std::remove(str.begin(), str.end(), '\v'), str.end());
    str.erase(std::remove(str.begin(), str.end(), '\f'), str.end());
    // 去掉首尾空格
    str.erase(0, str.find_first_not_of(' '));
    str.erase(str.find_last_not_of(' ') + 1);
    // 去掉多余空格
    str = std::regex_replace(str, std::regex("( ){2,}"), " ");
    str = std::regex_replace(str, std::regex(", "), ",");
    str = std::regex_replace(str, std::regex(" ,"), ",");

    // 统一转成新格式
    Lineup lineup(str);
    str = lineup.Generate();

    buffer_lineup_string->text(str.c_str());
}

void Window::cb_spawn_mutex_0(Fl_Widget *, void *w)
{
    ((Window *)w)->cb_spawn_mutex_0();
}

void Window::cb_spawn_mutex_0()
{
    if (check_zombie[0]->value() == 1 && limit_species)
        check_zombie[3]->value(0);
    cb_spawn_count_check();
}

void Window::cb_spawn_mutex_3(Fl_Widget *, void *w)
{
    ((Window *)w)->cb_spawn_mutex_3();
}

void Window::cb_spawn_mutex_3()
{
    if (check_zombie[3]->value() == 1 && limit_species)
        check_zombie[0]->value(0);
    cb_spawn_count_check();
}

void Window::cb_spawn_count_check(Fl_Widget *, void *w)
{
    ((Window *)w)->cb_spawn_count_check();
}

void Window::cb_spawn_count_check()
{
    int count = 1; // 普僵必出
    for (size_t i = 0; i < 20; i++)
        if ((spawn_type[i] != 19) && (spawn_type[i] != 20))
            count += check_zombie[i]->value() == 1 ? 1 : 0;
#ifdef _DEBUG
    std::wcout << L"出怪总数(包括普僵不包括雪人蹦极): " << count << std::endl;
#endif

    for (size_t i = 0; i < 20; i++)
    {
        if ((spawn_type[i] != 19) && (spawn_type[i] != 20))
        {
            if (limit_species && count >= 11) // 限制出怪类型总数
            {
                // 超限了, 把没选的停用
                if (check_zombie[i]->value() == 0)
                    check_zombie[i]->deactivate();
            }
            else
            {
                // 没超, 把所有停用的启用
                if (check_zombie[i]->active() == 0)
                    check_zombie[i]->activate();
            }
        }
    }
}

void Window::cb_clear_checked_zombies(Fl_Widget *, void *w)
{
    ((Window *)w)->cb_clear_checked_zombies();
}

void Window::cb_clear_checked_zombies()
{
    for (size_t i = 0; i < 20; i++)
        check_zombie[i]->value(0);
    cb_spawn_count_check();
}

void Window::cb_disable_limit_species(Fl_Widget *, void *w)
{
    ((Window *)w)->cb_disable_limit_species();
}

void Window::cb_disable_limit_species()
{
    if (limit_species)
    {
        limit_species = false;
#ifdef _PTK_CHINESE_UI
        button_spawn_extra->replace(1, EMOJI("✅", "[启用限制]"));
#else
        button_spawn_extra->replace(1, "[ Enable Species Limit ]");
#endif
    }
    else
    {
        limit_species = true;
#ifdef _PTK_CHINESE_UI
        button_spawn_extra->replace(1, EMOJI("❎", "[取消限制]"));
#else
        button_spawn_extra->replace(1, "[ Disable Species Limit ]");
#endif
    }

    button_spawn_extra->value(0);
    cb_spawn_count_check();
}

#ifdef _PTK_CHINESE_UI

void Window::cb_switch_layout_xwz(Fl_Widget *, void *w)
{
    ((Window *)w)->cb_switch_layout_xwz();
}

void Window::cb_switch_layout_xwz()
{
    const int layout_ori[20] = {
        2, 3, 4, 5, 6,      //
        7, 8, 11, 12, 14,   //
        15, 16, 17, 18, 19, //
        20, 21, 22, 23, 32  //
    };

    const int layout_xwz[20] = {
        2, 5, 4, 6, 16,    //
        21, 3, 8, 11, 18,  //
        12, 15, 7, 17, 14, //
        22, 23, 32, 20, 19 //
    };

    if (this->switch_layout)
    {
        for (size_t r = 0; r < 4; r++)
            for (size_t c = 0; c < 5; c++)
            {
                int x = this->xy[r * 5 + c][0];
                int y = this->xy[r * 5 + c][1];
                check_zombie[r * 5 + c]->position(x, y);
            }
        this->switch_layout = false;
    }
    else
    {
        for (size_t r = 0; r < 4; r++)
            for (size_t c = 0; c < 5; c++)
                for (size_t i = 0; i < 4; i++)
                    for (size_t j = 0; j < 5; j++)
                        if (layout_xwz[r * 5 + c] == layout_ori[i * 5 + j])
                        {
                            int x = this->xy[r * 5 + c][0];
                            int y = this->xy[r * 5 + c][1];
                            check_zombie[i * 5 + j]->position(x, y);
                        }
        this->switch_layout = true;
    }

    button_spawn_extra->value(0);

    this->redraw();
}

#endif

void Window::cb_switch_spawn_mode(Fl_Widget *, void *w)
{
    ((Window *)w)->cb_switch_spawn_mode();
}

void Window::cb_switch_spawn_mode()
{
#ifdef _PTK_CHINESE_UI
    bool on = check_tooltips->value() == 1;
#endif

    switch (button_spawn_mode->value())
    {
    case 0: // 自然
        choice_giga_weight->deactivate();
        check_giga_limit->deactivate();
#ifdef _PTK_CHINESE_UI
        button_set_spawn->copy_label("自然出怪 (游戏生成)");
        button_set_spawn->copy_tooltip(on ? "Natural (Game Generate)" : nullptr);
#else
        button_set_spawn->copy_label("Natural  (Game Generate)");
#endif
        break;

    case 1: // 极限
    default:
        choice_giga_weight->deactivate();
        check_giga_limit->activate();
#ifdef _PTK_CHINESE_UI
        button_set_spawn->copy_label("极限出怪 (均匀填充)");
        button_set_spawn->copy_tooltip(on ? "Extreme (Filling Evenly)" : nullptr);
#else
        button_set_spawn->copy_label("Extreme  (Filling Evenly)");
#endif
        break;

    case 2: // 模拟
        choice_giga_weight->activate();
        check_giga_limit->activate();
#ifdef _PTK_CHINESE_UI
        button_set_spawn->copy_label("模拟出怪 (加权随机)");
        button_set_spawn->copy_tooltip(on ? "Simulate (Weighted Random)" : nullptr);
#else
        button_set_spawn->copy_label("Simulate (Weighted Random)");
#endif
        break;
    }
}

void Window::cb_open_file(Fl_Widget *, void *w)
{
    ((Window *)w)->cb_open_file();
}

void Window::cb_open_file()
{
    TCHAR szFileName[MAX_PATH];

    OPENFILENAME ofn;
    ZeroMemory(&ofn, sizeof(ofn));
    ofn.lStructSize = sizeof(ofn);
    ofn.hwndOwner = nullptr;
    // hInstance
    ofn.lpstrFilter = L"PAK (*.pak)\0*.pak\0";
    // lpstrCustomFilter
    // nMaxCustFilter
    ofn.nFilterIndex = 1;
    ofn.lpstrFile = szFileName;
    ofn.lpstrFile[0] = '\0';
    ofn.nMaxFile = sizeof(szFileName);
    ofn.lpstrFileTitle = nullptr;
    ofn.nMaxFileTitle = 0;
    ofn.lpstrInitialDir = nullptr;
    // lpstrTitle
    ofn.Flags = OFN_PATHMUSTEXIST | OFN_FILEMUSTEXIST;
    // nFileOffset
    // nFileExtension
    // lpstrDefExt
    // lCustData
    // lpfnHook
    // lpTemplateName
    // pvReserved
    // dwReserved
    // FlagsEx

    if (GetOpenFileNameW(&ofn) == TRUE)
    {
#ifdef _DEBUG
        std::wcout << L"打开文件: " << std::wstring(szFileName) << std::endl;
#endif
        std::string file_path = utf8_encode(std::wstring(szFileName));
        input_file->value(file_path.c_str());

        if (input_dir->size() == 0)
        {
            wchar_t self_path[MAX_PATH];
            DWORD length = GetModuleFileNameW(nullptr, self_path, MAX_PATH);
            if (length != 0)
            {
                std::string dir_path = utf8_encode(std::wstring(self_path));
                dir_path = dir_path.substr(0, dir_path.find_last_of("\\") + 1) //
                           + "extract_" + std::to_string(std::time(nullptr));
                input_dir->value(dir_path.c_str());
            }
        }
    }
}

void Window::cb_open_dir(Fl_Widget *, void *w)
{
    ((Window *)w)->cb_open_dir();
}

void Window::cb_open_dir()
{
    TCHAR szPathName[MAX_PATH];

    BROWSEINFO bi;
    ZeroMemory(&bi, sizeof(bi));
    bi.hwndOwner = nullptr;
    bi.pidlRoot = nullptr;
    // pszDisplayName
#ifdef _PTK_CHINESE_UI
    bi.lpszTitle = L"选择要打包的文件夹：";
#else
    bi.lpszTitle = L"Choose Folder To Pack: ";
#endif
    bi.ulFlags = BIF_RETURNONLYFSDIRS | BIF_USENEWUI | BIF_NONEWFOLDERBUTTON;
    bi.lpfn = nullptr;
    // lParam
    // iImage

    LPITEMIDLIST lpDlist;
    lpDlist = SHBrowseForFolder(&bi);
    if (lpDlist != NULL)
    {
        if (SHGetPathFromIDList(lpDlist, szPathName) == TRUE)
        {
#ifdef _DEBUG
            std::wcout << L"选择文件夹: " << std::wstring(szPathName) << std::endl;
#endif
            input_dir->value(utf8_encode(std::wstring(szPathName)).c_str());
        }
        CoTaskMemFree(lpDlist);
    }
}

void Window::cb_scheme(Fl_Widget *, void *w)
{
    ((Window *)w)->cb_scheme();
}

void Window::cb_scheme()
{
    Fl::scheme(choice_scheme->text());
    cb_tooltips();
}

void Window::cb_document(Fl_Widget *, void *w)
{
    ((Window *)w)->cb_document();
}

void Window::cb_document()
{
    ShellExecuteW(nullptr, L"open", L"https://pvz.lmintlcx.com/toolkit/", nullptr, nullptr, SW_SHOWNORMAL);
}

void Window::cb_tooltips(Fl_Widget *, void *w)
{
    ((Window *)w)->cb_tooltips();
}

#ifdef _PTK_CHINESE_UI

void Window::cb_tooltips()
{
    static std::vector<std::string> vstr_modes;
    if (vstr_modes.size() == 0)
    {
        for (size_t i = 0; i < 73; i++)
            vstr_modes.push_back("[" + std::to_string(i) + "]" + " " + modes[i]);
    }

    static std::vector<std::string> vstr_rows;
    if (vstr_rows.size() == 0)
    {
        vstr_rows.push_back("All Rows");
        vstr_rows.push_back("1st Row");
        vstr_rows.push_back("2nd Row");
        vstr_rows.push_back("3rd Row");
        vstr_rows.push_back("4th Row");
        vstr_rows.push_back("5th Row");
        vstr_rows.push_back("6th Row");
    }

    static std::vector<std::string> vstr_cols;
    if (vstr_cols.size() == 0)
    {
        vstr_cols.push_back("All Columns");
        vstr_cols.push_back("1st Column");
        vstr_cols.push_back("2nd Column");
        vstr_cols.push_back("3rd Column");
        vstr_cols.push_back("4th Column");
        vstr_cols.push_back("5th Column");
        vstr_cols.push_back("6th Column");
        vstr_cols.push_back("7th Column");
        vstr_cols.push_back("8th Column");
        vstr_cols.push_back("9th Column");
    }

    static std::vector<std::string> vstr_plants;
    if (vstr_plants.size() == 0)
        for (size_t i = 0; i < 48; i++)
            vstr_plants.push_back("[" + std::to_string(i) + "]" + " " + plants[i]);

    static std::vector<std::string> vstr_zombies;
    if (vstr_zombies.size() == 0)
        for (size_t i = 0; i < 33; i++)
            vstr_zombies.push_back("[" + std::to_string(i) + "]" + " " + zombies[i]);

    static std::vector<std::string> vstr_items;
    if (vstr_items.size() == 0)
    {
        vstr_items.push_back("Plants");
        vstr_items.push_back("Zombies");
        vstr_items.push_back("Ladders");
        vstr_items.push_back("Graves");
        vstr_items.push_back("Rakes");
    }

    static std::vector<std::string> vstr_slots;
    if (vstr_slots.size() == 0)
    {
        vstr_slots.push_back("1st Seed");
        vstr_slots.push_back("2nd Seed");
        vstr_slots.push_back("3rd Seed");
        vstr_slots.push_back("4th Seed");
        vstr_slots.push_back("5th Seed");
        vstr_slots.push_back("6th Seed");
        vstr_slots.push_back("7th Seed");
        vstr_slots.push_back("8th Seed");
        vstr_slots.push_back("9th Seed");
        vstr_slots.push_back("10th Seed");
    }

    static std::vector<std::string> vstr_scenes;
    if (vstr_scenes.size() == 0)
    {
        vstr_scenes.push_back("Day");
        vstr_scenes.push_back("Night");
        vstr_scenes.push_back("Pool");
        vstr_scenes.push_back("Fog");
        vstr_scenes.push_back("Roof");
        vstr_scenes.push_back("Moon");
    }

    static std::vector<std::string> vstr_debugs;
    if (vstr_debugs.size() == 0)
    {
        vstr_debugs.push_back("Off");
        vstr_debugs.push_back("Spawning");
        vstr_debugs.push_back("Music");
        vstr_debugs.push_back("Memory");
        vstr_debugs.push_back("Collision");
    }

    bool on = check_tooltips->value() == 1;

    check_unlock_sun_limit->copy_tooltip(on ? "No Upper Limit to Sunlight" : "阳光无上限");
    input_sun->copy_tooltip("0 ~ 9990");
    button_sun->copy_tooltip(on ? "Sun" : nullptr);
    input_money->copy_tooltip("0 ~ 99999");
    button_money->copy_tooltip(on ? "Coins" : nullptr);
    check_auto_collected->copy_tooltip(on ? "Auto Collected" : nullptr);
    check_not_drop_loot->copy_tooltip(on ? "Don\'t Drop Loot" : nullptr);
    check_fertilizer->copy_tooltip(on ? "Infinite Fertilizer" : nullptr);
    check_bug_spray->copy_tooltip(on ? "Infinite Bug Spray" : nullptr);
    check_tree_food->copy_tooltip(on ? "Infinite Tree Food" : nullptr);
    check_chocolate->copy_tooltip(on ? "Infinite Chocolate" : nullptr);
    input_wisdom_tree->copy_tooltip("0 ~ 1000");
    button_wisdom_tree->copy_tooltip(on ? "Feet" : nullptr);
    check_free_planting->copy_tooltip(on ? "Free Planting" : nullptr);
    check_placed_anywhere->copy_tooltip(on ? "Place Anywhere" : nullptr);
    check_fast_belt->copy_tooltip(on ? "Seamless Conveyor Belt" : nullptr);
    check_lock_shovel->copy_tooltip(on ? "Shovel Continuously" : nullptr);
    choice_mode->copy_tooltip(on ? vstr_modes[choice_mode->value()].c_str() : nullptr);
    choice_adventure->copy_tooltip(on ? choice_adventure->text(choice_adventure->value()) : nullptr);
    button_mix->copy_tooltip(on ? "Modify Mode" : nullptr);
    input_level->copy_tooltip("0 ~ 999999");
    button_level->copy_tooltip(on ? "Endless Rounds" : nullptr);
    button_unlock->copy_tooltip(on ? "Get Gold Sunflower Trophy" : "解锁黄金向日葵奖杯");
    button_direct_win->copy_tooltip(on ? "Level Complete" : nullptr);
    check_brightest_cob_cannon->copy_tooltip(on ? "End with Brightest Cob" : "结束时炮最亮");

    choice_row->copy_tooltip(on ? vstr_rows[choice_row->value()].c_str() : nullptr);
    choice_col->copy_tooltip(on ? vstr_cols[choice_col->value()].c_str() : nullptr);
    choice_plant->copy_tooltip(on ? vstr_plants[choice_plant->value()].c_str() : nullptr);
    choice_zombie->copy_tooltip(on ? vstr_zombies[choice_zombie->value()].c_str() : nullptr);
    button_put_plant->copy_tooltip(on ? "Put Plant" : nullptr);
    check_imitater->copy_tooltip(on ? "Imitater" : nullptr);
    button_put_zombie->copy_tooltip(on ? "Put Zombie" : nullptr);
    button_put_ladder->copy_tooltip(on ? "Put Ladder" : nullptr);
    button_put_grave->copy_tooltip(on ? "Put Grave" : nullptr);
    button_put_rake->copy_tooltip(on ? "Put Rake" : nullptr);
    button_lawn_mower->copy_tooltip(on ? "Lawn Mowers" : nullptr);
    choice_item->copy_tooltip(on ? vstr_items[choice_item->value()].c_str() : nullptr);
    button_clear->copy_tooltip(on ? "Clear All" : nullptr);
    check_plant_invincible->copy_tooltip(on ? "Plant Invincible" : nullptr);
    check_plant_weak->copy_tooltip(on ? "Plant Weak" : nullptr);
    check_zombie_invincible->copy_tooltip(on ? "Zombie Invincible" : nullptr);
    check_zombie_weak->copy_tooltip(on ? "Zombie Weak" : nullptr);
    check_reload_instantly->copy_tooltip(on ? "Reload Instantly" : nullptr);
    check_mushroom_awake->copy_tooltip(on ? "Mushroom Awake" : nullptr);
    check_stop_spawning->copy_tooltip(on ? "Pause Spawning" : nullptr);
    check_stop_zombies->copy_tooltip(on ? "Stay In Place" : nullptr);
    check_lock_butter->copy_tooltip(on ? "Always Butter" : nullptr);
    check_no_crater->copy_tooltip(on ? "No Crater" : nullptr);
    check_no_ice_trail->copy_tooltip(on ? "No Ice Trail" : nullptr);
    check_zombie_not_explode->copy_tooltip(on ? "Never Explode" : nullptr);

    choice_slot->copy_tooltip(on ? vstr_slots[choice_slot->value()].c_str() : nullptr);
    if (choice_seed->value() == -1)
        choice_seed->copy_tooltip(nullptr);
    else
        choice_seed->copy_tooltip(on ? vstr_plants[choice_seed->value()].c_str() : nullptr);
    button_seed->copy_tooltip(on ? "Replace Seed" : nullptr);
    check_seed_imitater->copy_tooltip(on ? "Imitater" : nullptr);
    check_lineup_mode->copy_tooltip(on ? "Lineup Mode" : nullptr);
    button_auto_ladder->copy_tooltip(on ? "Smart Laddering" : nullptr);
    button_put_lily_pad->copy_tooltip(on ? "Pool \'s Lily Pad" : nullptr);
    button_put_flower_pot->copy_tooltip(on ? "Roof \'s Flower Pot" : nullptr);
    button_reset->copy_tooltip(on ? "Reset Scene" : nullptr);
    choice_scene->copy_tooltip(on ? vstr_scenes[choice_scene->value()].c_str() : nullptr);
    button_load_lineup->copy_tooltip(on ? "Load Lineup List File (***.yml)" : nullptr);
    for (size_t i = 0; i < 6; i++)
        choice_lineup_name[i]->copy_tooltip(on ? "(Lineup Name)" : nullptr);
    button_get_lineup->copy_tooltip(on ? "Get Lineup Code" : nullptr);
    button_copy_lineup->copy_tooltip(on ? "Copy (Export)" : nullptr);
    button_paste_lineup->copy_tooltip(on ? "Paste (Import)" : nullptr);
    button_set_lineup->copy_tooltip(on ? "Apply Current Setup" : nullptr);
    editor_lineup_string->copy_tooltip(on ? "(Lineup Code)" : "(阵型代码)");
    button_capture->copy_tooltip(on ? "Screenshot to Clipboard" : "截图到剪贴板");

    for (size_t i = 0; i < 20; i++)
    {
        std::string z = "[" + std::to_string(spawn_type[i]) + "]" //
                        + " " + zombies[spawn_type[i]];
        check_zombie[i]->copy_tooltip(on ? z.c_str() : nullptr);
    }
    choice_giga_weight->copy_tooltip(on ? "GigaGargantuar\'s weight in non-huge waves.\nOriginal: 1000 (non-huge waves), 6000 (huge waves)."
                                        : "非旗帜波的红眼僵尸随机权重。\n原始值：普通波 1000，旗帜波 6000。");
    check_giga_limit->copy_tooltip(on ? "No GigaGargantuar in 11th ~ 19th waves."
                                      : "第 11 ~ 19 波不出红眼僵尸。");
    button_set_spawn->copy_tooltip(on ? "Right click to change spawning mode."
                                      : "右键切换出怪列表生成方法。");

    choice_music->copy_tooltip(on ? choice_music->text(choice_music->value()) : nullptr);
    button_music->copy_tooltip(on ? "Background Music" : nullptr);
    button_userdata->copy_tooltip(on ? "Open Userdata Folder" : nullptr);
    check_no_fog->copy_tooltip(on ? "Clear Fog" : nullptr);
    check_see_vase->copy_tooltip(on ? "Transparent Vase" : nullptr);
    check_background->copy_tooltip(on ? "Enable PvZ to Run in Background" : nullptr);
    check_readonly->copy_tooltip(on ? "Userdata Readonly" : nullptr);
    button_file->copy_tooltip(on ? "Choose File" : nullptr);
    input_file->copy_tooltip(on ? "(File Path)" : "(文件路径)");
    button_unpack->copy_tooltip(on ? "Extract" : nullptr);
    button_dir->copy_tooltip(on ? "Choose Folder" : nullptr);
    input_dir->copy_tooltip(on ? "(Folder Path)" : "(文件夹路径)");
    button_pack->copy_tooltip(on ? "Pack" : nullptr);
    choice_debug->copy_tooltip(on ? vstr_debugs[choice_debug->value()].c_str() : nullptr);
    button_debug->copy_tooltip(on ? "Debug" : nullptr);
    choice_speed->copy_tooltip(on ? choice_speed->text(choice_speed->value()) : nullptr);
    button_speed->copy_tooltip(on ? "Speed" : nullptr);
    check_limbo_page->copy_tooltip(on ? "Show Limbo Page" : nullptr);
    choice_scheme->copy_tooltip(on ? choice_scheme->text(choice_scheme->value()) : nullptr);
    check_tooltips->copy_tooltip("English Tooltips");
    button_document->copy_tooltip(on ? "Document" : nullptr);
    button_about->copy_tooltip(on ? "About ..." : nullptr);

    box_mask_resource->copy_tooltip(on ? "Resources" : nullptr);
    box_mask_battle->copy_tooltip(on ? "Battlefield" : nullptr);
    box_mask_lineup->copy_tooltip(on ? "Setups" : nullptr);
    box_mask_spawn->copy_tooltip(on ? "Spawning" : nullptr);
    box_mask_others->copy_tooltip(on ? "Others" : nullptr);

    cb_find_result_tooltip();

    // 触发重新显示
    if (on && this->shown())
    {
        HWND me = fl_xid(this);
        POINT point = {0, 0};
        SendMessageW(me, WM_MOUSEMOVE, 0, MAKELONG(point.x, point.y));
        GetCursorPos(&point);
        ScreenToClient(me, &point);
        SendMessageW(me, WM_MOUSEMOVE, 0, MAKELONG(point.x, point.y));
    }

    // 顺便更新标题

    std::string title;
    title = on ? "PvZ Toolkit - Plants vs. Zombies Tool Kit"
               : "PvZ Toolkit - 植物大战僵尸辅助工具";
    this->copy_label(title.c_str());
}

#else

void Window::cb_tooltips()
{
    input_sun->copy_tooltip("0 ~ 9990");
    input_money->copy_tooltip("0 ~ 99999");
    input_wisdom_tree->copy_tooltip("0 ~ 1000");
    input_level->copy_tooltip("0 ~ 999999");

    for (size_t i = 0; i < 6; i++)
        choice_lineup_name[i]->copy_tooltip("(Lineup Name)");

    editor_lineup_string->copy_tooltip("(Lineup Code)");

    choice_giga_weight->copy_tooltip("Original: 1000 (non-huge waves), 6000 (huge waves).");
    button_set_spawn->copy_tooltip("Right click to change spawning mode.");

    input_file->copy_tooltip("(File Path)");
    input_dir->copy_tooltip("(Folder Path)");

    cb_find_result_tooltip();
}

#endif

void Window::cb_about(Fl_Widget *, void *w)
{
    ((Window *)w)->cb_about();
}

void Window::cb_about()
{
    std::string version_full = std::string()             //
                               + VERSION_NAME            //
                               + " "                     //
                               + "("                     //
                               + TOSTRING(VERSION_BUILD) //
                               + ")";                    //

    std::string dep_fltk_ver = std::string("FLTK")          //
                               + " "                        //
                               + TOSTRING(FL_MAJOR_VERSION) //
                               + "."                        //
                               + TOSTRING(FL_MINOR_VERSION) //
                               + "."                        //
                               + TOSTRING(FL_PATCH_VERSION) //
                               + " dev";                    // TODO

    std::string dep_zlib_ver = std::string("zlib")               //
                               + " "                             //
                               + TOSTRING(ZLIB_VER_MAJOR)        //
                               + "."                             //
                               + TOSTRING(ZLIB_VER_MINOR)        //
                               + "."                             //
                               + TOSTRING(ZLIB_VER_REVISION)     //
                               + "."                             //
                               + TOSTRING(ZLIB_VER_SUBREVISION); //

    // "Sep  1 2021"
    //  0123456789A
    std::string date = std::string(__DATE__);
    std::string time = std::string(__TIME__);
    if (date[4] == ' ')
        date[4] = '0';
    const char s_month[4] = {date[0], date[1], date[2], 0};
    const char month_names[] = "JanFebMarAprMayJunJulAugSepOctNovDec";
    int month = (strstr(month_names, s_month) - month_names) / 3 + 1;
    std::string build_date = std::string()                                     //
                             + date[7] + date[8] + date[9] + date[10]          //
                             + "/"                                             //
                             + (month < 10 ? "0" : "") + std::to_string(month) //
                             + "/"                                             //
                             + date[4] + date[5];                              //
    std::string build_date_time = build_date + " " + time;

    std::string official_website = "https://pvz.lmintlcx.com/";
    std::string build_date_year = std::string() + date[7] + date[8] + date[9] + date[10];
    std::string copyright = "© 2020 ~ " + build_date_year + " L.Mint. LCX";

    std::string reference_project = "PVZ Helper 1.8.7";
    std::string origin_author = "zhumxiang @@ GitHub";

    std::string dependencies = dep_fltk_ver + " + " + dep_zlib_ver;

    std::string acknowledgements = "kmtohoem / 63enjoy / 273.15K";

#ifdef _PTK_CHINESE_UI
    std::string text = std::string()                                    //
                       + "植物大战僵尸辅助工具" + "\n"                  //
                       + "Plants vs. Zombies Tool Kit" + "\n"           //
                       + "\n"                                           //
                       + "发行版本：" + "\t" + version_full + "\n"      //
                       + "编译时间：" + "\t" + build_date_time + "\n"   //
                       + "\n"                                           //
                       + "官方网站：" + "\t" + official_website + "\n"  //
                       + "版权所有：" + "\t" + copyright + "\n"         //
                       + "\n"                                           //
                       + "参考项目：" + "\t" + reference_project + "\n" //
                       + "原始作者：" + "\t" + origin_author + "\n"     //
                       + "\n"                                           //
                       + "开发依赖：" + "\t" + dependencies + "\n"      //
                       + "鸣谢名单：" + "\t" + acknowledgements + "\n"; //
#else
    std::string text = std::string()                                        //
                       + "PvZ Toolkit" + "\n"                               //
                       + "Plants vs. Zombies Tool Kit" + "\n"               //
                       + "\n"                                               //
                       + "Version:      " + "\t" + version_full + "\n"      //
                       + "Date:         " + "\t" + build_date_time + "\n"   //
                       + "\n"                                               //
                       + "Website:      " + "\t" + official_website + "\n"  //
                       + "Copyright:    " + "\t" + copyright + "\n"         //
                       + "\n"                                               //
                       + "Origin:       " + "\t" + reference_project + "\n" //
                       + "Author:       " + "\t" + origin_author + "\n"     //
                       + "\n"                                               //
                       + "Dependencies: " + "\t" + dependencies + "\n"      //
                       + "Credits:      " + "\t" + acknowledgements + "\n"; //
#endif

#ifdef _PTK_CHINESE_UI
    fl_message_title("关于 PvZ Toolkit");
#else
    fl_message_title("About PvZ Toolkit");
#endif
    fl_message(text.c_str());
}

void Window::cb_danmaku_connect(Fl_Widget *, void *w)
{
    ((Window *)w)->cb_danmaku_connect();
}

void Window::cb_danmaku_connect()
{
    if (danmaku_connected)
    {
        douyin->Disconnect();
        danmaku_connected = false;
        button_danmaku_connect->label("连接");
        box_danmaku_status->label("未连接");
        buffer_danmaku_log->append("已断开连接\n");
    }
    else
    {
        std::string room_id = input_room_id->value();
        if (room_id.empty())
        {
            fl_alert("请输入直播间号！");
            return;
        }

        if (douyin->Connect(room_id))
        {
            danmaku_connected = true;
            button_danmaku_connect->label("断开");
            box_danmaku_status->label("已连接");
            buffer_danmaku_log->append("正在连接...\n");

            douyin->SetDanmakuCallback([this](const DanmakuMessage &msg) {
                Fl::lock();
                this->OnDanmakuReceived(msg);
                Fl::unlock();
            });
        }
        else
        {
            buffer_danmaku_log->append("连接失败！\n");
        }
    }
}

void Window::OnDanmakuReceived(const DanmakuMessage &msg)
{
    char log_line[512];

    switch (msg.type)
    {
        case DanmakuType::Text:
            snprintf(log_line, sizeof(log_line), "[弹幕] %s: %s\n",
                     msg.user_name.c_str(), msg.content.c_str());
            break;
        case DanmakuType::Gift:
            snprintf(log_line, sizeof(log_line), "[礼物] %s 送 %s x%d (价值%d)\n",
                     msg.user_name.c_str(), msg.gift_name.c_str(),
                     msg.gift_count, msg.gift_value);
            break;
        case DanmakuType::Like:
            snprintf(log_line, sizeof(log_line), "[点赞] %s 点了赞\n",
                     msg.user_name.c_str());
            break;
        default:
            snprintf(log_line, sizeof(log_line), "[%d] %s: %s\n",
                     (int)msg.type, msg.user_name.c_str(), msg.content.c_str());
            break;
    }

    buffer_danmaku_log->append(log_line);

    const Rule *rule = nullptr;

    if (msg.type == DanmakuType::Gift && !msg.gift_name.empty())
    {
        rule = rule_engine->MatchGift(msg.gift_name, msg.gift_value);
    }
    else if (!msg.content.empty())
    {
        rule = rule_engine->MatchDanmaku(msg.content);
    }

    if (rule && rule->enabled)
    {
        ExecuteRuleAction(*rule);
    }
}

void Window::ExecuteRuleAction(const Rule &rule)
{
    if (!pvz->GameOn())
        return;

    switch (rule.action)
    {
        case RuleAction::AddSunlight:
            pvz->SetSun(pvz->ReadMemory<int>({0}) + rule.value);
            break;

        case RuleAction::SubtractSunlight:
            pvz->SetSun(pvz->ReadMemory<int>({0}) - rule.value);
            break;

        case RuleAction::SpawnZombieRandom:
            for (int i = 0; i < rule.value; i++)
            {
                int row = rand() % 5;
                int col = 8 + rand() % 2;
                pvz->PutZombie(row, col, 0);
            }
            break;

        case RuleAction::SpawnZombieRow:
            for (int col = 8; col < 9; col++)
            {
                pvz->PutZombie(rule.value, col, 0);
            }
            break;

        case RuleAction::FullscreenZombie:
            for (int row = 0; row < 5; row++)
            {
                for (int i = 0; i < rule.value; i++)
                {
                    int col = 8 + rand() % 2;
                    pvz->PutZombie(row, col, 0);
                }
            }
            break;

        case RuleAction::KillAllZombies:
            pvz->KillAllZombies();
            break;

        case RuleAction::PlantInvincible:
            pvz->PlantInvincible(true);
            break;

        case RuleAction::PlantWeak:
            pvz->PlantWeak(true);
            break;

        case RuleAction::ZombieInvincible:
            pvz->ZombieInvincible(true);
            break;

        case RuleAction::ZombieWeak:
            pvz->ZombieWeak(true);
            break;

        case RuleAction::DirectWin:
            pvz->DirectWin(true);
            break;

        case RuleAction::UnlockSunLimit:
            pvz->UnlockSunLimit(true);
            break;

        default:
            break;
    }

    if (!rule.sound.empty())
    {
        audio_player->PlaySound(rule.sound);
    }
}

} // namespace Pt
