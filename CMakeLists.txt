# 指定最低 CMake 版本要求
cmake_minimum_required(VERSION 3.10)

# 项目信息
project(test VERSION 1.0 LANGUAGES CXX)

# 设置 C++ 标准
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# 全局编译选项
add_compile_options(-Wall -Wextra -pedantic)

# 定义源文件目录

# 添加可执行文件
# add_executable(test ${SOURCES})
add_executable(test "app/main.cpp")

# 设置头文件目录
target_include_directories(test PRIVATE include)
target_link_libraries(test PRIVATE )