#include "tool.h"
#include "gtest/gtest.h"

TEST(Tool, Constructor1)
{
  Tool t("ID1", "Hammer", "Stanley");
  EXPECT_EQ("ID1", t.GetId());
  EXPECT_EQ("Hammer", t.GetName());
  EXPECT_EQ("Stanley", t.GetMaker());
  EXPECT_EQ(5, t.GetRating());
  EXPECT_EQ(0, t.GetExistences());
}

TEST(Tool, Constructor2_EmptyId)
{
  Tool t("", "Drill", "Bosch");
  EXPECT_EQ("error", t.GetId());
  EXPECT_EQ("Drill", t.GetName());
  EXPECT_EQ("Bosch", t.GetMaker());
}

TEST(Tool, Constructor3_EmptyNameAndMaker)
{
  Tool t("ID2", "", "");
  EXPECT_EQ("ID2", t.GetId());
  EXPECT_EQ("no-name", t.GetName());
  EXPECT_EQ("unknown", t.GetMaker());
}

TEST(Tool, SetId)
{
  Tool t("ID1");
  EXPECT_TRUE(t.SetId("NEW_ID"));
  EXPECT_EQ("NEW_ID", t.GetId());
  EXPECT_FALSE(t.SetId(""));
  EXPECT_EQ("NEW_ID", t.GetId());
}

TEST(Tool, SetName)
{
  Tool t("ID1", "Tool1", "Maker1");
  EXPECT_TRUE(t.SetName("Screwdriver"));
  EXPECT_EQ("Screwdriver", t.GetName());
  EXPECT_FALSE(t.SetName(""));
  EXPECT_EQ("Screwdriver", t.GetName());
}

TEST(Tool, SetMaker)
{
  Tool t("ID1", "Tool1", "Maker1");
  EXPECT_TRUE(t.SetMaker("Black & Decker"));
  EXPECT_EQ("Black & Decker", t.GetMaker());
  EXPECT_FALSE(t.SetMaker(""));
  EXPECT_EQ("Black & Decker", t.GetMaker());
}

TEST(Tool, SetExistences)
{
  Tool t("ID1");
  EXPECT_TRUE(t.SetExistences(15));
  EXPECT_EQ(15, t.GetExistences());
  EXPECT_FALSE(t.SetExistences(-5));
  EXPECT_EQ(15, t.GetExistences());
}

TEST(Tool, SetRating)
{
  Tool t("ID1");
  EXPECT_TRUE(t.SetRating(4));
  EXPECT_EQ(4, t.GetRating());
  EXPECT_FALSE(t.SetRating(6));
  EXPECT_EQ(4, t.GetRating());
  EXPECT_FALSE(t.SetRating(-1));
  EXPECT_EQ(4, t.GetRating());
}

TEST(Tool, GetStatus_True)
{
  Tool t("ID1", "Tool1", "Maker1");
  EXPECT_TRUE(t.GetStatus());
}

TEST(Tool, GetStatus_False)
{
  Tool t("", "", "");
  EXPECT_FALSE(t.GetStatus());
}