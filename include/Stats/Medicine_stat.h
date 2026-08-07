#pragma once
#include <string>
#include <vector>

class Medicine_stat{
    public:
        Medicine_stat(std::vector<std::pair<std::string, int>> initial_medicine = {});
        std::vector<std::pair<std::string, int>> medicine;
};