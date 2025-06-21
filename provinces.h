#pragma once
#include "cities.h"
#include "more_info.h"

/* [Reminder] THIS IS A PROVINCES FILE - palagi po maglagay ng comments para alam ng mga nag eedit */

// LUZON PROVINCES ===================================================


// Region 4 - B Provinces -- 
void occid_mind() {
    std::cout << "\n======= Occidental Mindoro (Province) =======\n";
    std::cout << "Occidental Mindoro, officially the Province of Occidental Mindoro, is a province in the Philippines located in the Mimaropa region.\nThe province occupies the western half of the island of Mindoro. Its capital is Mamburao,\nbut the most populous municipality is San Jose.\n";
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


// Oriental Mindoro
void orin_mind() {
    std::cout << "\n======= Oriental Mindoro (Province) =======\n";
    std::cout << "Oriental Mindoro, officially the Province of Oriental Mindoro, is a province in the Philippines located on the island\n of Mindoro under Mimaropa region in Luzon, about 140 kilometres southwest of Manila.\n";
    std::string cities[] = {"Calapan City (Capital) = 1", "Bongabong = 2", "Bulalacao = 3", 
        "Gloria = 4", "Mansalay = 5", "Pinamalayan = 6", "Pola = 7", "Puerto Galera = 8", 
        "Roxas = 9", "San Teodoro = 10", "Socorro = 11", "Victoria = 12"};
    int size = sizeof(cities) / sizeof(cities[0]);
    std::string city;
    
    while (true) {
        std::cout << "\n---------------- Cities Oriental Mindoro -------------\n";
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
void mrndq() {
    std::cout << "\n======= Marinduque (Province) =======\n";
    
    std::string cities[] = {"Boac = 1", "Buenavista = 2", "Bulalacao = 3", 
        "Gloria = 4", "Mansalay = 5", "Pinamalayan = 6", "Pola = 7", "Puerto Galera = 8", 
        "Roxas = 9", "San Teodoro = 10", "Socorro = 11", "Victoria = 12"};
    int size = sizeof(cities) / sizeof(cities[0]);
    std::string city;
    
    while (true) {
        std::cout << "\n---------------- Cities Marinduque -------------\n";
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
void rombl() {
    
}
void palwn() {
    
}