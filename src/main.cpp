#include <iostream>
#include "Crew.h"
#include "Savegame.h"
#include "Loadgame.h"
#include "Charactersheet.h"
#include "Clock.h"

int main() {
    Crew myprinter("");
    Save mysaver("");
    Load myloader("");
    Char_sheet print_sheet("");
    Clock game_clock;
    int mynum1;

    myloader.load_game();

    std::cout << "Main is still running\n";
    std::this_thread::sleep_for(std::chrono::seconds(3));

    std::cout << "Which Character would you like to view:\n";
    myprinter.printMessage();
    std::cin >> mynum1;

    if (mynum1 == 1){
        print_sheet.printMessage();//display loaded data here
    } else {
        std::cout << "thanks for playing\n";
    }
    
    game_clock.stop();
    mysaver.save_game(&game_clock);
    return 0;
}
