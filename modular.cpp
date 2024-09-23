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
    std::cout << "3: Program Debloat" << std::endl;
    std::cout << "4: Registry Debloat" << std::endl;
    std::cout << "5: Service Debloat" << std::endl;
    std::cout << "6: Scheduled Task Debloat" << std::endl;
    std::cout << "Enter number here: ";
    std::cin >> choice;
    return choice;
}

void selectiveNuker(int ID) {
    switch (ID) {
        case 1:
            std::cout << "Killing tasks..." << std::endl;
            std::system("start tasks.bat");
            std::this_thread::sleep_for(std::chrono::seconds(5));
            std::cout << "Deleting programs..." << std::endl;
            std::system("start program.bat");
            std::cout << "Removing registry keys..." << std::endl;
            std::system("start registry.bat");
            std::cout << "Removing services..." << std::endl;
            std::system("start service.bat");
            std::cout << "Deleting startup tasks..." << std::endl;
            std::system("start startup.bat");
            std::this_thread::sleep_for(std::chrono::seconds(5));
            std::cout << "Starting re-installation prevention..." << std::endl;
            std::system("start prevention.bat");
            break;
        case 2:
            std::cout << "Killing tasks..." << std::endl;
            std::system("start tasks.bat");
            std::this_thread::sleep_for(std::chrono::seconds(5));
            std::cout << "Starting re-installation prevention..." << std::endl;
            std::system("start prevention.bat");
            break;
        case 3:
            std::cout << "Killing tasks..." << std::endl;
            std::system("start tasks.bat");
            std::this_thread::sleep_for(std::chrono::seconds(5));
            std::cout << "Deleting programs..." << std::endl;
            std::system("start program.bat");
            break;
        case 4:
            std::cout << "Killing tasks..." << std::endl;
            std::system("start tasks.bat");
            std::this_thread::sleep_for(std::chrono::seconds(5));
            std::cout << "Removing registry keys..." << std::endl;
            std::system("start registry.bat");
            break;
        case 5:
            std::cout << "Killing tasks..." << std::endl;
            std::system("start tasks.bat");
            std::this_thread::sleep_for(std::chrono::seconds(5));
            std::cout << "Removing services..." << std::endl;
            std::system("start service.bat");
            break;
        case 6:
            std::cout << "Killing tasks..." << std::endl;
            std::system("start tasks.bat");
            std::this_thread::sleep_for(std::chrono::seconds(5));
            std::cout << "Deleting startup tasks..." << std::endl;
            std::system("start startup.bat");
            break;
        default:
            std::cout << "Invalid Option, exiting program..." << std::endl;
            break;
    }
}
