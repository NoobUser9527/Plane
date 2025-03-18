# Plane

测试各种功能使用

## 安装 MSYS2

[下载地址](https://www.msys2.org/)

MSYS2 使用 mingw64

### 配置 Windows

在系统环境变量中添加 msys64 目录 如`D:\msys64\mingw64\bin`

### 配置 MSYS2

MSYS2 安装后，打开 MSYS2 保存路径下的 mingw64.exe

首先更新依赖

第一次执行更新 MSYS2 核心包，第二次执行更新 MSYS2 非核心包

```shell
pacman -Syu
pacman -Syu
```

更新后安装开发工具

```shell
pacman -S mingw-w64-x86_64-gcc
pacman -S mingw-w64-x86_64-cmake-gui
```

可选

```shell
pacman -S mingw-w64-x86_64-gdb
pacman -S mingw-w64-x86_64-make
pacman -S mingw-w64-x86_64-boost
pacman -S mingw-w64-x86_64-opencv
```
