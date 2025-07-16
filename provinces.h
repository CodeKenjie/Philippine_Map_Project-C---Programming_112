#pragma once
#include "luzon_cities.h"
#include "visayas_cities.h"
#include "mindanao_cities.h"
#include "more_info.h"

/* [Reminder] THIS IS A PROVINCES FILE - palagi po maglagay ng comments para alam ng mga nag eedit */

// LUZON PROVINCES =============================================================================================================================


// Region 4 - B Provinces -- 

// Occidental Mindoro =========================================================================================================================
void occid_mind() {
    std::cout << "\n=============== Occidental Mindoro (Province) ===============\n";
    std::cout << "Description: Occidental Mindoro, located in the western part of Mindoro \nIsland in the Philippines, spans rugged mountain ranges, fertile plains, pristine beaches, \nand the world-famous Apo Reef—one of the largest coral systems globally";
    std::cout << "\n=============================================================\n";

    std::string cities[] = {"San Jose = 1", "Mamburao = 2", "Magsaysay = 3", "Calintaan = 4", 
        "Sablayan = 5", "Looc = 6", "Paluan = 7", "Abra De Ilog = 8", "Lubang = 9", "Rizal = 10", 
        "Santa Cruz = 11", "Tilik = 12", "Naujan = 13"};
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
            tlik();
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
    std::cout << "\n=============== Oriental Mindoro (Province) ===============\n";
    std::cout << "Description: Oriental Mindoro, occupying the eastern half of Mindoro \nIsland in the Philippines' MIMAROPA region, is celebrated \nfor its rugged highlands—including Mount Halcon and \nthe expansive Lake Naujan—as well as vibrant coastal areas like \nPuerto Galera, a UNESCO-recognized marine biodiversity hotspot in the Verde \nIsland Passage.";
    std::cout << "\n=============================================================\n";
 
    std::cout << "Location: Western part of Mindoro Island.\n" << "Capital: Mamburao\n";
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
    std::cout << "\n=============== Marinduque (Province) ===============\n";
    std::cout << "Description: Marinduque is a heart‑shaped island province in \nthe MIMAROPA region of the Philippines, famed as the geographic \ncenter of the archipelago and celebrated for its \nvibrant Lenten Moriones Festival amid lush landscapes and pristine beaches.";
    std::cout << "\n=============================================================\n";
 
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
            more_info_mrndque();
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] city dont exist";
            std::cout << "\n===========================\n";
        }
        
    }
    
}

// Romblon ==================================================================================================================================================
void rombl() {
    std::cout << "\n==================== Romblon (Province) ====================\n";
    std::cout << "Description: Romblon is an archipelagic province in the Philippines' \nMIMAROPA region comprising three major islands—Tablas, Sibuyan and \nRomblon—renowned as the “Marble Capital” for its high-quality marble, rich \nmarine biodiversity (often called the “Galápagos of Asia”), Spanish colonial \nheritage, and ecotourism gems like Mount Guiting-Guiting and pristine dive sites.";
    std::cout << "\n=============================================================\n";
    
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
            more_info_rmble();
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] city dont exist";
            std::cout << "\n===========================\n";
        }
        
    }
}

// Palawan ==========================================================================================
void palwn() {
    std::cout << "\n==================== Palawan (Province) ====================\n";
    std::cout << "Description: Palawan is a breathtaking archipelagic province in the \nPhilippines, famed for its dramatic limestone karst cliffs, crystal-clear \nturquoise lagoons, UNESCO-listed natural wonders like the Puerto Princesa \nSubterranean River and Tubbataha Reefs, and remarkable biodiversity often \ndescribed as the country's \"last ecological frontier\"";
    std::cout << "\n=============================================================\n";
 
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
            more_info_plwn();
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] city dont exist";
            std::cout << "\n===========================\n";
        }
        
    }
}

// Region 5 Provinces --

