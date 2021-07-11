#include"distance.h"
#include <gtest/gtest.h>
namespace {
TEST(Distance,DefaultConstructor) {
    Distance d1;
    EXPECT_EQ(0,d1.getfeets());
    EXPECT_EQ(0,d1.getinches());
}
TEST(Distance,ParameterizedConstructor) {
    Distanc d1(5,10);
    EXPECT_EQ(5,d1.getfeets());
    EXPECT_EQ(10,d1.getinches());
}
TEST(Distance,CopyConstructor) {
    Distance d1(6,4);
    Distance d2(d1);
    EXPECT_EQ(6,d1.getfeets());
    EXPECT_EQ(4,d1.getinches());
}
TEST(Distance,ParameterizedConstructor) {
    Distance d1(6);
    EXPECT_EQ(6,d1.getfeets());
    EXPECT_EQ(0,d2.getinches());
}
TEST(Distance,operator+) {
    Distance d1(5,2);
    Distance d2(4,10);
    d1=d1+d2;
    d2=d2+4;
    EXPECT_EQ(10,d1.getfeets());
    EXPECT_EQ(0,d1.getinches());
    EXPECT_EQ(8,d1.getfeets());
    EXPECT_EQ(10,d1.getinches());
}
TEST(Distance,operator++) {
    Distance d1(5,2);
    Distance d2;
    d2=++d1;
    EXPECT_EQ(5,d2.getfeets());
    EXPECT_EQ(3,d2.getinches());
    EXPECT_EQ(5,d1.getfeets());
    EXPECT_EQ(3,d1.getinches());
}
TEST(Distance,operator++(int)) {
    Distance d1(5,2);
    Distance d2
    d2=d1++;
    EXPECT_EQ(5,d2.getfeets());
    EXPECT_EQ(3,d2.getinches());
    EXPECT_EQ(5,d1.getfeets());
    EXPECT_EQ(3,d1.getinches());
}
TEST(Distance,operator<) {
    Distance d1(5,2);
    Distance d2(5,10);
    EXPECT_EQ(True,d1<d2);
}
TEST(Distance,operator>) {
    Distance d1(5,2);
    Distance d2(5,10);
    EXPECT_EQ(False,d1>d2);
}
TEST(Distance,operator==) {
    Distance d1(5,2);
    Distance d2(5,10);
    Distance d3(d1);
    d1=d2;
    d1=d3;
    EXPECT_EQ(False,d1==d2);
    EXPECT_EQ(True,d1==d3);
}
}
