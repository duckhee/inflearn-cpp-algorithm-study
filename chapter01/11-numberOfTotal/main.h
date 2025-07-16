#pragma once

#include <cassert>
#include <iostream>


int NumberOfTotal(int number) {
    assert(number >= 3 && number <= 100000);
    int cnt = 0, temp = 0;
    for (int i = 1; i <= number; i++) {
        temp = i;
        while (temp > 0) {
            temp = temp / 10;
            cnt++;
        }
    }
    return cnt;
}