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
    std::cout << "\n==================== Region III (CENTRAL LUZON) ====================\n";
    std::cout << "Capital: Baler (Aurora)\n" << "Info: \n\tThe birthplace of surfing in the Philippines and a popular surfing destination.\n\tand Sabang Beach(Popular surfing spot).\n" << "Population: 43,785 as of the 2020 Census, according to PhilAtlas \n" << "Land Area: 92.54 square kilometers (9,254 hectares).\n";
    std::string prov;
    std::string provinces[] = {"Aurora", "Bataan", "Bulacan", "Nueva Ecija", "Pampanga", "Tarlac", "Zambales"
    };
    int size = sizeof(provinces) / sizeof(provinces[0]);   
    while (true) {
        std::cout << "\n==================== CENTRAL LUZON (Provinces) ====================\n";
        for (int i = 0; i < size; i++) {
        std::cout << provinces[i] << std::endl;
        }
        std::cout << "\n[type]: back - Previous;\n";
        std::cout << "[Select] Provice: ";
        std::getline(std::cin >> std::ws, prov);
    
        if (prov == "aurora" || prov == "Aurora"|| prov == "AURORA") {
            arra();
        } else if (prov == "bataan" || prov == "Bataan"|| prov == "BATAAN") {
            btan();
        } else if (prov == "bulacan" || prov == "Bulacan"|| prov == "BULACAN") {
            blcn();
        } else if (prov == "nueva ecija" || prov == "Nueva Ecija"|| prov == "NUEVA ECIJA") {
            nuva_ejca();
        } else if (prov == "pampanga" || prov == "Pampanga"|| prov == "PAMPANGA") {
            pmpaga();
        } else if (prov == "tarlac" || prov == "Tarlac"|| prov == "TARLAC") {
            trlc();
        } else if (prov == "zambales" || prov == "Zambales"|| prov == "ZAMBALES") {
            zmbles();
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

void reg_ivA() {
    std::cout << "\n==================== Region IV (CALABARZON) ====================\n";
    std::cout << "Capital: Imus (Cavite)\n" << "Info: \n\tThe Flag Capital of the Philippines\n\t" << "Population:The population of Imus, Cavite as of the 2020 Census is 496,794. \n" << "Land Area: 64.7 km.\n";
    std::string prov;
    std::string provinces[] = {"Cavite", "Laguna", "Batangas", "Rizal", "Quezon"
    };
    int size = sizeof(provinces) / sizeof(provinces[0]);   
    while (true) {
        std::cout << "\n==================== CALABARZON (Provinces) ====================\n";
        for (int i = 0; i < size; i++) {
        std::cout << provinces[i] << std::endl;
        }
        std::cout << "\n[type]: back - Previous;\n";
        std::cout << "[Select] Provice: ";
        std::getline(std::cin >> std::ws, prov);
    
        if (prov == "cavite" || prov == "Cavite"|| prov == "CAVITE") {
            etivac();
        } else if (prov == "laguna" || prov == "Laguna"|| prov == "LAGUNA") {
            lgna();
        } else if (prov == "batangas" || prov == "Batangas"|| prov == "BATANGAS") {
            batngs();
        } else if (prov == "rizal" || prov == "Rizal"|| prov == "RIZAL") {
            rzl();
        } else if (prov == "quezon" || prov == "Quezon"|| prov == "QUEZON") {
            qzon();
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
            qezon_city();
        }  else if (city == "14") {
            san_jn_v2();
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
    std::cout << "Capital: Baguio City (Regional Center)\n"
    << "Info:Home to the Igorot people, rice terraces,\n"
    << "Sagada caves, and cool mountain climate.\n" 
    << "Population: 1,797,660 (as of 2020 Census)\n"
    << "Land Area: Approximately 19,422.03 km² (7,498.57 sq mi)\n";
    std::string prov;
    std::string provinces[] = {"Abra", "Apayao", "Benguet", "Ifugao",  "Kalinga", "Mountain Province" };
    int size = sizeof(provinces) / sizeof(provinces[0]);

    
    while (true) {
        std ::cout << "\n===================== Cordillera Administrative Region (Provinces) =====================\n";
        for (int i = 0; i < size; i++) {
        std::cout << provinces[i] << std::endl;
        }
        std::cout << "\n[type]: back - Previous;\n";
        std::cout << "[Select] Provice: ";
        std::getline(std::cin >> std::ws, prov);
    
        if (prov == "Abra" || prov == "abra"|| prov == "ABRA") {
            abraa_v2();
        } else if (prov == "Apayao" || prov == "apayao"|| prov == "APAYAO") {
            apayaoo();
        } else if (prov == "Benguet" || prov == "benguet"|| prov == "BENGUET") {
            benguett();
        } else if (prov == "Ifugao" || prov == "ifugao"|| prov == "IFUGAO") {
            ifugaoo();
        } else if (prov == "Kalinga" || prov == "kalinga"|| prov == "KALINGA") {
            kalingaa();
        } else if (prov == "Mountain Province" || prov == "mountain province"|| prov == "MOUNTAIN PROVINCE") {
            mountain_provincee();
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

// vin 
void reg_xiii() {
    std::cout << "\n==================== Region XIII (CARAGA Region) ====================\n";
    std::cout << "Capital: Butuan City (Agusan del Norte)\n" << "Key Info: \n\tKnown for lush forests, mining, and eco-tourism\n\twith strong indigenous culture and heritage.\n" << "Population: 2,804,788 (as of 2020 Census)\n" << "Land Area: Approximately 18,847.5 km² (7,277.6 sq mi)\n";
    std::string prov;
    std::string provinces[] = {"Agusan del Norte", "Agusan del Sur", "Dinagat Islands", "Surigao del Norte", "Surigao del Sur"
    };
    int size = sizeof(provinces) / sizeof(provinces[0]);
    
    
    while (true) {
        std::cout << "\n==================== CARAGA Region (Provinces) ====================\n";
        for (int i = 0; i < size; i++) {
        std::cout << provinces[i] << std::endl;
        }
        std::cout << "\n[type]: back - Previous;\n";
        std::cout << "[Select] Provice: ";
        std::getline(std::cin >> std::ws, prov);

        if (prov == "agusan del norte" || prov == "Agusan del Norte"|| prov == "AGUSAN DEL NORTE") {
            agsn_dl_nrt();
        } else if (prov == "agusan del sur" || prov == "Agusan del Sur"|| prov == "AGUSAN DEL SUR") {
            agsn_dl_sr();
        } else if (prov == "dinagat islands" || prov == "Dinagat Islands"|| prov == "DINAGAT ISLANDS") {
            dngt_isld();
        } else if (prov == "surigao del norte" || prov == "Surigao del Norte"|| prov == "SURIGAO DEL NORTE") {
            srgo_dl_nrt();
        } else if (prov == "surigao del sur" || prov == "Surigao del Sur"|| prov == "SURIGAO DEL SUR") {
            srgo_dl_sr();
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

void reg_barmm() {
    std::cout << "\n==================== Region 14 (BARMM Region) ====================\n";
    std::cout << "Capital: Cotabato City (Independent, but serves as BARMM's regional center)\n" << "Key Info: \n\tKnown for Islamic heritage, diverse Moro ethnic groups,\n\tand its quest for peace and autonomy.\n" << "Population: 4,404,288 (as of 2020 Census)\n" << "Land Area: Approximately 31,451.3 km² (12,144.5 sq mi)\n";
    std::string prov;
    std::string provinces[] = {"Basilan", "Lanao del Sur", "Maguindanao Del Norte", "Maguindanao Del Sur", "Tawi-Tawi"
    };
    int size = sizeof(provinces) / sizeof(provinces[0]);
    
    
    while (true) {
        std::cout << "\n==================== BARMM Region (Provinces) ====================\n";
        for (int i = 0; i < size; i++) {
        std::cout << provinces[i] << std::endl;
        }
        std::cout << "\n[type]: back - Previous;\n";
        std::cout << "[Select] Provice: ";
        std::getline(std::cin >> std::ws, prov);

        if (prov == "basilan" || prov == "Basilan"|| prov == "BASILAN") {
            Basilan();
        } else if (prov == "lanao del sur" || prov == "Lanao del Sur"|| prov == "LANAO DEL SUR") {
            Lno_dl_Sr();
        } else if (prov == "maguindanao del norte" || prov == "Maguindanao Del Norte"|| prov == "MAGUINDANAO DEL NORTE") {
            Mguindno_dl_Nrte();
        } else if (prov == "maguindanao del sur" || prov == "Maguindanao Del Sur"|| prov == "MAGUINDANAO DEL SUR") {
            Mguindanao_dl_Sur();
        } else if (prov == "tawi-tawi" || prov == "Tawi-Tawi"|| prov == "TAWI-TAWI") {
            Tawi_Tawi();
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
