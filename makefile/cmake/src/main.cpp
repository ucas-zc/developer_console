#include "demo.h"
#ifdef _GTEST_
#include "gtest/gtest.h"
#endif


int main(int argc, char **argv)
{
#ifndef _GTEST_

    print();
    return 0;

#else

    printf("Running main() from %s\n", __FILE__);
    testing::InitGoogleTest(&argc, argv);

    return RUN_ALL_TESTS();

#endif
}
