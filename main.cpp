#include <iostream>
#include "ACChecker.h"
#include "modular.h"

int main() {
    std::cout << "Welcome to Asus Nuker, please run this as Administrator.";
    if (isACPresent()) {
        promptUninstallTool();
        return -1;
    }
    int result = controller();
    selectiveNuker(result);
    return 0;
}
