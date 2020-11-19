cmake_minimum_required(VERSION 2.8)

file(GLOB Krypton_SRC "Krypton.h" "Krypton/*.h" "Krypton/*.cpp")

add_library(Krypton_STATIC STATIC ${Krypton_SRC})
add_library(Krypton_SHARED SHARED ${Krypton_SRC})

target_compile_definitions(Krypton_STATIC PUBLIC "-DKRYPTON_EXPORT" "-DKRYPTON_IMPORT")

cmake_policy(SET CMP0054 NEW)
if ("${CMAKE_CXX_COMPILER_ID}" STREQUAL "Clang")
  target_compile_definitions(Krypton_SHARED PUBLIC "-DKRYPTON_EXPORT=__attribute__((visibility(default))" PUBLIC "-DKRYPTON_IMPORT")
 elseif ("${CMAKE_CXX_COMPILER_ID}" STREQUAL "GNU")
  target_compile_definitions(Krypton_SHARED PUBLIC "-DKRYPTON_EXPORT=__attribute__((visibility(default))" PUBLIC "-DKRYPTON_IMPORT")
elseif ("${CMAKE_CXX_COMPILER_ID}" STREQUAL "Intel")
  target_compile_definitions(Krypton_SHARED PUBLIC "-DKRYPTON_EXPORT=_declspec(dllexport)" PUBLIC "-DKRYPTON_IMPORT=_declspec(dllimport)")
elseif ("${CMAKE_CXX_COMPILER_ID}" STREQUAL "MSVC")
  target_compile_definitions(Krypton_SHARED PUBLIC "-DKRYPTON_EXPORT=_declspec(dllexport)" PUBLIC "-DKRYPTON_IMPORT=_declspec(dllimport)")
endif()

target_compile_definitions(Krypton_STATIC PRIVATE KRYPTON_BUILD=1)
target_compile_definitions(Krypton_SHARED PRIVATE KRYPTON_BUILD=1)

set_target_properties(Krypton_STATIC PROPERTIES FOLDER Krypton)
set_target_properties(Krypton_SHARED PROPERTIES FOLDER Krypton)

set(KRYPTON_INCLUDE_DIRECTORY "{CMAKE_CURRENT_SOURCE_DIR}")

