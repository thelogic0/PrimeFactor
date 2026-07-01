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
	vector<int> expected = {2};
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
	vector<int> expected = { 2, 4 };
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
