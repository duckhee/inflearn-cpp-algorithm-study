#pragma once

#include <cassert>

int GetNumberOfTotal(int number) {
    assert(number >= 3 && number < 1000000000);
    int sum = 0, c = 1, d = 9, res = 0;

    while (sum + d < number) {
        res = res + (c * d);
        sum = sum + d;
        c++;
        d = d * 10;
    }
    res = res + ((number - sum) * c);

    return res;
}