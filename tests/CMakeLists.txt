include(AddGoogleTest)

add_executable(ParserTest ParserTest.cpp)
target_include_directories(ParserTest PRIVATE ${CMAKE_SOURCE_DIR}/include)
target_link_libraries(ParserTest PRIVATE odr)

add_gtest(ParserTest)

# Note: add_gtest is just a macro that adds gtest, gmock, and gtest_main, and then runs add_test to create a test with the same name:
# target_link_libraries(SimpleTest gtest gmock gtest_main)
# add_test(SimpleTest SimpleTest)