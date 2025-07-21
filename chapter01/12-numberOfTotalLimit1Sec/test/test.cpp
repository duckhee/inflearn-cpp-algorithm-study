#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "main.h"
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <chrono>

int GetInput(const std::string &filename) {
    int inputNumber = 0;
    std::ifstream readFile(filename);

    readFile >> inputNumber;

    return inputNumber;
}

int GetResult(const std::string &filename) {
    int result = 0;
    std::ifstream readFile(filename);

    readFile >> result;

    return result;
}

TEST(NumberOfTotal, input_1) {
    int number = GetInput("in1.txt");
    auto start = std::chrono::steady_clock::now();

    int result = GetNumberOfTotal(number);

    auto end = std::chrono::steady_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);

    int expectResult = GetResult("out1.txt");

    EXPECT_EQ(result, expectResult);
    EXPECT_LT(duration.count(), 1000) << "실행 시간이 1초(1000ms)를 초과했습니다.";

}

TEST(NumberOfTotal, input_2) {
    int number = GetInput("in2.txt");
    auto start = std::chrono::steady_clock::now();

    int result = GetNumberOfTotal(number);

    auto end = std::chrono::steady_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);

    int expectResult = GetResult("out2.txt");

    EXPECT_EQ(result, expectResult);
    EXPECT_LT(duration.count(), 1000) << "실행 시간이 1초(1000ms)를 초과했습니다.";
}

TEST(NumberOfTotal, input_3) {
    int number = GetInput("in3.txt");
    auto start = std::chrono::steady_clock::now();

    int result = GetNumberOfTotal(number);

    auto end = std::chrono::steady_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);

    int expectResult = GetResult("out3.txt");

    EXPECT_EQ(result, expectResult);
    EXPECT_LT(duration.count(), 1000) << "실행 시간이 1초(1000ms)를 초과했습니다.";
}

TEST(NumberOfTotal, input_4) {
    int number = GetInput("in4.txt");
    auto start = std::chrono::steady_clock::now();

    int result = GetNumberOfTotal(number);

    auto end = std::chrono::steady_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);

    int expectResult = GetResult("out4.txt");

    EXPECT_EQ(result, expectResult);
    EXPECT_LT(duration.count(), 1000) << "실행 시간이 1초(1000ms)를 초과했습니다.";
}

TEST(NumberOfTotal, input_5) {
    int number = GetInput("in5.txt");
    auto start = std::chrono::steady_clock::now();

    int result = GetNumberOfTotal(number);

    auto end = std::chrono::steady_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);

    int expectResult = GetResult("out5.txt");

    EXPECT_EQ(result, expectResult);
    EXPECT_LT(duration.count(), 1000) << "실행 시간이 1초(1000ms)를 초과했습니다.";
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}