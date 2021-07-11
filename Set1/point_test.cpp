#include"account.h"
#include <gtest/gtest.h>
namespace {
TEST(Point,DefaultConstructor) {
    Point p1;
    EXPECT_EQ(0,p1.getxcordinate());
    EXPECT_EQ(0,p1.getycordinate());
}
TEST(Point,ParameterizedConstructor) {
    Point p1(2,-3);
    EXPECT_EQ(2,p1.getxcordinate());
    EXPECT_EQ(-3,p1.getycordinate());
}
TEST(Point,CopyConstructor) {
    Point p1(-3,4);
    Point p2(p1);
    EXPECT_EQ(-3,p2.getxcordinate());
    EXPECT_EQ(4,p2.getycordinate());
}
TEST(Point,distanceFromOrigin) {
    Point p1(-8,-6);
    Point p2(-2,6);
    EXPECT_EQ(10,p1.distanceFromOrigin());
    EXPECT_EQ(6.32,p2.distanceFromOrigin());
}
TEST(Point,quadrant) {
    Point p1(2,3);
    Point p2(-2,4);
    Point p3(-3,-4);
    Point p4(4,-6);
    EXPECT_EQ(1,p1.quadrant());
    EXPECT_EQ(2,p2.quadrant());
    EXPECT_EQ(3,p3.quadrant());
    EXPECT_EQ(4,p4.quadrant());
}
TEST(Point,isOrigin) {
    Point p1;
    Point p2(2,1);
    EXPECT_EQ(True,p1.isOrigin());
    EXPECT_EQ(False,p2.isOrigin());
}
TEST(Point,isOnXAxis) {
    Point p1(2,0);
    Point p2(-2,4);
    EXPECT_EQ(True,p1.isOnXAxis());
    EXPECT_EQ(False,p2.isOnXAxis());
}
TEST(Point,isOnYAxis) {
    Point p1(0,3);
    Point p2(2,0);
    EXPECT_EQ(True,p1.isOnYAxis());
    EXPECT_EQ(False,p2.isOnYAxis());
}
}
