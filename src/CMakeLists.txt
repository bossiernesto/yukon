cmake_minimum_required(VERSION 2.8)

project(yukon_core_project)

add_library( YukonCore
    opcode.cpp
javaClass.h javaClass.cpp types.h structures.h classHeap.h classHeap.cpp)

#add_executable( YukonInstance
#)

target_link_libraries(
    YukonCore
)