project(ShapefileCppApp)

add_library(ShapefileCppAppLib STATIC
	src/Command.cpp
	src/Commands.cpp
	src/BoundsCommand.cpp
	src/CountCommand.cpp
	src/ListCommand.cpp
	src/RandomCommand.cpp
)
target_include_directories(ShapefileCppAppLib PUBLIC "include")
target_include_directories(ShapefileCppAppLib PUBLIC "../lib/include")
target_compile_features(ShapefileCppAppLib PUBLIC cxx_std_17)
target_link_libraries(ShapefileCppAppLib PRIVATE ShapefileCppLib ${CONAN_LIBS_GEOS})

# Application
add_executable(shp-cli src/App.cpp)
target_link_libraries(shp-cli PRIVATE ShapefileCppAppLib ShapefileCppLib ${CONAN_LIBS_GEOS})

add_subdirectory(test)