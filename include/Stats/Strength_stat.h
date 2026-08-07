#pragma once
#include <string>
#include <vector>

class Strength_stat{
    public:
        Strength_stat(std::vector<std::pair<std::string, int>> initial_strength = {});
        std::vector<std::pair<std::string, int>> strength;
};