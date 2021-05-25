#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

# 声明本文件要求的autoconf版本最低要求
AC_PREREQ([2.69])
# 定义软件的名称和版本等信息，”FULL-PACKAGE-NAME”为软件包名称，”VERSION”为软件版本号，”BUG-REPORT-ADDRESS”为BUG报告地址（一般为软件作者邮件地址）
AC_INIT(test, 1.0.0, 173882957@qq.com)
AM_INIT_AUTOMAKE(test, 1.0.0)
# 检查libtool是否安装
AC_PROG_LIBTOOL
# 用来侦测所指定的源码文件是否存在，来确定源码目录的有效性
AC_CONFIG_SRCDIR([src/main.c])
# 用于生成config.h文件，以便autoheader使用
AC_CONFIG_HEADERS([config.h])

# 这里是实现自定义参数的部份
AC_ARG_ENABLE(haha, [ --enable-haha HaHa is present ], --enable-haha=no)
if test "$haha" = yes ; then
	echo "HaHa is here!"
	AC_DEFINE(HAHA)
else
	echo "HaHa isn't here!"
fi

# 设置版本号
MAJOR_VERSION=1
MINOR_VERSION=0
SUB_VERSION=0
SYSTEM_VERSION=${MAJOR_VERSION}.${MINOR_VERSION}.${SUB_VERSION}
AC_SUBST(MAJOR_VERSION)
AC_SUBST(MINOR_VERSION)
AC_SUBST(SUB_VERSION)
AC_SUBST(SYSTEM_VERSION)

# 设置系统时间
SYSTEM_TIME=`date +%Y%m%d`
AC_SUBST(SYSTEM_TIME)

# 设置系统平台
PLAT_FORM=`uname -m`
AC_SUBST(PLAT_FORM)

# 设置安装的默认路径
AC_PREFIX_DEFAULT(`pwd`/dist)

# 设置安装包的名称
PACKAGE_NAME=${PACKAGE_NAME}-${SYSTEM_VERSION}-RELEASE-${PLAT_FORM}-${SYSTEM_TIME}
AC_SUBST(PACKAGE_NAME)

# 用来指定编译器，如果不指定，选用默认gcc
AC_PROG_CC

# 生成Makefile文件，当前目录和src目录下各生成一个Makefile文件
AC_OUTPUT([Makefile]) 
