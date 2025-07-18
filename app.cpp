#include <iostream>
#include <string>
#include <fstream>
#include "regions.h"
#include "travel.h"

 /* ========== Philippine Map Project  Programming 112 ================== */



// Luzon ==========================================================
void luzon_reg() {
    std::cout << "\n==================== LUZON ISLAND ====================\n";
    std::cout << "Description: Luzon is the largest and most populous \nisland in the Philippines, serving as the nation's economic\nand political center.\n";
    std::string reg;
    std::string regions[] = {"Ilocos Region (Region I):==========================> [1]", "Cagayan Valley (Region II):========================> [2]", "Central Luzon (Region III):========================> [3]", "CALABARZON (Region IV-A):==========================> [4a]", 
        "MIMAROPA (Region IV-B):============================> [4b]", "Bicol Region (Region V):===========================> [5]",
        "National Capital Region (NCR):=====================> [ncr]", "Cordillera Administrative Region (CAR):============> [car]"
    };
    int size = sizeof(regions) / sizeof(regions[0]);
    
    while (true) {
        std::cout << "\n==================== Luzon (Regions) ====================\n";
        for (int i = 0; i < size; i++) {
        std::cout << regions[i] << std::endl;
        }
        std::cout << "\n[type]: back - Previous;\n";
        std::cout << "[SELECT]Region in Luzon: ";
        std::cin >> reg;
        
        if (reg == "1") {
            reg_i();
        } else if (reg == "2") {
            reg_ii();
        } else if (reg == "3") {
            reg_iii();
        } else if (reg == "4a" || reg == "4A" || reg == "4-a" || reg == "4-B") {
            reg_ivA();
        } else if (reg == "4b" || reg == "4B" || reg == "4-b" || reg == "4-B") {
            reg_ivB();
        } else if (reg == "5") {
            reg_v();
        } else if (reg == "ncr" || reg == "NCR") {
            reg_ncr();
        }else if (reg == "car" || reg == "CAR") {
            reg_car();
        } else if (reg == "back" || reg == "Back" || reg == "BACK") {
            std::cout << "\n===========================\n";
            break;
        }else {
            std::cout << "\n===========================\n";
            std::cout << "[error] Region not in Luzon";
            std::cout << "\n===========================\n";
        }
    }
    
}

// Visayas =========================================================

void visayas_reg() {
    std::cout << "\n==================== VISAYAS ISLAND ====================\n";
    std::cout << "Description: The Visayas is a major island group and cultural region\n in the central Philippines, known for its diverse landscapes,\nvibrant culture, and numerous tourist destinations\n";
    std::string reg;
    std::string regions[] = {
        "Western Visayas (Region VI):=========================> [6]", "Central Visayas (Region VII):========================> [7]", "Eastern Visayas (Region VIII):=======================> [8]"
    };
    int size = sizeof(regions) / sizeof(regions[0]);
    
    while (true) {
        std::cout << "\n==================== Visayas (Regions) ====================\n";
        for (int i = 0; i < size; i++) {
        std::cout << regions[i] << std::endl;
        }
        std::cout << "\n[type]: back - Previous;\n";
        std::cout << "[SELECT]Region in Visayas: ";
        std::cin >> reg;
        
        if (reg == "6") {
            reg_vi();
        } else if (reg == "7") {
            reg_vii();
        } else if (reg == "8") {
            reg_viii();
        } else if (reg == "back" || reg == "Back" || reg == "BACK") {
            std::cout << "\n===========================\n";
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] Region not in Visayas";
            std::cout << "\n===========================\n";
        }
    }
    
}

// Mindanao ========================================================
void mindanao_reg() {
    std::cout << "\n==================== MINDANAO ISLAND ====================\n";
    std::cout << "Description: Mindanao is the second-largest island in the Philippines,\nlocated in the southern part of the archipelago.\n";
    std::string reg;
    std::string regions[] = {
        "Zamboanga Peninsula (Region IX):===================> [9]", "Northern Mindanao (Region X):======================> [10]", "Davao Region (Region XI):==========================> [11]", "SOCCSKSARGEN (Region XII):=========================> [12]", "Caraga (Region XIII):==============================> [13]", "\nBangsamoro Autonomous \nRegion in Muslim Mindanao (BARMM):=================> [barmm]\n"
    };
    int size = sizeof(regions) / sizeof(regions[0]);
    
    while (true) {
        std::cout << "\n==================== Mindanao (Regions) ====================\n";
        for (int i = 0; i < size; i++) {
        std::cout << regions[i] << std::endl;
        }
        std::cout << "[type]: back - Previous;\n";
        std::cout << "[SELECT]Region in Mindanao: ";
        std::cin >> reg;
        
        if (reg == "9") {
            reg_ix();
        } else if (reg == "10") {
            reg_x();
        } else if (reg == "11") {
            reg_xi();
        } else if (reg == "12") {
            reg_xii();
        } else if (reg == "13") {
            reg_xiii();
        } else if (reg == "barmm" || reg == "Barmm" || reg == "BARMM" || reg == "14") {
            reg_barmm();
        } else if (reg == "back" || reg == "Back" || reg == "BACK") {
            std::cout << "\n===========================\n";
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] Region not in Mindanao";
            std::cout << "\n===========================\n";
        }
    }
}

void explore(){
     std::string isl;
    std::string islands[] = {"\tLuzon", "\tVisayas", "\tMindanao"};
    int size = sizeof(islands) / sizeof(islands[0]);
    
    while (true){
        std::cout << "\n==================== Philippine (Islands) ====================\n";
        std::cout << "Welocome To The Philippines\n";
        for (int i = 0; i < size; i++) {
        std::cout << islands[i] << std::endl;
        }
        std::cout << "\n[type]: Exit - to leave;\n";
        std::cout << "[Enter] Island in the Philippines: ";
        std::cin >> isl;
        
        if (isl == "luzon" || isl == "Luzon"|| isl == "LUZON") {
            luzon_reg();
        } else if (isl == "visayas" || isl == "Visayas"|| isl == "VISAYAS") {
            visayas_reg();
        } else if (isl == "mindanao" || isl == "Mindanao"|| isl == "MINDANAO") {
            mindanao_reg();
        } else if (isl == "exit"||isl=="Exit"||isl=="EXIT") {
            std::cout << "\n===========================\n";
            exit(0);
        } else {
            std::cout << "\n===============================================\n";
            std::cout << "[Error]Selected Island is not in the Philippines";
            std::cout << "\n===============================================\n";
        }
    }
    

    
}

// Main Function ===================================================
int main() {
    std::string act;
    while (true) {
        std::cout << "\n==================== Phillipine Map Project ====================\n";
        std::cout << "Welcome User this is a Philippine Map Project designed\n to help you navigate through the Philippines and give you\nbasic informations about different places in the Philippines\n" << std::endl;
        std::cout << "\t[Explore] - to explore the Philippines\n";
        std::cout << "\t[Travel] - Airport to Airport Travel\n";
        std::cout << "\t[Exit] - to Exit\n" << std::endl;
        std::cout << "\tWhat wouild you like to do?: ";
        std::cin >> act;
        if (act == "explore" || act == "Explore" || act == "EXPLORE") {
            explore();
        } else if (act == "travel" || act == "Travel" || act == "TRAVEL"){
            travel();
        } else if (act == "exit" || act == "Exit" || act == "EXIT") {
            exit(0);
        } else {
            std::cout << "[Error]";
        }
    }

    return 0;
}