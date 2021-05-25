# developer_console configure
# Centos系统下automake安装（默认root权限）
yum install -y aclocal
yum install -y autoscan
yum install -y autoconf
yum install -y autoheader
yum install -y automake

# Ubuntu系统下automake安装（默认root权限）
apt-get install -y aclocal
apt-get install -y autoscan
apt-get install -y autoconf
apt-get install -y autoheader
apt-get install -y automake

# 首先我们需要通过autoscan生成configure.scan，并将其重命名为configure.ac或者configure.in；其次，通过aclocal指令生成aclocal.m4，且通过autoconf生成configure文件；接着，执行autoheader指令生成config.h.in，再书写Makefile.am文件，且通过automake指令生成Makefile.in，如果执行automake报错，执行automake --add-missing补齐相关安装即可。
# 完成上述步骤后，我们就可以通过 ./configure && make -j4 && make install进行编译安装了。
