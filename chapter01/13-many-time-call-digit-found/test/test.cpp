#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "main.h"
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <chrono>

std::string GetInput(const std::string &filename) {
    std::ifstream inputFile(filename);

    std::string inputNumber;

    inputFile >> inputNumber;

    return inputNumber;
}

int GetOutput(const std::string &filename) {
    std::ifstream inputFile(filename);

    int resultNumber = -1;

    inputFile >> resultNumber;

    if (resultNumber < 0) throw std::exception();

    return resultNumber;
}

TEST(ManyTimeCallDigitFound, input_1) {
    std::string inputNumber = GetInput("in1.txt");
    auto start = std::chrono::system_clock::now();

    int result = ManyTimeCallDigitFound(inputNumber);

    auto end = std::chrono::system_clock::now();

    auto executeTime = std::chrono::duration(end - start);

    int expectResult = GetOutput("out1.txt");

    EXPECT_EQ(result, expectResult)
                        << "Failed to testing function result : " << result << ", expect result : " << expectResult
                        << ", input number : " << inputNumber << ", execute time : " << executeTime.count() << "ms";

    EXPECT_LT(executeTime.count(), 1000) << "실행 시간이 1초(1000ms)를 초과했습니다.";
}

TEST(ManyTimeCallDigitFound, input_2) {
    std::string inputNumber = GetInput("in2.txt");
    auto start = std::chrono::system_clock::now();

    int result = ManyTimeCallDigitFound(inputNumber);

    auto end = std::chrono::system_clock::now();

    auto executeTime = std::chrono::duration(end - start);

    int expectResult = GetOutput("out2.txt");

    EXPECT_EQ(result, expectResult)
                        << "Failed to testing function result : " << result << ", expect result : " << expectResult
                        << ", input number : " << inputNumber << ", execute time : " << executeTime.count() << "ms";

    EXPECT_LT(executeTime.count(), 1000) << "실행 시간이 1초(1000ms)를 초과했습니다.";
}

TEST(ManyTimeCallDigitFound, input_3) {
    std::string inputNumber = GetInput("in3.txt");
    auto start = std::chrono::system_clock::now();

    int result = ManyTimeCallDigitFound(inputNumber);

    auto end = std::chrono::system_clock::now();

    auto executeTime = std::chrono::duration(end - start);

    int expectResult = GetOutput("out3.txt");

    EXPECT_EQ(result, expectResult)
                        << "Failed to testing function result : " << result << ", expect result : " << expectResult
                        << ", input number : " << inputNumber << ", execute time : " << executeTime.count() << "ms";

    EXPECT_LT(executeTime.count(), 1000) << "실행 시간이 1초(1000ms)를 초과했습니다.";
}

TEST(ManyTimeCallDigitFound, input_4) {
    std::string inputNumber = GetInput("in4.txt");
    auto start = std::chrono::system_clock::now();

    int result = ManyTimeCallDigitFound(inputNumber);

    auto end = std::chrono::system_clock::now();

    auto executeTime = std::chrono::duration(end - start);

    int expectResult = GetOutput("out4.txt");

    EXPECT_EQ(result, expectResult)
                        << "Failed to testing function result : " << result << ", expect result : " << expectResult
                        << ", input number : " << inputNumber << ", execute time : " << executeTime.count() << "ms";

    EXPECT_LT(executeTime.count(), 1000) << "실행 시간이 1초(1000ms)를 초과했습니다.";
}

TEST(ManyTimeCallDigitFound, input_5) {
    std::string inputNumber = GetInput("in5.txt");
    auto start = std::chrono::system_clock::now();

    int result = ManyTimeCallDigitFound(inputNumber);

    auto end = std::chrono::system_clock::now();

    auto executeTime = std::chrono::duration(end - start);

    int expectResult = GetOutput("out5.txt");

    EXPECT_EQ(result, expectResult)
                        << "Failed to testing function result : " << result << ", expect result : " << expectResult
                        << ", input number : " << inputNumber << ", execute time : " << executeTime.count() << "ms";;

    EXPECT_LT(executeTime.count(), 1000) << "실행 시간이 1초(1000ms)를 초과했습니다.";
}


int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}