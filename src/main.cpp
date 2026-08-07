#include <iostream>
#include "Crew.h"
#include "Savegame.h"
#include "Loadgame.h"


int main() {
    std::cout << "Hello World!\n";
    Crew myprinter("Captain");
    Save mysaver("filler?");
    Load myloader("filler?");


    myloader.load_game();
    //display loaded data here
    mysaver.save_game();
    myprinter.printMessage();
    return 0;
}
