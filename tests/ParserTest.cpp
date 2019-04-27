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

    odr::loadFile("tests/resources/sample1.1.xodr");

}

#pragma clang diagnostic pop