#include "gtest/gtest.h"
#include <string>
#include <fstream>
#include <cstdio>
#include "cart.h"
using namespace std;

TEST(Cart, Constructor1) {
  Cart c(717);
  EXPECT_EQ(717, c.getId());
  Cart d(55);
  EXPECT_EQ(55, d.getId());
}

TEST(Cart, addProduct1) {
  Cart c(1);
  Product p1("PC1", "PV1",111), p2("PC2", "PV2",222), p3("PC3", "PV3",333);
  EXPECT_EQ(0,c.getN());
  c.addProduct(p1);
  EXPECT_EQ(1,c.getN());
  c.addProduct(p2);
  EXPECT_EQ(2,c.getN());
  c.addProduct(p3);
  EXPECT_EQ(3,c.getN());
}

TEST(Cart, addProduct2) {
  Cart c(1);
  Product p1("PC1", "PV1",111), p2("PC2", "PV2",222);
  Product p3("PC3", "PV3",333), p4("PC4", "PV4", 444);
  EXPECT_EQ(0,c.getN());
  c.addProduct(p1);
  EXPECT_EQ(1,c.getN());
  c.addProduct(p2);
  EXPECT_EQ(2,c.getN());
  c.addProduct(p3);
  EXPECT_EQ(3,c.getN());
  c.addProduct(p4);
  EXPECT_EQ(4,c.getN());
}

TEST(Cart, deleteProduct1) {
  Cart c(1);
  EXPECT_EQ(0,c.getN());
  EXPECT_FALSE(c.deleteProduct("PC1", "PV1"));
  EXPECT_EQ(0,c.getN());
}
TEST(Cart, deleteProduct2) {
  Cart c(1);
  Product p1("PC1", "PV1",111);
  Product p2("PC2", "PV2",222);
  Product p3("PC3", "PV3",333);
  Product p4("PC4", "PV4", 444);
  EXPECT_EQ(0,c.getN());
  c.addProduct(p1);
  EXPECT_EQ(1,c.getN());
  c.addProduct(p2);
  EXPECT_EQ(2,c.getN());
  c.addProduct(p3);
  EXPECT_EQ(3,c.getN());
  c.addProduct(p4);
  EXPECT_EQ(4,c.getN());
  EXPECT_TRUE(c.deleteProduct("PC1", "PV1"));
  EXPECT_EQ(3,c.getN());
  EXPECT_FALSE(c.deleteProduct("PC1", "PV1"));
  EXPECT_EQ(3,c.getN());
  EXPECT_TRUE(c.deleteProduct("PC2", "PV2"));
  EXPECT_EQ(2,c.getN());
  EXPECT_FALSE(c.deleteProduct("PC2", "PV2"));
  EXPECT_EQ(2,c.getN());
  EXPECT_TRUE(c.deleteProduct("PC3", "PV3"));
  EXPECT_EQ(1,c.getN());
  EXPECT_FALSE(c.deleteProduct("PC3", "PV3"));
  EXPECT_EQ(1,c.getN());
  EXPECT_TRUE(c.deleteProduct("PC4", "PV4"));
  EXPECT_EQ(0,c.getN());
  EXPECT_FALSE(c.deleteProduct("PC4", "PV4"));
  EXPECT_EQ(0,c.getN());
}

TEST(Cart, deleteProduct3) {
  Cart c(1);
  EXPECT_EQ(0,c.getN());
  EXPECT_FALSE(c.deleteProduct("AAA", "BBB"));
  EXPECT_EQ(0,c.getN());
  Product p1("PC1", "PV1",111);
  c.addProduct(p1);
  EXPECT_EQ(1,c.getN());
  EXPECT_FALSE(c.deleteProduct("AAA", "BBB"));
  EXPECT_TRUE(c.deleteProduct("PC1", "PV1"));
  EXPECT_EQ(0,c.getN());
  EXPECT_FALSE(c.deleteProduct("PC1", "PV1"));
}

TEST(Cart, print) {
  Cart c(1);
  Product p1("PC1", "M1",111), p2("PC2", "M2",222), p3("PC3", "M3",333);
  c.addProduct(p1);
  EXPECT_EQ(1,c.getN());
  c.addProduct(p2);
  EXPECT_EQ(2,c.getN());
  c.addProduct(p3);
  EXPECT_EQ(3,c.getN());
  EXPECT_EQ(3,c.getN());
  c.print();
}

TEST(Cart, write) {
  Cart c(1);
  Product p1("PC1", "M1",111), p2("PC2", "M2",222), p3("PC3", "M3",333);
  c.addProduct(p1);
  EXPECT_EQ(1,c.getN());
  c.addProduct(p2);
  EXPECT_EQ(2,c.getN());
  c.addProduct(p3);
  EXPECT_EQ(3,c.getN());
  c.write();

  char n[100];
  string nombre, modelo;
  int numero, i=0;
  ifstream salida("salida.txt");
  const char* v[] = {"PC1", "PC2", "PC3"};
  const char* v1[] = {"M1", "M2", "M3"};
  const char* v2[] = {"111", "222", "333"};
  while(salida.getline(n,256,'/'))
    {
     numero=atoi(n);
     EXPECT_EQ(i+1, numero);

     salida.getline(n,256,',');
     numero=atoi(n);
     EXPECT_EQ(numero, c.getN());

     salida.getline(n,256,',');
     nombre = n;
     EXPECT_EQ(v[i], nombre);

     salida.getline(n,256,',');
     modelo = n;
     EXPECT_EQ(v1[i], modelo);

     salida.getline(n,256,'\n');
     nombre = n;
     EXPECT_EQ(v2[i], nombre);
     i++;
    }
  EXPECT_GT(i,2);
salida.close();
}


