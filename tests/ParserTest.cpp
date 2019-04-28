#pragma clang diagnostic push
#pragma ide diagnostic ignored "hicpp-use-equals-delete"
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma ide diagnostic ignored "cert-err58-cpp"
//
// Created by Jens Klimke on 2019-04-25.
//

#include <gtest/gtest.h>
#include <odr/lib.h>


TEST(ParserTest, LoadODRFile15) {

    odr::OpenDRIVEFile odrFile;
    odr::loadFile("tests/resources/sample1.1.xodr", odrFile);

    odr1_5::OpenDRIVE *odrr = odrFile.OpenDRIVE1_5.get();

    const auto header = odrr->sub_header.get();
    EXPECT_EQ("Thu Feb  8 14:24:06 2007", *header->_date);

    const auto &roads = odrr->sub_road;
    EXPECT_EQ(36, roads.size());

    EXPECT_EQ(1, odrr->sub_road.front().sub_lanes->sub_laneSection.size());
    EXPECT_EQ(2, odrr->sub_road.front().sub_lanes->sub_laneSection.front().sub_left->sub_lane.size());
    EXPECT_EQ(1, *odrr->sub_road.front().sub_lanes->sub_laneSection.front().sub_left->sub_lane.back()._id);
    EXPECT_EQ(2, *odrr->sub_road.front().sub_lanes->sub_laneSection.front().sub_left->sub_lane.front()._id);
    EXPECT_DOUBLE_EQ(1.5,
                     *odrr->sub_road.front().sub_lanes->sub_laneSection.front().sub_left->sub_lane.front().sub_width.front()._a);

}


/*TEST(ParserTest, LoadODRFile14) {

    odr::OpenDRIVEFile odrFile;
    odr::loadFile("tests/resources/sample1.1.xodr", odrFile);

    odr1_4::OpenDRIVE *odrr = odrFile.OpenDRIVE1_4.get();

    const auto header = odrr->sub_header.get();
    EXPECT_EQ("Thu Feb  8 14:24:06 2007", *header->_date);

    const auto &roads = odrr->sub_road;
    EXPECT_EQ(36, roads.size());

    EXPECT_EQ(1, odrr->sub_road.front().sub_lanes->sub_laneSection.size());
    EXPECT_EQ(2, odrr->sub_road.front().sub_lanes->sub_laneSection.front().sub_left->sub_lane.size());
    EXPECT_EQ(1, *odrr->sub_road.front().sub_lanes->sub_laneSection.front().sub_left->sub_lane.back()._id);
    EXPECT_EQ(2, *odrr->sub_road.front().sub_lanes->sub_laneSection.front().sub_left->sub_lane.front()._id);
    EXPECT_DOUBLE_EQ(1.5, *odrr->sub_road.front().sub_lanes->sub_laneSection.front().sub_left->sub_lane.front().sub_width.front()._a);

}*/

#pragma clang diagnostic pop