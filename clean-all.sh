. local-cross-configure-win.sh
make distclean
find . -type d -name .deps -exec rm -rf {} \; 
find . -type d -name .lib -exec rm -rf {} \; 
find . -type f -name *.o -exec rm  {} \; 
find . -type f -name *.lo -exec rm  {} \; 
find . -type f -name *.la -exec rm  {} \; 
find . -type f -name *.a -exec rm  {} \; 
find . -type f -name *.so -exec rm  {} \; 
make clean
make distclean
rm -rf autom4te.cache
rm config.h
