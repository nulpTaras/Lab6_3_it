//
// Created by Taras Neridnyi on 31.10.2024.
//

#include "gtest/gtest.h"
#include <cmath>
#include "/Users/tarasneridnyi/Desktop/Lab6_3_it/src/functions.cpp"

TEST(TEST1, testingFindSumFunction) {
    int arr1[] = {1, 2, 3, 4};
    int expectedSum1 = 1*1 + 2*2 + 3*3 + 4*4; // 30
    EXPECT_EQ(findSum(arr1, 4), expectedSum1);

    int arr2[] = {0, -1, -2};
    int expectedSum2 = 0*0 + (-1)*(-1) + (-2)*(-2); // 5
    EXPECT_EQ(findSum(arr2, 3), expectedSum2);

    int arr3[] = {5, 5, 5};
    int expectedSum3 = 5*5 + 5*5 + 5*5; // 75
    EXPECT_EQ(findSum(arr3, 3), expectedSum3);

    int arr4[] = {};
    int expectedSum4 = 0; // Сума квадратів порожнього масиву
    EXPECT_EQ(findSum(arr4, 0), expectedSum4);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
