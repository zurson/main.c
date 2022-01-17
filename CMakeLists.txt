cmake_minimum_required(VERSION 3.21)
project(wskazniki C)

set(CMAKE_C_STANDARD 99)

add_executable(wskazniki main.c vector_utils.c vector_utils.h)
