cmake_minimum_required(VERSION 3.9)
project(cpp_pool)

set(CMAKE_CXX_STANDARD 98)

add_executable(cpp_pool
        day04/ex01/main.cpp
        day04/ex01/AWeapon.cpp
        day04/ex01/AWeapon.hpp
        day04/ex01/PlasmaRifle.cpp
        day04/ex01/PlasmaRifle.hpp
        day04/ex01/PowerFist.cpp
        day04/ex01/PowerFist.hpp
        day04/ex01/Enemy.cpp
        day04/ex01/Enemy.hpp
        day04/ex01/SuperMutant.cpp
        day04/ex01/SuperMutant.hpp
        day04/ex01/RadScorpionpp.cpp
        day04/ex01/RadScorpion.hpp day04/ex01/Character.cpp day04/ex01/Character.hpp)