#include "gtest/gtest.h"
#include "IsPrime.h"

TEST(IsPrimeTest, PrimeNumberTrue1) {
    EXPECT_TRUE(IsPrime::isPrime(2));
}

TEST(IsPrimeTest, PrimeNumberTrue2) {
    EXPECT_TRUE(IsPrime::isPrime(5));
}

TEST(IsPrimeTest, PrimeNumberTrue3) {
    EXPECT_TRUE(IsPrime::isPrime(11));
}

TEST(IsPrimeTest, PrimeNumberFalse1) {
    EXPECT_FALSE(IsPrime::isPrime(4));

}

TEST(IsPrimeTest, PrimeNumberFalse2) {
    EXPECT_FALSE(IsPrime::isPrime(12));
}

TEST(IsPrimeTest, PrimeNumberFalse3) {
    EXPECT_FALSE(IsPrime::isPrime(16));
}

