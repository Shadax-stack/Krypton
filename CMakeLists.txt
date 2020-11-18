cmake_minimum_required(VERSION 2.8)

project(Krypton)

file(GLOB Krypton_SRC "Krypton/*.h" "Krypton/*.cpp")

add_library(Krypton_STATIC STATIC Kyrpton_SRC)
add_library(Krypton_STATIC SHARED Kyrpton_SRC)