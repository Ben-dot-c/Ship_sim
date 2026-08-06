#pragma once;
#include <string>
#include <vector>

class Repair_stat{
    public:
        Repair_stat(std::vector<std::pair<std::string, int>> initial_repair = {});
        std::vector<std::pair<std::string, int>> repair;
};  