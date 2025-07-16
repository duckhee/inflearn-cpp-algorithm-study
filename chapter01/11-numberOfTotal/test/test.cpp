#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "main.h"

#include <iostream>
#include <sstream>
#include <string>
#include <fstream>


void RunTestLoop(const std::string &filename) {
    int number = 0;
    std::ifstream readFile(filename);

    readFile >> number;

    int result = NumberOfTotal(number);

    std::cout << result;

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

TEST(NumberOfTotal, input_1) {
    std::streambuf *original = std::cout.rdbuf();

    std::stringstream buffer;
    std::cout.rdbuf(buffer.rdbuf());

    RunTestLoop("in1.txt");

    std::cout.rdbuf(original);

    std::string result = buffer.str();

    std::string testResult = ReadResultFile("out1.txt");
    EXPECT_EQ(result, testResult);
}

TEST(NumberOfTotal, input_2) {
    std::streambuf *original = std::cout.rdbuf();

    std::stringstream buffer;
    std::cout.rdbuf(buffer.rdbuf());

    RunTestLoop("in2.txt");

    std::cout.rdbuf(original);

    std::string result = buffer.str();

    std::string testResult = ReadResultFile("out2.txt");
    EXPECT_EQ(result, testResult);
}

TEST(NumberOfTotal, input_3) {
    std::streambuf *original = std::cout.rdbuf();

    std::stringstream buffer;
    std::cout.rdbuf(buffer.rdbuf());

    RunTestLoop("in3.txt");

    std::cout.rdbuf(original);

    std::string result = buffer.str();

    std::string testResult = ReadResultFile("out3.txt");
    EXPECT_EQ(result, testResult);
}

TEST(NumberOfTotal, input_4) {
    std::streambuf *original = std::cout.rdbuf();

    std::stringstream buffer;
    std::cout.rdbuf(buffer.rdbuf());

    RunTestLoop("in4.txt");

    std::cout.rdbuf(original);

    std::string result = buffer.str();

    std::string testResult = ReadResultFile("out4.txt");
    EXPECT_EQ(result, testResult);
}

TEST(NumberOfTotal, input_5) {
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