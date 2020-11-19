cmake_minimum_required(VERSION 2.8)

project(Krypton)

set_property(GLOBAL PROPERTY USE_FOLDERS ON)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

add_subdirectory(src)

option(KRYPTON_BUILD_EXAMPLES "Build the examples associated with the library" OFF)
if(KRYPTON_BUILD_EXAMPLES)
	add_subdirectory(examples)
endif()