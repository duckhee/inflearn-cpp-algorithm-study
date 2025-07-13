#pragma once

#include <cassert>
#include <iostream>
#include <string>


#define CURRENT_YEAR                2019


void PrintIDCardInformation2(std::string &id) {
    assert(!id.empty());
    size_t splitIdx = -1;

    splitIdx = id.find('-');
    assert(splitIdx != std::string::npos);

    char condition = id[splitIdx + 1];

    if (condition <= '2') {
        std::string yearStr = "19" + id.substr(0, 2);
        int birthDay = std::stoi(yearStr);
        std::cout << CURRENT_YEAR - birthDay + 1 << " " << ((condition == '1') ? "M" : "W");
    } else {
        std::string yearStr = "20" + id.substr(0, 2);
        int birthDay = std::stoi(yearStr);
        std::cout << CURRENT_YEAR - birthDay + 1 << " " << ((condition == '3') ? "M" : "W");
    }

}


void PrintIDCardInformation(std::string &id) {
    assert(!id.empty());

    char condition = id[7];

    if (condition == '1' || condition == '2') {
        int birthYear = 1900 + ((id[0] - '0') * 10 + (id[1] - '0'));
        std::cout << CURRENT_YEAR - birthYear + 1 << " " << (condition == '1' ? 'M' : 'W');
    } else if (condition == '3' || condition == '4') {
        int birthYear = 2000 + ((id[0] - '0') * 10 + (id[1] - '0'));
        std::cout << CURRENT_YEAR - birthYear + 1 << " " << (condition == '3' ? 'M' : 'W');
    }
}