// Albay =========================================================================================================================
void aby(){
    std::cout << "\n==================== Albay (Province) ====================\n";
    std::cout << "Description: Albay is a stunning Bicol province in southeastern \nLuzon best known for the iconic, near-perfect cone of Mayon Volcano, rich \nvolcanic landscapes, coastal beauty, historic churches like Cagsawa and Tabaco, \nand a vibrant culinary scene highlighted by spicy Bicolano dishes and pili \nnut delicacies.";
    std::cout << "\n=============================================================\n";
    
    std::string cities[] = {    
        "Legazpi City (Capital City) = 1", "Bacacay = 2", "Camalig = 3", "Daraga = 4", "Guinobatan = 5", "Jovellar = 6", 
        "Libon = 7", "Ligao (City) = 8", "Malilipot = 9", "Malinao = 10", "Manito = 11", "Oas = 12", "Pio Duran = 13",
        "Polangui = 14", "Rapu-Rapu = 15", "Santo Domingo = 16", "Tabaco (City) = 17", "Tiwi = 18"
        };
    int size = sizeof(cities) / sizeof(cities[0]);
    std::string city;
    
    while (true) {
        std::cout << "\n---------------- Cities/Municipalities Albay -------------\n";
        for (int i = 0; i < size; i++) {
        std::cout << cities[i] << std::endl;
        }
        std::cout << "\n[type]: back - Previous;\n";
        std::cout << "[type]: more info = for more info about the city;\n";
        std::cout << "[Select] City: ";
        std::getline(std::cin >> std::ws, city);
        
        if (city == "1") {
            lgzpi();
        } else if (city == "2") {
            bccy();
        } else if (city == "3") {
            cmlg();
        } else if (city == "4") {
            drg();
        } else if (city == "5") {
            ginbtn();
        } else if (city == "6") {
            jvllr();
        } else if (city == "7") {
            lbn();
        } else if (city == "8") {
            lgao();
        } else if (city == "9") {
            mllpt();
        } else if (city == "10") {
            mlnao();
        } else if (city == "11") {
            mnto();
        } else if (city == "12") {
            oas();
        } else if (city == "13") {
            pi_drn();
        } else if (city == "14") {
            plngui();
        } else if (city == "15") {
            rp_rp();
        } else if (city == "16") {
            snt_dmg();
        } else if (city == "17") {
            tbc();
        } else if (city == "18") {
            tw();
        } else if (city == "back" || city == "Back" || city == "BACK") {
            std::cout << "\n===========================\n";
            break;
        } else if (city == "more info"){
            more_info_alby();
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] city dont exist";
            std::cout << "\n===========================\n";
        }
        
    }
}
void cmrns_nrt(){
    std::cout << "\n==================== Camarines Norte (Province) ====================\n";
    std::cout << "Description: Camarines Norte, the northernmost province of the Bicol Region \nin Luzon, is famed for its rugged coastline, sweet pineapples, historic \ngold-mining towns like Paracale, and scenic islands including the emerging \nbeach destination of Calaguas Islands.";
    std::cout << "\n=============================================================\n";
    
    std::string cities[] = {
        "Daet(Capital) = 1", "Basud = 2", "Capalonga = 3", "Jose Panganiban = 4", "Labo = 5", "Mercedes = 6", 
        "Paracale = 7", "San Lorenzo Ruiz = 8", "San Vicente = 9", "Santa Elena = 10", "Talisay = 11", "Vinzons = 12"
        };
    int size = sizeof(cities) / sizeof(cities[0]);
    std::string city;
    
    while (true) {
        std::cout << "\n---------------- Municipalities Camarines Norte -------------\n";
        for (int i = 0; i < size; i++) {
        std::cout << cities[i] << std::endl;
        }
        std::cout << "\n[type]: back - Previous;\n";
        std::cout << "[type]: more info = for more info about the city;\n";
        std::cout << "[Select] City: ";
        std::getline(std::cin >> std::ws, city);
        
        if (city == "1") {
            daet();
        } else if (city == "2") {
            bsd();
        } else if (city == "3") {
            cplga();
        } else if (city == "4") {
            js_pngnbn();
        } else if (city == "5") {
            lbo();
        } else if (city == "6") {
            mrcds();
        } else if (city == "7") {
            prcl();
        } else if (city == "8") {
            san_lrnz_riz();
        } else if (city == "9") {
            san_vnte();
        } else if (city == "10") {
            snt_elna();
        } else if (city == "11") {
            tlsy();
        } else if (city == "12") {
            vzons();
        } else if (city == "back" || city == "Back" || city == "BACK") {
            std::cout << "\n===========================\n";
            break;
        } else if (city == "more info"){
            more_info_CN();
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] city dont exist";
            std::cout << "\n===========================\n";
        }
        
    }
}
void cmrns_sr(){
    std::cout << "\n==================== Camarines Sur (Province) ====================\n";
    std::cout << "Description: Camarines Sur, the largest and most populous province in \nthe Bicol Region of Luzon, Philippines, is celebrated for its dramatic landscapes\n—from Mount Isarog and the Caramoan Peninsula to the freshwater Lake Buhi \nand vibrant cultural hub of Naga City—making it a leading destination for \nagriculture, eco-adventure, and religious tourism.";
    std::cout << "\n=============================================================\n";

    std::string cities[] = {
        "Naga City (City) = 1", "Iriga City (City) = 2", "Baao = 3", "Balatan = 4", "Bato = 5", "Bombon = 6", 
        "Buhi = 7", "Bula = 8", "Cabusao = 9", "Calabanga = 10", "Camaligan = 11", "Canaman = 12", "Caramoan = 13",
        "Del Gallego = 14", "Gainza = 15", "Garchitorena = 16", "Goa = 17", "Lagonoy = 18", "Libmanan = 19", "Lupi = 20", "Magarao = 21", 
        "Milaor = 22", "Minalabac = 23", "Nabua = 24", "Ocampo = 25", "Pamplona = 26", "Pasacao = 27", "Pili = 28", "Presentacion = 29", "Ragay = 30",
        "Sagñay = 31", "San Fernando = 32", "San Jose = 33", "Sipocot = 34", "Siruma = 35", "Tigaon = 36", "Tinambac = 37"
        };
    int size = sizeof(cities) / sizeof(cities[0]);
    std::string city;
    
    while (true) {
        std::cout << "\n---------------- Cities/Municipalities Camarines Sur -------------\n";
        for (int i = 0; i < size; i++) {
        std::cout << cities[i] << std::endl;
        }
        std::cout << "\n[type]: back - Previous;\n";
        std::cout << "[type]: more info = for more info about the city;\n";
        std::cout << "[Select] City: ";
        std::getline(std::cin >> std::ws, city);
        
        if (city == "1") {
            ng_city();
        } else if (city == "2") {
            irga_city();
        } else if (city == "3") {
            bao();
        } else if (city == "4") {
            bltn();
        } else if (city == "5") {
            stone();
        } else if (city == "6") {
            bomb();
        } else if (city == "7") {
            bhi();
        } else if (city == "8") {
            bla();
        } else if (city == "9") {
            cbsao();
        } else if (city == "10") {
            clbnga();
        } else if (city == "11") {
            camlgn();
        } else if (city == "12") {
            toys();
        } else if (city == "13") {
            crmoan();
        } else if (city == "14") {
            dl_glgo();
        } else if (city == "15") {
            ginza();
        } else if (city == "16") {
            grchtrn();
        } else if (city == "17") {
            gogogo();
        } else if (city == "18") {
            lgny();
        } else if (city == "19") {
            lbmnan();
        } else if (city == "20") {
            lpi();
        } else if (city == "21") {
            mgrao();
        } else if (city == "22") {
            mlaor();
        } else if (city == "23") {
            mnlbc();
        } else if (city == "24") {
            nbu();
        } else if (city == "25") {
            ocmp();
        } else if (city == "26") {
            pmpln();
        } else if (city == "27") {
            pcscao();
        } else if (city == "28") {
            pli();
        } else if (city == "29") {
            reprt();
        } else if (city == "30") {
            rgy();
        } else if (city == "31") {
            sgny();
        } else if (city == "32") {
            san_frfr();
        } else if (city == "33") {
            san_jse();
        } else if (city == "34") {
            sipct();
        } else if (city == "35") {
            sirm();
        } else if (city == "36") {
            tgaon();
        } else if (city == "37") {
            timbac();
        } else if (city == "back" || city == "Back" || city == "BACK") {
            std::cout << "\n===========================\n";
            break;
        } else if (city == "more info"){
            more_info_CS();
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] city dont exist";
            std::cout << "\n===========================\n";
        }
        
    }
}
void ctndns(){
    std::cout << "\n==================== Catanduanes (Province) ====================\n";
    std::cout << "Description: Catanduanes is an island province in the Bicol Region known as \nthe “Land of the Howling Winds” and “Happy Island,” celebrated for its rugged \ncoastal cliffs, world-class surf at Puraran Beach, lush waterfalls, and its \nstatus as the Abaca Capital of the Philippines.";
    std::cout << "\n=============================================================\n";   
    
    std::string cities[] = {
        "Virac (City) = 1", "Bagamanoc = 2", "Baras = 3", "Bato = 4", "Caramoran = 5", "Gigmoto = 6", 
        "Pandan = 7", "Panganiban = 8", "San Andres = 9", "San Miguel = 10", "Viga = 11"
        };
    int size = sizeof(cities) / sizeof(cities[0]);
    std::string city;
    
    while (true) {
        std::cout << "\n---------------- Cities/Municipalities Catanduanes -------------\n";
        for (int i = 0; i < size; i++) {
        std::cout << cities[i] << std::endl;
        }
        std::cout << "\n[type]: back - Previous;\n";
        std::cout << "[type]: more info = for more info about the city;\n";
        std::cout << "[Select] City: ";
        std::getline(std::cin >> std::ws, city);
        
        if (city == "1") {
            vrc_city();
        } else if (city == "2") {
            bgmanc();
        } else if (city == "3") {
            brs();
        } else if (city == "4") {
            bto();
        } else if (city == "5") {
            crmorn();
        } else if (city == "6") {
            ggmt();
        } else if (city == "7") {
            buko_pndn();
        } else if (city == "8") {
            dnger();
        } else if (city == "9") {
            san_ads();
        } else if (city == "10") {
            pilsen();
        } else if (city == "11") {
            vga();
        } else if (city == "back" || city == "Back" || city == "BACK") {
            std::cout << "\n===========================\n";
            break;
        } else if (city == "more info"){
            more_info_ctndanes();
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] city dont exist";
            std::cout << "\n===========================\n";
        }
        
    }
}
void msbt(){
    std::cout << "\n==================== Masbate (Province) ====================\n";
    std::cout << "Description: Masbate is a Philippine province known for its rich cattle \nranching heritage, pristine beaches, and vibrant festivals.";
    std::cout << "\n=============================================================\n";

    std::string cities[] = {
        "Masbate City (Capital City) = 1", "Aroroy = 2", "Baleno = 3", "Balud = 4", "Batuan = 5", "Cataingan = 6", 
        "Cawayan = 7", "Claveria = 8", "Dimasalang = 9", "Esperanza = 10", "Mandaon = 11", "Milagros = 12", "Mobo = 13",
        "Monreal = 14", "Palanas = 15", "Pio V. Corpus = 16", "Placer = 17", "San Fernando = 18", "San Jacinto = 19", "San Pascual = 20", "Uson = 21"
        };
    int size = sizeof(cities) / sizeof(cities[0]);
    std::string city;
    
    while (true) {
        std::cout << "\n---------------- Cities/Municipalities Masbate -------------\n";
        for (int i = 0; i < size; i++) {
        std::cout << cities[i] << std::endl;
        }
        std::cout << "\n[type]: back - Previous;\n";
        std::cout << "[type]: more info = for more info about the city;\n";
        std::cout << "[Select] City: ";
        std::getline(std::cin >> std::ws, city);
        
        if (city == "1") {
            msbt_city();
        } else if (city == "2") {
            array();
        } else if (city == "3") {
            bln();
        } else if (city == "4") {
            blud();
        } else if (city == "5") {
            btuan();
        } else if (city == "6") {
            ctingan();
        } else if (city == "7") {
            cwyan();
        } else if (city == "8") {
            clvria();
        } else if (city == "9") {
            dmslng();
        } else if (city == "10") {
            esprnza();
        } else if (city == "11") {
            mndon();
        } else if (city == "12") {
            mlgros();
        } else if (city == "13") {
            mobpscho();
        } else if (city == "14") {
            mnrel();
        } else if (city == "15") {
            plns();
        } else if (city == "16") {
            pvc_pipe();
        } else if (city == "17") {
            plcer();
        } else if (city == "18") {
            san_frnndo();
        } else if (city == "19") {
            san_jcnto();
        } else if (city == "20") {
            san_papa_p();
        } else if (city == "21") {
            usn();
        } else if (city == "back" || city == "Back" || city == "BACK") {
            std::cout << "\n===========================\n";
            break;
        } else if (city == "more info"){
            more_info_msbt();
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] city dont exist";
            std::cout << "\n===========================\n";
        }
        
    }
}
void srsgn(){
    std::cout << "\n==================== Sorsogon (Province) ====================\n";
    std::cout << "Description: Sorsogon is a province in the Bicol Region of the Philippines, \nfamed for its whale shark interactions in Donsol, scenic coastlines, and active \nvolcanoes like Mount Bulusan.";
    std::cout << "\n=============================================================\n";

    std::string cities[] = {
        "Sorsogon City (City) = 1", "Barcelona = 2", "Bulan = 3", "Bulusan = 4", "Casiguran = 5", "Castilla = 6", 
        "Donsol = 7", "Gubat = 8", "Irosin = 9", "Juban = 10", "Magallanes = 11", "Matnog = 12", "Pilar = 13",
        "Prieto Diaz = 14", "Santa Magdalena = 15"
        };
    int size = sizeof(cities) / sizeof(cities[0]);
    std::string city;
    
    while (true) {
        std::cout << "\n---------------- Cities/Municipalities Sorsogon -------------\n";
        for (int i = 0; i < size; i++) {
        std::cout << cities[i] << std::endl;
        }
        std::cout << "\n[type]: back - Previous;\n";
        std::cout << "[type]: more info = for more info about the city;\n";
        std::cout << "[Select] City: ";
        std::getline(std::cin >> std::ws, city);
        
        if (city == "1") {
            srsgon_city();
        } else if (city == "2") {
            brcln();
        } else if (city == "3") {
            blan();
        } else if (city == "4") {
            blsan();
        } else if (city == "5") {
            csgran();
        } else if (city == "6") {
            cstlla();
        } else if (city == "7") {
            dnsl();
        } else if (city == "8") {
            forst();
        } else if (city == "9") {
            irsn();
        } else if (city == "10") {
            jojo();
        } else if (city == "11") {
            mgllnes();
        } else if (city == "12") {
            mtnog();
        } else if (city == "13") {
            plar();
        } else if (city == "14") {
            prito_diz();
        } else if (city == "15") {
            snt_mgdlna();
        } else if (city == "back" || city == "Back" || city == "BACK") {
            std::cout << "\n===========================\n";
            break;
        } else if (city == "more info"){
            more_info_srsgon();
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] city dont exist";
            std::cout << "\n===========================\n";
        }
        
    }
}

