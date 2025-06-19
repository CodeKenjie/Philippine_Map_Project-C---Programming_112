#include <iostream>
#include <string>
// 149 cities ((void)Functionalities==================================

// Occidental Mindoro cities =========================================
void san_j() {
    std::cout << "\n======= San Jose (City) =======\n";
    std::string act;
    std::cout << "The Municipality of San Jose is a first class municipality in the province of Occidental Mindoro Philippines.\n According to the 2020 census, it has a population of 153,267 in 37,331 households.\n"; 
    //table this is still under examination: iniisip ko pa kung bakit di gumagana yung theory ko;
    std::string baranggays[13][3] = {
        {"Ambulance", "Shake Properly", "Ansiray"},
        {"Inasak", "New Popular", "Ipil"},
        {"Bangkal", "The Curve", "Barangay 1 (Pob.)"},
        {"Trough Shake", "Barangay 2 (Pob.)", "Poblacion Trough"},
        {"Barangay 3 (Pob.)", "Mabini", "Barangay 4 (Pob.)"},
        {"Travel", "Barangay 5 (Pob.)", "Also"},
        {"Barangay 6 (Pob.)", "Peaceful", "Barangay 7 (Pob.)"},
        {"Murtha", "Law", "Monte Claro"},
        {"Bayotbot", "Stumbled upon", "Glass"},
        {"Buri", "Pawican", "Camburay"},
        {"Saint Augustine", "Caminawit", "San Isidro"},
        {"Catayungan", "San Roque 1", ""},
        {"Central", "San Roque 2", ""}
    };
        std::cout << "\n======= San Jose (Baranggays) =======\n";
        for (int i = 0; i < 12; i++) {
            for (int j = 0; j < 3; j++){
                std::cout << baranggays[i][j] << std::endl;
            }
    }

    while(true) {
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;

        if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }

}
void mamburao() {
    std::cout << "\n======= Mamburao (City) =======\n";
    std::string act;
    std::cout << "Mamburao is the capital of Occidental Mindoro, a province in the MIMAROPA region of the Philippines.\nIt’s a coastal municipality that serves as the political, economic, and administrative center of the province.\n-Population: Around 47,000+ (2020 Census)\n"; 
    //table this is still under examination: iniisip ko pa kung bakit di gumagana yung theory ko;
    std::string baranggays[5][3] = {
        {"Poblacion 1", "Poblacion 6", "Talabaan"},
        {"Poblacion 2", "Poblacion 7", "Tangkalan"},
        {"Poblacion 3", "Poblacion 8", "Tayamaan"},
        {"Poblacion 4", "Balansay", "San Luis (Ligang)"},
        {"Poblacion 5", "Payompon", "Fatima (also known as Tii)"},
    };
    std::cout << "\n======= San Jose (Baranggays) =======\n";
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 3; j++){
            std::cout << baranggays[i][j] << std::endl;
        }
    }
    while(true) {
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;

        if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }

}
void magsaysay() {
    std::cout << "\n======= Magsaysay (City) =======\n";
}
void calintaan() {
    std::cout << "\n======= Calintaan (City) =======\n";
}
void sablayan() {
    std::cout << "\n======= Sablayan (City) =======\n";
}
void looc() {
    std::cout << "\n======= Looc (City) =======\n";
}
void paluan() {
    std::cout << "\n======= Paluan (City) =======\n";
}
void adi() {
    std::cout << "\n======= Abra De Ilog (City) =======\n";
}
void lubang() {
    std::cout << "\n======= Lubang (City) =======\n";
}
void riz() {
    std::cout << "\n======= Rizal (City) =======\n";
}
void santa_cruz() {
    std::cout << "\n======= Santa Cruz (City) =======\n";
}
void baco() {
    std::cout << "\n======= Baco (City) =======\n";
}
void naujan() {

}
// more info page
void more_info(){
        std::string act;  
        std::cout << "-------------------- more info about the city --------------------\n";
        std::cout << "\n==Places you need to visit in Occidental Mindoro (Province) ==\n";
        // mga baya na nakuha ko lang sa google
        std::cout << "-------------------- Natural & Wild Life --------------------\n";
        std::cout << "\tAmbulong Island (3.8): A large island near San Jose with fine white sand beaches.\n";
        std::cout << "\tIlin Island (4.2): Known for its calm seas and beautiful scenery. \n";
        std::cout << "\tWhite Island (Manadi) (4.5): Another island with white sand beaches,\n\tpopular for its proximity to San Jose. \n";
        std::cout << "\tInasakan Beach (4.5): A popular beach with opportunities for swimming and snorkeling. \n";
        std::cout << "\tApo Reef Natural Park (N.R): A world-class diving and snorkeling destination,\n\tone of the largest contiguous coral reefs globally. \n";
        std::cout << "\tPandurucan River (N.R): A salt-water lake with beautiful views.\n";
        std::cout << "\tAroma Beach (4.3): Offers a panoramic view of the sunset and is a good spot for jet skiing.\n";
        std::cout << "-------------------- Cultural & Historical Sites --------------------\n";
        std::cout << "\tHanging Bridge of San Agustin: A unique landmark and a great spot for photos. \n";
        std::cout << "\tSablayan Museum: Explore the local culture and history through exhibits and artifacts. \n";
        std::cout << "\tSt. Joseph Cathedral: A beautiful church and a place of worship. \n";
        std::cout << "\tSan Jose Archeological Site: Discover the rich history of the area. \n";

        // leave more info
        while (true){
            std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;

            if (act == "back" || act == "Back" || act == "BACK") {
                break;
            } else {
                std::cout << "\n===========================\n";
                std::cout << "[error] action;";
                std::cout << "\n===========================\n";
            }
        }

}


