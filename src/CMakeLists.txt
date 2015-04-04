cmake_minimum_required(VERSION 2.8)

project(yukon_core_project)

add_library( YukonCore
    CharBag.cpp
    HuffmanTree.cpp
    ZipTable.cpp
    PriorityQueue.cpp
)

add_executable( YukonInstance
    HuffmanCoding.cpp
)

target_link_libraries( YukonInstance
    YukonCore
)