#pragma once

#include <cassert>
#include <iostream>

void ProperDivisor(int N) {
    assert(3 < N);
    assert(N <= 100);

    int sum = 0;

    for (int i = 1; i <= N; i++) {

        if (N % i == 0) {
            if (i == N) break;
            if (i != 1) std::cout << " + ";
            sum += i;
            std::cout << i;
        }
    }
    std::cout << " = " << sum << std::endl;
}