cmake_minimum_required(VERSION 3.20)

project(Recursion)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(Factorial
    Factorial.cpp
)

add_executable(N_to_1
    N_to_1.cpp
)

add_executable(Fibanocci
    Fibanocci.cpp
)

add_executable(maxEltInArray
    max_elt_in_array.cpp
)