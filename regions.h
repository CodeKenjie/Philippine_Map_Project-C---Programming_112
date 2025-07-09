#pragma once
#include "provinces.h"
/* THIS IS A REGIONS FILE */

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
    std::cout << "\n==================== Region IV-B (MIMAROPA) ====================\n";
    std::cout << "Capital: Calapan City (Oriental Mindoro)\n" << "Info: \n\tEco-tourism hub, Puerto Princesa Underground River\n\tand biodiversity-rich islands.\n" << "Population: 3,228,558 (as of 2020 Census)\n" << "Land Area: Approximately 29,620.90 km (11,436.69 sq mi)\n";
    std::string prov;
    std::string provinces[] = {"Occidental Mindoro", "Oriental Mindoro", "Marinduque", "Romblon", "Palawan"
    };
    int size = sizeof(provinces) / sizeof(provinces[0]);
    
    
    while (true) {
        std::cout << "\n==================== MIMAROPA (Provinces) ====================\n";
        for (int i = 0; i < size; i++) {
        std::cout << provinces[i] << std::endl;
        }
        std::cout << "\n[type]: back - Previous;\n";
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
    std::cout << "\n==================== Region V (Bicol Region) ====================\n";
    std::cout << "Capital: Legazpi City (Albay)\n" << "Info: \n\tMayon Volcano, spicy cuisine, Pili nuts\n\tand Caramoan islands.\n" << "Population: 6,082,165 (as of 2020 Census)\n" << "Land Area: Approximately 18,114.47 km (6,994.04 sq mi)\n";
    std::string prov;
    std::string provinces[] = {"Albay", "Camarines Norte", "Camarines Sur", "Masbate", "Sorsogon"
    };
    int size = sizeof(provinces) / sizeof(provinces[0]);
    
    
    while (true) {
        std::cout << "\n==================== Bicol Region (Provinces) ====================\n";
        for (int i = 0; i < size; i++) {
        std::cout << provinces[i] << std::endl;
        }
        std::cout << "\n[type]: back - Previous;\n";
        std::cout << "[Select] Provice: ";
        std::getline(std::cin >> std::ws, prov);
    
        if (prov == "albay" || prov == "Albay"|| prov == "ALBAY") {
            aby();
        } else if (prov == "camarines norte" || prov == "Camarines Norte"|| prov == "CAMARINES NORTE") {
            cmrns_nrt();
        } else if (prov == "camarines sur" || prov == "Camarines Sur"|| prov == "CAMARINES SUR") {
            cmrns_sr();
        } else if (prov == "catanduanes" || prov == "Catanduanes"|| prov == "CATANDUANES") {
            ctndns();
        } else if (prov == "masbate" || prov == "Masbate"|| prov == "MASBATE") {
            msbt();
        }  else if(prov == "sorsogon" || prov == "Sorsogon"|| prov == "SORSOGON") {
            srsgn();
        } else if (prov == "back" || prov == "Back" || prov == "BACK") {
            std::cout << "\n===========================\n";
            break;
        }else {
            std::cout << "\n===========================\n";
            std::cout << "[error] Province dont Exist";
            std::cout << "\n===========================\n";
        }
    
    }
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
//kenjie the great -------------------------------------------------
void reg_viii() {
    std::cout << "\n==================== Region VIII (Eastern Visayas) ====================\n";
    std::cout << "Capital: Tacloban City (Leyte)\n" << "Key Info: \n\tKnown for San Juanico Bridge, resilience\n\tpost-Yolanda and Waray culture.\n"<< "Population: 4,547,150 (as of 2020 Census)\n" << "Land Area: Approximately 21,562.9 km² (8,325.48 sq mi)\n";
    std::string prov;
    std::string provinces[] = {"Biliran", "Eastern Samar", "Leyte", "Northern Samar", "Samar", "Southern Leyte"
    };
    int size = sizeof(provinces) / sizeof(provinces[0]);
    
    
    while (true) {
        std::cout << "\n==================== Eastern Visayas (Provinces) ====================\n";
        for (int i = 0; i < size; i++) {
        std::cout << provinces[i] << std::endl;
        }
        std::cout << "\n[type]: back - Previous;\n";
        std::cout << "[Select] Provice: ";
        std::getline(std::cin >> std::ws, prov);
    
        if (prov == "biliran" || prov == "Biliran"|| prov == "BILIRAN") {
            blran();
        } else if (prov == "eastern samar" || prov == "Eastern Samar"|| prov == "EASTERN SAMAR") {
            east_smr();
        } else if (prov == "leyte" || prov == "Leyte"|| prov == "LEYTE") {
            lyte();
        } else if (prov == "northern samar" || prov == "Norther Samar"|| prov == "NORTHERN SAMAR") {
            north_smr();
        } else if (prov == "samar" || prov == "Samar"|| prov == "SAMAR") {
            smr();
        }  else if(prov == "southern leyte" || prov == "Southern Leyte"|| prov == "SAUTHERN LEYTE") {
            south_lyte();
        } else if (prov == "back" || prov == "Back" || prov == "BACK") {
            std::cout << "\n===========================\n";
            break;
        }else {
            std::cout << "\n===========================\n";
            std::cout << "[error] Province dont Exist";
            std::cout << "\n===========================\n";
        }
    
    }
    
}

// Mindanao Region =================================================
void reg_ix() {
        
}
void reg_x() {
        
}

// Tim Ame's Personal Slave ========================================
void reg_xi() { 
    
    std::cout << "\n==================== Region XI (MIMAROPA) ====================\n";
    std::string prov;
    std::string provinces[] = {"Davao De Oro", "Davao Del Norte", "Davao Del Sur", "Davao Occidental", "Davao Oriental"   
    };
    int size = sizeof(provinces) / sizeof(provinces[0]);

    
    while (true) {
        for (int i = 0; i < size; i++) {
        std::cout << provinces[i] << std::endl;
        }
        std::cout << "\n[type]: back - Previous;\n";
        std::cout << "[Select] Provice: ";
        std::getline(std::cin >> std::ws, prov);
    
        if (prov == "Davao De Oro" || prov == "davao de oro"|| prov == "DAVAO DE ORO") {
            dvodeoro();
        } else if (prov == "Davao Del Sur" || prov == "davao del sur"|| prov == "DAVAO DEL SUR") {
            dvodelsur();
        } else if (prov == "Davao Del Norte" || prov == "davao del norte"|| prov == "DAVAO DEL NORTE") {
            dvodelnorte();
        } else if (prov == "Davao Occidental" || prov == "davao occidental"|| prov == "DAVAO OCCIDENTAL") {
            dvoocci();
        } else if (prov == "Davao Oriental" || prov == "davao oriental"|| prov == "DAVAO ORIENTAL") {
            dvoori();
        } else if (prov == "exit" || prov == "Exit" || prov == "EXIT") {
            std::cout << "\n===========================\n";
            break;
        }else {
            std::cout << "\n===========================\n";
            std::cout << "[error] Province dont Exist";
            std::cout << "\n===========================\n";
        }
    
    }

}

void reg_xii() {  

    std::cout << "\n==================== Region XII (SOCCSKSARGEN Region) ====================\n";
    std::string prov;
    std::string provinces[] = {"Cotabato", "South Cotabato", "Sultan Kudarat", "Sarangani"   };
    int size = sizeof(provinces) / sizeof(provinces[0]);

    
    while (true) {
        for (int i = 0; i < size; i++) {
        std::cout << provinces[i] << std::endl;
        }
        std::cout << "\n[type]: back - Previous;\n";
        std::cout << "[Select] Provice: ";
        std::getline(std::cin >> std::ws, prov);
    
        if (prov == "Cotabato" || prov == "cotabato"|| prov == "COTABATO") {
            cotabato();
        } else if (prov == "South Cotabato" || prov == "south cotabato"|| prov == "SOUTH COTABATO") {
            southcotabato();
        } else if (prov == "Sultan Kudarat" || prov == "sultan kudarat"|| prov == "SULTAN KUDARAT") {
            sultankudarat();
        } else if (prov == "Sarangani" || prov == "sarangani"|| prov == "SARANGANI") {
            sarangani2();
        }  else if (prov == "exit" || prov == "Exit" || prov == "EXIT") {
            std::cout << "\n===========================\n";
            break;
        }else {
            std::cout << "\n===========================\n";
            std::cout << "[error] Province dont Exist";
            std::cout << "\n===========================\n";
        }
    
    }       
        
}
void reg_xiii() {
        
}

void reg_barmm() {
        
}
