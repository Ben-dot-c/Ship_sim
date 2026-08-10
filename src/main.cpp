#include <iostream>
#include "Crew.h"
#include "Savegame.h"
#include "Loadgame.h"
#include "Charactersheet.h"

int main() {
    Crew myprinter("");
    Save mysaver("");
    Load myloader("");
    Char_sheet print_sheet("");
    int mynum1;

    myloader.load_game();

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