// Region 8 Provinces Eastern Visyas ===========================================================================================================

void blran(){
    std::cout << "\n==================== Biliran (Province) ====================\n";
    std::cout << "Description: Biliran is a small island province in the Eastern Visayas of \nthe Philippines, known for its lush mountains, hot springs, and unspoiled \nwaterfalls.";
    std::cout << "\n=============================================================\n";

    std::string cities[] = {
        "Almeria = 1", "Biliran = 2", "Cabucgayan = 3", "Caibiran = 4", "Culaba = 5", "Kawayan = 6", 
        "Maripipi = 7", "Naval = 8"
        };
    int size = sizeof(cities) / sizeof(cities[0]);
    std::string city;
    
    while (true) {
        std::cout << "\n---------------- Municipalities Biliran -------------\n";
        for (int i = 0; i < size; i++) {
        std::cout << cities[i] << std::endl;
        }
        std::cout << "\n[type]: back - Previous;\n";
        std::cout << "[type]: more info = for more info about the city;\n";
        std::cout << "[Select] City: ";
        std::getline(std::cin >> std::ws, city);
        
        if (city == "1") {
            almria();
        } else if (city == "2") {
            blirn();
        } else if (city == "3") {
            cbcgyn();
        } else if (city == "4") {
            cbran();
        } else if (city == "5") {
            clba();
        } else if (city == "6") {
            kwyan();
        } else if (city == "7") {
            mrpipi();
        } else if (city == "8") {
            nval();
        } else if (city == "back" || city == "Back" || city == "BACK") {
            std::cout << "\n===========================\n";
            break;
        } else if (city == "more info"){
            more_info_blrn();
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] city dont exist";
            std::cout << "\n===========================\n";
        }
        
    }
}
void east_smr(){
    std::cout << "\n==================== Eastern Samar (Province) ====================\n";
    std::cout << "Description: Eastern Samar is a province in the Eastern Visayas region of \nthe Philippines, known for its rugged coastlines, historical significance in \nWorld War II, and natural attractions like pristine beaches and surf spots \nin Guiuan.";
    std::cout << "\n=============================================================\n";
    std::string cities[] = {
        "Borongan (Capital City) = 1", "Arteche = 2", "Balangiga = 3", "Balangkayan = 4", "Can-Avid = 5", "Dolores = 6", 
        "General MacArthur = 7", "Giporlos = 8", "Guiuan = 9", "Hernani = 10", "Jipapad = 11", "Lawaan = 12", "Llorente = 13",
        "Maslog = 14", "Maydolong = 15", "Mercedes = 16", "Oras = 17", "Quinapondan = 18", "Salcedo = 19", "San Julian = 20", "San Policarpo = 21", 
        "Sulat = 22", "Taft = 23"
        };
    int size = sizeof(cities) / sizeof(cities[0]);
    std::string city;
    
    while (true) {
        std::cout << "\n---------------- Cities/Municipalities Eastern Samar -------------\n";
        for (int i = 0; i < size; i++) {
        std::cout << cities[i] << std::endl;
        }
        std::cout << "\n[type]: back - Previous;\n";
        std::cout << "[type]: more info = for more info about the city;\n";
        std::cout << "[Select] City: ";
        std::getline(std::cin >> std::ws, city);
        
        if (city == "1") {
            brngn();
        } else if (city == "2") {
            artch();
        } else if (city == "3") {
            blngga();
        } else if (city == "4") {
            blngkyan();
        } else if (city == "5") {
            cnavd();
        } else if (city == "6") {
            dlrs();
        } else if (city == "7") {
            ishllrtrn();
        } else if (city == "8") {
            gprls();
        } else if (city == "9") {
            giuan();
        } else if (city == "10") {
            hrnani();
        } else if (city == "11") {
            jppd();
        } else if (city == "12") {
            lwan();
        } else if (city == "13") {
            llrnte();
        } else if (city == "14") {
            mslg();
        } else if (city == "15") {
            mydlng();
        } else if (city == "16") {
            mrcds_benz();
        } else if (city == "17") {
            btqtroras();
        } else if (city == "18") {
            qnpndn();
        } else if (city == "19") {
            jero();
        } else if (city == "20") {
            san_jlan();
        } else if (city == "21") {
            san_plcrpo();
        } else if (city == "22") {
            write();
        } else if (city == "23") {
            tftp();
        } else if (city == "back" || city == "Back" || city == "BACK") {
            std::cout << "\n===========================\n";
            break;
        } else if (city == "more info"){
            more_info_est_smr();
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] city dont exist";
            std::cout << "\n===========================\n";
        }
        
    }
}

