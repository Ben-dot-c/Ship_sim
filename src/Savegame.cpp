#include "Savegame.h"
#include <iostream>
#include <fstream>
#include <filesystem>
#include <nlohmann/json.hpp>

using json = nlohmann::json;

Save::Save(std::string filename) {
}
void Save::save_game(){
    json data;
    data["Strength"] = strength.strength[0].second;
    data["Intelligence"] = intelligence.intelligence[0].second;
    data["Weapons"] = weapons.weapons[0].second;
    data["Repair"] = repair.repair[0].second;
    data["Medicine"] = medicine.medicine[0].second;

    std::filesystem::create_directories("Save_Games");
    std::ofstream file("Save_Games/Save_game.json");

    if (file.is_open()) {
        file << data.dump(4);
        file.close();
        std::cout << "Written to Json successfully";
    } else {
        std::cerr << "error writing to file";
    }
}