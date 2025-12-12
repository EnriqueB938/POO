#include "product.h"
#include "gtest/gtest.h"

TEST(Product, Constructor1) {
  Product p("Product1", "PIV",1);
  EXPECT_EQ("Product1", p.getName());
  EXPECT_EQ("PIV", p.getModel());
  EXPECT_EQ(1, p.getPrice());
}

TEST(Product, Constructor2) {
  Product p("Product2", "PX2", 123);
  EXPECT_EQ("Product2", p.getName());
  EXPECT_EQ("PX2", p.getModel());
  EXPECT_EQ(123, p.getPrice());
}

TEST(Product, Constructor3) {
  Product p("", "PX2",0);
  EXPECT_EQ("ERROR", p.getName());
  EXPECT_EQ("PX2", p.getModel());
  EXPECT_EQ(1, p.getPrice());
}

TEST(Product, Constructor4) {
  Product p("Product1", "",2);
  EXPECT_EQ("Product1", p.getName());
  EXPECT_EQ("Model", p.getModel());
  EXPECT_EQ(2, p.getPrice());
}

TEST(Product, Constructor5) {
  Product p("", "", 0);
  EXPECT_EQ("ERROR", p.getName());
  EXPECT_EQ("Model", p.getModel());
  EXPECT_EQ(1, p.getPrice());
}

TEST(Product, Constructor6) {
  Product p("", "", 9);
  EXPECT_EQ("ERROR", p.getName());
  EXPECT_EQ("Model", p.getModel());
  EXPECT_EQ(9, p.getPrice());
}

TEST(Product, Constructor7) {
  Product p("Product1", "PX2", -3);
  EXPECT_EQ("Product1", p.getName());
  EXPECT_EQ("PX2", p.getModel());
  EXPECT_EQ(1, p.getPrice());
}

TEST(Product, Constructor8) {
  Product p("", "PX2", -88);
  EXPECT_EQ("ERROR", p.getName());
  EXPECT_EQ("PX2", p.getModel());
  EXPECT_EQ(1, p.getPrice());
}

TEST(Product, Constructor9) {
  Product p("Ninguno", "", -88);
  EXPECT_EQ("Ninguno", p.getName());
  EXPECT_EQ("Model", p.getModel());
  EXPECT_EQ(1, p.getPrice());
}

TEST(Product, Constructor10) {
  Product p("Product1");
  EXPECT_EQ("Product1", p.getName());
  EXPECT_EQ("Model", p.getModel());
  EXPECT_EQ(1, p.getPrice());
}

TEST(Product, Constructor11) {
  Product p("PC");
  EXPECT_EQ("PC", p.getName());
  EXPECT_EQ("Model", p.getModel());
  EXPECT_EQ(1, p.getPrice());
}

TEST(Product, Constructor12) {
  Product p("PC", "MOD1");
  EXPECT_EQ("PC", p.getName());
  EXPECT_EQ("MOD1", p.getModel());
  EXPECT_EQ(1, p.getPrice());
}

TEST(Product, SetName1) {
  Product p("PC", "PX2", 10);
  EXPECT_EQ("PC", p.getName());
  EXPECT_EQ("PX2", p.getModel());
  EXPECT_EQ(10, p.getPrice());
  EXPECT_TRUE(p.setName("Product1"));
  EXPECT_EQ("Product1", p.getName());
}

TEST(Product, SetName2) {
  Product p("Product1", "PX2", 10);
  EXPECT_FALSE(p.setName(""));
  EXPECT_EQ("Product1", p.getName());
}

TEST(Product, SetModel1) {
  Product p("PC", "PX2", 10);
  EXPECT_EQ("PC", p.getName());
  EXPECT_EQ("PX2", p.getModel());
  EXPECT_EQ(10, p.getPrice());
  EXPECT_TRUE(p.setModel("YT7"));
  EXPECT_EQ("YT7", p.getModel());
  EXPECT_TRUE(p.setModel("YT7"));
  EXPECT_EQ("YT7", p.getModel());
  EXPECT_EQ("PC", p.getName());
  EXPECT_EQ(10, p.getPrice());
}

TEST(Product, setModel2) {
  Product p("PC", "PX2", 10);
  EXPECT_FALSE(p.setModel(""));
  EXPECT_EQ("PX2", p.getModel());
}

TEST(Product, setPrice1) {
  Product p("Product1", "PV", 66);
  EXPECT_EQ(66, p.getPrice());
  EXPECT_FALSE(p.setPrice(-25));
  EXPECT_EQ(66, p.getPrice());
  EXPECT_FALSE(p.setPrice(-35));
  EXPECT_EQ(66, p.getPrice());
}

TEST(Product, setPrice2) {
  Product p("Product1", "PV", 0);
  EXPECT_EQ(1, p.getPrice());
  EXPECT_FALSE(p.setPrice(0));
  EXPECT_EQ(1, p.getPrice());
  EXPECT_TRUE(p.setPrice(55));
  EXPECT_EQ(55, p.getPrice());
  EXPECT_FALSE(p.setPrice(-35));
  EXPECT_EQ(55, p.getPrice());
  EXPECT_FALSE(p.setPrice(0));
  EXPECT_EQ(55, p.getPrice());
}

TEST(Product, getString) {
  Product p("Product1", "PV", 55);
  EXPECT_EQ("Product1, PV, 55", p.getString());
  EXPECT_TRUE(p.setName("Product2"));
  EXPECT_TRUE(p.setModel("PXX3"));
  EXPECT_EQ("Product2, PXX3, 55", p.getString());
  EXPECT_TRUE(p.setPrice(56));
  EXPECT_EQ("Product2, PXX3, 56", p.getString());
}