cmake_minimum_required(VERSION 3.7)

project(ShapefileCpp)

add_definitions("-std=c++17")

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()

enable_testing()
add_subdirectory(lib)
add_subdirectory(app)