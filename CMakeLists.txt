cmake_minimum_required(VERSION 3.9)
project(cpp_pool)

set(CMAKE_CXX_STANDARD 98)

add_executable(cpp_pool
        day04/ex00/main.cpp
        day04/ex00/Peon.cpp
        day04/ex00/Peon.hpp
        day04/ex00/Victim.cpp
        day04/ex00/Victim.hpp
        day04/ex00/Sorcerer.cpp
        day04/ex00/Sorcerer.hpp)