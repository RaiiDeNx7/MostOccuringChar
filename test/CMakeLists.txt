cmake_Minimum_required(VERSION 3.30.3)

set(This ExampleTests)

set(Sources
    ExampleTests.cpp
)

add_executable(${This} ${Sources})
target_link_libraries(${This} PUBLIC 
    gtest_main
    MostOccuringChar
)

add_test(
    NAME ${This}
    COMMAND ${This}
)