// ---  napapagod na ko ----
void lyte(){
    std::cout << "\n==================== Leyte (Province) ====================\n";
    std::cout << "Description: Leyte is a province in the Eastern Visayas of the \nPhilippines, historically significant for the landing of General Douglas MacArthur \nduring World War II and known for its scenic landscapes, waterfalls, and the \nSan Juanico Bridge—the country's longest.";
    std::cout << "\n=============================================================\n";

    std::string cities[] = {
        "Tacloban City (City) = 1", "Ormoc City (City) = 2", "Baybay City (City) = 3", "Abuyog (1st Distric) = 4", "Alangalang (1st Distric)  = 5", "Babatngon (1st Distric) = 6", 
        "Palo (1st Distric) = 7", "San Miguel (1st Distric) = 8", "Tanauan (1st Distric) = 9", "Burauen (2nd Distric) = 10", "Dagami (2nd Distric) = 11", "Dulag (2nd Distric) = 12", "Julita (2nd Distric) = 13",
        "La Paz (2nd Distric) = 14", "Mayorga (2nd Distric) = 15", "MacArthur (2nd Distric) = 16", "Calubian (3rd Distric) = 17", "Leyte (3rd Distric) = 18", "San Isidro (3rd Distric) = 19", "Tabango (3rd Distric) = 20", "Tabontabon (3rd Distric) = 21", 
        "Albuera (3rd Distric) = 22", "Villaba (3rd Distric) = 23", "Baybay (4th Distric) = 24", "Hilongos (4th Distric) = 25", "Inopacan (4th Distric) = 26", "Isabel (4th Distric) = 27", "Kananga (4th Distric) = 28", "Merida (4th Distric) = 29", "Palompon (4th Distric) = 30",
        "Bato (5th Distric) = 32", "Hindang (5th Distric) = 33", "Mahaplag (5th Distric) = 34", "Matalom (5th Distric) = 35", "Matag-ob (5th Distric) = 36", "Barugo (6th Distric) = 37", 
        "Capoocan (6th Distric) = 38", "Carigara (6th Distric) = 39", "Jaro (6th Distric) = 40", "Pastrana (6th Distric) = 41", "Tolosa (6th Distric) = 42", "Tunga (6th Distric) = 43"
        };
    int size = sizeof(cities) / sizeof(cities[0]);
    std::string city;
    
    while (true) {
        std::cout << "\n---------------- Cities/Municipalities Leyte -------------\n";
        for (int i = 0; i < size; i++) {
        std::cout << cities[i] << std::endl;
        }
        std::cout << "\n[type]: back - Previous;\n";
        std::cout << "[type]: more info = for more info about the city;\n";
        std::cout << "[Select] City: ";
        std::getline(std::cin >> std::ws, city);
        
        if (city == "1") {
            tclban_city();
        } else if (city == "2") {
            ormc_city();
        } else if (city == "3") {
            byebye_city();
        } else if (city == "4") {
            abyg();
        } else if (city == "5") {
            alngln();
        } else if (city == "6") {
            bbtngon();
        } else if (city == "7") {
            plo();
        } else if (city == "8") {
            san_migcz();
        } else if (city == "9") {
            tnuan();
        } else if (city == "10") {
            bruen();
        } else if (city == "11") {
            dgam();
        } else if (city == "12") {
            dlg();
        } else if (city == "13") {
            jlita();
        } else if (city == "14") {
            lola_paz();
        } else if (city == "15") {
            myrga();
        } else if (city == "16") {
            brbck();
        } else if (city == "17") {
            clubian();
        } else if (city == "18") {
            lyte_2();
        } else if (city == "19") {
            san_isro();
        } else if (city == "20") {
            tbng();
        } else if (city == "21") {
            tbntbn();
        } else if (city == "22") {
            albera();
        } else if (city == "23") {
            vllba();
        } else if (city == "24") {
            byebye();
        } else if (city == "25") {
            hlongs();
        } else if (city == "26") {
            inpacn();
        } else if (city == "27") {
            isbl();
        } else if (city == "28") {
            knngan();
        } else if (city == "29") {
            mrda();
        } else if (city == "30") {
            plmpln();
        } else if (city == "31") {
            gn_bato();
        } else if (city == "32") {
            hndang();
        } else if (city == "33") {
            mhplg();
        } else if (city == "34") {
            mtlm();
        } else if (city == "35") {
            mtgob();
        } else if (city == "36") {
            brgo();
        } else if (city == "37") {
            cpocan();
        } else if (city == "38") {
            crgra();
        } else if (city == "39") {
            jro();
        } else if (city == "40") {
            pstrna();
        } else if (city == "41") {
            tlsa();
        } else if (city == "42") {
            tnga();
        } else if (city == "back" || city == "Back" || city == "BACK") {
            std::cout << "\n===========================\n";
            break;
        } else if (city == "more info"){
            more_info_lyte();
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] city dont exist";
            std::cout << "\n===========================\n";
        }
        
    }
}
void north_smr(){
    std::cout << "\n==================== Northern Samar (Province) ====================\n";
    std::cout << "Description: Northern Samar is a province in the Eastern Visayas region of \nthe Philippines, known for its remote natural beauty, centuries-old churches, \nmysterious caves, and unspoiled islands like Biri with its striking rock \nformations.";
    std::cout << "\n=============================================================\n";

    std::string cities[] = {
        "Catarman (Capital) = 1", "Allen = 2", "Biri = 3", "Bobon = 4", "Capul = 5", "Catubig = 6", 
        "Gamay = 7", "Laoang = 8", "Lapinig = 9", "Las Navas = 10", "Lavezares = 11", "Lope de Vega = 12", "Mapanas = 13",
        "Mondragon = 14", "Palapag = 15", "Pambujan = 16", "Rosario = 17", "San Antonio = 18", "San Isidro = 19", "San Jose = 20", "San Roque = 21", 
        "San Vicente = 22", "Silvino Lobos = 23", "Victoria = 24"
        };
    int size = sizeof(cities) / sizeof(cities[0]);
    std::string city;
    
    while (true) {
        std::cout << "\n---------------- Cities/Municipalities Northern Samar -------------\n";
        for (int i = 0; i < size; i++) {
        std::cout << cities[i] << std::endl;
        }
        std::cout << "\n[type]: back - Previous;\n";
        std::cout << "[type]: more info = for more info about the city;\n";
        std::cout << "[Select] City: ";
        std::getline(std::cin >> std::ws, city);
        
        if (city == "1") {
            ctrman();
        } else if (city == "2") {
            alln();
        } else if (city == "3") {
            bri();
        } else if (city == "4") {
            bbn();
        } else if (city == "5") {
            cpl();
        } else if (city == "6") {
            ctbig();
        } else if (city == "7") {
            gmy();
        } else if (city == "8") {
            loang();
        } else if (city == "9") {
            lpng();
        } else if (city == "10") {
            ls_nvs();
        } else if (city == "11") {
            lvzrs();
        } else if (city == "12") {
            lp_d_vg();
        } else if (city == "13") {
            mpns();
        } else if (city == "14") {
            mndrgon();
        } else if (city == "15") {
            plpg();
        } else if (city == "16") {
            pmbjan();
        } else if (city == "17") {
            rsrio();
        } else if (city == "18") {
            san_atnio();
        } else if (city == "19") {
            sn_isdo();
        } else if (city == "20") {
            sn_js();
        } else if (city == "21") {
            sn_rq();
        } else if (city == "22") {
            sn_vcnt();
        } else if (city == "23") {
            slvn_lbs();
        } else if (city == "24") {
            victria();
        } else if (city == "back" || city == "Back" || city == "BACK") {
            std::cout << "\n===========================\n";
            break;
        } else if (city == "more info"){
            more_info_nrth_srm();
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] city dont exist";
            std::cout << "\n===========================\n";
        }
        
    }
}
void smr(){
    std::cout << "\n==================== Samar (Province) ====================\n";
    std::cout << "Description: Samar, the third largest island in the Philippines, \nis known for its dramatic landscapes, including caves, waterfalls, and \ndense forests, as well as being home to the Samar Island Natural Park, one \nof the country's largest protected areas.";
    std::cout << "\n=============================================================\n";
    
    std::string cities[] = {
        "Calbayog City (City) = 1", "Almagro = 2", "Basey = 3", "Calbiga = 4", "Daram = 5", "Gandara = 6", 
        "Hinabangan = 7", "Jiabong = 8", "Marabut = 9", "Matuguinao = 10", "Motiong = 11", "Pagsanghan = 12", "Paranas = 13",
        "Pinabacdao = 14", "San Jorge = 15", "San Jose de Buan = 16", "San Sebastian = 17", "Santa Margarita = 18", "Santa Rita = 19", "Santo Nino = 20", "Talalora = 21", 
        "Tarangnan = 22", "Villareal = 23", "Zumarraga = 24", "Catbalogan City (City) = 25"
        };
    int size = sizeof(cities) / sizeof(cities[0]);
    std::string city;
    
    while (true) {
        std::cout << "\n---------------- Cities/Municipalities Samar -------------\n";
        for (int i = 0; i < size; i++) {
        std::cout << cities[i] << std::endl;
        }
        std::cout << "\n[type]: back - Previous;\n";
        std::cout << "[type]: more info = for more info about the city;\n";
        std::cout << "[Select] City: ";
        std::getline(std::cin >> std::ws, city);
        
        if (city == "1") {
            clbyg_city();
        } else if (city == "2") {
            almgro();
        } else if (city == "3") {
            bsey();
        } else if (city == "4") {
            clbga();
        } else if (city == "5") {
            dram();
        } else if (city == "6") {
            gndara();
        } else if (city == "7") {
            hnbngan();
        } else if (city == "8") {
            jabong();
        } else if (city == "9") {
            mrbt();
        } else if (city == "10") {
            mtginao();
        } else if (city == "11") {
            mtong();
        } else if (city == "12") {
            pgsnghan();
        } else if (city == "13") {
            prnas();
        } else if (city == "14") {
            pnbcdao();
        } else if (city == "15") {
            sn_jrge();
        } else if (city == "16") {
            sn_js_d_ban();
        } else if (city == "17") {
            sn_sbstan();
        } else if (city == "18") {
            snt_mrgrta();
        } else if (city == "19") {
            snt_rt();
        } else if (city == "20") {
            snto_nno();
        } else if (city == "21") {
            tllra();
        } else if (city == "22") {
            trngnn();
        } else if (city == "23") {
            vllreal();
        } else if (city == "24") {
            zmrrga();
        } else if (city == "25") {
            ctblgan_city();
        } else if (city == "back" || city == "Back" || city == "BACK") {
            std::cout << "\n===========================\n";
            break;
        } else if (city == "more info"){
            more_info_smr();
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] city dont exist";
            std::cout << "\n===========================\n";
        }
        
    }
}

void south_lyte(){
    std::cout << "\n==================== Southern Leyte (Province) ====================\n";
    std::cout << "Description: Southern Leyte is a province in the Eastern Visayas of the \nPhilippines, known for its pristine dive sites like those in Sogod Bay, \nrich marine biodiversity, and the historic site of the first Catholic mass in \nthe Philippines at Limasawa Island.";
    std::cout << "\n=============================================================\n";

    std::string cities[] = {
        "Maasin City (Capital City) = 1", "Anahawan = 2", "Bontoc = 3", "Hinunangan = 4", "Hinundayan = 5", "Libagon = 6", 
        "Liloan = 7", "Limasawa = 8", "Malitbog = 9", "Padre Burgos = 10", "Pintuyan = 11", "Saint Bernard = 12", "San Francisco = 13",
        "San Juan = 14", "San Ricardo = 15", "Silago = 16", "Sogod = 17", "Tomas Oppus = 18", "Macrohon = 19"
        };
    int size = sizeof(cities) / sizeof(cities[0]);
    std::string city;
    
    while (true) {
        std::cout << "\n---------------- Cities/Municipalities Southern Leyte -------------\n";
        for (int i = 0; i < size; i++) {
        std::cout << cities[i] << std::endl;
        }
        std::cout << "\n[type]: back - Previous;\n";
        std::cout << "[type]: more info = for more info about the city;\n";
        std::cout << "[Select] City: ";
        std::getline(std::cin >> std::ws, city);
        
        if (city == "1") {
            kenjie_city();
        } else if (city == "2") {
            anhw();
        } else if (city == "3") {
            bntoc();
        } else if (city == "4") {
            hnnngan();
        } else if (city == "5") {
            hnndyn();
        } else if (city == "6") {
            dirty();
        } else if (city == "7") {
            llon();
        } else if (city == "8") {
            f_mass();
        } else if (city == "9") {
            mltbog();
        } else if (city == "10") {
            pdr_bur();
        } else if (city == "11") {
            thts_a_door();
        } else if (city == "12") {
            snt_brnrd();
        } else if (city == "13") {
            sn_frncsco();
        } else if (city == "14") {
            sn_jan();
        } else if (city == "15") {
            sn_rchrd();
        } else if (city == "16") {
            slgo();
        } else if (city == "17") {
            sgod();
        } else if (city == "18") {
            tms_ops();
        } else if (city == "19") {
            mcrhn();
        } else if (city == "back" || city == "Back" || city == "BACK") {
            std::cout << "\n===========================\n";
            break;
        } else if (city == "more info"){
            more_info_srth_lyte();
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] city dont exist";
            std::cout << "\n===========================\n";
        }
        
    }
}

// Davao Region Provinces =====================================================================================================================================================

