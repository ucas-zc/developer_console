# 设定automake的选项，设成foreign时，automake会改用一般软件套件标准来检查，而gnu是缺省设置，该级别下将尽可能地检查包是否服从GNU标准，gnits是严格标准，不推荐
AUTOMAKE_OPTIONS = foreign
noinst_PROGRAMS = test

# 指定源文件
SOURCES = $(top_srcdir)/src/demo.c 

# 头文件目录
INCLUDES = -I$(top_srcdir)/hdr

# 链接库
test_LDADD = 

# 源文件
test_SOURCES = $(SOURCES) \
			   $(top_srcdir)/src/main.c

# 设置编译选项
test_CFLAGS = -g
# 设置可执行文件的名称
bin_PROGRAMS = test

# 安装指令操作设置
install-exec-local:
	cp -f profile $(prefix)
	mkdir -p $(prefix)/bin
	$(LIBTOOL) --mode=install $(INSTALL_PROGRAM) test $(prefix)/bin
	mkdir -p $(prefix)/etc
	cp -r ./etc/* $(prefix)/etc
	mkdir -p $(prefix)/tools
	mkdir -p $(prefix)/lib
	mkdir -p ./bin
	cp -r $(prefix)/bin/test ./bin

# 打包
package:
	if [ -d dist ]; then 
		cp -r dist $(PACKAGE_NAME); 
	fi;
	if [ -d $(PACKAGE_NAME) ]; then 
		tar -czvf $(PACKAGE_NAME).tar.gz $(PACKAGE_NAME); 
	fi;
