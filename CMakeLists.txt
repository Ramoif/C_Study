cmake_minimum_required(VERSION 3.15)
project(HelloWorld C)

set(CMAKE_C_STANDARD 99)

add_subdirectory(Demo01)

add_executable(main main.c)