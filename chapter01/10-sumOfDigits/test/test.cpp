#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "main.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

void RunTestLoop(const std::string &filename) {
    std::ifstream readFile(filename);
    int loopNumber = 0;

    readFile >> loopNumber;

    int n, num, i, sum, max = -2147000000, res;

    for (int i = 0; i <= loopNumber; i++) {
        readFile >> num;
        sum = digit_sum(num);
        if (sum > max) {
            max = sum;
            res = num;
        } else if (sum == max) {
            if (num > res) res = num;
        }
    }

    std::cout << res;
    readFile.close();
}

std::string ReadResultFile(const std::string &filename) {
    std::string result;
    std::ifstream readFile(filename);
    std::stringstream ss;

    ss << readFile.rdbuf();

    readFile.close();

    result = ss.str();

    return result;
}

TEST(DigitSum, input_1) {
    std::streambuf *original = std::cout.rdbuf();

    std::stringstream buffer;
    std::cout.rdbuf(buffer.rdbuf());

    RunTestLoop("in1.txt");

    std::cout.rdbuf(original);

    std::string result = buffer.str();

    std::string testResult = ReadResultFile("out1.txt");
    EXPECT_EQ(result, testResult);
}

TEST(DigitSum, input_2) {
    std::streambuf *original = std::cout.rdbuf();

    std::stringstream buffer;
    std::cout.rdbuf(buffer.rdbuf());

    RunTestLoop("in2.txt");

    std::cout.rdbuf(original);

    std::string result = buffer.str();

    std::string testResult = ReadResultFile("out2.txt");
    EXPECT_EQ(result, testResult);
}

TEST(DigitSum, input_3) {
    std::streambuf *original = std::cout.rdbuf();

    std::stringstream buffer;
    std::cout.rdbuf(buffer.rdbuf());

    RunTestLoop("in3.txt");

    std::cout.rdbuf(original);

    std::string result = buffer.str();

    std::string testResult = ReadResultFile("out3.txt");
    EXPECT_EQ(result, testResult);
}

TEST(DigitSum, input_4) {
    std::streambuf *original = std::cout.rdbuf();

    std::stringstream buffer;
    std::cout.rdbuf(buffer.rdbuf());

    RunTestLoop("in4.txt");

    std::cout.rdbuf(original);

    std::string result = buffer.str();

    std::string testResult = ReadResultFile("out4.txt");
    EXPECT_EQ(result, testResult);
}

TEST(DigitSum, input_5) {
    std::streambuf *original = std::cout.rdbuf();

    std::stringstream buffer;
    std::cout.rdbuf(buffer.rdbuf());

    RunTestLoop("in5.txt");

    std::cout.rdbuf(original);

    std::string result = buffer.str();

    std::string testResult = ReadResultFile("out5.txt");
    EXPECT_EQ(result, testResult);
}


int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}