#pragma once


int digit_sum(int x) {
    int sum = 0, temp = 0;

    while (x > 0) {
        temp = x % 10;
        sum = sum + temp;
        x = x / 10;
    }

    return sum;
}