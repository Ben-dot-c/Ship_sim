#include "Crew.h"
#include <iostream>

Crew::Crew(std::string) {
}
void Crew::printMessage() {
    std::cout << "               +-------------------+\n"
              << "               |crew Name|Crew Role|\n"
              << "               |---------|---------|\n"
              << "Crew memeber 1 |Dan      |Capitan  |\n"
              << "Crew memeber 2 |Alice    |Gunner   |\n"
              << "Crew memeber 3 |Larry    |Medic    |\n"
              << "Crew memeber 4 |Susie    |Pilot    |\n"
              << "Crew memeber 5 |Emily    |Navigator|\n"
              << "Crew memeber 6 |Ben      |Engineer |\n"
              << "               +-------------------+\n";
};