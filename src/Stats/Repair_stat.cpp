#include "Stats/Repair_stat.h"
#include <iostream>
#include <vector>
#include <utility>

Repair_stat::Repair_stat(std::vector<std::pair<std::string, int>> repair) {
    this->repair = {
        {"Repair", 20} //int to be turned into a variable from saved data at a later date
    };
}