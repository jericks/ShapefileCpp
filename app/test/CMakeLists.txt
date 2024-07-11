add_executable(cli_tests
    BoundsCommandTest.cpp
    CountCommandTest.cpp
    InfoCommandTest.cpp
    ListCommandTest.cpp
    RandomCommandTest.cpp
)
target_link_libraries(cli_tests
    PRIVATE
    ShapefileCppAppLib
    shapelib::shp
    CLI11::CLI11
    GTest::gtest
    GTest::gtest_main  # Add this line to provide the main function
)
add_test(NAME "ShapefileCliTests" COMMAND "cli_tests")
