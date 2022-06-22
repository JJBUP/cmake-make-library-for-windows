# cmake-make-library-for-windows
在windows 使用Clion下生成动态库和静态库的demo

**windows下动态库与静态库区别**
1. windows 生成库会自添加后缀静态库.lib 动态库.dll
linux 会自动添加静态库.a 动态库.so 后缀和前缀lib


2. cmake 添加库 使用 target_link_libraries
windows  只能添加静态库 xxx.lib,可以省略lib后缀 直接写xxx（所以在windows下使用动态库xxx.dll 需要使用引导的静态库xxx.lib）
linux 能够添加静态库和动态库，但是需要将名称写完整 如动态库：xxx.a，静态库：xxx.so

- **windows：**
  target_link_libraries(demo PRIVATE shared_lib.lib PRIVATE static_lib.lib)
  注意：windows 的dll文件要放在系统能够查找的目录下
  查看dll依赖工具https://github.com/lucasg/Dependencies

  > windows下dll查找的路径顺序如下：
  > a. 应用程序所在目录；
  > b. 系统目录。 GetSystemDirectory 返回的目录，通常是系统盘\Windows\System32；
  > c. 16位系统目录。该项只是为了向前兼容的处理，可以不考虑；
  > d. Windows目录。 GetWindowsDirectory 返回的目录，通常是系统盘 \Windows ；
  > e. 当前目录。GetCurrentDirectory返回的目录；
  > f. 环境变量PATH中所有目录。

- **linux：**
  target_link_libraries(demo PRIVATE libshared_lib.a PRIVATE libstatic_lib.so)

**总结：**

linux windows 的shared_lib.lib static_lib.lib /libshared_lib.a libstatic_lib.so 的使用需要在执行文件cpp的CmakeList.txt中设置

windows下 dll文件需要放在window dll的寻找目录下 

(越说越废话了...)
