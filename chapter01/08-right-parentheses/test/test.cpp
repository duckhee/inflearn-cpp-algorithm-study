#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "main.h"
#include <sstream>
#include <string>
#include <iostream>


TEST(RightParaentheses, input_1) {
    std::streambuf *original = std::cout.rdbuf();

    std::stringstream buffer;
    std::cout.rdbuf(buffer.rdbuf());

    std::string str = "(())()";

    RightParentheses(str);

    std::cout.rdbuf(original);

    std::string result = buffer.str();

    EXPECT_EQ(result, "YES");
}

TEST(RightParaentheses, input_2) {
    std::streambuf *original = std::cout.rdbuf();

    std::stringstream buffer;
    std::cout.rdbuf(buffer.rdbuf());


    std::string str = "((()())())))";

    RightParentheses(str);

    std::cout.rdbuf(original);

    std::string result = buffer.str();

    EXPECT_EQ(result, "NO");
}

TEST(RightParaentheses, input_3) {
    std::streambuf *original = std::cout.rdbuf();

    std::stringstream buffer;
    std::cout.rdbuf(buffer.rdbuf());

    std::string str = ")(())(";

    RightParentheses(str);

    std::cout.rdbuf(original);

    std::string result = buffer.str();

    EXPECT_EQ(result, "NO");
}

TEST(RightParaentheses, input_4) {
    std::streambuf *original = std::cout.rdbuf();

    std::stringstream buffer;
    std::cout.rdbuf(buffer.rdbuf());

    std::string str = "((())())())(";

    RightParentheses(str);

    std::cout.rdbuf(original);

    std::string result = buffer.str();

    EXPECT_EQ(result, "NO");
}

TEST(RightParaentheses, input_5) {
    std::streambuf *original = std::cout.rdbuf();

    std::stringstream buffer;
    std::cout.rdbuf(buffer.rdbuf());

    std::string str = "(((())((((())((((())))))))))";

    RightParentheses(str);

    std::cout.rdbuf(original);

    std::string result = buffer.str();

    EXPECT_EQ(result, "YES");
}


int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}