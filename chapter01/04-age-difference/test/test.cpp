#include <gtest/gtest.h>
#include <gmock/gmock.h>

#include "main.h"

TEST(AgeDifference, input_10) {
    int ages[10] = {
            18, 54, 46, 52, 28, 22, 23, 53, 28, 40
    };
    int result = AgeDifference(10, ages);

    EXPECT_EQ(result, 36);
}

TEST(AgeDifference, input_30) {
    int ages[30] = {
            23, 26, 50, 17, 34, 35, 50, 22, 53, 41, 42, 44, 43, 49, 37, 50, 28, 31, 15, 37, 38, 33, 48, 40, 17, 42, 29,
            53, 23, 39
    };
    int result = AgeDifference(30, ages);

    EXPECT_EQ(result, 38);
}

TEST(AgeDifference, input_60) {

    int ages[60] = {
            38, 46, 54, 33, 34, 23, 48, 50, 23, 26, 46, 47, 25, 48, 35,
            48, 32, 30, 50, 28, 39, 34, 24, 28, 26, 53, 18, 24, 52, 41, 41, 33, 23, 52, 27, 22, 45, 30, 52, 19, 40, 48,
            45, 23, 21, 45, 19, 20, 38, 21, 19, 21, 31, 40, 53, 27, 49, 48, 30, 32
    };

    int result = AgeDifference(60, ages);

    EXPECT_EQ(result, 36);
}

TEST(AgeDifference, input_90) {
    int ages[90] = {
            31, 40, 40, 49, 44, 53, 41, 25, 35, 53, 28, 36, 50, 38, 27, 23, 50, 42, 51, 20, 37, 48, 22, 37, 23, 42, 23,
            39, 28, 30, 31, 18, 24, 41, 48, 40, 21, 25, 25, 28, 24, 41, 49, 30, 36, 35, 15, 52, 36, 17, 49, 26, 43, 44,
            43, 37, 30, 41, 35, 20, 28, 25, 51, 16, 45, 15, 54, 54, 17, 40, 47, 27, 42, 22, 54, 47, 29, 29, 36, 29, 53,
            42, 49, 42, 49, 16, 44, 36, 30, 45
    };

    int result = AgeDifference(90, ages);

    EXPECT_EQ(result, 39);

}

TEST(AgeDifference, input_100) {
    int ages[100] = {
            50, 53, 20, 23, 42, 54, 44, 18, 53, 27, 44, 23, 43, 20, 48, 22, 50, 45, 44, 52, 37, 49, 15, 23, 53, 21, 29,
            47, 53, 51, 54, 22, 50, 25, 49, 33, 34, 49, 53, 47, 20, 42, 41, 41, 25, 15, 25, 51, 33, 38, 44, 35, 49, 35,
            53, 47, 19, 22, 31, 27, 47, 18, 44, 51, 25, 16, 47, 46, 43, 20, 49, 44, 20, 29, 33, 25, 25, 19, 23, 50, 35,
            20, 35, 47, 33, 32, 13, 26, 39, 22, 16, 32, 39, 38, 35, 29, 24, 16, 48, 29
    };
    
    int result = AgeDifference(100, ages);
    EXPECT_EQ(result, 41);
}


int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}