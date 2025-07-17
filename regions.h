#pragma once
#include "provinces.h"
/* THIS IS A REGIONS FILE */

// Luzon Regions ===================================================
// Ashley - Region 1
void reg_i() {
     std::cout << "\n==================== Region I (ILOCOS REGION) ====================\n";
    std::cout << "Capital:  San Fernando City, La Union.\n" << "Info: \n\tKnown for its strong Ilocano culture, delicious local cuisine like bagnet and empanada,\n\tand stunning attractions such as the Hundred Islands, wind farms, and surfing spots\n" << "Population: 5,301,139 (as of 2020 Census)\n" << "Land Area: Approximately 13,012.60 km (5,022.6  sq mi)\n";
    std::string prov;
    std::string provinces[] = {"Ilocos Norte", "Ilocos Sur", "La Union", "Pangasinan"
    };
    int size = sizeof(provinces) / sizeof(provinces[0]);
    
    
    while (true) {
        std::cout << "\n==================== ILOCOS REGION (Provinces) ====================\n";
        for (int i = 0; i < size; i++) {
        std::cout << provinces[i] << std::endl;
        }
        std::cout << "\n[type]: back - Previous;\n";
        std::cout << "[Select] Provice: ";
        std::getline(std::cin >> std::ws, prov);
    
        if (prov == "ilocos norte" || prov == "Ilocos Norte"|| prov == "ILOCOS NORTE") {
            ilocsnorth();
        } else if (prov == "ilocos sur" || prov == "Ilocos Sur"|| prov == "ILOCOS SUR") {
            ilocssur();
        } else if (prov == "la union" || prov == "La Union"|| prov == "LA UNION") {
            la_unionzzz();
        } else if (prov == "pangasinan" || prov == "Pangasinan"|| prov == "PANGASINAN") {
            pangasinanz();
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
// Ashley 
void reg_ii() {
    std::cout << "\n==================== Region 2 (CAGAYAN VALLEY) ====================\n";
    std::cout << "Capital:  Tuguegarao City, Cagayan.\n" << "Info: \n\trich in agricultural resources, rivers,\n\tand forests, with vast plains bordered by mountain ranges.\n" << "Population: 3,685,744 (as of 2020 Census)\n" << "Land Area: Approximately 29,836.88 km (11,521  sq mi)\n";
    std::string prov;
    std::string provinces[] = {"Batanes", "Cagayan", "Isabela", "Nueva Vizcaya", "Quirino"
    };
    int size = sizeof(provinces) / sizeof(provinces[0]);
    
    
    while (true) {
        std::cout << "\n==================== CAGAYAN VALLEY (Provinces) ====================\n";
        for (int i = 0; i < size; i++) {
        std::cout << provinces[i] << std::endl;
        }
        std::cout << "\n[type]: back - Previous;\n";
        std::cout << "[Select] Provice: ";
        std::getline(std::cin >> std::ws, prov);
    
        if (prov == "batanes" || prov == "Batanes"|| prov == "BATANES") {
            batanez();
        } else if (prov == "cagayan" || prov == "Cagayan"|| prov == "CAGAYAN") {
            cgynanz();
        } else if (prov == "isabela" || prov == "Isabela"|| prov == "ISABELA") {
            izabelssss();
        } else if (prov == "nueva vizcaya" || prov == "Nueva Vizcaya"|| prov == "NUEVA VIZCAYA") {
            nuvsvizz();
        } else if (prov == "quirino" || prov == "Quirino"|| prov == "QUIRINO") {
            quirinose();
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
    std::cout << "Capital: Davao City (regional center)\n" << "Key Info: \n\tDavao Region (Region XI) is in southeastern Mindanao. \n\tIt's known for Mt. Apo, rich agriculture (especially \n\tbananas and durian), and diverse culture" << "\nPopulation: 5,243,536 (2020 Census)\n" << "Land Area: Approximately 20,357.42 square kilometers\n";
    std::string prov;
    std::string provinces[] = {"Davao De Oro", "Davao Del Norte", "Davao Del Sur", "Davao Occidental", "Davao Oriental"   
    };
    int size = sizeof(provinces) / sizeof(provinces[0]);

    
    while (true) {
        std::cout << "\n==================== Davao Region (Provinces) ====================\n";
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
    std::cout << "Capital: Koronodal City (regional center)\n" << "Key Info: \n\tSOCCSKSARGEN (Region XII) is in south-central Mindanao.\n\tIt is known for agriculture tuna fishing in General Santos \n\tCity, and vibrant indigenous cultures."<< "\nPopulation: 4,545,276 (2020 Census)\n" << "Land Area: Approximately 22,336.26 square kilometers\n";
    std::string prov;
    std::string provinces[] = {"Cotabato", "South Cotabato", "Sultan Kudarat", "Sarangani"   };
    int size = sizeof(provinces) / sizeof(provinces[0]);

    
    while (true) {
        std::cout << "\n==================== SOCCKSARGEN (Provinces) ====================\n";
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
