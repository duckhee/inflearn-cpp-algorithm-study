#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include <sstream>
#include <iostream>
#include <string>

#include "main.h"

TEST(ProperDivisor, input_50) {
    std::streambuf *originalBuffer = std::cout.rdbuf();

    std::stringstream buffer;

    std::cout.rdbuf(buffer.rdbuf());

    ProperDivisor(50);

    std::string output = buffer.str();

    std::cout.rdbuf(originalBuffer);

    EXPECT_EQ(output, "1 + 2 + 5 + 10 + 25 = 43\n");

}


TEST(ProperDivisor, input_10) {
    std::streambuf *originalBuffer = std::cout.rdbuf();

    std::stringstream buffer;

    std::cout.rdbuf(buffer.rdbuf());

    ProperDivisor(10);

    std::string output = buffer.str();

    std::cout.rdbuf(originalBuffer);

    EXPECT_EQ(output, "1 + 2 + 5 = 8\n");

}

TEST(ProperDivisor, input_30) {
    std::streambuf *originalBuffer = std::cout.rdbuf();

    std::stringstream buffer;

    std::cout.rdbuf(buffer.rdbuf());

    ProperDivisor(30);

    std::string output = buffer.str();

    std::cout.rdbuf(originalBuffer);

    EXPECT_EQ(output, "1 + 2 + 3 + 5 + 6 + 10 + 15 = 42\n");

}


TEST(ProperDivisor, input_70) {
    std::streambuf *originalBuffer = std::cout.rdbuf();

    std::stringstream buffer;

    std::cout.rdbuf(buffer.rdbuf());

    ProperDivisor(70);

    std::string output = buffer.str();

    std::cout.rdbuf(originalBuffer);

    EXPECT_EQ(output, "1 + 2 + 5 + 7 + 10 + 14 + 35 = 74\n");

}


TEST(ProperDivisor, input_90) {
    std::streambuf *originalBuffer = std::cout.rdbuf();

    std::stringstream buffer;

    std::cout.rdbuf(buffer.rdbuf());

    ProperDivisor(90);

    std::string output = buffer.str();

    std::cout.rdbuf(originalBuffer);

    EXPECT_EQ(output, "1 + 2 + 3 + 5 + 6 + 9 + 10 + 15 + 18 + 30 + 45 = 144\n");

}


int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}