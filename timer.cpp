//ASG-12
//1) Write a C++ program for setting a timer, when it started and stopped.
#include <iostream>
#include <thread>
#include <chrono>

int main() {
    int seconds = 3; // Change this to set the timer duration

    std::cout << "Timer started for " << seconds << " seconds." << std::endl;

    // Sleep for the specified duration
    std::this_thread::sleep_for(std::chrono::seconds(seconds));

    std::cout << "Timer ended." << std::endl;

    return 0;
}

