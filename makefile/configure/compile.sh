# !/bin/bash

aclocal
autoconf
autoheader
libtoolize --automake --copy --debug --force
automake --add-missing && automake
