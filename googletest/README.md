# developer_console
# google test
# 本案例是通过gtest对src/demo.cpp内的五个接口进行单元测试
# 具体的单元测试代码存放在gtest/GTestDemo.cpp内
# 关于gtest的常用的宏如下
#     ASSERT系列                                         EXPECT系列                                   判断依据
# 布尔值检查：
# ASSERT_TRUE(condition);                      |  EXPECT_TRUE(condition);                     | condition is true
# ASSERT_FALSE(condition);                     |  EXPECT_FALSE(condition);                    | condition is false
# 数据型数据检查：
# ASSERT_EQ(expected, actual);                 |  EXPECT_EQ(expected, actual);                | expected == actual
# ASSERT_NE(val1, val2);                       |  EXPECT_NE(val1, val2);                      | val1 != val2
# ASSERT_LT(val1, val2);                       |  EXPECT_LT(val1, val2);                      | val1 < val2
# ASSERT_LE(val1, val2);                       |  EXPECT_LE(val1, val2);                      | val1 <= val2
# ASSERT_GT(val1, val2);                       |  EXPECT_GT(val1, val2);                      | val1 > val2
# ASSERT_GE(val1, val2);                       |  EXPECT_GE(val1, val2);                      | val1 >= val2
# 浮点数检查：
# ASSERT_FLOAT_EQ(expected, actual);           |  EXPECT_FLOAT_EQ(expected, actual);          | 两个float类型数相等
# ASSERT_DOUBLE_EQ(expected, actual);          |  EXPECT_DOUBLE_EQ(expected, actual);         | 两个double类型数相等
# 字符串检查：
# ASSERT_STREQ(expected_str, actual_str);      |  EXPECT_STREQ(expected_str, actual_str);     | 两个C字符串内容相同
# ASSERT_STRNE(str1, str2);                    |  EXPECT_STRNE(str1, str2);                   | 两个C字符串内容不同
# ASSERT_STRCASEEQ(expected_str, actual_str);  |  EXPECT_STRCASEEQ(expected_str, actual_str); | 两个C字符串内容相同，且忽略大小写
# ASSERT_STRCASENE(str1, str2);                |  EXPECT_STRCASENE(str1, str2);               | 两个C字符串内容不同，且忽略大小写

# 关于google test的安装方式如下（Centos系统）
# git clone https://github.com/google/googletest.git
# cd googletest
# mkdir build && cd build && cmake ..
# make && make install
 
