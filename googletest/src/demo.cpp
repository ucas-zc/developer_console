#include "demo.h"

// 构造函数
demo::demo()
{}

// 析构函数
demo::~demo()
{}

// 返回bool类型值
bool demo::returnBool(bool flag)
{
    if (flag)
        return true;
    
    return false;
}

// 返回int类型值
int32_t demo::returnInt(bool flag)
{
    if (flag)
        return 1;

    return 0;
}

// 返回字符串
std::string demo::returnString(bool flag)
{
    if (flag)
        return "cool";

    return "hot";
}

// 返回float类型值
float demo::returnFloat(bool flag)
{
    if (flag)
        return 1.0;

    return 0.0;
}

// 返回double类型值
double demo::returnDouble(bool flag)
{
    if (flag)
        return 1.0;

    return 0.0;
}
