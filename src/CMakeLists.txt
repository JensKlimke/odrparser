include(AddTinyXml2)

add_library(odr STATIC ${CMAKE_SOURCE_DIR}/include/odr/lib.h ${CMAKE_SOURCE_DIR}/include/odr/odr1_5_structure.h loadFile.cc ${CMAKE_SOURCE_DIR}/include/odr/Attribute.h odr1_5.hpp odr1_5.cc)
target_include_directories(odr PRIVATE ${CMAKE_SOURCE_DIR}/include ${tinyxml_SOURCE_DIR})
target_link_libraries(odr PUBLIC tinyxml2)
