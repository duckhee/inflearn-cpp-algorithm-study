#pragma once

#include <cassert>
#include <string>
#include <iostream>


int ManyTimeCallDigitFound(std::string number) {
    int i, digit, max = -1, res;
    int ch[10] = {0,};

    for (i = 0; number[i] != '\0'; i++) {
        digit = number[i] - 48;
        ch[digit]++;
    }

    for (i = 0; i < 10; i++) {
        if (ch[i] >= max) {
            max = ch[i];
            res = i;
        }
    }

    return res;
}