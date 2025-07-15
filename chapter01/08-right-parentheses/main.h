#include <cassert>
#include <iostream>
#include <string>

#pragma once


void RightParentheses(std::string &str) {
    assert(!str.empty());
    int count = 0;
    for (int i = 0; i < str.size(); i++) {
        if (str.c_str()[i] == '(') count++;
        else if (str.c_str()[i] == ')') count--;
        if (count < 0) break;
    }

    if (count == 0) std::cout << "YES";
    else std::cout << "NO";
}