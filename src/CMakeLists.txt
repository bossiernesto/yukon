cmake_minimum_required(VERSION 2.8)

project(yukon_core_project)

add_library( YukonCore
    opcode.cpp
)

#add_executable( YukonInstance
#)

target_link_libraries(
    YukonCore
)