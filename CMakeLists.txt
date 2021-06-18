cmake_minimum_required(VERSION 3.7)

project(ShapefileCpp)

add_definitions("-std=c++17")

list(APPEND CMAKE_MODULE_PATH ${CMAKE_BINARY_DIR})
find_package(shapelib REQUIRED)
find_package(cli11 REQUIRED)
find_package(gtest REQUIRED)

enable_testing()
add_subdirectory(lib)
add_subdirectory(app)