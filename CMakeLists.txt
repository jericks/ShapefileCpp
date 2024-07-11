cmake_minimum_required(VERSION 3.15)

project(ShapefileCpp)

# Add this line to use the Conan-generated toolchain file
set(CMAKE_TOOLCHAIN_FILE ${CMAKE_CURRENT_BINARY_DIR}/conan_toolchain.cmake)

# C++17 standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

list(APPEND CMAKE_PREFIX_PATH ${CMAKE_BINARY_DIR})
list(APPEND CMAKE_MODULE_PATH ${CMAKE_BINARY_DIR})

get_filename_component(CONAN_PREFIX_PATH "${CMAKE_BINARY_DIR}" DIRECTORY)
list(APPEND CMAKE_PREFIX_PATH "${CONAN_PREFIX_PATH}")
list(APPEND CMAKE_MODULE_PATH "${CONAN_PREFIX_PATH}")

find_package(shapelib REQUIRED)
find_package(CLI11 REQUIRED)
find_package(GTest REQUIRED)

enable_testing()
add_subdirectory(lib)
add_subdirectory(app)