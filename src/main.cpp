// Keep main() thin — orchestration only, per PROJECT.md conventions
#include <iostream>
#include "Crew.h"


int main() {
    std::cout << "Hello World!\n";
    Crew myprinter("Captain");

    myprinter.printMessage();
    return 0;
}
