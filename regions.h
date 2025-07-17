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

// jochil=====================================================================
void reg_ncr() {
    std::cout << "\n======= NATIONAL CAPITAL REGION (Cities) =======\n";
    std::string cities[] = { "Caloocan = 1","Las Piñas = 2","Makati = 3","Malabon = 4","Mandaluyong = 5","Manila = 6","Marikina = 7","Muntinlupa = 8",
"Navotas = 9","Parañaque = 10","Pasay = 11","Pasig = 12","Quezon City = 13","San Juan = 14","Taguig = 15","Valenzuela = 16"};
    int size = sizeof(cities) / sizeof(cities[0]);
    std::string city;
    
    while (true) {
        std::cout << "\n---------------- Cities/Municipalities NATIONAL CAPITAL REGION -------------\n";

        for (int i = 0; i < size; i++) {
        std::cout << cities[i] << std::endl;

        }
        std::cout << "\n[type]: back - Previous;\n";
        std::cout << "[type]: more info = for more info about the city;\n";
        std::cout << "[Select] City: ";
        std::getline(std::cin >> std::ws, city);
        
        if (city == "1") {
            clocan();
        } else if (city == "2") {
            ls_pns();
        } else if (city == "3") {
            mkati();
        } else if (city == "4") {
            mlabon();
        } else if (city == "5") {
            mndluyng();
        } else if (city == "6") {
            mnila();
        } else if (city == "7") {
            mrikin();
        } else if (city == "8") {
            mntinlpa();
        } else if (city == "9") {
            nvots();
        } else if (city == "10") {
            prnaue();
        } else if (city == "11") {
            psay();
        } else if (city == "12") {
            psig();
        }  else if (city == "13") {
            qezon();
        }  else if (city == "14") {
            san_jn();
        }  else if (city == "15") {
            tgig();
        }  else if (city == "16") {
            vlenzela();
        }  else if (city == "17") {
            pters();   

        } else if (city == "back" || city == "Back" || city == "BACK") {
            std::cout << "\n===========================\n";
            break;
        } else if (city == "more info"){
            more_info_occm();
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] city dont exist";
            std::cout << "\n===========================\n";
        }
        
    }
        
}

//jochil =========================================================================================================================================
void reg_car() {
   std::cout << "\n==================== Cordillera Administrative Region (car region) ====================\n";
    std::string prov;
    std::string provinces[] = {"Abra", "Apayao", "Benguet", "Ifugao",  "Kalinga", "Mountain Province" };
    int size = sizeof(provinces) / sizeof(provinces[0]);

    
    while (true) {
        for (int i = 0; i < size; i++) {
        std::cout << provinces[i] << std::endl;
        }
        std::cout << "\n[type]: back - Previous;\n";
        std::cout << "[Select] Provice: ";
        std::getline(std::cin >> std::ws, prov);
    
        if (prov == "Abra" || prov == "abra"|| prov == "ABRA") {
            cotabato();
        } else if (prov == "Apayao" || prov == "apayao"|| prov == "APAYAO") {
            southcotabato();
        } else if (prov == "Benguet" || prov == "benguet"|| prov == "BENGUET") {
            sultankudarat();
        } else if (prov == "Ifugao" || prov == "ifugao"|| prov == "IFUGAO") {
            sarangani2();
        } else if (prov == "Kalinga" || prov == "kalinga"|| prov == "KALINGA") {
            sarangani2();
        } else if (prov == "Mountain Province" || prov == "mountain province"|| prov == "MOUNTAIN PROVINCE") {
            sarangani2();
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
void reg_xiii() {
        
}

void reg_barmm() {
        
}
