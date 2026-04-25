cmake_minimum_required(VERSION 3.10)
project(C_Study)

# 设置 C 语言标准
set(CMAKE_C_STANDARD 11)

# 指定头文件目录
include_directories(include)

# 指定源文件并生成可执行程序
add_executable(study_prog src/main.c)