void dvodeoro() {
    std::cout << "\n==================== Davao De Oro (Province) ====================\n";
    
    std::string cities[] = {
        "Compostela = 1", "Laak = 2", "Mabini = 3", "Maco = 4", "Maragusan = 5", "Mawab = 6", 
        "Montevista = 7", "Nabunturan = 8", "New Bataan = 9", "Pantukan = 10",};
    int size = sizeof(cities) / sizeof(cities[0]);
    std::string city;
    
    while (true) {
        std::cout << "\n---------------- Cities/Municipalities Masbate -------------\n";
        for (int i = 0; i < size; i++) {
        std::cout << cities[i] << std::endl;
        }
        std::cout << "\n[type]: back - Previous;\n";
        std::cout << "[type]: more info = for more info about the city;\n";
        std::cout << "[Select] City: ";
        std::getline(std::cin >> std::ws, city);
        
        if (city == "1") {
            compos();
        } else if (city == "2") {
            laak();
        } else if (city == "3") {
            mabini();
        } else if (city == "4") {
            maco();
        } else if (city == "5") {
            mrgsan();
        } else if (city == "6") {
            mawab();
        } else if (city == "7") {
            mntvsta();
        } else if (city == "8") {
            nbnturan();
        } else if (city == "9") {
            nwbtaan();
        } else if (city == "10") {
            pntukan();
        }  else if (city == "back" || city == "Back" || city == "BACK") {
            std::cout << "\n===========================\n";
            break;
        } else if (city == "more info"){
            more_info_dvo_de_oro();
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] city dont exist";
            std::cout << "\n===========================\n";
        }
}
}




void dvodelsur() {
    std::cout << "\n==================== Davao Del Sur (Province) ====================\n";
    
    std::string cities[] = {
        "Digos (City) = 1", "Hagonoy = 2", "Kiblawan = 3", "Magsaysay = 4", "Malalag = 5", "Matanao = 6", 
        "Padada = 7", "Santa Cruz = 8", "Sulop = 9"};
    int size = sizeof(cities) / sizeof(cities[0]);
    std::string city;
    
    while (true) {
        std::cout << "\n---------------- Cities/Municipalities Masbate -------------\n";
        for (int i = 0; i < size; i++) {
        std::cout << cities[i] << std::endl;
        }
        std::cout << "\n[type]: back - Previous;\n";
        std::cout << "[type]: more info = for more info about the city;\n";
        std::cout << "[Select] City: ";
        std::getline(std::cin >> std::ws, city);
        
        if (city == "1") {
            digos();
        } else if (city == "2") {
            hgnoy();
        } else if (city == "3") {
            kblawan();
        } else if (city == "4") {
            magsaysayy();
        } else if (city == "5") {
            mlalag();
        } else if (city == "6") {
            mtnao();
        } else if (city == "7") {
            pdd();
        } else if (city == "8") {
            sntcruz();
        } else if (city == "9") {
            sulop();
        } else if (city == "back" || city == "Back" || city == "BACK") {
            std::cout << "\n===========================\n";
            break;
        } else if (city == "more info"){
            more_info_dvo_del_sur();
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] city dont exist";
            std::cout << "\n===========================\n";
        }
}
}




void dvodelnorte(){
    std::cout << "\n==================== Davao Del Norte (Province) ====================\n";
    
    std::string cities[] = {
        "Panobo City = 1", "Island Garden City of Samal = 2", "Tagum City = 3", "Asuncion = 4", "Carmen = 5", "Kapalong = 6", 
        "New Correla = 7", "Santo Tomas = 8", "Talaingod = 9", "Braul E. Dujali = 10", "San Isidro  = 11"};
    int size = sizeof(cities) / sizeof(cities[0]);
    std::string city;
    
    while (true) {
        std::cout << "\n---------------- Cities/Municipalities Masbate -------------\n";
        for (int i = 0; i < size; i++) {
        std::cout << cities[i] << std::endl;
        }
        std::cout << "\n[type]: back - Previous;\n";
        std::cout << "[type]: more info = for more info about the city;\n";
        std::cout << "[Select] City: ";
        std::getline(std::cin >> std::ws, city);
        
        if (city == "1") {
            panobo();
        } else if (city == "2") {
            samal();
        } else if (city == "3") {
            tagum();
        } else if (city == "4") {
            asuncion();
        } else if (city == "5") {
            carmen();
        } else if (city == "6") {
            kplong();
        } else if (city == "7") {
            nwcrlla();
        } else if (city == "8") {
            snttomas();
        } else if (city == "9") {
            talaingod();
        } else if (city == "10") {
            braulio();
        } else if (city == "11") {
            snisidro();
        } else if (city == "back" || city == "Back" || city == "BACK") {
            std::cout << "\n===========================\n";
            break;
        } else if (city == "more info"){
            more_info_dvo_del_norte();
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] city dont exist";
            std::cout << "\n===========================\n";
        }
        
    }

}




void dvoocci(){
    std::cout << "\n==================== Davao Occidental (Province) ====================\n";
    
    std::string cities[] = {
        "Don Marcelino = 1", "Jose Abad Santos = 2", "Malita = 3", "Santa Maria = 4", "Sarangani = 5"};
    int size = sizeof(cities) / sizeof(cities[0]);
    std::string city;
    
    while (true) {
        std::cout << "\n---------------- Cities/Municipalities Masbate -------------\n";
        for (int i = 0; i < size; i++) {
        std::cout << cities[i] << std::endl;
        }
        std::cout << "\n[type]: back - Previous;\n";
        std::cout << "[type]: more info = for more info about the city;\n";
        std::cout << "[Select] City: ";
        std::getline(std::cin >> std::ws, city);
        
        if (city == "1") {
            donmarcelino();
        } else if (city == "2") {
            joseabdsntos();
        } else if (city == "3") {
            malita();
        } else if (city == "4") {
            sntamaria();
        } else if (city == "5") {
            sarangani();
        } else if (city == "back" || city == "Back" || city == "BACK") {
            std::cout << "\n===========================\n";
            break;
        } else if (city == "more info"){
            more_info_dvo_occidental();
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] city dont exist";
            std::cout << "\n===========================\n";
        }
        
    }

}
    


void dvoori(){
    std::cout << "\n==================== Davao Oriental (Province) ====================\n";
    
    std::string cities[] = {
        "Mati City = 1", "Baganga = 2", "Banaybanay = 3", "Boston = 4", "Caraga = 5", "Cateel = 6", "Governor Generoso = 7", "Lupon = 8", "Manay = 9", 
        "San Isidro = 10", "Tarragona = 11"};
    int size = sizeof(cities) / sizeof(cities[0]);
    std::string city;
    
    while (true) {
        std::cout << "\n---------------- Cities/Municipalities Masbate -------------\n";
        for (int i = 0; i < size; i++) {
        std::cout << cities[i] << std::endl;
        }
        std::cout << "\n[type]: back - Previous;\n";
        std::cout << "[type]: more info = for more info about the city;\n";
        std::cout << "[Select] City: ";
        std::getline(std::cin >> std::ws, city);
        
        if (city == "1") {
            mati();
        } else if (city == "2") {
            baganga();
        } else if (city == "3") {
            banaybanay();
        } else if (city == "4") {
            boston();
        } else if (city == "5") {
            caraga();
        } else if (city == "6") {
            cateel();
        } else if (city == "7") {
            govgenroso();
        } else if (city == "8") {
            lupon();
        } else if (city == "9") {
            manay();
        } else if (city == "10") {
            snisidro2();
        } else if (city == "11") {
            tarragona();
        } else if (city == "back" || city == "Back" || city == "BACK") {
            std::cout << "\n===========================\n";
            break;
        } else if (city == "more info"){
            more_info_dvo_oriental();
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] city dont exist";
            std::cout << "\n===========================\n";
        }
        
    }

}

// SOCCSKSARGEN Provinces ====================================================================================================================================================

void cotabato(){
    std::cout << "\n==================== Cotabato City (Province) ====================\n";
    
    std::string cities[] = {
        "Kidapawan City = 1", "Alamada = 2", "Aleosan = 3", "Antipas = 4", "Arakan = 5", "Banisilan = 6", "Carmen = 7", "Kabacan = 8", "Libungan = 9", 
        "Magpet = 10", "Makilala = 11", "Matalam = 12", "M'lang = 13", "Pigcawayan = 14", "Pikit = 15", "President Roxas = 16", "Tulunan = 17", "Midsayap = 18"};
    int size = sizeof(cities) / sizeof(cities[0]);
    std::string city;
    
    while (true) {
        std::cout << "\n---------------- Cities/Municipalities Masbate -------------\n";
        for (int i = 0; i < size; i++) {
        std::cout << cities[i] << std::endl;
        }
        std::cout << "\n[type]: back - Previous;\n";
        std::cout << "[type]: more info = for more info about the city;\n";
        std::cout << "[Select] City: ";
        std::getline(std::cin >> std::ws, city);
        
        if (city == "1") {
            kidapawan();
        } else if (city == "2") {
            alamada();
        } else if (city == "3") {
            aleosan();
        } else if (city == "4") {
            antipas();
        } else if (city == "5") {
            arakan();
        } else if (city == "6") {
            banisilan();
        } else if (city == "7") {
            carmen2();
        } else if (city == "8") {
            kabacan();
        } else if (city == "9") {
            libungan();
        } else if (city == "10") {
            magpet();
        } else if (city == "11") {
            makilala();
        } else if (city == "12") {
            matalam();
        } else if (city == "13") {
            mlang();
        } else if (city == "14") {
            pigcawayan();
        } else if (city == "15") {
            pikit();
        } else if (city == "16") {
            presidentroxas();
        } else if (city == "17") {
            tulunan();
        } else if (city == "18") {
            midsayap();
        } else if (city == "back" || city == "Back" || city == "BACK") {
            std::cout << "\n===========================\n";
            break;
        } else if (city == "more info"){
            more_info_cotabato();
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] city dont exist";
            std::cout << "\n===========================\n";
        }
        
    }

}

