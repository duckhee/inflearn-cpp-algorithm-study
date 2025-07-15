#pragma once

#include <cassert>
#include <iostream>

void CommonDivisor(int number) {
    assert(number >= 5 && number <= 50000);

    int *numberOfDivisors = new int[number + 1]();

    for (int i = 1; i <= number; i++) {
        for (int j = i; j <= number; j = j + i) {
            numberOfDivisors[j]++;
        }
    }

    for (int i = 1; i <= number; i++) {
        std::cout << numberOfDivisors[i];
        if (i != number) std::cout << " ";
    }

    delete[] numberOfDivisors;
#if 0
    for (int i = 1; i <= number; i++) {
        int divisorNumber = 0;
        for (int j = 1; j <= i; j++) {
            if (i % j == 0) divisorNumber++;
        }
        std::cout << divisorNumber;
        if (i != number) std::cout << " ";
    }
#endif
}