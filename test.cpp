#include <gtest/gtest.h>

#define main app_main
#include "lab05_3.cpp"
#undef main

TEST(UnitTest, TestMethod1) {
    double x = 2.0;
    double expected = (sin(x) + 1.0) / (1.0 + cos(x));
    double actual = h(x);

    EXPECT_EQ(actual, expected);
}

TEST(UnitTest, TestMethod2) {
    double x = 0.0;

    EXPECT_EQ(h(x), 1.0);
}