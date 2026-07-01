#include "gmock/gmock.h"
#include "prime_factors.cpp"

TEST(PrimeFactors, Of1)
{
	PrimeFactors prime_factor;
	vector<int> expected = {};
	EXPECT_EQ(expected, prime_factor.of(1));
}


TEST(PrimeFactors, Of2)
{
	PrimeFactors prime_factor;
	vector<int> expected = { 2 };
	EXPECT_EQ(expected, prime_factor.of(2));
}

TEST(PrimeFactors, Of3)
{
	PrimeFactors prime_factor;
	vector<int> expected = { 3 };
	EXPECT_EQ(expected, prime_factor.of(3));
}

TEST(PrimeFactors, Of4)
{
	PrimeFactors prime_factor;
	vector<int> expected = { 2, 2 };
	EXPECT_EQ(expected, prime_factor.of(4));
}

TEST(PrimeFactors, Of5)
{
	PrimeFactors prime_factor;
	vector<int> expected = { 5 };
	EXPECT_EQ(expected, prime_factor.of(5));
}

TEST(PrimeFactors, Of6)
{
	PrimeFactors prime_factor;
	vector<int> expected = { 2, 3 };
	EXPECT_EQ(expected, prime_factor.of(6));
}

TEST(PrimeFactors, Of7)
{
	PrimeFactors prime_factor;
	vector<int> expected = { 7 };
	EXPECT_EQ(expected, prime_factor.of(7));
}

TEST(PrimeFactors, Of8)
{
	PrimeFactors prime_factor;
	vector<int> expected = { 2 , 2, 2 };
	EXPECT_EQ(expected, prime_factor.of(8));
}

TEST(PrimeFactors, Of9)
{
	PrimeFactors prime_factor;
	vector<int> expected = { 3, 3 };
	EXPECT_EQ(expected, prime_factor.of(9));
}

TEST(PrimeFactors, Of10)
{
	PrimeFactors prime_factor;
	vector<int> expected = { 2, 5 };
	EXPECT_EQ(expected, prime_factor.of(10));
}

TEST(PrimeFactors, Of11)
{
	PrimeFactors prime_factor;
	vector<int> expected = { 11 };
	EXPECT_EQ(expected, prime_factor.of(11));
}

TEST(PrimeFactors, Of12)
{
	PrimeFactors prime_factor;
	vector<int> expected = { 2, 2, 3 };
	EXPECT_EQ(expected, prime_factor.of(12));
}

TEST(PrimeFactors, Of13)
{
	PrimeFactors prime_factor;
	vector<int> expected = { 13 };
	EXPECT_EQ(expected, prime_factor.of(13));
}

TEST(PrimeFactors, Of14)
{
	PrimeFactors prime_factor;
	vector<int> expected = { 2, 7 };
	EXPECT_EQ(expected, prime_factor.of(14));
}

TEST(PrimeFactors, Of15)
{
	PrimeFactors prime_factor;
	vector<int> expected = { 3, 5 };
	EXPECT_EQ(expected, prime_factor.of(15));
}

TEST(PrimeFactors, Of16)
{
	PrimeFactors prime_factor;
	vector<int> expected = { 2, 2, 2, 2 };
	EXPECT_EQ(expected, prime_factor.of(16));
}

TEST(PrimeFactors, Of17)
{
	PrimeFactors prime_factor;
	vector<int> expected = { 17 };
	EXPECT_EQ(expected, prime_factor.of(17));
}

TEST(PrimeFactors, Of18)
{
	PrimeFactors prime_factor;
	vector<int> expected = { 2, 3, 3 };
	EXPECT_EQ(expected, prime_factor.of(18));
}

TEST(PrimeFactors, Of19)
{
	PrimeFactors prime_factor;
	vector<int> expected = { 19 };
	EXPECT_EQ(expected, prime_factor.of(19));
}

TEST(PrimeFactors, Of20)
{
	PrimeFactors prime_factor;
	vector<int> expected = { 2, 2, 5 };
	EXPECT_EQ(expected, prime_factor.of(20));
}

TEST(PrimeFactors, Of21)
{
	PrimeFactors prime_factor;
	vector<int> expected = { 3, 7 };
	EXPECT_EQ(expected, prime_factor.of(21));
}

TEST(PrimeFactors, Of22)
{
	PrimeFactors prime_factor;
	vector<int> expected = { 2, 11 };
	EXPECT_EQ(expected, prime_factor.of(22));
}

TEST(PrimeFactors, Of23)
{
	PrimeFactors prime_factor;
	vector<int> expected = { 23 };
	EXPECT_EQ(expected, prime_factor.of(23));
}

TEST(PrimeFactors, Of24)
{
	PrimeFactors prime_factor;
	vector<int> expected = { 2, 2, 2, 3 };
	EXPECT_EQ(expected, prime_factor.of(24));
}

TEST(PrimeFactors, Of25)
{
	PrimeFactors prime_factor;
	vector<int> expected = { 5, 5 };
	EXPECT_EQ(expected, prime_factor.of(25));
}

TEST(PrimeFactors, Of26)
{
	PrimeFactors prime_factor;
	vector<int> expected = { 2, 13 };
	EXPECT_EQ(expected, prime_factor.of(26));
}

TEST(PrimeFactors, Of27)
{
	PrimeFactors prime_factor;
	vector<int> expected = { 3, 3, 3 };
	EXPECT_EQ(expected, prime_factor.of(27));
}

TEST(PrimeFactors, Of28)
{
	PrimeFactors prime_factor;
	vector<int> expected = { 2, 2, 7 };
	EXPECT_EQ(expected, prime_factor.of(28));
}

TEST(PrimeFactors, Of29)
{
	PrimeFactors prime_factor;
	vector<int> expected = { 29 };
	EXPECT_EQ(expected, prime_factor.of(29));
}

TEST(PrimeFactors, Of30)
{
	PrimeFactors prime_factor;
	vector<int> expected = { 2, 3, 5 };
	EXPECT_EQ(expected, prime_factor.of(30));
}
