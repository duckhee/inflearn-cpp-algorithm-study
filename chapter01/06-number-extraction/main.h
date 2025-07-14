#pragma once

#include <cassert>
#include <iostream>
#include <string>


void GetNumberExtraction(std::string &str) {
    assert(!str.empty());
    int findNumberCount = 0;
    int number = 0;
    int numberOfMeasure = 0;

    for (int i = 0; i < str.size(); i++) {
        if ((str.c_str()[i] - '0') >= 0 && (str.c_str()[i] - '0') <= 9) {
            number = number * 10 + (str.c_str()[i] - 48);
            findNumberCount++;
        }
    }



    for (int i = 1; i <= number; i++) {
        if (number % i == 0) numberOfMeasure++;
    }

    std::cout << number << std::endl << numberOfMeasure << std::endl;
}