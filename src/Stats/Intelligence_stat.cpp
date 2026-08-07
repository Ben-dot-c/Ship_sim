#include "Stats/Intelligence_stat.h"
#include <iostream>
#include <vector>
#include <utility>

Intelligence_stat::Intelligence_stat(std::vector<std::pair<std::string, int>> intelligence) {
    this->intelligence = {
        {"Intelligence ", 20} //int to be turned into a variable from saved data at a later date
    };
}