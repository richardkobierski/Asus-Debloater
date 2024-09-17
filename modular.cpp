#include "modular.h"
#include <iostream>
#include <cstdlib>
#include <chrono>
#include <thread>

int controller() {
    int choice;
    std::cout << "Please pick which service you wish to run:" << std::endl;
    std::cout << "1: All Services" << std::endl;
    std::cout << "2: Re-installation Prevention" << std::endl;
    std::cout << "3: Program Nuker" << std::endl;
    std::cout << "4: Registry Nuker" << std::endl;
    std::cout << "5: Service Nuker" << std::endl;
    std::cout << "6: Scheduled Task Nuker (WIP)" << std::endl;
    std::cin >> choice;
    return choice;
}

void selectiveNuker(int ID) {
    switch (ID) {
        case 1:
            std::system("start taskkiller.bat");
            std::this_thread::sleep_for(std::chrono::seconds(5));
            std::system("start programNuker.bat");
            std::system("start regNuker.bat");
            std::system("start serviceNuker.bat");
            std::this_thread::sleep_for(std::chrono::seconds(5));
            std::system("start prevention.bat");
            break;
        case 2:
            std::system("start taskkiller.bat");
            std::this_thread::sleep_for(std::chrono::seconds(5));
            std::system("start prevention.bat");
            break;
        case 3:
            std::system("start taskkiller.bat");
            std::this_thread::sleep_for(std::chrono::seconds(5));
            std::system("start programNuker.bat");
            break;
        case 4:
            std::system("start taskkiller.bat");
            std::this_thread::sleep_for(std::chrono::seconds(5));
            std::system("start regNuker.bat");
            break;
        case 5:
            std::system("start taskkiller.bat");
            std::this_thread::sleep_for(std::chrono::seconds(5));
            std::system("start serviceNuker.bat");
            break;
        case 6:
            //std::system("start startupNuker.bat");
            //std::this_thread::sleep_for(std::chrono::seconds(5));
            std::cout << "This option is currently unstable and is disabled." << std::endl;
            std::cout << "Option: Manually open task schedule and delete all mentions of ASUS." << std::endl;
            break;
        default:
            std::cout << "Invalid Option, exiting program..." << std::endl;
            break;
    }
}
