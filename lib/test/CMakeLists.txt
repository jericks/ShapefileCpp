add_executable(tests 
    BoundsTest.cpp
    FeatureTest.cpp
    FieldTest.cpp
    FieldTypeTest.cpp
    GeometryTypeTest.cpp
    LineTest.cpp
    MultiLineTest.cpp
    MultiPointTest.cpp
    MultiPolygonTest.cpp
    PointTest.cpp
    PolygonTest.cpp
    RingTest.cpp
    SchemaTest.cpp
    ShapefileReaderTest.cpp
    ShapefileWriterTest.cpp
)
target_link_libraries(tests
		PRIVATE
    ShapefileCppLib
    shapelib::shp
		CLI11::CLI11
    GTest::gtest
    GTest::gtest_main
)
add_test(NAME "ShapefileTests" COMMAND "tests")

