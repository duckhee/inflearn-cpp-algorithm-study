#pragma once

#include <cassert>
#include <iostream>
#include <string>


void RestorationWord(std::string &str) {
    assert(!str.empty());
    std::string word;

    for (int i = 0; i < str.size(); i++) {
        if (str[i] != ' ') {
            if (str[i] >= 65 && str[i] <= 90) word.push_back(char(tolower(str[i])));
            else word.push_back(str[i]);
        }
    }

    std::cout << word;
}
