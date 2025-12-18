//Test Academia Main()
#include "gtest/gtest.h"
#include "entero.h"

TEST(Entero,Constructores)
{
	Entero n;
	EXPECT_EQ(0,n.get());
	n.set(2);
	EXPECT_EQ(2,n.get());
	Entero n2(n);
	EXPECT_EQ(2,n2.get());
	Entero n3(2);
	EXPECT_EQ(2,n3.get());

}

TEST(Entero,Suma_Sufijo)
{
	Entero n;
	n++;
	EXPECT_EQ(1,n.get());
	n++;
	EXPECT_EQ(2,n.get());
}


TEST(Entero,Suma_Prefijo)
{
	Entero n;
	++n;
	EXPECT_EQ(1,n.get());
	++n;
	EXPECT_EQ(2,n.get());
}


TEST(Entero,Suma_int)
{
	Entero n;
	
	EXPECT_EQ(1,1+n);
	
	EXPECT_EQ(2,2+n);
}


TEST(Entero,Rest_int)
{
	Entero n(8);
	
	EXPECT_EQ(6,n-2);
	
	EXPECT_EQ(5,n-3);
}


TEST(Entero,Suma_entero)
{
	Entero n;

	n+=1;
	
	EXPECT_EQ(1,n.get());

	n+=2;
	
	EXPECT_EQ(3,n.get());
}

/*
TEST(Entero,Resta_entero)
{
	Entero n(2);

	10-n;
	
	EXPECT_EQ(8,n.get());

	2-n;
	
	EXPECT_EQ(-6,n.get());
}
*/

TEST(Entero,Asignacion_int)
{
	Entero n;
	n=2;
	EXPECT_EQ(2,n.get());
	n=5;
	EXPECT_EQ(5,n.get());
}

TEST(Entero,Asignacion_entero)
{
	Entero n(6);
	Entero n2;
	n2=n;
	EXPECT_EQ(6,n2.get());
	Entero n4(8);
	Entero n3;
	n3=n4;
	EXPECT_EQ(8,n3.get());

}

