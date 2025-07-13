#pragma once

#include <cassert>

int MultiSum(int N, int M) {
    assert(N > 0);
    assert(M > 0);

    int sum = 0;

    for (int i = 0; i <= N; i++) {
        if (i % M == 0) sum += i;
    }

    return sum;
}