#echo

mkdir ..\build	
pushd ..\build

call call "c:\Program Files (x86)\Microsoft Visual Studio\2019\Community\VC\Auxiliary\Build\vcvarsall.bat" x64
set path = d:\handmadehero\misc;%path%

cl -Zi d:\rasterizer\code\rasterizer.cpp user32.lib
popd
