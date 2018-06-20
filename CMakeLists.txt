cmake_minimum_required(VERSION 3.9)
project(cpp_pool)

set(CMAKE_CXX_STANDARD 98)

add_executable(cpp_pool day01/ex05/main.cpp
        day01/ex05/Human.cpp
        day01/ex05/Human.hpp
        day01/ex05/Brain.cpp
        day01/ex05/Brain.hpp)