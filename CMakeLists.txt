cmake_minimum_required(VERSION 3.16)
project(algoritmos)

set(CMAKE_CXX_STANDARD 14)

add_executable(algoritmos src/Main.cpp src/BubbleSort.cpp src/LinearSearch.cpp include/TestsCases.h)