// Cotabato done ============================================================================================================================================================

void southcotabato(){
    std::cout << "\n==================== South Cotabato (Province) ====================\n";
    
    std::string cities[] = {
        "Koronodal City = 1", "Banga = 2", "Lake Sebu = 3", "Norala = 4", "Polomok  = 5", "Santo Niño = 6", "Surallah = 7", "Tampakan = 8", "Tantangan = 9", 
        "T'boli = 10", "Tupi = 11"};
    int size = sizeof(cities) / sizeof(cities[0]);
    std::string city;
    
    while (true) {
        std::cout << "\n---------------- Cities/Municipalities Masbate -------------\n";
        for (int i = 0; i < size; i++) {
        std::cout << cities[i] << std::endl;
        }
        std::cout << "\n[type]: back - Previous;\n";
        std::cout << "[type]: more info = for more info about the city;\n";
        std::cout << "[Select] City: ";
        std::getline(std::cin >> std::ws, city);
        
        if (city == "1") {
            koronodal();
        } else if (city == "2") {
            banga();
        } else if (city == "3") {
            lakesebu();
        } else if (city == "4") {
            norala();
        } else if (city == "5") {
            polomok();
        } else if (city == "6") {
            sntnino();
        } else if (city == "7") {
            surallah();
        } else if (city == "8") {
            tampakan();
        } else if (city == "9") {
            tantangan();
        } else if (city == "10") {
            tboli();
        } else if (city == "11") {
            tupi();
        } else if (city == "back" || city == "Back" || city == "BACK") {
            std::cout << "\n===========================\n";
            break;
        } else if (city == "more info"){
            more_info_south_cotabato();
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] city dont exist";
            std::cout << "\n===========================\n";
        }
        
    }

}



void sultankudarat(){
    std::cout << "\n==================== Sultan Kudarat (Province) ====================\n";
    
    std::string cities[] = {
        "Tacurong City = 1", "Bagumbayan = 2", "Columbio = 3", "Esperanza = 4", "Kalamansig  = 5", "Lambayong = 6", "Lebak = 7", "Lutayan = 8", "Palimbang = 9", 
        "President Quirino = 10", "Senator Ninoy Aquino = 11", "Isulan = 12"};
    int size = sizeof(cities) / sizeof(cities[0]);
    std::string city;
    
    while (true) {
        std::cout << "\n---------------- Cities/Municipalities Masbate -------------\n";
        for (int i = 0; i < size; i++) {
        std::cout << cities[i] << std::endl;
        }
        std::cout << "\n[type]: back - Previous;\n";
        std::cout << "[type]: more info = for more info about the city;\n";
        std::cout << "[Select] City: ";
        std::getline(std::cin >> std::ws, city);
        
        if (city == "1") {
            tacurong();
        } else if (city == "2") {
            bagumbayan2();
        } else if (city == "3") {
            columbio();
        } else if (city == "4") {
            esperanza2();
        } else if (city == "5") {
            kalamansig();
        } else if (city == "6") {
            lambayong();
        } else if (city == "7") {
            lebak();
        } else if (city == "8") {
            lutayan();
        } else if (city == "9") {
            palimbang();
        } else if (city == "10") {
            presidentquirino();
        } else if (city == "11") {
            sntorninoy();
        } else if (city == "12") {
            isulan();
        } else if (city == "back" || city == "Back" || city == "BACK") {
            std::cout << "\n===========================\n";
            break;
        } else if (city == "more info"){
            more_info_sultan_kudarat();
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] city dont exist";
            std::cout << "\n===========================\n";
        }
        
    }

}

void sarangani2(){
    std::cout << "\n==================== Sarangani (Province) ====================\n";
    
    std::string cities[] = {
        "Alabel = 1", "Glan = 2", "Kiamba = 3", "Maasim = 4", "Maitum = 5", "Malapatan = 6", "Malungon = 7"};
    int size = sizeof(cities) / sizeof(cities[0]);
    std::string city;
    
    while (true) {
        std::cout << "\n---------------- Cities/Municipalities Masbate -------------\n";
        for (int i = 0; i < size; i++) {
        std::cout << cities[i] << std::endl;
        }
        std::cout << "\n[type]: back - Previous;\n";
        std::cout << "[type]: more info = for more info about the city;\n";
        std::cout << "[Select] City: ";
        std::getline(std::cin >> std::ws, city);
        
        if (city == "1") {
            alabel();
        } else if (city == "2") {
            glan();
        } else if (city == "3") {
            kiamba();
        } else if (city == "4") {
            maasim();
        } else if (city == "5") {
            maitum();
        } else if (city == "6") {
            malapatan();
        } else if (city == "7") {
            malungon();
        } else if (city == "back" || city == "Back" || city == "BACK") {
            std::cout << "\n===========================\n";
            break;
        } else if (city == "more info"){
            more_info_sarangani();
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] city dont exist";
            std::cout << "\n===========================\n";
        }
        
    }

}


// Region 1


void ilocsnorth(){
    std::cout << "\n==================== Ilocos Norte (Province) ====================\n";
    
    std::string cities[] = {
        "Laoag City = 1", "Batac City = 2", "Adams = 3", "Bacarra = 4", "Badoc= 5", "Bangui = 6", "Banna (Espiritu) = 7", "Burgos = 8",
        "Carasi = 9", "Currimao = 10", "Dingras = 11", "Dumalneg = 12", "Marcos = 13", "Nueva Era = 14", "Pagudpud = 15", 
        "Paoay = 16", "Pasuquin = 17", "Piddig = 18", "Pinili = 19", "San Nicolas = 20", "Sarrat = 21", "Solsona = 22",
        "Vintar = 23"};
    int size = sizeof(cities) / sizeof(cities[0]);
    std::string city;
    
    while (true) {
        std::cout << "\n---------------- Cities/Municipalities Masbate -------------\n";
        for (int i = 0; i < size; i++) {
        std::cout << cities[i] << std::endl;
        }
        std::cout << "\n[type]: back - Previous;\n";
        std::cout << "[type]: more info = for more info about the city;\n";
        std::cout << "[Select] City: ";
        std::getline(std::cin >> std::ws, city);
        
        if (city == "1") {
            lag();
        } else if (city == "2") {
            batacs();
        } else if (city == "3") {
            adms();
        } else if (city == "4") {
            bcrra();
        } else if (city == "5") {
            bdc();
        } else if (city == "6") {
            bngui();
        } else if (city == "7") {
            bnna();
        } else if (city == "8") {
            brgs();
        } else if (city == "9") {
            carc();
        } else if (city == "10") {
            crrmao();
        } else if (city == "12") {
            dngrs();
        } else if (city == "13") {
            dumlng();
        } else if (city == "14") {
            mrcs();
        } else if (city == "15") {
            nuev_era();
         } else if (city == "16") {
            pgdpd();
        } else if (city == "17") {
            pawayz();
        } else if (city == "18") {
            psquin();
        } else if (city == "19") {
            pddg();
        } else if (city == "20") {
            pnli();
        } else if (city == "21") {
            san_nicos();
        } else if (city == "22") {
            srrt();
        } else if (city == "23") {
            solsn();
        } else if (city == "24") {
            vnctr();
        } else if (city == "back" || city == "Back" || city == "BACK") {
            std::cout << "\n===========================\n";
            break;
        } else if (city == "more info"){
            more_info_ilocos_norte();
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] city dont exist";
            std::cout << "\n===========================\n";
        }
        
    }

}

void ilocssur(){
    std::cout << "\n==================== Ilocos Sur (Province) ====================\n";
    
    std::string cities[] = {
        "Vigan City = 1", "Candon City = 2", "Alilem = 3", "Banayoyo = 4", "Bantay= 5", "Burgos = 6", "Cabugao = 7", "Caoayan = 8",
        "Cervantes = 9", "Galimuyod = 10", "Gregorio del Pilar = 11", "Lidlidda = 12", "Magsingal = 13", "Nagbukel = 14", "Narvacan = 15", 
        "Quirino = 16", "Salcedo = 17", "San Emilio = 18", "San Esteban = 19", "San Ildefonso = 20", "San Juan = 21", "San Vicente = 22",
        "Santa = 23", "Santa Catalina = 24", "Santa Cruz = 25", "Santa Lucia = 26", "Santa Maria = 27", "Santiago = 28", "Santo Domingo = 29", 
        "Sigay = 30", "Sinait = 31", "Sugpon = 32", "Suyo = 33", "Tagudin = 34"};
    int size = sizeof(cities) / sizeof(cities[0]);
    std::string city;
    
    while (true) {
        std::cout << "\n---------------- Cities/Municipalities Masbate -------------\n";
        for (int i = 0; i < size; i++) {
        std::cout << cities[i] << std::endl;
        }
        std::cout << "\n[type]: back - Previous;\n";
        std::cout << "[type]: more info = for more info about the city;\n";
        std::cout << "[Select] City: ";
        std::getline(std::cin >> std::ws, city);
        
        if (city == "1") {
            vegan();
        } else if (city == "2") {
            cndn();
        } else if (city == "3") {
            allm();
        } else if (city == "4") {
            bnyyo();
        } else if (city == "5") {
            bnty();
        } else if (city == "6") {
            bgs();
        } else if (city == "7") {
            cbgao();
        } else if (city == "8") {
            cawayan();
        } else if (city == "9") {
            crvnts();
        } else if (city == "10") {
            glmyd();
        } else if (city == "11") {
            delplar();
        } else if (city == "12") {
            lidlid();
        } else if (city == "13") {
            mgcngl();
        } else if (city == "14") {
            ngbkl();
         } else if (city == "15") {
            nrvcn();
        } else if (city == "16") {
            qrno();
        } else if (city == "17") {
            slcdo();
        } else if (city == "18") {
            san_emi();
        } else if (city == "19") {
            san_st();
        } else if (city == "20") {
            san_idy();
        } else if (city == "21") {
            san_jn();
        } else if (city == "22") {
            san_vi();
        } else if (city == "23") {
            snt();
        } else if (city == "24") {
            snt_ctln();
        } else if (city == "25") {
            snt_crz();
        } else if (city == "26") {
            snt_lc();
        } else if (city == "27") {
            snt_mr();
        } else if (city == "28") {
            sntgooo();
        } else if (city == "29") {
            snt_dmngo();
        } else if (city == "30") {
            cgay();
        } else if (city == "31") {
            cnait();
        } else if (city == "32") {
            sgpn();
        } else if (city == "33") {
            suyi();
        } else if (city == "34") {
            tgdn();
        } else if (city == "back" || city == "Back" || city == "BACK") {
            std::cout << "\n===========================\n";
            break;
        } else if (city == "more info"){
            more_info_ilocossur();
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] city dont exist";
            std::cout << "\n===========================\n";
        }
        
    }

}