// Luzon Provinces ===================================================
void occid_mind() {
    std::cout << "\n======= Occidental Mindoro (Province) =======\n";
    std::cout << "Known as the \"Marine Wonderland\"\n";
    std::string cities[] = {"San Jose = 1", "Mamburao = 2", "Magsaysay = 3", "Calintaan = 4", 
        "Sablayan = 5", "Looc = 6", "Paluan = 7", "Abra De Ilog = 8", "Lubang = 9", "Rizal = 10", 
        "Santa Cruz = 11", "Baco = 12", "Naujan = 13"};
    int size = sizeof(cities) / sizeof(cities[0]);
    std::string city;
    
    while (true) {
        std::cout << "\n---------------- Cities Occidental Mindoro -------------\n";
        for (int i = 0; i < size; i++) {
        std::cout << cities[i] << std::endl;
        }
        std::cout << "[type]: back - Previous;\n";
        std::cout << "[type]: more info = for more info about the city;\n";
        std::cout << "[Select] City: ";
        std::getline(std::cin >> std::ws, city);
        
        if (city == "1") {
            san_j();
        } else if (city == "2") {
            mamburao();
        } else if (city == "3") {
            magsaysay();
        } else if (city == "4") {
            calintaan();
        } else if (city == "5") {
            sablayan();
        } else if (city == "6") {
            looc();
        } else if (city == "7") {
            paluan();
        } else if (city == "8") {
            adi();
        } else if (city == "9") {
            lubang();
        } else if (city == "10") {
            riz();
        } else if (city == "11") {
            santa_cruz();
        } else if (city == "12") {
            baco();
        }  else if (city == "13") {
            naujan();
        } else if (city == "back" || city == "Back" || city == "BACK") {
            std::cout << "\n===========================\n";
            break;
        } else if (city == "more info"){
            more_info();
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] city dont exist";
            std::cout << "\n===========================\n";
        }
        
    }
}
void orin_mind() {
    
}
void mrndq() {
    
}
void rombl() {
    
}
void palwn() {
    
}
 /* ========== Philippine Map Project ================== */
// Luzon Regions ===================================================
void reg_i() {
        
}
void reg_ii() {
        
}
void reg_iii() {
        
}
void reg_ivA() {
        
}

