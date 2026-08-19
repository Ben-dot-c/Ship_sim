#include "Clock.h"
#include <chrono>
#include <iostream>

Clock::Clock() {  //constructor
    clock_thread = std::thread(&Clock::process_loop, this);
}

Clock::~Clock() { //destructor
    stop();
    std::cout << "clock stopped";
}

void Clock::process_loop() {
    while (!stop_request)
    {
        std::this_thread::sleep_for(std::chrono::milliseconds(1000/256));
        tick_count++;

        //std::cout << "Thread logic running\n";
        //std::cout << tick_count;
    }
}

int Clock::get_tick() const {
    int current_tick = tick_count;
    return current_tick;
}

void Clock::stop() {
    stop_request = true;
    if (clock_thread.joinable())
    {
        clock_thread.join();
    }
}