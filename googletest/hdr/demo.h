#ifndef _DEMO_H_
#define _DEMO_H_

#include <iostream>
#include <cstdint>
#include <string>

// 测试demo代码
class demo
{
    public:
        // 构造函数
        demo();
        // 析构函数
        ~demo();

        // 返回Bool类型值
        bool returnBool(bool flag);

        // 返回int类型值
        int32_t returnInt(bool flag);

        // 返回字符串
        std::string returnString(bool flag);

        // 返回浮点数值
        float returnFloat(bool flag);
        double returnDouble(bool flag);
};

#endif
