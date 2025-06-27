#pragma once
#include "cities.h"
#include "more_info.h"

/* [Reminder] THIS IS A PROVINCES FILE - palagi po maglagay ng comments para alam ng mga nag eedit */

// LUZON PROVINCES =============================================================================================================================


// Region 4 - B Provinces -- 

// Occidental Mindoro =========================================================================================================================
void occid_mind() {
    std::cout << "\n=============== Occidental Mindoro (Province) ===============\n";
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
    std::cout << "\n=============== Oriental Mindoro (Province) ===============\n";
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