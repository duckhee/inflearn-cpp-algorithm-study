#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include <iostream>
#include <sstream>
#include <string>


#include "main.h"

TEST(SumOfNaturalNumber, input_3_7) {
    /// cout backup
    std::streambuf *originalBuf = std::cout.rdbuf();

    /// String stream buffer setting
    std::stringstream buffer;
    /// mapping buffer
    std::cout.rdbuf(buffer.rdbuf());

    SumOfNaturalNumber(3, 7);

    std::string output = buffer.str();

    std::cout.rdbuf(originalBuf);

    EXPECT_EQ(output, "3 + 4 + 5 + 6 + 7 = 25\n");
}

TEST(SumOfNaturalNumber, input_5_25) {
    /// cout backup
    std::streambuf *originalBuf = std::cout.rdbuf();

    /// String stream buffer setting
    std::stringstream buffer;
    /// mapping buffer
    std::cout.rdbuf(buffer.rdbuf());

    SumOfNaturalNumber(5, 25);

    std::string output = buffer.str();

    std::cout.rdbuf(originalBuf);

    EXPECT_EQ(output, "5 + 6 + 7 + 8 + 9 + 10 + 11 + 12 + 13 + 14 + 15 + 16 + 17 + 18 + 19 + 20 + 21 + 22 + 23 + 24 + 25 = 315\n");
}


TEST(SumOfNaturalNumber, input_35_75) {
    /// cout backup
    std::streambuf *originalBuf = std::cout.rdbuf();

    /// String stream buffer setting
    std::stringstream buffer;
    /// mapping buffer
    std::cout.rdbuf(buffer.rdbuf());

    SumOfNaturalNumber(35, 75);

    std::string output = buffer.str();

    std::cout.rdbuf(originalBuf);

    EXPECT_EQ(output, "35 + 36 + 37 + 38 + 39 + 40 + 41 + 42 + 43 + 44 + 45 + 46 + 47 + 48 + 49 + 50 + 51 + 52 + 53 + 54 + 55 + 56 + 57 + 58 + 59 + 60 + 61 + 62 + 63 + 64 + 65 + 66 + 67 + 68 + 69 + 70 + 71 + 72 + 73 + 74 + 75 = 2255\n");
}


TEST(SumOfNaturalNumber, input_99_100) {
    /// cout backup
    std::streambuf *originalBuf = std::cout.rdbuf();

    /// String stream buffer setting
    std::stringstream buffer;
    /// mapping buffer
    std::cout.rdbuf(buffer.rdbuf());

    SumOfNaturalNumber(99, 100);

    std::string output = buffer.str();

    std::cout.rdbuf(originalBuf);

    EXPECT_EQ(output, "99 + 100 = 199\n");
}


TEST(SumOfNaturalNumber, input_1_100) {
    /// cout backup
    std::streambuf *originalBuf = std::cout.rdbuf();

    /// String stream buffer setting
    std::stringstream buffer;
    /// mapping buffer
    std::cout.rdbuf(buffer.rdbuf());

    SumOfNaturalNumber(1, 100);

    std::string output = buffer.str();

    std::cout.rdbuf(originalBuf);

    EXPECT_EQ(output, "1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 + 9 + 10 + 11 + 12 + 13 + 14 + 15 + 16 + 17 + 18 + 19 + 20 + 21 + 22 + 23 + 24 + 25 + 26 + 27 + 28 + 29 + 30 + 31 + 32 + 33 + 34 + 35 + 36 + 37 + 38 + 39 + 40 + 41 + 42 + 43 + 44 + 45 + 46 + 47 + 48 + 49 + 50 + 51 + 52 + 53 + 54 + 55 + 56 + 57 + 58 + 59 + 60 + 61 + 62 + 63 + 64 + 65 + 66 + 67 + 68 + 69 + 70 + 71 + 72 + 73 + 74 + 75 + 76 + 77 + 78 + 79 + 80 + 81 + 82 + 83 + 84 + 85 + 86 + 87 + 88 + 89 + 90 + 91 + 92 + 93 + 94 + 95 + 96 + 97 + 98 + 99 + 100 = 5050\n");
}


int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}