#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "main.h"
#include <sstream>
#include <iostream>
#include <string>

TEST(GetNumberExtraction, input_str1) {
    std::streambuf *originalBuffer = std::cout.rdbuf();
    std::stringstream buffer;
    std::cout.rdbuf(buffer.rdbuf());

    std::string str = "kdk1k0kdjfkj0kkdjkfj0fkd";

    GetNumberExtraction(str);

    std::cout.rdbuf(originalBuffer);

    std::string result = buffer.str();

    EXPECT_EQ(result, "1000\n16\n");
}

TEST(GetNumberExtraction, input_str2) {
    std::streambuf *originalBuffer = std::cout.rdbuf();
    std::stringstream buffer;
    std::cout.rdbuf(buffer.rdbuf());

    std::string str = "dkf0jkk0dkjkgjljl1kgh0ekjlkjf2lkjsklfjlkdj";

    GetNumberExtraction(str);

    std::cout.rdbuf(originalBuffer);

    std::string result = buffer.str();

    EXPECT_EQ(result, "102\n8\n");
}

TEST(GetNumberExtraction, input_str3) {
    std::streambuf *originalBuffer = std::cout.rdbuf();
    std::stringstream buffer;
    std::cout.rdbuf(buffer.rdbuf());

    std::string str = "Akdj0Gk1djADG2SDGkdjf";

    GetNumberExtraction(str);

    std::cout.rdbuf(originalBuffer);

    std::string result = buffer.str();

    EXPECT_EQ(result, "12\n6\n");
}

TEST(GetNumberExtraction, input_str4) {
    std::streambuf *originalBuffer = std::cout.rdbuf();
    std::stringstream buffer;
    std::cout.rdbuf(buffer.rdbuf());

    std::string str = "Akdj0Gk1djADG2SDGkdj0f";

    GetNumberExtraction(str);

    std::cout.rdbuf(originalBuffer);

    std::string result = buffer.str();

    EXPECT_EQ(result, "120\n16\n");
}

TEST(GetNumberExtraction, input_str5) {
    std::streambuf *originalBuffer = std::cout.rdbuf();
    std::stringstream buffer;
    std::cout.rdbuf(buffer.rdbuf());

    std::string str = "Akdj0Gk1dgdgdAGSGAG3DGGA45GAGADGDGdjADG2SDGkdj0f";

    GetNumberExtraction(str);

    std::cout.rdbuf(originalBuffer);

    std::string result = buffer.str();

    EXPECT_EQ(result, "134520\n64\n");
}
int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}