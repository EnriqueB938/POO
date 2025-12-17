#include "pareja.h"
#include "gtest/gtest.h"
#include <sstream>

TEST(Pareja, Constructor)
{
    Pareja p(2.5, 3.5);
    EXPECT_DOUBLE_EQ(2.5, p.GetA());
    EXPECT_DOUBLE_EQ(3.5, p.GetB());
}

TEST(Pareja, Getters)
{
    Pareja p(1.1, 4.4);
    EXPECT_DOUBLE_EQ(1.1, p.GetA());
    EXPECT_DOUBLE_EQ(4.4, p.GetB());
}

TEST(Pareja, AdditionOperator)
{
    Pareja p1(2.0, 3.0);
    Pareja p2(1.0, 4.0);
    Pareja result = p1 + p2;
    EXPECT_DOUBLE_EQ(3.0, result.GetA());
    EXPECT_DOUBLE_EQ(7.0, result.GetB());
}

TEST(Pareja, SubtractionOperator)
{
    Pareja p1(5.0, 7.0);
    Pareja p2(2.0, 3.0);
    Pareja result = p1 - p2;
    EXPECT_DOUBLE_EQ(3.0, result.GetA());
    EXPECT_DOUBLE_EQ(4.0, result.GetB());
}

TEST(Pareja, InsertionOperator)
{
    Pareja p(2.3, 5.7);
    std::cout << p << std::endl;
}

TEST(Pareja, ExtractionOperator)
{
    Pareja p(0, 0);
    std::cin >> p;
    std::cout << p << std::endl;
    ;
}