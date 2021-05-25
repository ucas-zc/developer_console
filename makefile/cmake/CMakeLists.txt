# CMake 最低版本号要求
cmake_minimum_required (VERSION 3.12.0)

# 链接库路径
if(CMAKE_BUILD_RPATH)
    message("CMAKE_BUILD_RPATH: ${CMAKE_BUILD_RPATH}")
endif()

# 项目信息
project (test)
set (TEST_VERSION 1)
set (TEST_VERSION 0)
set (TEST_VERSION 0)

# 设置编译选项
# 发行版本
if (CMAKE_BUILD_RPATH AND (CMAKE_BUILD_TYPE MATCHES RELEASE)) 
    set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} --std=c++11") 
endif()    
# debug调试版本
if (CMAKE_BUILD_RPATH AND (CMAKE_BUILD_TYPE MATCHES DEBUG))
    set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} --std=c++11 -g")
endif()
# gtest单元测试版本
if (CMAKE_BUILD_RPATH AND (CMAKE_BUILD_TYPE MATCHES GTEST))
    add_definitions(-D_GTEST_)
    set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} --std=c++11 -g -fprofile-arcs -ftest-coverage") 
endif()

# 目录下的所有源文件
aux_source_directory(src TEST_SRC_FILES)

if (CMAKE_BUILD_TYPE MATCHES GTEST)
    aux_source_directory(gtest GTEST_SRC_FILES)
endif()    

# 头文件目录
include_directories(${PROJECT_SOURCE_DIR}/hdr)

# 库文件目录
include_directories(${CMAKE_BUILD_RPATH}/include)
link_directories(${CMAKE_BUILD_RPATH}/lib)

# 指定生成目标
if (CMAKE_BUILD_TYPE MATCHES RELEASE)
    add_executable(test ${TEST_SRC_FILES})
endif()

if (CMAKE_BUILD_TYPE MATCHES DEBUG)
    add_executable(test_debug ${TEST_SRC_FILES})
endif()

if (CMAKE_BUILD_TYPE MATCHES GTEST)
    #添加编译选项
    add_executable(test_gtest ${TEST_SRC_FILES} 
                    ${GTEST_SRC_FILES})
    #链接库gtest和gcov
    target_link_libraries(test_gtest PRIVATE gtest)
    target_link_libraries(test_gtest PRIVATE gcov)

    #执行程序
    add_custom_target(test
    COMMAND ./test_gtest
    WORKING_DIRECTORY ${PROJECT_SOURCE_DIR}/build
    COMMENT "run test suit.")

    #在build目录下执行指令lcov -d CMakeFiles/test_gtest.dir/src -t test_gtest -o 'test_gtest.cov.info' -b . -c
    add_custom_target(gen_coverage
    COMMAND lcov -d CMakeFiles/test_gtest.dir/src -t test_gtest -o 'test_gtest.cov.info' -b . -c
    WORKING_DIRECTORY ${PROJECT_SOURCE_DIR}/build
    COMMENT "genarate coverage info")

    #在build目录下执行genhtml -o cov_result test_gtest.cov.info
    add_custom_target(gen_coverage_html
    COMMAND genhtml -o cov_result test_gtest.cov.info
    WORKING_DIRECTORY ${PROJECT_SOURCE_DIR}/build
    COMMENT "genarate coverage info to ./cov_result")
    
    add_dependencies(gen_coverage test)
    add_dependencies(gen_coverage test_gtest)
    add_dependencies(gen_coverage_html gen_coverage)
endif()