void la_unionzzz(){
    std::cout << "\n==================== La Union (Province) ====================\n";
    
    std::string cities[] = {
        "San Fernando City = 1", "Agoo = 2", "Aringay = 3", "Bacnotan = 4", "Bagulin= 5", "Balaoan = 6", "Bangar = 7", "Bauang = 8",
        "Burgos = 9", "Caba = 10", "Luna = 11", "Naguilian = 12", "Pugo = 13", "Rosario = 14", "San Gabriel = 15", 
        "San Juan = 16", "Santo Tomas = 17", "Santol = 18", "Sudipen = 19", "Tubao = 20"};
    int size = sizeof(cities) / sizeof(cities[0]);
    std::string city;
    
    while (true) {
        std::cout << "\n---------------- Cities/Municipalities Masbate -------------\n";
        for (int i = 0; i < size; i++) {
        std::cout << cities[i] << std::endl;
        }
        std::cout << "\n[type]: back - Previous;\n";
        std::cout << "[type]: more info = for more info about the city;\n";
        std::cout << "[Select] City: ";
        std::getline(std::cin >> std::ws, city);
        
        if (city == "1") {
            sn_fnndo();
        } else if (city == "2") {
            aggo();
        } else if (city == "3") {
            arngy();
        } else if (city == "4") {
            bcntn();
        } else if (city == "5") {
            bgln();
        } else if (city == "6") {
            blano_ns();
        } else if (city == "7") {
            bngr();
        } else if (city == "8") {
            bang();
        } else if (city == "9") {
            brgss();
        } else if (city == "10") {
            cba();
        } else if (city == "11") {
            lnaa();
        } else if (city == "12") {
            nagilan();
        } else if (city == "13") {
            pgo();
        } else if (city == "14") {
            rsr_io();
         } else if (city == "15") {
            sng_briel();
        } else if (city == "16") {
            san_jun();
        } else if (city == "17") {
            satomas();
        } else if (city == "18") {
            sntl();
        } else if (city == "19") {
            sudpn();
         } else if (city == "20") {
            tbao();
        } else if (city == "back" || city == "Back" || city == "BACK") {
            std::cout << "\n===========================\n";
            break;
        } else if (city == "more info"){
            more_info_la_unionz();
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] city dont exist";
            std::cout << "\n===========================\n";
        }
        
    }

}

void pangasinanz(){
    std::cout << "\n==================== Pangasinan (Province) ====================\n";
    
    std::string cities[] = {
        "Dagupan City = 1", "San Carlos City = 2", "Urdaneta City = 3", "Alaminos City = 4", "Agno= 5", "Alcala = 6", "Anda = 7", "Asingan = 8",
        "Balungao = 9", "Bani = 10", "Basista = 11", "Bautista = 12", "Bayambang = 13", "Binalonan = 14", "Binmaley = 15", 
        "Bolinao = 16", "Bugallon = 17", "Burgos = 18", "Calasiao = 19", "Dasol = 20", "Infanta = 21", "Labrador = 22",
        "Laoac = 23", "Lingayen = 24", "Mabini = 25", "Malasiqui = 26", "Manaoag = 27", "Mangaldan = 28", "Mangataren = 29", 
        "Mapandan = 30", "Natividad = 31", "Pozorrubio = 32", "Rosales = 33", "San Fabian = 34", "San Jacinto = 35", "San Manuel = 36", 
        "San Nicolas = 37", "San Quintin = 38", "Santa Barbara = 39", "Santa Maria = 40", "Santo Tomas = 41", "Sison = 42", "Sual = 43", "Tayug = 44", 
        "Umingan = 45", "Urbioztondo = 46", "Villasis = 47"};
    int size = sizeof(cities) / sizeof(cities[0]);
    std::string city;
    
    while (true) {
        std::cout << "\n---------------- Cities/Municipalities Masbate -------------\n";
        for (int i = 0; i < size; i++) {
        std::cout << cities[i] << std::endl;
        }
        std::cout << "\n[type]: back - Previous;\n";
        std::cout << "[type]: more info = for more info about the city;\n";
        std::cout << "[Select] City: ";
        std::getline(std::cin >> std::ws, city);
        
       if (city == "1") {
            dgpnct();
        } else if (city == "2") {
            scct();
        } else if (city == "3") {
            urdnt();
        } else if (city == "4") {
            almns();
        } else if (city == "5") {
            agn();
        } else if (city == "6") {
            alcl();
        } else if (city == "7") {
            andaaa();
        } else if (city == "8") {
            acngn();
        } else if (city == "9") {
            blng();
        } else if (city == "10") {
            baniii();
        } else if (city == "11") {
            bssta();
        } else if (city == "12") {
            bautst();
        } else if (city == "13") {
            bymbng();
        } else if (city == "14") {
            bnlnn();
         } else if (city == "15") {
            bnmly();
        } else if (city == "16") {
            blnao();
        } else if (city == "17") {
            bglln();
        } else if (city == "18") {
            brgsss();
        } else if (city == "19") {
            clss();
         } else if (city == "20") {
            dsol();
        } else if (city == "21") {
            nfnta();
        } else if (city == "22") {
            lbrdr();
        } else if (city == "23") {
            laok();
        } else if (city == "24") {
            lngyn();
        } else if (city == "25") {
            mbini();
        } else if (city == "26") {
            malacq();
        } else if (city == "27") {
            manawag();
        } else if (city == "28") {
            mngldn();
        } else if (city == "29") {
            mngtrn();
        } else if (city == "30") {
            mpndn();
        } else if (city == "31") {
            ntvdad();
         } else if (city == "32") {
            pzrrbio();
        } else if (city == "33") {
            rsls();
        } else if (city == "34") {
            san_fb();
        } else if (city == "35") {
            snjcnto();
        } else if (city == "36") {
            snm_nel();
        } else if (city == "37") {
            snncls();
        } else if (city == "38") {
            snkntn();
        } else if (city == "39") {
            sntbrbra();
        } else if (city == "40") {
            sntmria();
         } else if (city == "41") {
            stotoms();
        } else if (city == "42") {
            cson();
        } else if (city == "43") {
            sualll();
        } else if (city == "44") {
            taug();
        } else if (city == "45") {
            umngn();
        } else if (city == "46") {
            rbiztndo();
         } else if (city == "47") {
            vlls();    
        } else if (city == "back" || city == "Back" || city == "BACK") {
            std::cout << "\n===========================\n";
            break;
        } else if (city == "more info"){
            more_info_pangasinanz();
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] city dont exist";
            std::cout << "\n===========================\n";
        }
        
    }

}

// Region 2

void batanez(){
    std::cout << "\n==================== Batanes (Province) ====================\n";
    
    std::string cities[] = {
        "Basco = 1", "Itbayat = 2", "Ivana = 3", "Mahatao = 4", "Sabtang= 5", "Uyugan= 6"};
    int size = sizeof(cities) / sizeof(cities[0]);
    std::string city;
    
    while (true) {
        std::cout << "\n---------------- Cities/Municipalities Masbate -------------\n";
        for (int i = 0; i < size; i++) {
        std::cout << cities[i] << std::endl;
        }
        std::cout << "\n[type]: back - Previous;\n";
        std::cout << "[type]: more info = for more info about the city;\n";
        std::cout << "[Select] City: ";
        std::getline(std::cin >> std::ws, city);
        
       if (city == "1") {
            bsco();
        } else if (city == "2") {
            itbyt();
        } else if (city == "3") {
            ivna();
        } else if (city == "4") {
            mhtao();
        } else if (city == "5") {
            sbtng();
        } else if (city == "6") {
            uygn();
        } else if (city == "back" || city == "Back" || city == "BACK") {
            std::cout << "\n===========================\n";
            break;
        } else if (city == "more info"){
            more_info_batanezz();
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] city dont exist";
            std::cout << "\n===========================\n";
        }
        
    }

}

