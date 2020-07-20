## warning
## you've to updated LDFLAGS with the real path to libpng
##
./configure \
--host=i686-w64-mingw32 \
--target=i686-w64-mingw32 \
--prefix=/mingw32 \
--with-libpng \
--without-x \
--enable-libplotter \
--enable-libxmi \
CC="i686-w64-mingw32-gcc" \
CXX="i686-w64-mingw32-g++" \
CPPFLAGS="-DDEBUG=1 -DPNG_PTR=1 -DINCLUDE_PNG_SUPPORT  -DHAVE_LIBPNG=1  -I/mingw32/include -I/mingw32/include/ -Iinclude -DMINGW=1 -DGNUC=1 " \
CFLAGS="-DDEBUG=1 -DPNG_PTR=1 -DINCLUDE_PNG_SUPPORT=1 -DHAVE_LIBPNG=1  -I/mingw32/include -Iinclude -I/mingw32/include -DMINGW=1" \
CXXFLAGS="-DDEBUG=1 -DPNG_PTR=1 -DINCLUDE_PNG_SUPPORT=1 -DHAVE_LIBPNG=1  -I/mingw32/include -I/mingw32/include/libpng16 -Iinclude -DMINGW=1 " \
LDFLAGS="-L/mingw32/lib/libpng16"
