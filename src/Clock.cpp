#include "Clock.h"
#include <chrono>
#include <thread>

Clock::Clock() {
    while (1) {
        auto start = std::chrono::steady_clock::now();
    }
}