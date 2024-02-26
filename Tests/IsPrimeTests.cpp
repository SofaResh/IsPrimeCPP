#include "gtest/gtest.h"
#include "IsPrime.h"

TEST(IsPrimeTest, PrimeNumberTrue){
    EXPECT_TRUE(IsPrime::isPrime(2));
}

