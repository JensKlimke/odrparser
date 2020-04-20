
# add tracks directory
add_definitions(-DTRACKS_DIR=\"${PROJECT_SOURCE_DIR}/tests/resources/\")

# create test executable
add_executable(ParserTest ParserTest.cpp)
target_include_directories(ParserTest PRIVATE ${PROJECT_SOURCE_DIR}/include)
target_link_libraries(ParserTest PRIVATE odr)

add_gtest(ParserTest)