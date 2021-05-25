# developer_console cmake
# Centos系统下cmake 安装（源码安装）
wget https://github.com/Kitware/CMake/releases/download/v3.20.2/cmake-3.20.2.tar.gz
tar -zxvf cmake-3.20.2.tar.gz
cd cmake-3.20.2 && ./bootstrap && gmake && make install

# 关于cmake指令的操作，对于一般的cmake项目，直接在CMakeLists.txt目录下执行cmake即可，或者构建一个生成目录build，然后进入build目录进行cmake ..即rm -rf build && mkdir build && cd build && cmake ..
# 对于本仓库所讲到的实例，可见build.sh查看编译方式
