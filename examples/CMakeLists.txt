add_executable(VectorTest VectorTest/Main.cpp)
set_property(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT VectorTest)
set_target_properties(VectorTest PROPERTIES FOLDER Examples)
target_link_libraries(VectorTest PRIVATE Krypton_STATIC)
target_include_directories(VectorTest PRIVATE "${CMAKE_SOURCE_DIR}/src")
