cmake_minimum_required(VERSION 3.15)
project(MOProjekty)

set(CMAKE_CXX_STANDARD 14)

include_directories(Projekt1)

add_executable(MOProjekty
        Projekt1/MyMath.h
        Projekt1/Program1.cpp Projekt2/Program2.cpp)
