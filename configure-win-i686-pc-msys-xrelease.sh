## warning
## you've to updated LDFLAGS with the real path to libpng
##
LIBPNGROOT="/home/serena/projects/2020-11-27/plotutils27"
./configure \
--host=i686-pc-msys \
--target=i686-pc-msys \
--prefix=/c/pu27x \
--with-libpng \
--with-x \
--enable-libplotter \
--enable-libxmi \
CC="gcc" \
CXX="g++" \
CPPFLAGS="-DPNG_PTR=1 -DINCLUDE_PNG_SUPPORT  -DHAVE_LIBPNG=1  -I/mingw32/include -I/$LIBPNGROOT/include/ -Iinclude -DMINGW=1 -DGNUC=1 " \
CFLAGS="-static -static-libgcc -DPNG_PTR=1 -DINCLUDE_PNG_SUPPORT=1 -DHAVE_LIBPNG=1  -I/mingw32/include -Iinclude -I/$LIBPNGROOT/include -DMINGW=1" \
CXXFLAGS="-static -static-libstdc++ -DPNG_PTR=1 -DINCLUDE_PNG_SUPPORT=1 -DHAVE_LIBPNG=1  -I/mingw32/include -I/$LIBPNGROOT/include/libpng16 -Iinclude -DMINGW=1 " \
LDFLAGS="-L/$LIBPNGROOT/lib $LIBPNGROOT/lib/libpng16.a"
