#pragma once
#include "cities.h"
#include "more_info.h"

/* [Reminder] THIS IS A PROVINCES FILE - palagi po maglagay ng comments para alam ng mga nag eedit */

// LUZON PROVINCES =============================================================================================================================


// Region 4 - B Provinces -- 

// Occidental Mindoro =========================================================================================================================
void occid_mind() {
    std::cout << "\n======= Occidental Mindoro (Province) =======\n";
    std::string cities[] = {"San Jose = 1", "Mamburao = 2", "Magsaysay = 3", "Calintaan = 4", 
        "Sablayan = 5", "Looc = 6", "Paluan = 7", "Abra De Ilog = 8", "Lubang = 9", "Rizal = 10", 
        "Santa Cruz = 11", "Baco = 12", "Naujan = 13"};
    int size = sizeof(cities) / sizeof(cities[0]);
    std::string city;
    
    while (true) {
        std::cout << "\n---------------- Cities/Municipalities Occidental Mindoro -------------\n";

        for (int i = 0; i < size; i++) {
        std::cout << cities[i] << std::endl;

        }
        std::cout << "\n[type]: back - Previous;\n";
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
            more_info_occm();
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] city dont exist";
            std::cout << "\n===========================\n";
        }
        
    }
}


// Oriental Mindoro =========================================================================================================================================================================================================================
void orin_mind() {
    std::cout << "\n======= Oriental Mindoro (Province) =======\n";
    std::string cities[] = {"Calapan City (Capital) = 1", "Bongabong = 2", "Bulalacao = 3", 
        "Gloria = 4", "Mansalay = 5", "Pinamalayan = 6", "Pola = 7", "Puerto Galera = 8", 
        "Roxas = 9", "San Teodoro = 10", "Socorro = 11", "Victoria = 12"};
    int size = sizeof(cities) / sizeof(cities[0]);
    std::string city;
    
    while (true) {
        std::cout << "\n---------------- Cities/Municipalities Oriental Mindoro -------------\n";
        for (int i = 0; i < size; i++) {
        std::cout << cities[i] << std::endl;
        }
        std::cout << "\n[type]: back - Previous;\n";
        std::cout << "[type]: more info = for more info about the city;\n";
        std::cout << "[Select] City: ";
        std::getline(std::cin >> std::ws, city);
        
        if (city == "1") {
            calapan_CAP();
        } else if (city == "2") {
            bongabong();
        } else if (city == "3") {
            bulalacao();
        } else if (city == "4") {
            gloria();
        } else if (city == "5") {
            mansalay();
        } else if (city == "6") {
            pinamalayan();
        } else if (city == "7") {
            pola();
        } else if (city == "8") {
            puerto_gal();
        } else if (city == "9") {
            roxy();
        } else if (city == "10") {
            san_tdr();
        }  else if (city == "11") {
            socorro();
        }  else if (city == "12") {
            victoria();
        } else if (city == "back" || city == "Back" || city == "BACK") {
            std::cout << "\n===========================\n";
            break;
        } else if (city == "more info"){
            more_info_orm();
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] city dont exist";
            std::cout << "\n===========================\n";
        }
        
    }
    
}
// Marinduque =====================================================================================================================
void mrndq() {
    std::cout << "\n======= Marinduque (Province) =======\n";
    
    std::string cities[] = {"Boac = 1", "Buenavista = 2", "Gasan = 3", "Mogpog = 4", "Santa Cruz = 5", "Torrijos = 6"};
    int size = sizeof(cities) / sizeof(cities[0]);
    std::string city;
    
    while (true) {
        std::cout << "\n---------------- Cities/Municipalities Marinduque -------------\n";
        for (int i = 0; i < size; i++) {
        std::cout << cities[i] << std::endl;
        }
        std::cout << "\n[type]: back - Previous;\n";
        std::cout << "[type]: more info = for more info about the city;\n";
        std::cout << "[Select] City: ";
        std::getline(std::cin >> std::ws, city);
        
        if (city == "1") {
            boac();
        } else if (city == "2") {
            buenavista();
        } else if (city == "3") {
            gasan();
        } else if (city == "4") {
            mogpog();
        } else if (city == "5") {
            santa_C();
        } else if (city == "6") {
            torrijos();
        } else if (city == "back" || city == "Back" || city == "BACK") {
            std::cout << "\n===========================\n";
            break;
        } else if (city == "more info"){
            more_info_orm();
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] city dont exist";
            std::cout << "\n===========================\n";
        }
        
    }
    
}

