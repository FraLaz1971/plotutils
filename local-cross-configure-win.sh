export CC=""; export CXX=""; export CPPFLAGS=""; export LDFLAGS=""
export CFLAGS=""; export CXXFLAGS=""; export AM_LDFLAGS=""
export CC="i686-w64-mingw32-gcc"
export CXX="i686-w64-mingw32-g++"
export CPPFLAGS="-Iinclude -I/mingw32/include"
export AM_LDFLAGS="-L/mingw32/bin -L/mingw32/lib"
./configure \
--build=x86_64-ubuntu-linux-gnu \
--host=i686-w64-mingw32 \
--enable-libplotter \
--enable-libxmi \
--with-libpng \
--without-x \
--prefix=/mingw32 \
--with-sysroot=/mingw32
