#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "main.h"
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <chrono>






int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}