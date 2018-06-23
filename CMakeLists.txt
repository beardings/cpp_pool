cmake_minimum_required(VERSION 3.9)
project(cpp_pool)

set(CMAKE_CXX_STANDARD 98)

add_executable(cpp_pool day04/ex02/main.cpp day04/ex02/Squad.cpp day04/ex02/Squad.hpp day04/ex02/ISquad.hpp day04/ex02/ISpaceMarine.hpp day04/ex02/TacticalMarine.cpp day04/ex02/TacticalMarine.hpp day04/ex02/AssaultTerminator.cpp day04/ex02/AssaultTerminator.hpp)