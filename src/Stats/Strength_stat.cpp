#include "Stats/Strength_stat.h"
#include <iostream>
#include <vector>
#include <utility>

Strength_stat::Strength_stat(std::vector<std::pair<std::string, int>> strength) {
    this -> strength = {
        {"Strength", 20} //int to be turned into a variable from saved data at a later date
    }; 
}