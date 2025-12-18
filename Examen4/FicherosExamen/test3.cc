#include "gtest/gtest.h"
#include "computer.h"

TEST(Computer, Constructor1) {
  Computer m(17, "PC1", "PM1", 66);
  EXPECT_EQ(17, m.getId());
  EXPECT_EQ("PC1", m.getName());
  EXPECT_EQ("PM1", m.getModel());
  EXPECT_EQ(66, m.getPrice());  
}

TEST(Computer, Constructor2) {
  Computer m(-117, "PC55", "PM55", 100);
  EXPECT_EQ(999, m.getId());
  EXPECT_EQ("PC55", m.getName());
  EXPECT_EQ("PM55", m.getModel());
  EXPECT_EQ(100, m.getPrice());
}

TEST(Computer, Constructor3) {
  Computer m(0, "PC55", "PM55", 100);
  EXPECT_EQ(999, m.getId());
  EXPECT_EQ("PC55", m.getName());
  EXPECT_EQ("PM55", m.getModel());
  EXPECT_EQ(100, m.getPrice());
}

TEST(Computer, setId1) {
  Computer m(117, "PC55", "PM55", 100);
  EXPECT_EQ(117, m.getId());
  EXPECT_EQ(100, m.getPrice());
  EXPECT_TRUE(m.setId(21));
  EXPECT_EQ(21, m.getId());
  EXPECT_FALSE(m.setId(-21));
  EXPECT_EQ(21, m.getId());
}

TEST(Computer, setId2) {
  Computer m(-117, "PC55", "PM55", 100);
  EXPECT_EQ(999, m.getId());
  EXPECT_TRUE(m.setId(21));
  EXPECT_EQ(21, m.getId());
  EXPECT_FALSE(m.setId(-21));
  EXPECT_EQ(21, m.getId());
}

TEST(Computer, getInfo1) {
  Computer m(117, "PC55", "PM55", 100);
  EXPECT_EQ("Computer 117 name PC55 model PM55 price 100", m.getInfo());
}

TEST(Computer, getInfo2) {
  Computer m(-7, "PC77", "PM77", 177);
  EXPECT_EQ("Computer 999 name PC77 model PM77 price 177", m.getInfo());
}

