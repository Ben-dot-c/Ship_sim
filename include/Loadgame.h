#pragma once
#include <string>
#include <nlohmann/json.hpp>

class Load {
public:
    Load(std::string);


    struct stat_holder {
        int str;
        int intel;
        int weap;
        int rep;
        int med;
    };

    stat_holder load_game();
    
private:
    nlohmann::json data;
};