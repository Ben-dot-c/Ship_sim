#include "Charactersheet.h"
#include "Loadgame.h"
#include <cstdio>

Char_sheet::Char_sheet(std::string) {
}

void Char_sheet::printMessage() {
    Load loader("filler");
    Load::stat_holder result = loader.load_game();

    int xp = 67;

    std::printf ( "+-------------------+\n"
                  "|CHAR NAME|  %d/100 |\n"
                  "|---------|---------|\n"
                  "|STR      |   %d    |\n"
                  "|INT      |   %d    |\n"
                  "|WEAP     |   %d    |\n"
                  "|REPAIR   |   %d    |\n"
                  "|MEDIC    |   %d    |\n"
                  "+-------------------+\n",
                 xp, result.str, result.intel, result.weap, result.rep, result.med);
} 