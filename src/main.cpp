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
    Clock Clock;
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
    
    mysaver.save_game();
    return 0;
}