// Kenjie the great
void reg_ivB() {
    std::cout << "\n======= Region IV-B (MIMAROPA) =======\n";
    std::string prov;
    std::string provinces[] = {"Occidental Mindoro", "Oriental Mindoro", "Marinduque", "Romblon", "Palawan"
    };
    int size = sizeof(provinces) / sizeof(provinces[0]);
    
    
    while (true) {
        for (int i = 0; i < size; i++) {
        std::cout << provinces[i] << std::endl;
        }
        std::cout << "[type]: back - Previous;\n";
        std::cout << "[Select] Provice: ";
        std::getline(std::cin >> std::ws, prov);
    
        if (prov == "occidental mindoro" || prov == "Occidental Mindoro"|| prov == "OCCIDENTAL MINDORO") {
            occid_mind();
        } else if (prov == "oriental mindoro" || prov == "Oriental Mindoro"|| prov == "ORIENTAL MINDORO") {
            orin_mind();
        } else if (prov == "marinduque" || prov == "Marinduque"|| prov == "MARINDUQUE") {
            mrndq();
        } else if (prov == "romblon" || prov == "Romblon"|| prov == "ROMBLON") {
            rombl();
        } else if (prov == "palawan" || prov == "Palawan"|| prov == "PALAWAN") {
            palwn();
        }  else if (prov == "back" || prov == "Back" || prov == "BACK") {
            std::cout << "\n===========================\n";
            break;
        }else {
            std::cout << "\n===========================\n";
            std::cout << "[error] Province dont Exist";
            std::cout << "\n===========================\n";
        }
    
    }

}
void reg_v() {
    std::cout << "\n======= Region V (Bicol Region) =======\n";    
}
void reg_ncr() {
        
}
void reg_car() {
        
}

// Visayas Region ==================================================
void reg_vi() {
        
}
void reg_vii() {
        
}
//kenjie the great 
void reg_viii() {
    std::cout << "\n====== Region VIII (Eastern Visayas) =======\n";
    
}

// Mindanao Region =================================================
void reg_ix() {
        
}
void reg_x() {
        
}
void reg_xi() {
        
}
void reg_xii() {
        
}
void reg_xiii() {
        
}

void reg_barmm() {
        
}

// Luzon ==========================================================
void luzon_reg() {
    std::cout << "\n======= Luzon Regions =======\n";
    std::string reg;
    std::string regions[] = {"Ilocos Region (Region I)", "Cagayan Valley (Region II)", "Central Luzon (Region III)", "CALABARZON (Region IV-A)", "MIMAROPA (Region IV-B): [4b]", "Bicol Region (Region V)", "National Capital Region (NCR)", "Cordillera Administrative Region (CAR)"
    };
    int size = sizeof(regions) / sizeof(regions[0]);
    
    while (true) {
        
        for (int i = 0; i < size; i++) {
        std::cout << regions[i] << std::endl;
        }
        std::cout << "[type]: back - Previous;\n";
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
            std::cout << "[error] Region not in luzon";
            std::cout << "\n===========================\n";
        }
    }
    
}

// Visayas =========================================================

void visayas_reg() {
    std::cout << "\n======= Visayas Regions =======\n";
    std::string reg;
    std::string regions[] = {
        "Western Visayas (Region VI)", "Central Visayas (Region VII)", "Eastern Visayas (Region VIII)", 
    };
    int size = sizeof(regions) / sizeof(regions[0]);
    
    while (true) {
        for (int i = 0; i < size; i++) {
        std::cout << regions[i] << std::endl;
        }
        std::cout << "[type]: back - Previous;\n";
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
            std::cout << "[error] Region not in luzon";
            std::cout << "\n===========================\n";
        }
    }
    
}

// Mindanao ========================================================
void mindanao_reg() {
    std::cout << "\n======= Mindanao Regions =======\n";
    std::string reg;
    std::string regions[] = {
        "Zamboanga Peninsula (Region IX)", "Northern Mindanao (Region X)", "Davao Region (Region XI)", "SOCCSKSARGEN (Region XII)", "Caraga (Region XIII)", "Bangsamoro Autonomous Region in Muslim Mindanao (BARMM)"
    };
    int size = sizeof(regions) / sizeof(regions[0]);
    
    while (true) {
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
        } else if (reg == "barmm") {
            reg_barmm();
        } else if (reg == "back" || reg == "Back" || reg == "BACK") {
            std::cout << "\n===========================\n";
            break;
        }else {
            std::cout << "\n===========================\n";
            std::cout << "[error] Region not in luzon";
            std::cout << "\n===========================\n";
        }
    }
}

// Main Function ===================================================
int main() {
    std::cout << "\n======= Philippines Map =======\n";
    std::string isl;
    std::string islands[] = {"Luzon", "Visayas", "Mindanao"};
    int size = sizeof(islands) / sizeof(islands[0]);
    
    while (true){
        for (int i = 0; i < size; i++) {
        std::cout << islands[i] << std::endl;
        }
        std::cout << "[type]: Exit - to leave;\n";
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
    
    return 0;
}