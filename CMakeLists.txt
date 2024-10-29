cmake_minimum_required(VERSION 3.29)
project(P2A4_Temperatur)

set(CMAKE_CXX_STANDARD 20)

add_executable(P2A4_Temperatur  main.cpp
                                farenheit.cpp
                                kelvin.cpp
        celsius.cpp)
