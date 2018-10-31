cd /root/work/hello
mkdir build
cd build
cmake .. -DCMAKE_BUILD_TYPE=Debug
make

gdbserver :1234 /root/work/hello/build/hello