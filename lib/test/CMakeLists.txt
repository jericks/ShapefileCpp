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
    ShapefileCppLib
    ${CONAN_LIBS_GTEST} 
    ${CONAN_LIBS_GTEST_MAIN}
)
add_test(NAME "ShapefileTests" COMMAND "tests")

