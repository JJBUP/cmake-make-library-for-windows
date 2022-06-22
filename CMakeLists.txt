cmake_minimum_required(VERSION 3.22)
project(test_make_lib)

set(CMAKE_CXX_STANDARD 14)

add_subdirectory(make_shared_lib)
add_subdirectory(make_static_lib)
add_subdirectory(test_hello)