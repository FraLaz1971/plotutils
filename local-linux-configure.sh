. clean-all.sh
export CC=""; export CXX=""; export CPPFLAGS=""; export LDFLAGS=""
export CFLAGS=""; export CXXFLAGS=""; export AM_LDFLAGS=""
export CC="gcc"
export CXX="g++"
./configure --prefix=$HOME \
--build=x86_64-ubuntu-linux-gnu \
--host=x86_64-ubuntu-linux-gnu \
--enable-libplotter \
--enable-libxmi 
