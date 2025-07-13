#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include <sstream>
#include <string>
#include <iostream>
#include "main.h"

TEST(IDCheckerTest, ID1) {
    std::streambuf *originalBuffer = std::cout.rdbuf();
    std::stringstream buffer;
    std::cout.rdbuf(buffer.rdbuf());

    std::string id = "720213-1765231";

    PrintIDCardInformation(id);

    std::cout.rdbuf(originalBuffer);

    std::string result = buffer.str();

    EXPECT_EQ(result, "48 M");
}

TEST(IDCheckerTest, ID2) {
    std::streambuf *originalBuffer = std::cout.rdbuf();
    std::stringstream buffer;
    std::cout.rdbuf(buffer.rdbuf());

    std::string id = "061212-3214567 ";

    PrintIDCardInformation(id);

    std::cout.rdbuf(originalBuffer);

    std::string result = buffer.str();

    EXPECT_EQ(result, "14 M");
}


TEST(IDCheckerTest, ID3) {
    std::streambuf *originalBuffer = std::cout.rdbuf();
    std::stringstream buffer;
    std::cout.rdbuf(buffer.rdbuf());

    std::string id = "180205-2134564";

    PrintIDCardInformation(id);

    std::cout.rdbuf(originalBuffer);

    std::string result = buffer.str();

    EXPECT_EQ(result, "102 W");
}


TEST(IDCheckerTest, ID4) {
    std::streambuf *originalBuffer = std::cout.rdbuf();
    std::stringstream buffer;
    std::cout.rdbuf(buffer.rdbuf());

    std::string id = "000205-3134564";

    PrintIDCardInformation(id);

    std::cout.rdbuf(originalBuffer);

    std::string result = buffer.str();

    EXPECT_EQ(result, "20 M");
}


TEST(IDCheckerTest, ID5) {
    std::streambuf *originalBuffer = std::cout.rdbuf();
    std::stringstream buffer;
    std::cout.rdbuf(buffer.rdbuf());

    std::string id = "120205-1134564";

    PrintIDCardInformation(id);

    std::cout.rdbuf(originalBuffer);

    std::string result = buffer.str();

    EXPECT_EQ(result, "108 M");
}


int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}