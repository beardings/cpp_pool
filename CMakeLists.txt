cmake_minimum_required(VERSION 3.9)
project(cpp_pool)

set(CMAKE_CXX_STANDARD 98)

add_executable(cpp_pool day01/ex06/Weapon.cpp
        day01/ex06/Weapon.hpp
        day01/ex06/main.cpp
        day01/ex06/HumanA.cpp
        day01/ex06/HumanA.hpp day01/ex06/HumanB.cpp day01/ex06/HumanB.hpp)