cmake_Minimum_required(VERSION 3.30.3)

set(This MostOccuringChar)

project(${This} C CXX)

set(CMAKE_C_STANDARD 99)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

enable_testing()

add_subdirectory(googletest)

set(Headers
    main.hpp
)
set(Sources
    main.cpp
)

add_library(${This} STATIC ${Sources} ${Headers})

add_subdirectory(test)