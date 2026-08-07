#include "Loadgame.h"
#include <iostream>
#include <fstream>
#include <nlohmann/json.hpp>

using json = nlohmann::json;

Load::Load(std::string) {
    std::ifstream file("Save_Games/Save_game.json");

    if (!file.is_open()){
        std::cerr << "Error opening file\n";
        std::abort();
    }

    file >> data;
    file.close();
}   

Load::stat_holder Load::load_game() {
    stat_holder stat_holder_result;
    stat_holder_result.str = data.value("Strength", 1);
    stat_holder_result.intel = data.value("Intelligence", 1);
    stat_holder_result.weap = data.value("Weapons", 1);
    stat_holder_result.rep = data.value("Repair", 1);
    stat_holder_result.med = data.value("Medicine", 1);
    return stat_holder_result;
}