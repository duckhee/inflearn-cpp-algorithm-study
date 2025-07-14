#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "main.h"

#include <iostream>
#include <sstream>
#include <string>

TEST(RestorationWord, input_str1) {
    std::streambuf *originalBuffer = std::cout.rdbuf();

    std::stringstream buffer;
    std::cout.rdbuf(buffer.rdbuf());

    std::string str = "go   Di   s  p  E   o pLe";

    RestorationWord(str);

    std::cout.rdbuf(originalBuffer);

    std::string result = buffer.str();

    EXPECT_EQ(result, "godispeople");
}

TEST(RestorationWord, input_str2) {
    std::streambuf *originalBuffer = std::cout.rdbuf();

    std::stringstream buffer;
    std::cout.rdbuf(buffer.rdbuf());

    std::string str = "t E a c h e r";

    RestorationWord(str);

    std::cout.rdbuf(originalBuffer);

    std::string result = buffer.str();

    EXPECT_EQ(result, "teacher");
}

TEST(RestorationWord, input_str3) {
    std::streambuf *originalBuffer = std::cout.rdbuf();

    std::stringstream buffer;
    std::cout.rdbuf(buffer.rdbuf());

    std::string str = "ha Ndyou";

    RestorationWord(str);

    std::cout.rdbuf(originalBuffer);

    std::string result = buffer.str();

    EXPECT_EQ(result, "handyou");
}

TEST(RestorationWord, input_str4) {
    std::streambuf *originalBuffer = std::cout.rdbuf();

    std::stringstream buffer;
    std::cout.rdbuf(buffer.rdbuf());

    std::string str = "K i mtawoN";

    RestorationWord(str);

    std::cout.rdbuf(originalBuffer);

    std::string result = buffer.str();

    EXPECT_EQ(result, "kimtawon");
}

TEST(RestorationWord, input_str5) {
    std::streambuf *originalBuffer = std::cout.rdbuf();

    std::stringstream buffer;
    std::cout.rdbuf(buffer.rdbuf());

    std::string str = "B o okfA t h      E R";

    RestorationWord(str);

    std::cout.rdbuf(originalBuffer);

    std::string result = buffer.str();

    EXPECT_EQ(result, "bookfather");
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);

    return RUN_ALL_TESTS();
}