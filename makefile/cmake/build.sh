#!/bin/bash

# CMAKE_BUILD_TYPE即编译类型
# CMAKE_BUILD_RPATH即链接库路径
# DEBUG即debug版本，RELEASE即release版本，GTEST采用gtest进行单元测试
rm -rf build
mkdir build
cd build
if [ "$1" = "DEBUG" ] ; then
    cmake -DCMAKE_BUILD_TYPE=DEBUG -DCMAKE_BUILD_RPATH=/opt/ide ..
    make
elif [ "$1" = "RELEASE" ] ; then
    cmake -DCMAKE_BUILD_TYPE=RELEASE -DCMAKE_BUILD_RPATH=/opt/ide ..
    make
elif [ "$1" = "GTEST" ] ; then
    cmake -DCMAKE_BUILD_TYPE=GTEST -DCMAKE_BUILD_RPATH=/opt/ide ..
    make
    # 测试代码覆盖率（gcov）
    make gen_coverage_html
else
    echo "Please select CMAKE_BUILD_TYPE!"
fi
