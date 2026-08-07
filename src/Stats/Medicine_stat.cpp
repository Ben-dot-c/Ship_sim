#include "Stats/Medicine_stat.h"
#include <iostream>
#include <vector>
#include <utility>

Medicine_stat::Medicine_stat(std::vector<std::pair<std::string, int>> medicine) {
    this->medicine = {
        {"Medicine ", 20} //int to be turned into a variable from saved data at a later date
    };
}