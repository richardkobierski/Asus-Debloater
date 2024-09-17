#include "ACChecker.h"
#include <string>
#include <iostream>
#include <filesystem>


void promptUninstallTool() {
    std::cout << "Please Run the Armory Crate Uninstall Tool:";
    std::cout << "https://dlcdnets.asus.com/pub/ASUS/mb/14Utilities/Armoury_Crate_Uninstall_Tool.zip?model=Armoury%20Crate";
    std::cout << std::endl;
}

bool isACPresent() {
    std::string path = "C:\\ProgramData\\ASUS\\ARMOURY CRATE BI\\bi_local.config";
    if (std::filesystem::exists(path)) {
        return true;
    }
    return false;
}
