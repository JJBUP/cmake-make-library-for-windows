# cmake-make-library-for-windows
在windows 使用Clion下生成动态库和静态库的demo
区别：
1. windows 生成库会自添加后缀静态库.lib 动态库.dll
linux 会自动添加静态库.a 动态库.so 后缀和前缀lib
2. cmake 添加库 使用 target_link_libraries
windows  只能添加静态库 xxx.lib,可以省略lib后缀 直接写xxx（所以在windows下使用动态库xxx.dll 需要使用引导的静态库xxx.lib）
linux 能够添加静态库和动态库，但是需要将名称写完整 如动态库：xxx.a，静态库：xxx.so
