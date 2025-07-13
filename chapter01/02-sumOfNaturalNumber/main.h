#pragma once

#include <iostream>
#include <string>
#include <cassert>

void SumOfNaturalNumber(int A, int B) {
    assert(1 <= A && 1 <= B);
    assert(A < B);
    assert(A <= 100 & B <= 100);

    int sum = 0;

    for (int i = A; i <= B; i++) {
        sum += i;
        std::cout << i;

        if (i != B) std::cout << " + ";
    }

    std::cout << " = " << sum << std::endl;
}