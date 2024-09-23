#include <iostream>
#include "ACChecker.h"
#include "modular.h"
#include <chrono>
#include <thread>

int main() {
    std::cout << "Welcome to Asus Nuker, please run this as Administrator. ";
    if (isACPresent()) {
        promptUninstallTool();
        return -1;
    }
    int result = controller();
    selectiveNuker(result);
    std::cout << "Done! Exiting in 2 seconds.";
    std::this_thread::sleep_for(std::chrono::seconds(2));
    return 0;
}
