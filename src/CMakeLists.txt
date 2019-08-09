add_library(odr STATIC
        ${ODRPARSER_LIB_DIR}/include/odr/lib.h
        ${ODRPARSER_LIB_DIR}/include/odr/Attribute.h
        ${ODRPARSER_LIB_DIR}/include/odr/odr1_5_structure.h
        odr1_5.cc odr1_5.hpp
        loadFile.cc
        )

target_include_directories(odr PRIVATE ${ODRPARSER_LIB_DIR}/include ${tinyxml_SOURCE_DIR})
target_link_libraries(odr PUBLIC tinyxml2)
