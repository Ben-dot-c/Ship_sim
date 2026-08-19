#pragma once
#include <thread>
#include <atomic>

class Clock {
private:
    std::thread clock_thread;
    std::atomic<bool> stop_request{false};
    std::atomic<int> tick_count{0};

    void process_loop();

public:
    Clock();
    ~Clock();
    int get_tick() const;
    void stop();
};