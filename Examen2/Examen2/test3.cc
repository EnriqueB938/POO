#include "computer.h"
#include "cart2.h"
#include "gtest/gtest.h"
#include <string>

using namespace std;

TEST(Cart2, eraseComputer)
{
	Cart c(1);
	Computer c1("PC1","PV1");
	Computer c2("PC2","PV2");
	Computer c3("PC3","PV3");

	Computer c4("PC2","PV3");
	Computer c5("PC3","PV2");

	Computer c6("PC3","PV3");

	c.addComputer(c1);
	c.addComputer(c2);
	c.addComputer(c3);

	EXPECT_TRUE(c.eraseComputer(c1));

	EXPECT_FALSE(c.eraseComputer(c4));
	EXPECT_FALSE(c.eraseComputer(c5));
	
	EXPECT_TRUE(c.eraseComputer(c6));
}