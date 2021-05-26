#include "demo.h"
#include "gtest/gtest.h"

namespace 
{
    class TestCase : public testing::Test
    {
        void SetUp() override
        {
            std::cout<<"Test case start!"<<std::endl;
        };

        void TearDown() override
        {
            std::cout<<"Test case end!"<<std::endl;
        };
    };
}

TEST_F(TestCase, TEST_DEMO)
{
    demo d;
    // bool类型值检查
    // ASSERT系列
    ASSERT_TRUE(d.returnBool(true));
    ASSERT_FALSE(d.returnBool(false));
    // EXPECT系列
    EXPECT_TRUE(d.returnBool(true));
    EXPECT_FALSE(d.returnBool(false));

    // 整型值检查
    // ASSERT系列
    ASSERT_EQ(1, d.returnInt(true));
    ASSERT_NE(0, d.returnInt(true));
    ASSERT_LT(0, d.returnInt(true));
    ASSERT_LE(0, d.returnInt(true));
    ASSERT_LE(1, d.returnInt(true));
    ASSERT_GT(2, d.returnInt(true));
    ASSERT_GE(2, d.returnInt(true));
    ASSERT_GE(1, d.returnInt(true));
    // EXPECT系列
    EXPECT_EQ(1, d.returnInt(true));
    EXPECT_NE(0, d.returnInt(true));
    EXPECT_LT(0, d.returnInt(true));
    EXPECT_LE(0, d.returnInt(true));
    EXPECT_LE(1, d.returnInt(true));
    EXPECT_GT(2, d.returnInt(true));
    EXPECT_GE(2, d.returnInt(true));
    EXPECT_GE(1, d.returnInt(true));

    // 浮点数值检查
    // ASSERT系列
    ASSERT_FLOAT_EQ(1.0, d.returnFloat(true));
    ASSERT_DOUBLE_EQ(1.0, d.returnDouble(true));
    // EXPECT系列
    EXPECT_FLOAT_EQ(1.0, d.returnFloat(true));
    EXPECT_DOUBLE_EQ(1.0, d.returnDouble(true));
   
    // 字符串检查
    // ASSERT系列
    ASSERT_STREQ("cool", d.returnString(true).c_str());
    ASSERT_STRNE("hot", d.returnString(true).c_str()); 
    ASSERT_STRCASEEQ("cooL", d.returnString(true).c_str());
    ASSERT_STRCASENE("Hot", d.returnString(true).c_str()); 
    // EXPECT系列
    EXPECT_STREQ("cool", d.returnString(true).c_str());
    EXPECT_STRNE("hot", d.returnString(true).c_str()); 
    EXPECT_STRCASEEQ("cooL", d.returnString(true).c_str());
    EXPECT_STRCASENE("Hot", d.returnString(true).c_str()); 
}
