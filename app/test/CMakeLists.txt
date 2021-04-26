add_executable(cli_tests 
    BoundsCommandTest.cpp
    CountCommandTest.cpp    
    ListCommandTest.cpp
    RandomCommandTest.cpp
)
target_link_libraries(cli_tests 
    ShapefileCppAppLib
    ${CONAN_LIBS_GTEST} 
    ${CONAN_LIBS_GTEST_MAIN}
)
add_test(NAME "ShapefileCliTests" COMMAND "cli_tests")

