#pragma once
#include <thread>
#include <atomic>

class Clock {
private:
    std::thread clock_thread;
    std::atomic<bool> stop_request{false};

    void process_loop();

public:
    Clock();
    ~Clock();
};