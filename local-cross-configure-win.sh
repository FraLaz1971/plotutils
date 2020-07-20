export CC=""; export CXX=""; export CPPFLAGS=""; 
export CFLAGS=""; export CXXFLAGS=""; 
export CC="i686-w64-mingw32-gcc"
export CXX="i686-w64-mingw32-g++"
export CPPFLAGS="-Iinclude -I/mingw32/include -I. -I.."
./configure \
--build=x86_64-unknown-linux-gnu \
--host=i686-w64-mingw32 \
--target=i686-w64-mingw32 \
--with-gnu-ld \
--enable-libplotter \
--enable-libxmi \
--with-libpng \
--without-x \
--prefix=/mingw32 \
