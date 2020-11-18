cmake_minimum_required(VERSION 2.8)

project(Krypton)

set_property(GLOBAL PROPERTY USE_FOLDERS ON)

add_subdirectory(src)

option(KRYPTON_BUILD_EXAMPLES "Build the examples associated with the library" OFF)
if(KRYPTON_BUILD_EXAMPLES)
	add_subdirectory(examples)
endif()