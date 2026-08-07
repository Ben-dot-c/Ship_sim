// Keep main() thin — orchestration only, per PROJECT.md conventions
#include <iostream>
#include "Crew.h"
#include "Savegame.h"


int main() {
    std::cout << "Hello World!\n";
    Crew myprinter("Captain");
    Save mysaver("filler?");

    mysaver.save_game();
    myprinter.printMessage();
    return 0;
}
