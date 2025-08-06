#include <iostream>
#include <thread>
#include <chrono>
int main() {
    unsigned int INPUT {};
    std::cout << "Enter how long in minutes will be timer: ";
    std::cin >> INPUT;
    int min = 0;
    int sec = 0;
    while (min < INPUT) {
        std::cout << min << " minutes : " << sec  << " seconds"<< std::endl;
        if (sec >= 60 ) {
            min += 1;
            sec = 0;
        }
        std::this_thread::sleep_for(std::chrono::seconds(1));
        sec++;
    }
    std::cout << "\a TIME IS OVER";
}
