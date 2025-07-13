#include <gtest/gtest.h>
#include <cassert>
#include "main.h"

TEST(MultiSum, input_15_3) {
    int result = MultiSum(15, 3);
    GTEST_ASSERT_EQ(result, 45);
}

TEST(MultiSum, input_100_5) {
    int result = MultiSum(100, 5);
    GTEST_ASSERT_EQ(result, 1050);
}

TEST(MultiSum, input_200_7) {
    int result = MultiSum(200, 7);
    GTEST_ASSERT_EQ(result, 2842);
}

TEST(MultiSum, input_500_15) {
    int result = MultiSum(500, 15);
    GTEST_ASSERT_EQ(result, 8415);
}

TEST(MultiSum, input_900_50) {
    int result = MultiSum(900, 50);
    GTEST_ASSERT_EQ(result, 8550);
}

TEST(MultSum, input_1000_3) {
    int result = MultiSum(1000, 3);
    GTEST_ASSERT_EQ(result, 166833);
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}