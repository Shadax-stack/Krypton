cmake_minimum_required(VERSION 2.8)

file(GLOB Krypton_SRC "Krypton.h" "Krypton/*.h" "Krypton/*.cpp")

add_library(Krypton_STATIC STATIC ${Krypton_SRC})
add_library(Krypton_SHARED SHARED ${Krypton_SRC})

target_compile_definitions(Krypton_SHARED PUBLIC "-DKRYPTON_SHARED")

target_compile_definitions(Krypton_STATIC PRIVATE KRYPTON_BUILD=1)
target_compile_definitions(Krypton_SHARED PRIVATE KRYPTON_BUILD=1)

set_target_properties(Krypton_STATIC PROPERTIES FOLDER Krypton)
set_target_properties(Krypton_SHARED PROPERTIES FOLDER Krypton)

set(KRYPTON_INCLUDE_DIRECTORY "{CMAKE_CURRENT_SOURCE_DIR}")

