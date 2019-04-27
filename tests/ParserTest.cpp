#pragma clang diagnostic push
#pragma ide diagnostic ignored "hicpp-use-equals-delete"
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma ide diagnostic ignored "cert-err58-cpp"
//
// Created by Jens Klimke on 2019-04-25.
//

#include <gtest/gtest.h>
#include <odr/lib.h>


TEST(ParserTest, LoadODRFile) {

    odr::OpenDRIVEFile odrFile;
    odr::loadFile("tests/resources/sample1.1.xodr", odrFile);

    odr::OpenDRIVE *odrr = odrFile.OpenDRIVE.front().get();

    const auto header = odrr->_s__header.front().get();
    EXPECT_EQ("Thu Feb  8 14:24:06 2007", *header->_f__date.get());

    const auto &roads = odrr->_s__road;
    EXPECT_EQ(36, roads.size());


}

#pragma clang diagnostic pop