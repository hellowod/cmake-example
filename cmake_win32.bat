mkdir build32 & pushd build32
cmake -G"Visual Studio 14 2015" ..
popd
cmake --build build32 --config Release
pause