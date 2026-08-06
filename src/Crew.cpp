#include "Crew.h"
#include <iostream>

Crew::Crew(std::string) {
}
void Crew::printMessage() {
    std::cout << "┍-------------------┐\n"
              << "|crew Name|Crew Role|\n"
              << "|---------|---------|\n"
              << "|Dan      |Capitan  |\n"
              << "|Alice    |Gunner   |\n"
              << "|Larry    |Medic    |\n"
              << "|Susie    |Pilot    |\n"
              << "|Emily    |Navigator|\n"
              << "|Ben      |Engineer |\n"
              << "└-------------------┘\n";
};