#pragma once
#include <string>
#include <vector>

class Weapons_stat{
    public:
        Weapons_stat(std::vector<std::pair<std::string, int>> initial_weapons = {});
        std::vector<std::pair<std::string, int>> weapons;
};