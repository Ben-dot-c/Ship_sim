#pragma once
#include "Stats/Intelligence_stat.h"
#include "Stats/Strength_stat.h"
#include "Stats/Medicine_stat.h"
#include "Stats/Repair_stat.h"
#include "Stats/Weapons_stat.h"
#include "Clock.h"

class Save {
public:
    Save(std::string filename);
    Strength_stat strength;
    Intelligence_stat intelligence;
    Weapons_stat weapons;
    Medicine_stat medicine;
    Repair_stat repair;

    void save_game(Clock* clock);
};