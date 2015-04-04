message( STATUS ${CMAKE_SOURCE_DIR} )

include_directories( ${CMAKE_SOURCE_DIR}/src )
include_directories( ${CMAKE_SOURCE_DIR}/lib_cspec )

add_executable( opcodeTest
    opcodeTest.cpp
)

target_link_libraries( opcodeTest
    cspec
    opcode
)

