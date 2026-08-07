#pragma once
#include <string>
#include <vector>

class Intelligence_stat{
    public:
        Intelligence_stat(std::vector<std::pair<std::string, int>> initial_intelligence = {});
        std::vector<std::pair<std::string, int>> intelligence;
};