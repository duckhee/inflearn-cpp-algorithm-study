#include <gtest/gtest.h>
#include <gmock/gmock.h>

#include "main.h"

#include <iostream>
#include <sstream>
#include <string>
#include <chrono>
#include <filesystem>
#include <fstream>

std::string ReadResultFile(const std::string& filename) {
    std::string result;
    std::ifstream readFile(filename);
    std::stringstream ss;

    ss << readFile.rdbuf();

    readFile.close();

    result = ss.str();

    return result;
}

TEST(CommonDivisorTest, input_1) {
    std::streambuf *original = std::cout.rdbuf();

    std::stringstream buffer;
    std::cout.rdbuf(buffer.rdbuf());

    auto start = std::chrono::steady_clock::now();

    CommonDivisor(10);

    auto end = std::chrono::steady_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);

    std::cout.rdbuf(original);

    std::string result = buffer.str();

    std::string testResult = ReadResultFile("out1.txt");
    EXPECT_EQ(result, testResult);

    EXPECT_LT(duration.count(), 1000) << "실행 시간이 1초(1000ms)를 초과했습니다.";

}

TEST(CommonDivisorTest, input_2) {
    std::streambuf *original = std::cout.rdbuf();

    std::stringstream buffer;
    std::cout.rdbuf(buffer.rdbuf());
    auto start = std::chrono::steady_clock::now();

    CommonDivisor(1000);

    auto end = std::chrono::steady_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);

    std::cout.rdbuf(original);

    std::string result = buffer.str();

    std::string testResult = ReadResultFile("out2.txt");
    EXPECT_EQ(result, testResult);

    EXPECT_LT(duration.count(), 1000) << "실행 시간이 1초(1000ms)를 초과했습니다.";
}

TEST(CommonDivisorTest, input_3) {
    std::streambuf *original = std::cout.rdbuf();

    std::stringstream buffer;
    std::cout.rdbuf(buffer.rdbuf());
    auto start = std::chrono::steady_clock::now();

    CommonDivisor(10000);

    auto end = std::chrono::steady_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);

    std::cout.rdbuf(original);

    std::string result = buffer.str();

    std::string testResult = ReadResultFile("out3.txt");
    EXPECT_EQ(result, testResult);

    EXPECT_LT(duration.count(), 1000) << "실행 시간이 1초(1000ms)를 초과했습니다.";

}

TEST(CommonDivisorTest, input_4) {
    std::streambuf *original = std::cout.rdbuf();

    std::stringstream buffer;
    std::cout.rdbuf(buffer.rdbuf());
    auto start = std::chrono::steady_clock::now();

    CommonDivisor(30000);

    auto end = std::chrono::steady_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);

    std::cout.rdbuf(original);

    std::string result = buffer.str();

    std::string testResult = ReadResultFile("out4.txt");
    EXPECT_EQ(result, testResult);

    EXPECT_LT(duration.count(), 1000) << "실행 시간이 1초(1000ms)를 초과했습니다.";

}

TEST(CommonDivisorTest, input_5) {
    std::streambuf *original = std::cout.rdbuf();

    std::stringstream buffer;
    std::cout.rdbuf(buffer.rdbuf());
    auto start = std::chrono::steady_clock::now();

    CommonDivisor(50000);

    auto end = std::chrono::steady_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);

    std::cout.rdbuf(original);

    std::string result = buffer.str();

    std::string testResult = ReadResultFile("out5.txt");
    EXPECT_EQ(result, testResult);

    EXPECT_LT(duration.count(), 1000) << "실행 시간이 1초(1000ms)를 초과했습니다.";

}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}