// Romblon ==================================================================================================================================================
void rombl() {
    std::cout << "\n======= Romblon (Province) =======\n";
    
    std::string cities[] = {
        "Alcantara = 1", "Banton = 2", "Cajidiocan = 3", "Calatrava = 4", "Concepcion = 5", "Corcuera = 6", 
        "Ferrol = 7", "Looc = 8", "Magdiwang = 9", "Odiongan = 10", "Romblon (provincial capital) = 11", "San Agustin = 12", "San Andres = 13",
        "San Fernando = 14", "San Jose = 15", "Santa Fe = 16", "Santa Maria = 17"
        };
    int size = sizeof(cities) / sizeof(cities[0]);
    std::string city;
    
    while (true) {
        std::cout << "\n---------------- Cities/Municipalities Romblon -------------\n";
        for (int i = 0; i < size; i++) {
        std::cout << cities[i] << std::endl;
        }
        std::cout << "\n[type]: back - Previous;\n";
        std::cout << "[type]: more info = for more info about the city;\n";
        std::cout << "[Select] City: ";
        std::getline(std::cin >> std::ws, city);
        
        if (city == "1") {
            alctra();
        } else if (city == "2") {
            btn();
        } else if (city == "3") {
            cjcn();
        } else if (city == "4") {
            cltrv();
        } else if (city == "5") {
            cncptn();
        } else if (city == "6") {
            crqer();
        } else if (city == "7") {
            frrl();
        } else if (city == "8") {
            looc_2();
        } else if (city == "9") {
            mgdwng();
        } else if (city == "10") {
            odogn();
        } else if (city == "11") {
            romblon_cap();
        } else if (city == "12") {
            san_agstn();
        } else if (city == "13") {
            san_adrs();
        } else if (city == "14") {
            san_frnd();
        } else if (city == "15") {
            san_js();
        } else if (city == "16") {
            snt_f();
        } else if (city == "17") {
            snt_mra();
        } else if (city == "back" || city == "Back" || city == "BACK") {
            std::cout << "\n===========================\n";
            break;
        } else if (city == "more info"){
            more_info_orm();
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] city dont exist";
            std::cout << "\n===========================\n";
        }
        
    }
}

void palwn() {
    std::cout << "\n======= Palawan (Province) =======\n";
    
    std::string cities[] = {
        "Puerto Princesa(City) = 1", "Aborlan = 2", "Agutaya = 3", "Araceli = 4", "Balabac = 5", "Bataraza = 6", 
        "Brooke's Point = 7", "Busuanga = 8", "Cagayancillo = 9", "Coron = 10", "Culion = 11", "Cuyo = 12", "Dumaran = 13",
        "El Nido = 14", "Kalayaan = 15", "Linapacan = 16", "Magsaysay = 17", "Narra = 18", "Quezon = 19", "Rizal = 20", "Roxas = 21", 
        "San Vicente = 22", "Sofronio Española = 23", "Taytay = 24"
        };
    int size = sizeof(cities) / sizeof(cities[0]);
    std::string city;
    
    while (true) {
        std::cout << "\n---------------- Cities/Municipalities Palawan -------------\n";
        for (int i = 0; i < size; i++) {
        std::cout << cities[i] << std::endl;
        }
        std::cout << "\n[type]: back - Previous;\n";
        std::cout << "[type]: more info = for more info about the city;\n";
        std::cout << "[Select] City: ";
        std::getline(std::cin >> std::ws, city);
        
        if (city == "1") {
            ptoprcsa_city();
        } else if (city == "2") {
            abln();
        } else if (city == "3") {
            agty();
        } else if (city == "4") {
            arcl();
        } else if (city == "5") {
            blbc();
        } else if (city == "6") {
            btrz();
        } else if (city == "7") {
            brks_point();
        } else if (city == "8") {
            bsanga();
        } else if (city == "9") {
            cgynclo();
        } else if (city == "10") {
            crn();
        } else if (city == "11") {
            cln();
        } else if (city == "12") {
            cyo();
        } else if (city == "13") {
            dmr();
        } else if (city == "14") {
            bonakid();
        } else if (city == "15") {
            klyan();
        } else if (city == "16") {
            lnpacn();
        } else if (city == "17") {
            mgssy();
        } else if (city == "18") {
            nra();
        } else if (city == "19") {
            qoen();
        } else if (city == "20") {
            rizzler();
        } else if (city == "21") {
            rxs();
        } else if (city == "22") {
            san_vsnt();
        } else if (city == "23") {
            sofnyo_espnl();
        } else if (city == "24") {
            tyty();
        } else if (city == "back" || city == "Back" || city == "BACK") {
            std::cout << "\n===========================\n";
            break;
        } else if (city == "more info"){
            more_info_orm();
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] city dont exist";
            std::cout << "\n===========================\n";
        }
        
    }
}