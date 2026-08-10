#include "Clock.h"
#include <chrono>
#include <iostream>

Clock::Clock() {  //constructor
    clock_thread = std::thread(&Clock::process_loop, this);
}

Clock::~Clock() { //destructor
    stop_request = true;
    if (clock_thread.joinable())
    {
        clock_thread.join();
    }
    std::cout << "clock stoped";
}

void Clock::process_loop() {
    std::cout << "Thread logic running\n";
    std::this_thread::sleep_for(std::chrono::milliseconds(4));
}