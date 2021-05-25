#include "demo.h"
#include "gtest/gtest.h"

namespace 
{
    class TestDemo : public testing::Test
    {
        void SetUp() override
        {};

        void TearDown() override
        {};
    };
}

TEST_F(TestDemo, TEST_DEMO)
{
    ASSERT_EQ(0, print());
}
