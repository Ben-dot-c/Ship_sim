#include "Stats/Weapons_stat.h"
#include <iostream>
#include <vector>
#include <utility>

Weapons_stat::Weapons_stat(std::vector<std::pair<std::string, int>> weapons) {
    this->weapons = {
        {"Weapons ", 20} //int to be turned into a variable from saved data at a later date
    };
}