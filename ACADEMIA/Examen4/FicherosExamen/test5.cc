#include "pareja.h"
#include "gtest/gtest.h"

TEST(Pareja, Constructor) {
  Pareja p(2.1, 5.1);

  EXPECT_NEAR(2.1, p.getA(), 0.001);
  EXPECT_NEAR(5.1, p.getB(), 0.001);
}

TEST(Pareja, OperadorMas) {
  Pareja p(0.1, 0.2), q(4.3,7.4), r(1.5,3.6);
  p=q+r;
  
  EXPECT_NEAR(5.8, p.getA(), 0.001);
  EXPECT_NEAR(11.0, p.getB(), 0.001);
  EXPECT_NEAR(4.3, q.getA(), 0.001);
  EXPECT_NEAR(7.4, q.getB(), 0.001);
  EXPECT_NEAR(1.5, r.getA(), 0.001);
  EXPECT_NEAR(3.6, r.getB(), 0.001);
}

TEST(Pareja, OperadorMenos) {
  Pareja p(0.1, 0.1), q(4.1,7.1), r(1.1,3.1);
  p=q-r;
  
  EXPECT_NEAR(3.0, p.getA(), 0.001);
  EXPECT_NEAR(4.0, p.getB(), 0.001);
  EXPECT_NEAR(4.1, q.getA(), 0.001);
  EXPECT_NEAR(7.1, q.getB(), 0.001);
  EXPECT_NEAR(1.1, r.getA(), 0.001);
  EXPECT_NEAR(3.1, r.getB(), 0.001);
}


TEST(Pareja, Extractor) {
  Pareja p(1.2,3.4);
  cout << p;
}

TEST(Pareja, Insertador) {
  Pareja p(555.3,888.4);
  cin >> p;
  cout << p;
}