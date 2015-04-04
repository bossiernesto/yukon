cmake_minimum_required(VERSION 2.8)
set(CMAKE_CXX_FLAGS "-std=c++11")

project(yukon)

add_subdirectory( lib_cspec )
add_subdirectory( src )
add_subdirectory( test )
