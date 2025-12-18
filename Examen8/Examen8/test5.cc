#include "calculator.cc"
#include "gtest/gtest.h"

TEST(Calculator, IntDivision)
{
    Calculator<int> intCalc;
    EXPECT_EQ(2, intCalc.Div(10, 5));
    EXPECT_EQ(0, intCalc.Div(1, 0)); // Division by zero returns 0
    EXPECT_EQ(3, intCalc.Div(7, 2)); // Integer division
}

TEST(Calculator, DoubleDivision)
{
    Calculator<double> doubleCalc;
    EXPECT_NEAR(2.5, doubleCalc.Div(5.0, 2.0), 1e-6);
    EXPECT_NEAR(0.0, doubleCalc.Div(1.0, 0.0), 1e-6); // Division by zero returns 0
    EXPECT_NEAR(3.333333, doubleCalc.Div(10.0, 3.0), 1e-6);
}

TEST(Calculator, NegativeDivision)
{
    Calculator<int> intCalc;
    EXPECT_EQ(-2, intCalc.Div(-10, 5));
    EXPECT_EQ(2, intCalc.Div(-10, -5));

    Calculator<double> doubleCalc;
    EXPECT_DOUBLE_EQ(-2.5, doubleCalc.Div(-5.0, 2.0));
    EXPECT_DOUBLE_EQ(2.5, doubleCalc.Div(-5.0, -2.0));
}