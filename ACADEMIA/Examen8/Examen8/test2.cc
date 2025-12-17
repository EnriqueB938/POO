#include "hammer.h"
#include "drill.h"
#include "gtest/gtest.h"

// Tests for Hammer
TEST(Hammer, ConstructorWithId)
{
    Hammer h("ID_H1");
    EXPECT_EQ("ID_H1", h.GetId());
    EXPECT_EQ("error", h.GetMadeof());
}

TEST(Hammer, ConstructorWithIdAndMadeof)
{
    Hammer h("ID_H2", "Steel");
    EXPECT_EQ("ID_H2", h.GetId());
    EXPECT_EQ("Steel", h.GetMadeof());
}

TEST(Hammer, ConstructorWithEmptyMadeof)
{
    Hammer h("ID_H3", "");
    EXPECT_EQ("ID_H3", h.GetId());
    EXPECT_EQ("error", h.GetMadeof());
}

TEST(Hammer, SetMadeof)
{
    Hammer h("ID_H4", "Wood");
    EXPECT_TRUE(h.SetMadeof("Iron"));
    EXPECT_EQ("Iron", h.GetMadeof());
    EXPECT_FALSE(h.SetMadeof(""));
    EXPECT_EQ("Iron", h.GetMadeof());
}

// Tests for Drill
TEST(Drill, ConstructorWithId)
{
    Drill d("ID_D1");
    EXPECT_EQ("ID_D1", d.GetId());
    EXPECT_EQ(1, d.GetPower());
}

TEST(Drill, ConstructorWithIdAndPower)
{
    Drill d("ID_D2", 500);
    EXPECT_EQ("ID_D2", d.GetId());
    EXPECT_EQ(500, d.GetPower());
}

TEST(Drill, ConstructorWithInvalidPower)
{
    Drill d("ID_D3", -10);
    EXPECT_EQ("ID_D3", d.GetId());
    EXPECT_EQ(0, d.GetPower());
}

TEST(Drill, SetPower)
{
    Drill d("ID_D4", 100);
    EXPECT_TRUE(d.SetPower(200));
    EXPECT_EQ(200, d.GetPower());
    EXPECT_FALSE(d.SetPower(0));
    EXPECT_EQ(200, d.GetPower());
}
