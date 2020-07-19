CC="i686-w64-mingw32-gcc"
CXX="i686-w64-mingw32-g++"
export CFLAGS="-DDEBUG=1 -DPNG_PTR=1 -DINCLUDE_PNG_SUPPORT=1 -DHAVE_LIBPNG=1  -I/mingw32/include -Iinclude -I/mingw32/include -DMINGW=1"
export CPPFLAGS="-DDEBUG=1 -DPNG_PTR=1 -DINCLUDE_PNG_SUPPORT=1  -DHAVE_LIBPNG=1  -I/mingw32/include -I/mingw32/include/ -Iinclude -DMINGW=1 -DGNUC=1"
export CXXFLAGS="-DDEBUG=1 -DPNG_PTR=1 -DINCLUDE_PNG_SUPPORT=1 -DHAVE_LIBPNG=1  -I/mingw32/include -I/mingw32/include/libpng16 -Iinclude -DMINGW=1"
export LDFLAGS="-L/mingw32/lib -L/mingw32/bin"
export LIBS=""
./configure --prefix=/mingw32 \
--host=i686-w64-mingw32 \
--target=i686-w64-mingw32     \
--enable-libplotter \
--enable-libxmi \
--enable-libpng \
--without-x \
--includedir=/mingw32/include \
--with-sysroot=/mingw32 \
