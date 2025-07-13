#pragma once

#include <cassert>
#include <iostream>
#include <fstream>
#include <cmath>


int AgeDifference(int number, int *ages) {
    assert(number > 0);
    assert(ages != nullptr);

    int max = ages[0];
    int min = ages[0];
    int diff = 0;

    for (int i = 0; i < number; i++) {
        if (ages[i] < min) min = ages[i];
        if (ages[i] > max) max = ages[i];
    }

    diff = max - min;

    return diff;
}