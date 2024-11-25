cmake_minimum_required(VERSION 3.30)
project(MotMystere)

set(CMAKE_CXX_STANDARD 20)

add_executable(MotMystere main.cpp
        Personnages.hpp
        Personnages.cpp
        Arme.hpp
        Arme.cpp)