void cgynanz(){
    std::cout << "\n==================== Cagayan (Province) ====================\n";
    
    std::string cities[] = {
        "Tuguegarao City = 1", "Alcala = 2", "Allacapan = 3", "Amulung = 4", "Aparri = 5", "Baggao = 6", "Ballesteros = 7", "Buguey = 8",
        "Calayan = 9", "Camalaniugan = 10", "Claveria = 11", "Enrile = 12", "Gattaran = 13", "Gonzaga = 14", "Iguig = 15", 
        "Lal-lo = 16", "Lasam = 17", "Pamplona = 18", "Peñablanca = 19", "Piat = 20", "Rizal = 21", "Sanchez-Mira = 22",
        "Santa Ana = 23", "Santa Praxedes = 24", "Santa Teresita = 25", "Santo Niño = 26", "Solana = 27", "Tuao = 28"};
    int size = sizeof(cities) / sizeof(cities[0]);
    std::string city;
    
    while (true) {
        std::cout << "\n---------------- Cities/Municipalities Masbate -------------\n";
        for (int i = 0; i < size; i++) {
        std::cout << cities[i] << std::endl;
        }
        std::cout << "\n[type]: back - Previous;\n";
        std::cout << "[type]: more info = for more info about the city;\n";
        std::cout << "[Select] City: ";
        std::getline(std::cin >> std::ws, city);
        
       if (city == "1") {
            tggrao();
        } else if (city == "2") {
            alcssl();
        } else if (city == "3") {
            allcpn();
        } else if (city == "4") {
            amlng();
        } else if (city == "5") {
            aprri();
        } else if (city == "6") {
            bggo();
        } else if (city == "7") {
            bllstrs();
        } else if (city == "8") {
            bugy();
        } else if (city == "9") {
            clyn();
        } else if (city == "10") {
            cmlngn();
        } else if (city == "11") {
            clv_ia();
        } else if (city == "12") {
            nrle();
        } else if (city == "13") {
            gtrrn();
        } else if (city == "14") {
            gnzga();
         } else if (city == "15") {
            igig();
        } else if (city == "16") {
            lalo();
        } else if (city == "17") {
            lsam();
        } else if (city == "18") {
            pmplona();
        } else if (city == "19") {
            pnblnca();
         } else if (city == "20") {
            piyat();
        } else if (city == "21") {
            rizzal();
        } else if (city == "22") {
            snchzmra();
        } else if (city == "23") {
            staanaa();
        } else if (city == "24") {
            staprax();
        } else if (city == "25") {
            statere();
        } else if (city == "26") {
            stoninoo();
        } else if (city == "27") {
            soln();
        } else if (city == "28") {
            twowz();
        } else if (city == "back" || city == "Back" || city == "BACK") {
            std::cout << "\n===========================\n";
            break;
        } else if (city == "more info"){
            more_info_cagaynz();
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] city dont exist";
            std::cout << "\n===========================\n";
        }
        
    }

}

void izabelssss(){
    std::cout << "\n==================== Isabela (Province) ====================\n";
    
    std::string cities[] = {
        "Ilagan City = 1", "Cauayan City = 2", "Santiago City = 3", "Alicia = 4", "Angadanan = 5", "Aurora = 6", "Benito Solivan = 7", "Burgos = 8",
        "Cabagan = 9", "Cabatuan = 10", "Cordon = 11", "Delfion Albano = 12", "Dinapigue = 13", "Divilacan = 14", "Echague = 15", 
        "Gamu = 16", "Jones = 17", "Luna = 18", "Maconacon = 19", "Mallig = 20", "Naguillian = 21", "Palanan = 22",
        "Quezon = 23", "Quirino = 24", "Ramon = 25", "Reina Mercedes = 26", "Roxas = 27", "San Agustin = 28", "San Guillermo = 29", 
        "San Isidro = 30", "San Manuel = 31", "San Mariano = 32", "San Mateo = 33", "San Pablo = 34", "SanTa Maria = 35", "Santo Tomas = 36", 
        "Tumauini = 37"};
    int size = sizeof(cities) / sizeof(cities[0]);
    std::string city;
    
    while (true) {
        std::cout << "\n---------------- Cities/Municipalities Masbate -------------\n";
        for (int i = 0; i < size; i++) {
        std::cout << cities[i] << std::endl;
        }
        std::cout << "\n[type]: back - Previous;\n";
        std::cout << "[type]: more info = for more info about the city;\n";
        std::cout << "[Select] City: ";
        std::getline(std::cin >> std::ws, city);
        
       if (city == "1") {
            ilgnct();
        } else if (city == "2") {
            kwynct();
        } else if (city == "3") {
            snt_go();
        } else if (city == "4") {
            alsya();
        } else if (city == "5") {
            angdnn();
        } else if (city == "6") {
            aaqes();
        } else if (city == "7") {
            bntoslvn();
        } else if (city == "8") {
            brgoz();
        } else if (city == "9") {
            cbgn();
        } else if (city == "10") {
            cbtan();
        } else if (city == "11") {
            crdn();
        } else if (city == "12") {
            dlfnalbn();
        } else if (city == "13") {
            dnapd();
        } else if (city == "14") {
            dvlkn();
         } else if (city == "15") {
            echags();
        } else if (city == "16") {
            gmo();
        } else if (city == "17") {
            jns();
        } else if (city == "18") {
            lna();
        } else if (city == "19") {
            mconcn();
         } else if (city == "20") {
            mllg();
        } else if (city == "21") {
            nagln();
        } else if (city == "22") {
            plnn();
        } else if (city == "23") {
            qzone();
        } else if (city == "24") {
            grno();
        } else if (city == "25") {
            rmon();
        } else if (city == "26") {
            reinmer();
        } else if (city == "27") {
            roxs();
        } else if (city == "28") {
            snagstn();
        } else if (city == "29") {
            sngllrm();
        } else if (city == "30") {
            snisdr();
        } else if (city == "31") {
            snmnel();
         } else if (city == "32") {
            snmrno();
        } else if (city == "33") {
            snmto();
        } else if (city == "34") {
            snpblo();
        } else if (city == "35") {
            stamra();
        } else if (city == "36") {
            sto_toms();
        } else if (city == "37") {
            tumwni();
        } else if (city == "back" || city == "Back" || city == "BACK") {
            std::cout << "\n===========================\n";
            break;
        } else if (city == "more info"){
            more_info_izabels();
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] city dont exist";
            std::cout << "\n===========================\n";
        }
        
    }

}

void nuvsvizz(){
    std::cout << "\n==================== Nueva Vizcaya (Province) ====================\n";
    
    std::string cities[] = {
        "Alfonso Castañeda = 1", "Ambaguio = 2", "Aritao = 3", "Bagabag = 4", "Bambang = 5", "bayombong = 6", "Diadi = 7", "Dupax del Norte = 8",
        "Dupax del Sur= 9", "Kasibu = 10", "Kayapa = 11", "Quezon = 12", "Santa Fe = 13", "Solano = 14", "Villaverde = 15"};
    int size = sizeof(cities) / sizeof(cities[0]);
    std::string city;
    
    while (true) {
        std::cout << "\n---------------- Cities/Municipalities Masbate -------------\n";
        for (int i = 0; i < size; i++) {
        std::cout << cities[i] << std::endl;
        }
        std::cout << "\n[type]: back - Previous;\n";
        std::cout << "[type]: more info = for more info about the city;\n";
        std::cout << "[Select] City: ";
        std::getline(std::cin >> std::ws, city);
        
       if (city == "1") {
            alfnscn();
        } else if (city == "2") {
            ambgo();
        } else if (city == "3") {
            arto();
        } else if (city == "4") {
            bgbg();
        } else if (city == "5") {
            bang_bang();
        } else if (city == "6") {
            bym_bang();
        } else if (city == "7") {
            diads();
        } else if (city == "8") {
            dpn();
        } else if (city == "9") {
            dps();
        } else if (city == "10") {
            ksbu();
        } else if (city == "11") {
            kyaps();
        } else if (city == "12") {
            qzono();
        } else if (city == "13") {
            stafet();
        } else if (city == "14") {
            solno();
         } else if (city == "15") {
            villvrd();
        } else if (city == "back" || city == "Back" || city == "BACK") {
            std::cout << "\n===========================\n";
            break;
        } else if (city == "more info"){
            more_info_nuevaaviz();
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] city dont exist";
            std::cout << "\n===========================\n";
        }
        
    }

}

void quirinose(){
    std::cout << "\n==================== Quirino (Province) ====================\n";
    
    std::string cities[] = {
        "Aglipay = 1", "Cabarroguis = 2", "Diffun = 3", "Maddela = 4", "Nagtipunan= 5", "Saguday = 6"};
    int size = sizeof(cities) / sizeof(cities[0]);
    std::string city;
    
    while (true) {
        std::cout << "\n---------------- Cities/Municipalities Masbate -------------\n";
        for (int i = 0; i < size; i++) {
        std::cout << cities[i] << std::endl;
        }
        std::cout << "\n[type]: back - Previous;\n";
        std::cout << "[type]: more info = for more info about the city;\n";
        std::cout << "[Select] City: ";
        std::getline(std::cin >> std::ws, city);
        
       if (city == "1") {
            agpay();
        } else if (city == "2") {
            cabs();
        } else if (city == "3") {
            diffs();
        } else if (city == "4") {
            mads();
        } else if (city == "5") {
            nagtips();
        } else if (city == "6") {
            sagdy();
        } else if (city == "back" || city == "Back" || city == "BACK") {
            std::cout << "\n===========================\n";
            break;
        } else if (city == "more info"){
            more_info_qrnose();
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] city dont exist";
            std::cout << "\n===========================\n";
        }
        
    }

}
