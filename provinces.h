#pragma once
#include "luzon_cities.h"
#include "visayas_cities.h"
#include "mindanao_cities.h"
#include "more_info.h"

/* [Reminder] THIS IS A PROVINCES FILE - palagi po maglagay ng comments para alam ng mga nag eedit */

// LUZON PROVINCES =============================================================================================================================

// Region 1


void ilocsnorth(){
    std::cout << "\n==================== Ilocos Norte (Province) ====================\n";
    std::cout << "Description: A province known for its dramatic coastal landscapes, wind \nfarms, and rich Ilocano heritage, including the heritage city \nof Vigan.";
    std::cout << "\n=============================================================\n";   
     
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
    std::cout << "Description: Famous for its well-preserved Spanish colonial architecture, \nparticularly in Vigan City, a UNESCO World Heritage Site.";
    std::cout << "\n=============================================================\n";   
     
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
    std::cout << "Description: Renowned for its surfing beaches, especially in San Juan, \nand a growing food and art scene.";
    std::cout << "\n=============================================================\n";   
     
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
    std::cout << "Description: The region's largest province, known for the Hundred \nIslands National Park, bangus (milkfish) industry, and \nvibrant coastal culture.";
    std::cout << "\n=============================================================\n";   
     
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
    std::cout << "Description: The northernmost province of the Philippines, known \nfor its breathtaking rolling hills, stone houses, and serene, \ntyphoon-swept landscapes.";
    std::cout << "\n=============================================================\n";   
     
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
    std::cout << "Description: A province rich in natural wonders, including caves \nand beaches, and home to the historic Callao Cave and Palaui \nIsland.";
    std::cout << "\n=============================================================\n";   
     
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
    std::cout << "Description: The region's largest province, known as the “Rice \nand Corn Granary of the North,” with a growing agricultural \nand renewable energy industry.";
    std::cout << "\n=============================================================\n";   
     
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
            sanpblo();
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
    std::cout << "Description: A landlocked province characterized by its mountainous \nterrain, rich indigenous culture, and eco-tourism attractions \nlike Imugan Falls.";
    std::cout << "\n=============================================================\n";   
     
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
    std::cout << "Description: A quiet, landlocked province with rugged terrain, \nscenic caves, rivers, and a developing reputation for \neco-adventures and nature tourism.";
    std::cout << "\n=============================================================\n";   
     
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

// REGION 3 provinces, Central Luzon ===========================================================================================
// Aurora 

void arra(){
    std::cout << "\n==================== Aurora (Province) ====================\n";
    std::cout << "Descrition: Aurora is a coastal province located in the eastern \npart of Central Luzon, facing the Philippine Sea. It is \nknown for its beautiful beaches, surfing spots (especially in Baler), \nwaterfalls, and lush forests. The Sierra Madre mountain \nrange runs through the province, making it rich in \nbiodiversity.";
    std::cout << "\n===========================================================\n";
    std::string cities[] = {
    "Baler (Capital) = 1", "Casiguran = 2", "Dilasag = 3", "Dinalungan  = 4", "Dingalan = 5", "Dipaculao = 6",
    "Maria Aurora = 7", "San Luis = 8"};
    int size = sizeof(cities) / sizeof(cities[0]);
    std::string city;
    
    while (true) {
        std::cout << "\n---------------- Cities/Municipalities Aurora -------------\n";
        for (int i = 0; i < size; i++) {
        std::cout << cities[i] << std::endl;
        }
        std::cout << "\n[type]: back - Previous;\n";
        std::cout << "[type]: more info = for more info about the city;\n";
        std::cout << "[Select] City: ";
        std::getline(std::cin >> std::ws, city);

         if (city == "1") {
            balr();
        } else if (city == "2") {
            casgurn();
        } else if (city == "3") {
            dilsg();
        } else if (city == "4") {
            dinlngn();
        } else if (city == "5") {
            dingln();
        } else if (city == "6") {
            dipclao();
        } else if (city == "7") {
            mria_urra();
        } else if (city == "8") {
            sanls();
        } else if (city == "back" || city == "Back" || city == "BACK") {
            std::cout << "\n===========================\n";
            break;
        } else if (city == "more info"){
            more_info_ara();
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] city dont exist";
            std::cout << "\n===========================\n";
        }
        
    }
}

void btan(){
    std::cout << "\n==================== Bataan (Province) ====================\n";
    std::cout << "Descrition: Bataan is a peninsula known for its historical \nsignificance during World War II, especially the Bataan \nDeath March.";
    std::cout << "\n===========================================================\n";   
    std::string cities[] = {
        "Balangga = 1"};
    int size = sizeof(cities) / sizeof(cities[0]);
    std::string city;
    
    while (true) {
        std::cout << "\n---------------- Cities/Municipalities Bataan -------------\n";
        for (int i = 0; i < size; i++) {
        std::cout << cities[i] << std::endl;
        }
        std::cout << "\n[type]: back - Previous;\n";
        std::cout << "[type]: more info = for more info about the city;\n";
        std::cout << "[Select] City: ";
        std::getline(std::cin >> std::ws, city);
        
        if (city == "1") {
            balngga();
        } else if (city == "back" || city == "Back" || city == "BACK") {
            std::cout << "\n===========================\n";
            break;
        } else if (city == "more info"){
            more_info_btan();
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] city dont exist";
            std::cout << "\n===========================\n";
        }
        
    }

}

void blcn(){
    std::cout << "\n==================== Bulacan(Province) ====================\n";
    std::cout << "Descrition: Bulacan is a historically rich and culturally significant \nprovince. It was the site of the First Philippine Republic \nand the Malolos Congress.";
    std::cout << "\n===========================================================\n";   
    std::string cities[] = {
        "Malolos = 1", "Meycauayan = 2", "San Jose del Monte = 3", "Santa Maria = 4"};
    int size = sizeof(cities) / sizeof(cities[0]);
    std::string city;
    
    while (true) {
        std::cout << "\n---------------- Cities/Municipalities Bulacan -------------\n";
        for (int i = 0; i < size; i++) {
        std::cout << cities[i] << std::endl;
        }
        std::cout << "\n[type]: back - Previous;\n";
        std::cout << "[type]: more info = for more info about the city;\n";
        std::cout << "[Select] City: ";
        std::getline(std::cin >> std::ws, city);
        
        if (city == "1") {
            mallos();
        } else if (city == "2") {
            meycayn();
        } else if (city == "3") {
            sanjsdlmnt();
        } else if (city == "4") {
            sntmria();
        } else if (city == "back" || city == "Back" || city == "BACK") {
            std::cout << "\n===========================\n";
            break;
        } else if (city == "more info"){  
            more_info_blcan();
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] city dont exist";
            std::cout << "\n===========================\n";
        }
        
    }

}

void nuva_ejca(){
    std::cout << "\n==================== Nueva Ecija (Province) ====================\n";
    std::cout << "Descrition: Often called the \"Rice Granary of the Philippines,\" \nNueva Ecija is an agricultural powerhouse, producing large \nquantities of rice and other crops.";
    std::cout << "\n===========================================================\n";   
    std::string cities[] = {
        "Palayan = 1", "Cabanatuan = 2", "Gapan = 3", "San Jose = 4", "Science city of Munoz = 5"};
    int size = sizeof(cities) / sizeof(cities[0]);
    std::string city;
    
    while (true) {
        std::cout << "\n---------------- Cities/Municipalities Nueva Ecija -------------\n";
        for (int i = 0; i < size; i++) {
        std::cout << cities[i] << std::endl;
        }
        std::cout << "\n[type]: back - Previous;\n";
        std::cout << "[type]: more info = for more info about the city;\n";
        std::cout << "[Select] City: ";
        std::getline(std::cin >> std::ws, city);
        
        if (city == "1") {
            plyn();
        } else if (city == "2") {
            cbntuan();
        } else if (city == "3") {
            gapn();
        } else if (city == "4") {
            snjse();
        } else if (city == "5") {
            scncectymnz();
        } else if (city == "back" || city == "Back" || city == "BACK") {
            std::cout << "\n===========================\n";
            break;
        } else if (city == "more info"){
            more_info_nuva_ecja();
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] city dont exist";
            std::cout << "\n===========================\n";
        }
        
    }

}

void pmpaga(){
    std::cout << "\n==================== Pampanga (Province) ====================\n";
    std::cout << "Descrition: Pampanga is known for its rich culinary heritage, \nbeing dubbed the \"Culinary Capital of the Philippines.\" \nIt also has a vibrant culture, strong Kapampangan identity, \nand is a center of economic growth due to the Clark Freeport \nZone and Angeles City.";
    std::cout << "\n===========================================================\n";   
    std::string cities[] = {
        "San Fernando = 1", "Angeles = 2", "Mabalacat = 3"};
    int size = sizeof(cities) / sizeof(cities[0]);
    std::string city;
    
    while (true) {
        std::cout << "\n---------------- Cities/Municipalities Pampanga-------------\n";
        for (int i = 0; i < size; i++) {
        std::cout << cities[i] << std::endl;
        }
        std::cout << "\n[type]: back - Previous;\n";
        std::cout << "[type]: more info = for more info about the city;\n";
        std::cout << "[Select] City: ";
        std::getline(std::cin >> std::ws, city);
        
        if (city == "1") {
            sanfrndo();
        } else if (city == "2") {
            angls();
        } else if (city == "3") {
            mablct();
        } else if (city == "back" || city == "Back" || city == "BACK") {
            std::cout << "\n===========================\n";
            break;
        } else if (city == "more info"){
            more_info_pamga();
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] city dont exist";
            std::cout << "\n===========================\n";
        }
        
    }

}

// Tarlac Prov
void tarlc(){
    std::cout << "\n==================== Tarlac (Province) ====================\n";
    std::cout << "Descrition: Tarlac is a landlocked province known for being a \nmelting pot of Central Luzon cultures—Kapampangan, Ilocano, Pangasinense, \nand Tagalog. It has historical landmarks, agricultural \nareas, and pilgrimage sites like Monasterio de Tarlac.";
    std::cout << "\n===========================================================\n";   
    std::string cities[] = {
        "Tarlac = 1"};
    int size = sizeof(cities) / sizeof(cities[0]);
    std::string city;
    
    while (true) {
        std::cout << "\n---------------- Cities/Municipalities Tarlac-------------\n";
        for (int i = 0; i < size; i++) {
        std::cout << cities[i] << std::endl;
        }
        std::cout << "\n[type]: back - Previous;\n";
        std::cout << "[type]: more info = for more info about the city;\n";
        std::cout << "[Select] City: ";
        std::getline(std::cin >> std::ws, city);
        
        if (city == "1") {
            trlc();
        } else if (city == "back" || city == "Back" || city == "BACK") {
            std::cout << "\n===========================\n";
            break;
        } else if (city == "more info"){
            more_info_tlac();
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] city dont exist";
            std::cout << "\n===========================\n";
        }
        
    }

}

void zmbles(){
    std::cout << "\n==================== Zambales (Province) ====================\n";
    std::cout << "Descrition: Zambales lies along the western coastline facing the \nWest Philippine Sea. It's famous for its beautiful coves \nand beaches (like Anawangin and Nagsasa), Mount Pinatubo, \nand the Subic Bay Freeport Zone—a former U.S. naval base turned \ninto a commercial and industrial hub.";
    std::cout << "\n===========================================================\n";   
    std::string cities[] = {
        "Olongapo = 1"};
    int size = sizeof(cities) / sizeof(cities[0]);
    std::string city;
    
    while (true) {
        std::cout << "\n---------------- Cities/Municipalities Zambales-------------\n";
        for (int i = 0; i < size; i++) {
        std::cout << cities[i] << std::endl;
        }
        std::cout << "\n[type]: back - Previous;\n";
        std::cout << "[type]: more info = for more info about the city;\n";
        std::cout << "[Select] City: ";
        std::getline(std::cin >> std::ws, city);
        
        if (city == "1") {
            olngpo();
        } else if (city == "back" || city == "Back" || city == "BACK") {
            std::cout << "\n===========================\n";
            break;
        } else if (city == "more info"){
            more_info_zmbls();
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] city dont exist";
            std::cout << "\n===========================\n";
        }
        
    }

}

// REGION 4A provinces - Calabarzon

void etivac(){
    std::cout << "\n==================== Cavite (Province) ====================\n";
    std::cout << "Descrition: Cavite is a highly urbanized and industrialized province \nnear Metro Manila. It is known as the \"Historical Capital \nof the Philippines\" because of its significant role in the \nPhilippine Revolution, especially the declaration of independence \nin Kawit.";
    std::cout << "\n===========================================================\n";   
    std::string cities[] = {
    "Cavite = 1", "Bacoor = 2", "Dasmarinas = 3", "Imus = 4", "General Trias = 5", "Trece Martiris = 6", "Tagaytay = 7"
    "Tanza = 8"};
    int size = sizeof(cities) / sizeof(cities[0]);
    std::string city;
    
    while (true) {
        std::cout << "\n---------------- Cities/Municipalities Cavite-------------\n";
        for (int i = 0; i < size; i++) {
        std::cout << cities[i] << std::endl;
        }
        std::cout << "\n[type]: back - Previous;\n";
        std::cout << "[type]: more info = for more info about the city;\n";
        std::cout << "[Select] City: ";
        std::getline(std::cin >> std::ws, city);
        
        if (city == "1") {
            etivc();
        } else if (city == "2") {
            baccr();
        } else if (city == "3") {
            dasmrns();
        } else if (city == "4") {
            ims();
        } else if (city == "5") {
            gntrs();
        } else if (city == "6") {
            trcmrtrs();
        } else if (city == "7") {
            tagty();
        } else if (city == "8") {
            tnza();
        } else if (city == "back" || city == "Back" || city == "BACK") {
            std::cout << "\n===========================\n";
            break;
        } else if (city == "more info"){
            more_info_cvte();
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] city dont exist";
            std::cout << "\n===========================\n";
        }
        
    }

}

void lgna(){
    std::cout << "\n==================== Laguna (Province) ====================\n";
    std::cout << "Descrition: Laguna is rich in natural resources, history, and \nculture. It is famous for hot spring resorts in Calamba and \nLos Baños, as well as for being the birthplace of Dr. Jose \nRizal, the national hero.";
    std::cout << "\n===========================================================\n";   
    std::string cities[] = {
    "Calamba = 1", "Biñan = 2", "Sta. Rosa = 3", "Cabuyao = 4", "San Pedro  = 5", "San Pablo  = 6"};
    int size = sizeof(cities) / sizeof(cities[0]);
    std::string city;
    
    while (true) {
        std::cout << "\n---------------- Cities/Municipalities Laguna-------------\n";
        for (int i = 0; i < size; i++) {
        std::cout << cities[i] << std::endl;
        }
        std::cout << "\n[type]: back - Previous;\n";
        std::cout << "[type]: more info = for more info about the city;\n";
        std::cout << "[Select] City: ";
        std::getline(std::cin >> std::ws, city);
        
        if (city == "1") {
            calmba();
        } else if (city == "2") {
            bnan();
        } else if (city == "3") {
            strsa();
        } else if (city == "4") {
            cbyao();
        } else if (city == "5") {
            snpdro();
        } else if (city == "6") {
            snpblo();
        } else if (city == "back" || city == "Back" || city == "BACK") {
            std::cout << "\n===========================\n";
            break;
        } else if (city == "more info"){
            more_info_lgna();
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] city dont exist";
            std::cout << "\n===========================\n";
        }
        
    }

}

void batngs(){
    std::cout << "\n==================== Batangas (Province) ====================\n";
    std::cout << "Descrition: Batangas is known for its beautiful beaches, diving spots, \nand heritage sites. It is one of the most visited tourist \ndestinations in the country.";
    std::cout << "\n===========================================================\n";   
    std::string cities[] = {
    "Batangas= 1", "Lipa = 2", "Tanauan = 3", "Sto. Tomas = 4"};
    int size = sizeof(cities) / sizeof(cities[0]);
    std::string city;
    
    while (true) {
        std::cout << "\n---------------- Cities/Municipalities Batangas-------------\n";
        for (int i = 0; i < size; i++) {
        std::cout << cities[i] << std::endl;
        }
        std::cout << "\n[type]: back - Previous;\n";
        std::cout << "[type]: more info = for more info about the city;\n";
        std::cout << "[Select] City: ";
        std::getline(std::cin >> std::ws, city);
        
        if (city == "1") {
            batngsu();
        } else if (city == "2") {
            lipa();
        } else if (city == "3") {
            tuan();
        } else if (city == "4") {
            sntmas();
        } else if (city == "back" || city == "Back" || city == "BACK") {
            std::cout << "\n===========================\n";
            break;
        } else if (city == "more info"){
            more_info_btgas();
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] city dont exist";
            std::cout << "\n===========================\n";
        }
        
    }

}

void rzl(){
    std::cout << "\n==================== Rizal (Province) ====================\n";
    std::cout << "Descrition: It has scenic hills and mountains and is known for \nart and culture, especially in Angono, dubbed the \"Art Capital \nof the Philippines.\" Rizal offers a balance between urban \ndevelopment and natural attractions like waterfalls and view \ndecks.";
    std::cout << "\n===========================================================\n";   
    std::string cities[] = {
    "Antipolo = 1", "Morong = 2", "San Mateo = 3", "Jala-jala = 4", "Baras = 5", "Cardona = 6", "Marikina = 7",
   "Rizal = 8", "Binangonan = 9", "Angono = 10", "Rodriguez = 11", "Teresa = 12", "Pasig = 13", "Cainta = 14", "Taytay = 15", "Tanay = 16",
    "Pililla = 17"};
    int size = sizeof(cities) / sizeof(cities[0]);
    std::string city;
    
    while (true) {
        std::cout << "\n---------------- Cities/Municipalities Rizal-------------\n";
        for (int i = 0; i < size; i++) {
        std::cout << cities[i] << std::endl;
        }
        std::cout << "\n[type]: back - Previous;\n";
        std::cout << "[type]: more info = for more info about the city;\n";
        std::cout << "[Select] City: ";
        std::getline(std::cin >> std::ws, city);
        
        if (city == "1") {
            antplo();
        } else if (city == "2") {
            mrong();
        } else if (city == "3") {
            sanmteo();
        } else if (city == "4") {
            jlajla();
        } else if (city == "5") {
            bars();
        } else if (city == "6") {
            cardna();
        } else if (city == "7") {
            markna();
        } else if (city == "8") {
            rizal();
        }else if (city == "9") {
            bingnan();
        } else if (city == "10") {
            ango();
        } else if (city == "11") {
            rodquez();
        } else if (city == "12") {
            tersa();
        } else if (city == "13") {
            pasg();
        } else if (city == "14") {
            cinta();
        } else if (city == "15") {
            tytay();
        } else if (city == "16") {
            tany();
        } else if (city == "17") {
            pilla();
        } else if (city == "back" || city == "Back" || city == "BACK") {
            std::cout << "\n===========================\n";
            break;
        } else if (city == "more info"){
            more_info_rzl();
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] city dont exist";
            std::cout << "\n===========================\n";
        }
        
    }

}

void qzon(){
    std::cout << "\n==================== Quezon (Province) ====================\n";
   std::cout << "Descrition: Quezon is the largest province in CALABARZON and is \nknown for its agriculturaleconomy, cultural festivals, and \nspiritual destinations like Kamay ni Hesus in Lucban.";
    std::cout << "\n===========================================================\n";
    std::string cities[] = {
    "Burdeos= 1", "General Nakar = 2", "Infanta = 3", "Jomalig = 4", "Lucban  = 5", "Mauban = 6", "Pagbilao = 7", 
    "Panukulan = 8", "Patnanungan = 9", "Polillo = 10", "Sampaloc = 11", "Tayabas = 12", "Candelaria = 13", 
    "Dolores = 14", "Lucena = 15", "San Antonio = 16", "Sariaya = 17", "Tiaong = 18", "Agdangan = 19", "Buenavista = 20",
    "Catanauan = 21", "General Luna = 22", "Macalelon = 23", "Mulanay = 24", "Padre Burgos = 25", "Pitogo = 26", "San Adres = 27",
    "San Francisco = 28", "San Narciso = 29", "Unisan = 30", "Alabat = 31", "Atimonan = 32", "Calauag = 33", "Guinayangan = 34",
    "Gumaca = 35", "Lopez = 36", "Perez = 37", "Plaridel = 38", "Quezon = 39", "Tagkawayan = 40", "Real = 41"};
    int size = sizeof(cities) / sizeof(cities[0]);
    std::string city;
    
    while (true) {
        std::cout << "\n---------------- Cities/Municipalities Quezon-------------\n";
        for (int i = 0; i < size; i++) {
        std::cout << cities[i] << std::endl;
        }
        std::cout << "\n[type]: back - Previous;\n";
        std::cout << "[type]: more info = for more info about the city;\n";
        std::cout << "[Select] City: ";
        std::getline(std::cin >> std::ws, city);
        
        if (city == "1") {
            burds();
        } else if (city == "2") {
            genralnakr();
        } else if (city == "3") {
            infta();
        } else if (city == "4") {
            jomlig();
        } else if (city == "5") {
            lucbn();
        } else if (city == "6") {
            mban();
        } else if (city == "7") {
            pagblo();
        } else if (city == "8") {
            pankln();
        } else if (city == "9") {
            patngan();
        } else if (city == "10") {
            polio();
        } else if (city == "11") {
            smpalc();
        } else if (city == "12") {
            tybs();
        } else if (city == "13") {
            candlra();
        } else if (city == "14") {
            dlres();
        } else if (city == "15") {
            lcna();
        } else if (city == "16") {
            snantno();
        } else if (city == "17") {
            srya();
        } else if (city == "18") {
            taong();
        } else if (city == "19") {
            agdnan();
        } else if (city == "20") {
            buenvsta();
        } else if (city == "21") {
            cantnuan();
        } else if (city == "22") {
            genlna();
        } else if (city == "23") {
            maclon();
        } else if (city == "24") {
            mlnay();
        } else if (city == "25") {
            pdrebrgos();
        } else if (city == "26") {
            ptgo();
        } else if (city == "27") {
            sandrs();
        } else if (city == "28") {
            sanfrcso();
        } else if (city == "29") {
            sannrcso();
        } else if (city == "30") {
            unsn();
        } else if (city == "31") {
            albt();
        } else if (city == "32") {
            atmon();
        } else if (city == "33") {
            calg();
        } else if (city == "34") {
            guinyngn();
        } else if (city == "35") {
            gumca();
        } else if (city == "36") {
            lopz();
        } else if (city == "37") {
            perz();
        } else if (city == "38") {
            plrdl();
        } else if (city == "39") {
            qezon();
        } else if (city == "40") {
            tagkawyn();
        } else if (city == "41") {
            ril();
        } else if (city == "back" || city == "Back" || city == "BACK") {
            std::cout << "\n===========================\n";
            break;
        } else if (city == "more info"){
            more_info_qzn();
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] city dont exist";
            std::cout << "\n===========================\n";
        }
        
    }

}


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
//// NCR no Province
// car region ==============================
void abraa_v2(){
    std::cout << "\n==================== Abra (Province) ====================\n";
    std::cout << "Description: Abra, located in the western part of the Cordillera region, \nis a land of rolling hills, deep valleys, and rivers. Known for its rich culture, handwoven \nabel fabric, and historical landmarks, it offers a glimpse of traditional highland life.";
    std::cout << "\n=============================================================\n";

    std::string cities[] = {
        "Bangued = 1", "Bucay = 2", "Bucloc = 3", "Daguioman = 4", "Danglas = 5",
         "Dolores = 6" "La Paz = 7", "Lacub = 8", "Lagangilang = 9", "Lagayan = 10", 
         "Langiden = 11", "Licuan-Baay  = 12" "Luba = 13" "Malibcong = 14", "Manabo = 15", "Penarrubia = 16", "Pidigan = 17", "Pilar = 18", "Sallapadan  = 19"
        "San Isidro = 20", "San Juan  = 21" "San Quintin = 22" "Tayum = 23", "Tineg = 24", "Tubo = 25", "Villaviciosa = 26"};
    int size = sizeof(cities) / sizeof(cities[0]);
    std::string city;
    
    while (true) {
        std::cout << "\n---------------- Cities/Municipalities Abra -------------\n";
        for (int i = 0; i < size; i++) {
        std::cout << cities[i] << std::endl;
        }
        std::cout << "\n[type]: back - Previous;\n";
        std::cout << "[type]: more info = for more info about the city;\n";
        std::cout << "[Select] City: ";
        std::getline(std::cin >> std::ws, city);
        
       if (city == "1") {
            bnged();
        } else if (city == "2") {
            bucy();
        } else if (city == "3") {
            blc();
        } else if (city == "4") {
            daguman_();
        } else if (city == "5") {
            daglas();
        } else if (city == "6") {
            dlors();
        } else if (city == "7") {
            l_pz();
        } else if (city == "8") {
            lcb();
        } else if (city == "9") {
            lagagilg();
        } else if (city == "10") {
            lgyan();
        } else if (city == "11") {
            lngidn();
        } else if (city == "12") {
            licn_by();
        } else if (city == "13") {
            lba_();
        } else if (city == "14") {
            mlbcong();
        } else if (city == "15") {
            mnbo();
        } else if (city == "16") {
            pnrruba();
        } else if (city == "17") {
            pdgan();
        } else if (city == "18") {
            plr();
        } else if (city == "19") {
            sllapdan();
        } else if (city == "20") {
            sn_isdro();
        } else if (city == "21") {
            sn_jn_();
        } else if (city == "22") {
            sn_qntin();
        } else if (city == "23") {
            tyum();
        } else if (city == "24") {
            tneg();
        } else if (city == "25") {
            tbo_();
        } else if (city == "26") {
            vllvicisa_();
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

void apayaoo(){
    std::cout << "\n==================== Apayao (Province) ====================\n";
    std::cout << "Description: Apayao, located in the northern part of the Cordillera region, \nis known for its vast forests, scenic rivers, and diverse wildlife. It is home to the \nIsnag people and offers peaceful nature spots, waterfalls, and cultural heritage.";
    std::cout << "\n=============================================================\n";

    std::string cities[] = {
        "Calanasan = 1", "Conner = 2", "Flora = 3", "Kabugao (provincial capital) = 4", "Luna = 5", "Pudtol = 6", "Santa Marcela = 7"};
    int size = sizeof(cities) / sizeof(cities[0]);
    std::string city;
    
    while (true) {
        std::cout << "\n---------------- Cities/Municipalities Apayao -------------\n";
        for (int i = 0; i < size; i++) {
        std::cout << cities[i] << std::endl;
        }
        std::cout << "\n[type]: back - Previous;\n";
        std::cout << "[type]: more info = for more info about the city;\n";
        std::cout << "[Select] City: ";
        std::getline(std::cin >> std::ws, city);
        
       if (city == "1") {
            clnsan();
        } else if (city == "2") {
            cnr();
        } else if (city == "3") {
            flra();
        } else if (city == "4") {
            kbgo();
        } else if (city == "5") {
            lunaa_();
        } else if (city == "6") {
            pudtl();
        } else if (city == "7") {
            snt_mrcl();
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


void benguett(){
    std::cout << "\n==================== benguet (Province) ====================\n";
    std::cout << "Description: Benguet, located in the southern part of the Cordillera region, \nis known for its cool climate, vegetable farms, and scenic mountain views. \nIt is often called the 'Salad Bowl of the Philippines' and surrounds Baguio City.";
    std::cout << "\n=============================================================\n";

    std::string cities[] = {
        "Atok = 1", "Bakun = 2", "Bokod = 3", "Buguias = 4", "Itogon = 5", "Kabayan = 6", "Kapangan = 7",
         "Kibungan = 8", "La Trinidad (provincial capital) = 9", "Mankayan = 10", "Sablan = 11", "Tuba = 12", 
         "Tublay = 13"};
    int size = sizeof(cities) / sizeof(cities[0]);
    std::string city;
    
    while (true) {
        std::cout << "\n---------------- Cities/Municipalities benguet -------------\n";
        for (int i = 0; i < size; i++) {
        std::cout << cities[i] << std::endl;
        }
        std::cout << "\n[type]: back - Previous;\n";
        std::cout << "[type]: more info = for more info about the city;\n";
        std::cout << "[Select] City: ";
        std::getline(std::cin >> std::ws, city);
        
       if (city == "1") {
            atok_();
        } else if (city == "2") {
            bakun_();
        } else if (city == "3") {
            bokod_();
        } else if (city == "4") {
            bugis_();
        } else if (city == "5") {
            itogo_();
        } else if (city == "6") {
            kabayo_();
        } else if (city == "7") {
            kpngan_();
        } else if (city == "8") {
            kbngan_();
        } else if (city == "9") {
            l_trndad();
        } else if (city == "10") {
            sbln_();
        } else if (city == "11") {
            mnkaya_();
        } else if (city == "12") {
            tubaa_();
        } else if (city == "13") {
            tbly_();
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

void ifugaoo(){
    std::cout << "\n==================== ifugao (Province) ====================\n";
    std::cout << "Description: Ifugao, famous for the UNESCO-listed Banaue Rice Terraces, \nis a mountainous province rich in culture and tradition. \nIt is home to the Ifugao people, known for their woodcarving, weaving, and ancient rituals.";
    std::cout << "\n=============================================================\n";

    std::string cities[] = {
        "Aguinaldo = 1", "Alfonso Lista (formerly Potia) = 2", "Asipulo = 3", "Banaue = 4", "Hingyon = 5",
         "Hungduan = 6", "Kiangan = 7", "Lagawe (provincial capital) = 8", "Lamut = 9", "Mayoyao = 10", 
         "Tinoc = 11"};
    int size = sizeof(cities) / sizeof(cities[0]);
    std::string city;
    
    while (true) {
        std::cout << "\n---------------- Cities/Municipalities ifugao -------------\n";
        for (int i = 0; i < size; i++) {
        std::cout << cities[i] << std::endl;
        }
        std::cout << "\n[type]: back - Previous;\n";
        std::cout << "[type]: more info = for more info about the city;\n";
        std::cout << "[Select] City: ";
        std::getline(std::cin >> std::ws, city);
        
       if (city == "1") {
            aginaldo_();
        } else if (city == "2") {
            alfons_lsta();
        } else if (city == "3") {
            aspulo_();
        } else if (city == "4") {
            bunue_();
        } else if (city == "5") {
            hinyn_();
        } else if (city == "6") {
            hungdan_();
        } else if (city == "7") {
            kingan_();
        } else if (city == "8") {
            lagare_();
        } else if (city == "9") {
            lmut_();
        } else if (city == "10") {
            myyao_();
        } else if (city == "11") {
            tinoc_();
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

void kalingaa(){
    std::cout << "\n==================== Kalinga (Province) ====================\n";
    std::cout << "Description: Kalinga, located in the northern Cordillera region, \nis known for its fierce warrior heritage, rice terraces, and traditional tattoos. \nIt is home to the famous tattoo artist Apo Whang-Od and rich indigenous culture.";
    std::cout << "\n=============================================================\n";

    std::string cities[] = {
        "Tabuk City = 1", "Balbalan = 2", "Lubuagan = 3", "Pasil = 4", "Pinukpuk = 5", 
        "Rizal = 6", "Tanudan = 7", "Tinglayan = 8"};
    int size = sizeof(cities) / sizeof(cities[0]);
    std::string city;
    
    while (true) {
        std::cout << "\n---------------- Cities/Municipalities Kalinga -------------\n";
        for (int i = 0; i < size; i++) {
        std::cout << cities[i] << std::endl;
        }
        std::cout << "\n[type]: back - Previous;\n";
        std::cout << "[type]: more info = for more info about the city;\n";
        std::cout << "[Select] City: ";
        std::getline(std::cin >> std::ws, city);
        
       if (city == "1") {
            tbuk_();
        } else if (city == "2") {
            balbln_();
        } else if (city == "3") {
            lbgan_();
        } else if (city == "4") {
            psil_();
        } else if (city == "5") {
            pnkpk_();
        } else if (city == "6") {
            rizl_();
        } else if (city == "7") {
            tnudn_();
        } else if (city == "8") {
            tnglyan_();
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

void mountain_provincee(){
    std::cout << "\n==================== mountain_province (Province) ====================\n";
    std::cout << "Description: Mountain Province, located at the heart of the Cordillera region, \nis known for its hanging coffins, caves, and scenic mountain landscapes. \nSagada and Bontoc offer a mix of adventure, culture, and highland traditions.";
    std::cout << "\n=============================================================\n";

    std::string cities[] = {
       "Barlig = 1", "Bauko = 2", "Besao = 3", "Bontoc (provincial capital) = 4", "Natonin = 5",
        "Paracelis = 6", "Sabangan = 7", "Sadanga = 8", "Sagada = 9", "Tadian = 10"};
    int size = sizeof(cities) / sizeof(cities[0]);
    std::string city;
    
    while (true) {
        std::cout << "\n---------------- Cities/Municipalities mountain_province -------------\n";
        for (int i = 0; i < size; i++) {
        std::cout << cities[i] << std::endl;
        }
        std::cout << "\n[type]: back - Previous;\n";
        std::cout << "[type]: more info = for more info about the city;\n";
        std::cout << "[Select] City: ";
        std::getline(std::cin >> std::ws, city);
        
       if (city == "1") {
            brlig_();
        } else if (city == "2") {
            bako_();
        } else if (city == "3") {
            beso_();
        } else if (city == "4") {
            bntc_();
        } else if (city == "5") {
            ntnin_();
        } else if (city == "6") {
            prcls_();
        } else if (city == "7") {
            sbngan_();
        } else if (city == "8") {
            sdanga_();
        } else if (city == "9") {
            sgda_();
        } else if (city == "10") {
            tdian();
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

// ============================================  REGION VI   (RAIZEN) =================================================================


void aklan() {
    std::cout << "\n==================== Aklan (Province) ====================\n";

    std::string cities[] = {
        "Altavas = 1", "Balete = 2", "Banga = 3", "Batan = 4", "Buruanga = 5", 
        "Ibajay = 6", "Kalibo (Capital) = 7", "Lezo = 8", "Libacao = 9", "Madalag = 10"
    };
    int size = sizeof(cities) / sizeof(cities[0]);
    std::string city;

    while (true) {
        std::cout << "\n---------------- Cities/Municipalities of Aklan -------------\n";
        for (int i = 0; i < size; i++) {
            std::cout << cities[i] << std::endl;
        }
        std::cout << "\n[type]: back - Previous;\n";
        std::cout << "[type]: more info - for more info about the city;\n";
        std::cout << "[Select] City: ";
        std::getline(std::cin >> std::ws, city);

        if (city == "1") {
            Altavas();
        } else if (city == "2") {
            Balete();
        } else if (city == "3") {
            Banga();
        } else if (city == "4") {
            Batan();
        } else if (city == "5") {
            Buruanga();
        } else if (city == "6") {
            Ibajay();
        } else if (city == "7") {
            Kalibo();
        } else if (city == "8") {
            Lezo();
        } else if (city == "9") {   
            Libacao();
        } else if (city == "10") {
            Madalag();
        } else if (city == "back" || city == "Back" || city == "BACK") {
            std::cout << "\n===========================\n";
            break;
        } else if (city == "more info") {
            more_info_aklan();
        } else {
            std::cout << "\n=========   ==================\n";
            std::cout << "[error] City doesn't exist";
            std::cout << "\n===========================\n";
        }

    }

}


void antique() {
    std::cout << "\n==================== Antique (Province) ====================\n";

    std::string cities[] = {
        "Anini-y = 1", "Barbaza = 2", "Belison = 3", "Bugasong = 4", "Caluya = 5",
        "Culasi = 6", "Hamtic = 7", "Laua-an = 8", "Libertad = 9", "Pandan = 10",
        "Patnongon = 11", "San Jose de Buenavista (Capital) = 12", "San Remigio = 13",
        "Sebaste = 14", "Sibalom = 15", "Tibiao = 16", "Tobias Fornier = 17"
    };

    int size = sizeof(cities) / sizeof(cities[0]);
    std::string city;

    while (true) {
        std::cout << "\n---------------- Cities/Municipalities of Antique -------------\n";
        for (int i = 0; i < size; i++) {
            std::cout << cities[i] << std::endl;
        }

        std::cout << "\n[type]: back - Previous;\n";
        std::cout << "[type]: more info - for more info about the city;\n";
        std::cout << "[Select] City: ";
        std::getline(std::cin >> std::ws, city);

        if (city == "1") {
            Aniniy();
        } else if (city == "2") {
            Barbaza();
        } else if (city == "3") {
            Belison();
        } else if (city == "4") {
            Bugasong();
        } else if (city == "5") {
            Caluya();
        } else if (city == "6") {
            Culasi();
        } else if (city == "7") {
            Hamtic();
        } else if (city == "8") {
            Lauaan();
        } else if (city == "9") {
            Libertad();
        } else if (city == "10") {
            Pandan();
        } else if (city == "11") {
            Patnongon();
        } else if (city == "12") {
            San_Jose_de_Buenavista();
        } else if (city == "13") {
            San_Remigio();
        } else if (city == "14") {
            Sebaste();
        } else if (city == "15") {
            Sibalom();
        } else if (city == "16") {
            Tibiao ();
        } else if (city == "17") {
            Tobias_Fornier();
        } else if (city == "back" || city == "Back" || city == "BACK") {
            std::cout << "\n===========================\n";
            break;
        } else if (city == "more info") {
            more_info_antique();
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] City doesn't exist";
            std::cout << "\n===========================\n";
        }

    }
    
}

void capiz() {
    std::cout << "\n==================== Capiz (Province) ====================\n";

    std::string cities[] = {
        "Cuartero = 1", "Dao = 2", "Dumalag = 3", "Dumarao = 4", "Ivisan = 5",
        "Jamindan = 6", "Maayon = 7", "Mambusao = 8", "Panay = 9", "Panitan = 10",
        "Pilar = 11", "Pontevedra = 12", "President Roxas = 13", "Roxas City (Capital) = 14",
        "Sapian = 15", "Tapaz = 16"
    };

    int size = sizeof(cities) / sizeof(cities[0]);
    std::string city;

    while (true) {
        std::cout << "\n---------------- Cities/Municipalities of Capiz -------------\n";
        for (int i = 0; i < size; i++) {
            std::cout << cities[i] << std::endl;
        }

        std::cout << "\n[type]: back - Previous;\n";
        std::cout << "[type]: more info - for more info about the city;\n";
        std::cout << "[Select] City: ";
        std::getline(std::cin >> std::ws, city);

        if (city == "1") {
            Cuartero();
        } else if (city == "2") {
            Dao();
        } else if (city == "3") {
            Dumalag();
        } else if (city == "4") {
            Dumarao();
        } else if (city == "5") {
            Ivisan();
        } else if (city == "6") {
            Jamindan();
        } else if (city == "7") {
            Maayon();
        } else if (city == "8") {
            Mambusao();
        } else if (city == "9") {
            Panay();
        } else if (city == "10") {
            Panitan();
        } else if (city == "11") {
            Pilar();
        } else if (city == "12") {
            Pontevedra1();
        } else if (city == "13") {
            President_Roxas();
        } else if (city == "14") {
            Roxas_City();
        } else if (city == "15") {
            Sapian();
        } else if (city == "16") {
            Tapaz();
        } else if (city == "back" || city == "Back" || city == "BACK") {
            std::cout << "\n===========================\n";
            break;
        } else if (city == "more info") {
            more_info_capiz();
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] City doesn't exist";
            std::cout << "\n===========================\n";
        }
    }
}

void guimaras() {
    std::cout << "\n==================== Guimaras (Province) ====================\n";

    std::string cities[] = {
        "Buenavista = 1", "Jordan (Capital) = 2", "Nueva Valencia = 3", 
        "San Lorenzo = 4", "Sibunag = 5"
    };

    int size = sizeof(cities) / sizeof(cities[0]);
    std::string city;

    while (true) {
        std::cout << "\n---------------- Municipalities of Guimaras -------------\n";
        for (int i = 0; i < size; i++) {
            std::cout << cities[i] << std::endl;
        }

        std::cout << "\n[type]: back - Previous;\n";
        std::cout << "[type]: more info - for more info about the municipality;\n";
        std::cout << "[Select] Municipality: ";
        std::getline(std::cin >> std::ws, city);

        if (city == "1") {
            Buenavista();
        } else if (city == "2") {
            Jordan();
        } else if (city == "3") {
            Nueva_Valencia();
        } else if (city == "4") {
            San_Lorenzo();
        } else if (city == "5") {
            Sibunag();
        } else if (city == "back" || city == "Back" || city == "BACK") {
            std::cout << "\n===========================\n";
            break;
        } else if (city == "more info") {
            more_info_guimaras();
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] Municipality doesn't exist";
            std::cout << "\n===========================\n";
        }
    }
}

void iloilo() {
    std::cout << "\n====================     (Province) ====================\n";

    std::string cities[] = {
        "Passi City = 1", "Ajuy = 2", "Alimodian = 3", "Anilao = 4", "Badiangan = 5", 
        "Banate = 6", "Barotac Nuevo = 7", "Barotac Viejo = 8", "Cabatuan = 9", "Calinog = 10", 
        "Carles = 11", "Concepcion = 12", "Dingle = 13", "Dumangas = 14", "Estancia = 15", 
        "Guimbal = 16", "Janiuay = 17", "Lambunao = 18", "Leganes = 19", "Oton = 20", 
        "Santa Barbara = 21"
    };

    int size = sizeof(cities) / sizeof(cities[0]);
    std::string city;

    while (true) {
        std::cout << "\n---------------- Cities/Municipalities in Iloilo -------------\n";
        for (int i = 0; i < size; i++) {
            std::cout << cities[i] << std::endl;
        }

        std::cout << "\n[type]: back - Previous;\n";
        std::cout << "[type]: more info = for more info about the city;\n";
        std::cout << "[Select] City: ";
        std::getline(std::cin >> std::ws, city);

        if (city == "1") {
            Passi();
        } else if (city == "2") {
            Ajuy();
        } else if (city == "3") {
            Alimodian();
        } else if (city == "4") {
            Anilao();
        } else if (city == "5") {
            Badiangan();
        } else if (city == "6") {
            Banate();
        } else if (city == "7") {
            Barotac_Nuevo();
        } else if (city == "8") {
            Barotac_Viejo();
        } else if (city == "9") {
            Cabatuan();
        } else if (city == "10") {
            Calinog();
        } else if (city == "11") {
            Carles();
        } else if (city == "12") {
            Concepcion();
        } else if (city == "13") {
            Dingle();
        } else if (city == "14") {
            Dumangas();
        } else if (city == "15") {
            Estancia();
        } else if (city == "16") {
            Guimbal();
        } else if (city == "17") {
            Janiuay();
        } else if (city == "18") {
            Lambunao();
        } else if (city == "19") {
            Leganes();
        } else if (city == "20") {
            Oton();
        } else if (city == "21") {
            Santa_Barbara();
        } else if (city == "back" || city == "Back" || city == "BACK") {
            std::cout << "\n===========================\n";
            break;
        } else if (city == "more info") {
            more_info_iloilo();
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] Municipality doesn't exist";
            std::cout << "\n===========================\n";
        }
    }
}

void negros_occidental() {
    std::cout << "\n==================== Negros Occidental (Province) ====================\n";

    std::string cities[] = {
        "Bacolod City (Capital) = 1", "Bago City = 2", "Cadiz City = 3", "Escalante City = 4", "Himamaylan City = 5",
        "Kabankalan City = 6", "La Carlota City = 7", "Sagay City = 8", "San Carlos City = 9", "Silay City = 10",
        "Sipalay City = 11", "Talisay City = 12", "Victorias City = 13", "Binalbagan = 14", "Calatrava = 15",
        "Candoni = 16", "Cauayan = 17", "Enrique B. Magalona = 18", "Hinigaran = 19", "Hinoba-an = 20",
        "Ilog = 21", "Isabela = 22", "La Castellana = 23", "Manapla = 24", "Moises Padilla = 25",
        "Murcia = 26", "Pontevedra = 2  7", "Pulupandan = 28", "Salvador Benedicto = 29", "San Enrique = 30",
        "Toboso = 31", "Valladolid = 32"
    };

    int size = sizeof(cities) / sizeof(cities[0]);
    std::string city;

    while (true) {
        std::cout << "\n---------------- Cities/Municipalities in Negros Occidental -------------\n";
        for (int i = 0; i < size; i++) {
            std::cout << cities[i] << std::endl;
        }

        std::cout << "\n[type]: back - Previous;\n";
        std::cout << "[type]: more info = for more info about the city;\n";
        std::cout << "[Select] City: ";
        std::getline(std::cin >> std::ws, city);

        if (city == "1") {
            Bacolod();
        } else if (city == "2") {
            Bago();
        } else if (city == "3") {
            Cadiz();
        } else if (city == "4") {
            Escalante();
        } else if (city == "5") {
            Himamaylan();
        } else if (city == "6") {
            Kabankalan();
        } else if (city == "7") {
            La_Carlota();
        } else if (city == "8") {
            Sagay();
        } else if (city == "9") {
            San_Carlos();
        } else if (city == "10") {
            Silay();
        } else if (city == "11") {
            Sipalay();
        } else if (city == "12") {
            Talisay1();
        } else if (city == "13") {
            Victorias();
        } else if (city == "14") {
            Binalbagan();
        } else if (city == "15") {
            Calatrava();
        } else if (city == "16") {
            Candoni();
        } else if (city == "17") {
            Cauayan();
        } else if (city == "18") {
            Enrique_B_Magalona();
        } else if (city == "19") {
            Hinigaran();
        } else if (city == "20") {
            Hinobaan();
        } else if (city == "21") {
            Ilog();
        } else if (city == "22") {
            Isabela();
        } else if (city == "23") {
            La_Castellana();
        } else if (city == "24") {
            Manapla();
        } else if (city == "25") {
            Moises_Padilla();
        } else if (city == "26") {
            Murcia();
        } else if (city == "27") {
            Pontevedra();
        } else if (city == "28") {
            Pulupandan();
        } else if (city == "29") {
            Salvador_Benedicto();
        } else if (city == "30") {
            San_Enrique();
        } else if (city == "31") {
            Toboso();
        } else if (city == "32") {
            Valladolid();
        } else if (city == "back" || city == "Back" || city == "BACK") {
            std::cout << "\n===========================\n";
            break;
        } else if (city == "more info") {
            more_info_negros_occidental();
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] Municipality doesn't exist";
            std::cout << "\n===========================\n";
        }
    }
}

// ============================================  REGION VI   (RAIZEN) =================================================================

// ============================================  REGION VII  (RAIZEN) =================================================================

void bohol() {
    std::cout << "\n==================== Bohol (Province) ====================\n";

    std::string cities[] = {
        "Tagbilaran City = 1", "Alburquerque = 2", "Alicia = 3", "Anda = 4", "Antequera = 5",
        "Baclayon = 6", "Balilihan = 7", "Batuan = 8", "Bilar = 9", "Buenavista = 10",
        "Calape = 11", "Candijay = 12", "Carmen = 13", "Corella = 14", "Cortes = 15",
        "Dagohoy = 16", "Dauis = 17", "Dimiao = 18", "Duero = 19", "Garcia Hernandez = 20", 
        "Guindulman = 21"
    };

    int size = sizeof(cities) / sizeof(cities[0]);
    std::string city;

    while (true) {
        std::cout << "\n------------ Cities/Municipalities in Bohol -------------\n";
        for (int i = 0; i < size; i++) {
            std::cout << cities[i] << std::endl;
        }

        std::cout << "\n[type]: back - Previous;\n";
        std::cout << "[type]: more info = for more info about the city;\n";
        std::cout << "[Select] City: ";
        std::getline(std::cin >> std::ws, city);

        if (city == "1") {
            Tagbilaran();
        } else if (city == "2") {
            Alburquerque();
        } else if (city == "3") {
            Alicia();
        } else if (city == "4") {
            Anda();
        } else if (city == "5") {
            Antequera();
        } else if (city == "6") {
            Baclayon();
        } else if (city == "7") {
            Balilihan();
        } else if (city == "8") {
            Batuan();
        } else if (city == "9") {
            Bilar();
        } else if (city == "10") {
            Buenavista1();
        } else if (city == "11") {
            Calape();
        } else if (city == "12") {
            Candijay();
        } else if (city == "13") {
            Carmen();
        } else if (city == "14") {
            Corella();
        } else if (city == "15") {
            Cortes();
        } else if (city == "16") {
            Dagohoy();
        } else if (city == "17") {
            Dauis();
        } else if (city == "18") {
            Dimiao();
        } else if (city == "19") {
            Duero();
        } else if (city == "20") {
            Garcia_Hernandez();
        } else if (city == "21") {
            Guindulman();
        } else if (city == "back" || city == "Back" || city == "BACK") {
            std::cout << "\n===========================\n";
            break;
        } else if (city == "more info") {
            more_info_bohol();
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] Municipality doesn't exist";
            std::cout << "\n===========================\n";
        }
    }
}

void cebu() {
    std::cout << "\n==================== Cebu (Province) ====================\n";

    std::string cities[] = {
        "Bogo City = 1", "Carcar City = 2", "Danao City = 3", 
        "Naga City = 4", "Talisay City = 5", "Toledo City = 6",
        "Alcoy = 7", "Alegria = 8", "Aloguinsan = 9", "Argao = 10",
        "Asturias = 11", "Balamban = 12", "Bantayan = 13", "Barili = 14",
        "Carmen = 15", "Catmon = 16", "Compostela = 17", "Consolacion = 18",
        "Cordova = 19", "Daanbantayan = 20", "Dalaguete = 21", "Dumanjug = 22",
        "Liloan = 23", "Madridejos = 24", "Medellin = 25", "Minglanilla = 26"
    };
    int size = sizeof(cities) / sizeof(cities[0]);
    std::string city;

    while (true) {
        std::cout << "\n---------------- Cities/Municipalities in Cebu -------------\n";
        for (int i = 0; i < size; ++i) {
            std::cout << cities[i] << std::endl;
        }
        std::cout << "\n[type]: back - Previous;\n";
        std::cout << "[type]: more info - for more info about the city;\n";
        std::cout << "[Select] City: ";
        std::getline(std::cin >> std::ws, city);

        if (city == "1") {
            Bogo();
        } else if (city == "2") {
            Carcar();
        } else if (city == "3") {
            Danao();
        } else if (city == "4") {
            Naga();
        } else if (city == "5") {
            Talisay();
        } else if (city == "6") {
            Toledo();
        } else if (city == "7") {
            Alcoy();
        } else if (city == "8") {
            Alegria();
        } else if (city == "9") {
            Aloguinsan();
        } else if (city == "10") {
            Argao();
        } else if (city == "11") {
            Asturias();
        } else if (city == "12") {
            Balamban();
        } else if (city == "13") {
            Bantayan();
        } else if (city == "14") {
            Barili();
        } else if (city == "15") {
            Carmen();
        } else if (city == "16") {
            Catmon();
        } else if (city == "17") {
            Compostela();
        } else if (city == "18") {
            Consolacion();
        } else if (city == "19") {
            Cordova();
        } else if (city == "20") {
            Daanbantayan();
        } else if (city == "21") {
            Dalaguete();
        } else if (city == "22") {
            Dumanjug();
        } else if (city == "23") {
            Liloan();
        } else if (city == "24") {
            Madridejos();
        } else if (city == "25") {
            Medellin();
        } else if (city == "26") {
            Minglanilla();
        } else if (city == "back" || city == "Back" || city == "BACK") {
            std::cout << "\n===========================\n";
            break;
        } else if (city == "more info") {
            more_info_cebu();
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] City/Municipality doesn't exist";
            std::cout << "\n===========================\n";
        }
    }
}
void negros_oriental() {
    std::cout << "\n==================== Negros Oriental (Province) ====================\n";

    std::string cities[] = {
        "Bais City = 1", "Bayawan City = 2", "Canlaon City = 3", "Dumaguete City (Capital) = 4", "Guihulngan City = 5",
        "Tanjay City = 6", "Amlan = 7", "Ayungon = 8", "Bacong = 9", "Basay = 10",
        "Bindoy = 11", "Dauin = 12", "Jimalalud = 13", "La Libertad = 14", "Mabinay = 15",
        "Manjuyod = 16", "Pamplona = 17", "San Jose = 18", "Santa Catalina = 19", "Siaton = 20",
        "Sibulan = 21", "Tayasan = 22"
    };

    int size = sizeof(cities) / sizeof(cities[0]);
    std::string city;

    while (true) {
        std::cout << "\n---------------- Cities/Municipalities in Negros Oriental -------------\n";
        for (int i = 0; i < size; i++) {
            std::cout << cities[i] << std::endl;
        }

        std::cout << "\n[type]: back - Previous;\n";
        std::cout << "[type]: more info = for more info about the city;\n";
        std::cout << "[Select] City: ";
        std::getline(std::cin >> std::ws, city);

        if (city == "1") {
            Bais();
        } else if (city == "2") {
            Bayawan();
        } else if (city == "3") {
            Canlaon();
        } else if (city == "4") {
            Dumaguete();
        } else if (city == "5") {
            Guihulngan();
        } else if (city == "6") {
            Tanjay();
        } else if (city == "7") {
            Amlan();
        } else if (city == "8") {
            Ayungon();
        } else if (city == "9") {   
            Bacong();
        } else if (city == "10") {
            Basay();
        } else if (city == "11") {
            Bindoy();
        } else if (city == "12") {
            Dauin();
        } else if (city == "13") {
            Jimalalud();
        } else if (city == "14") {
            La_Libertad();
        } else if (city == "15") {
            Mabinay();
        } else if (city == "16") {
            Manjuyod();
        } else if (city == "17") {
            Pamplona();
        } else if (city == "18") {
            San_Jose();
        } else if (city == "19") {
            Santa_Catalina();
        } else if (city == "20") {
            Siaton();
        } else if (city == "21") {
            Sibulan();
        } else if (city == "22") {
            Tayasan();
        } else if (city == "back" || city == "Back" || city == "BACK") {
            std::cout << "\n===========================\n";
            break;
        } else if (city == "more info") {
            more_info_negros_oriental();
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] Municipality doesn't exist";
            std::cout << "\n===========================\n";
        }
    }
}
void siquijor() {
    std::cout << "\n==================== Siquijor (Province) ====================\n";

    std::string cities[] = {
        "Enrique Villanueva = 1", "Larena = 2", "Lazi = 3", 
        "Maria = 4", "San Juan = 5", "Siquijor (Capital) = 6"
    };

    int size = sizeof(cities) / sizeof(cities[0]);
    std::string city;

    while (true) {
        std::cout << "\n------------- Municipalities in Siquijor -------------\n";
        for (int i = 0; i < size; i++) {
            std::cout << cities[i] << std::endl;
        }

        std::cout << "\n[type]: back - Previous;\n";
        std::cout << "[type]: more info = for more info about the municipality;\n";
        std::cout << "[Select] Municipality: ";
        std::getline(std::cin >> std::ws, city);

        if (city == "1") {
            Enrique_Villanueva();
        } else if (city == "2") {
            Larena();
        } else if (city == "3") {
            Lazi();
        } else if (city == "4") {
            Maria();
        } else if (city == "5") {
            San_Juan();
        } else if (city == "6") {
            Siquijor_Capital();
        } else if (city == "back" || city == "Back" || city == "BACK") {
            std::cout << "\n===========================\n";
            break;
        } else if (city == "more info") {
            more_info_siquijor();
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] Municipality doesn't exist";
            std::cout << "\n===========================\n";
        }
    }
}
// ============================================  REGION VII  (RAIZEN) ================================================================


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
    std::cout << "Description: Davao de Oro is a landlocked province in Davao Region known\nfor its gold mines, mountains, and rich natural resources.";
    std::cout << "\n=============================================================\n";    
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
    std::cout << "Description: Davao del Sur is a province in the Davao Region known for Mt. Apo,\nthe highest peak in the Philippines, and its agricultural lands.";
    std::cout << "\n=============================================================\n";   
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
    std::cout << "Description: Davao del Norte is a province in the Davao Region known for banana\nplantations, island beaches like Samal, and growing industries.";
    std::cout << "\n=============================================================\n";   
    
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
    std::cout << "Description: Davao Occidental is the newest province in the Davao Region, known\nfor fishing, coastal towns, and peaceful natural landscapes.";
    std::cout << "\n=============================================================\n";   
     
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
    std::cout << "Description: Davao Oriental is a coastal province in the Davao Region known for\nstunning beaches, waterfalls, and the sunrise capital of the Philippines.";
    std::cout << "\n=============================================================\n";   
     
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
    std::cout << "Description: Cotabato City is a highly urbanized city in Mindanao known for its\nrich Muslim heritage, cultural landmarks, and as the former seat of ARMM.";
    std::cout << "\n=============================================================\n";   
     
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
    std::cout << "Description: South Cotabato is a province in SOCCSKSARGEN known for Lake Sebu,\nT'boli culture, and its cool highland climate.";
    std::cout << "\n=============================================================\n";   
     
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
    std::cout << "Description: Sultan Kudarat is a province in SOCCSKSARGEN known for its vast\nagricultural lands, cultural diversity, and historical heritage.";
    std::cout << "\n=============================================================\n";   
     
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
    std::cout << "Description: Sarangani is a coastal province in SOCCSKSARGEN known for its\nbeaches, tuna industry, and being the hometown of Manny Pacquiao.";
    std::cout << "\n=============================================================\n";   
     
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


// REGION 13
/// CARAGA REGION PROVINCES


void agsn_dl_nrt(){

    std::cout << "\n======= Agusan del Norte (province) =======\n" << std::endl;
    std::cout << "Description: A province in northeastern Mindanao \n known for its agro-industrial economy, \n Butuan City historical significance, and rich natural resources." << std::endl;
    std::cout << "\n===========================================\n" << std::endl;

    std::string cities[] = {
        "cabadbaran City (City) = 1", "butuan City (City) = 2", "Buenavista (municipality) = 3", "Carmen (municipality) = 4", "Jabonga (municipality) = 5", "Kitcharao (municipality) = 6", "Las Nieves (municipality) = 7", "Magallanes (municipality) = 8", "Nasipit (municipality) = 9",
        "Remedios T. Romualdez (municipality) = 10", "Santiago (municipality) = 11", "Tubay (municipality) = 12"
        };
    int size = sizeof(cities) / sizeof(cities[0]);
    std::string city;
    
    while (true) {
        std::cout << "\n---------------- Cities/Municipalities Agusan del Norte -------------\n";
        for (int i = 0; i < size; i++) {
        std::cout << cities[i] << std::endl;
        }
        std::cout << "\n[type]: back - Previous;\n";
        std::cout << "[type]: more info = for more info about the city;\n";
        std::cout << "[Select] City: ";
        std::getline(std::cin >> std::ws, city);
        
        if (city == "1") {
            Cbdarn_Cty();
        } else if (city == "2") {
            Btn_Cty();
        } else if (city == "3") {
            Bnvst();
        } else if (city == "4") {
            Crmn();
        } else if (city == "5") {
            Jbng();
        } else if (city == "6") {
            Ktchr();
        } else if (city == "7") {
            Ls_Nvs();
        } else if (city == "8") {
            Mgllns();
        } else if (city == "9") {
            Nspt();
        } else if (city == "10") {
            Rmds_Rmldz();
        } else if (city == "11") {
            Sntg();
        } else if (city == "12") {
            Tby();
        } else if (city == "back" || city == "Back" || city == "BACK") {
            std::cout << "\n===========================\n";
            break;
        } else if (city == "more info"){
            more_info_agsn_dl_nrt();
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] city dont exist";
            std::cout << "\n===========================\n";
        }
    }

}

void agsn_dl_sr(){
    std::cout << "\n======= Agusan del Sur (province) =======\n" << std::endl;
    std::cout << "Description: A landlocked province in Mindanao \n famed for the Agusan Marsh Wildlife Sanctuary, \n vast forestlands, and indigenous cultural communities." << std::endl;
    std::cout << "\n==========================================\n" << std::endl;

    std::string cities[] = {
        "Bayugan City = 1", "Bunawan (Capital City) = 2", "Esperanza = 3", "La_Paz = 4", "Loreto = 5", "Veruela = 6", "Prosperidad = 7", 
        "Rosario = 8", "San Francisco = 9", "San Luis = 10", "San Miguel = 11", "Talacogon = 12", "Trento = 13", "Veruela = 14"
        };
    int size = sizeof(cities) / sizeof(cities[0]);
    std::string city;

   while (true) {
       std::cout << "\n---------------- Cities/Municipalities Agusan del Sur -------------\n";
       for (int i = 0; i < size; i++) {
           std::cout << cities[i] << std::endl;
       }
       std::cout << "\n[type]: back - Previous;\n";
       std::cout << "[type]: more info = for more info about the city;\n";
       std::cout << "[Select] City: ";
       std::getline(std::cin >> std::ws, city);

       if (city == "1") {
           Bygn_Cty();
       } else if (city == "2") {
           Bunwn();
       } else if (city == "3") {
           Esprnz();
       } else if (city == "4") {
           La_Pz();
       } else if (city == "5") {
           Lrt();
       } else if (city == "6") {
           Prsprdd();
       } else if (city == "7") {
           Rsro();
       } else if (city == "8") {
           Sn_Frncsco();
       } else if (city == "9") {
           Sn_Ls();
       } else if (city == "10") {
           Snta_Jsfa();
       } else if (city == "11") {
           Sbgat();
       } else if (city == "12") {
           Tlcgn();
       } else if (city == "13") {
           Trnt();
       } else if (city == "14") {
           Vrela();
       } else if (city == "back" || city == "Back" || city == "BACK") {
           std::cout << "\n===========================\n";
           break;
       } else if (city == "more info"){
           more_info_agsn_dl_sr();
       } else {
           std::cout << "\n===========================\n";
           std::cout << "[error] city dont exist";
           std::cout << "\n===========================\n";
       }

   }

}
void dngt_isld(){
    std::cout << "\n======= Dinagat Islands (province) =======\n" << std::endl;
    std::cout << "Description: An island province off northeastern Mindanao, \n known for its mystical landscapes, eco-tourism potential, \n and unique political history." << std::endl;
    std::cout << "\n==========================================\n" << std::endl;

    std::string cities[] = {
        "Cagdianao = 1", "Dinagat = 2", "Libjo = 3", "Loreto = 4", "Tubajon = 5"
        };
    int size = sizeof(cities) / sizeof(cities[0]);
    std::string city;
    
    while (true) {
        std::cout << "\n---------------- Cities/Municipalities Dinagat Islands -------------\n";
        for (int i = 0; i < size; i++) {
        std::cout << cities[i] << std::endl;
        }
        std::cout << "\n[type]: back - Previous;\n";
        std::cout << "[type]: more info = for more info about the city;\n";
        std::cout << "[Select] City: ";
        std::getline(std::cin >> std::ws, city);
        
        if (city == "1") {
            Cgdno();
        } else if (city == "2") {
            Dgt();
        } else if (city == "3") {
            Lbo();
        } else if (city == "4") {
            Lto();
        } else if (city == "5") {
            Tbjn();
        } else if (city == "back" || city == "Back" || city == "BACK") {
            std::cout << "\n===========================\n";
            break;
        } else if (city == "more info"){
            more_info_dgt_isld();
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] city dont exist";
            std::cout << "\n===========================\n";
        }
        
    }

}

void srgo_dl_nrt(){
    std::cout << "\n======= Surigao del Norte (province) =======\n" << std::endl;
    std::cout << "Description: A coastal province in northeastern Mindanao \n famous for Siargao Island, stunning beaches, \n and a thriving surfing and ecotourism industry." << std::endl;
    std::cout << "\n============================================\n" << std::endl;

    std::string cities[] = {
        "Surigao City (Capital City) = 1", "Alegria = 2", "Bacuag = 3", "Burgos = 4", "Claver = 5", "Dapa = 6", 
        "Del Carmen = 7", "General Luna = 8", "Gigaquit = 9", "Mainit = 10", "Malimono = 11", "Pilar = 12", 
        "Placer = 13", "San Benito = 14", "San Francisco = 15", "San Isidro = 16", 
        "Santa Monica = 17", "Sison = 18", "Socorro = 19", "Tagana-an = 20", "Tubod = 21"

    };
    int size = sizeof(cities) / sizeof(cities[0]);
    std::string city;

    while (true) {
        std::cout << "\n---------------- Cities/Municipalities Surigao del Norte -------------\n";
        for (int i = 0; i < size; i++) {
            std::cout << cities[i] << std::endl;
        }
        std::cout << "\n[type]: back - Previous;\n";
        std::cout << "[type]: more info = for more info about the city;\n";
        std::cout << "[Select] City: ";
        std::getline(std::cin >> std::ws, city);
        if (city == "1") {
            Srg_Cty();
        } else if (city == "2") {
            Algra();
        } else if (city == "3") {
            Bcg();
        } else if (city == "4") {
            Bgs();
        } else if (city == "5") {
            Clvr();
        } else if (city == "6") {
            Dp();
        } else if (city == "7") {
            Dl_Crmn();
        } else if (city == "8") {
            Gnrl_Ln();
        } else if (city == "9") {
            Ggqt();
        } else if (city == "10") {
            Mnt();
        } else if (city == "11") {
            Mlmn();
        } else if (city == "12") {
            Plr();
        } else if (city == "13") {
            Plcr();
        } else if (city == "14") {
            Sn_bnt();
        } else if (city == "15") {
            Sn_Frnc();
        } else if (city == "16") {
            Sn_Isdr();
        } else if (city == "17") {
            Snt_mnc();
        } else if (city == "18") {
            Sin();
        } else if (city == "19") {
            Scro();
        } else if (city == "20") {
            Tgnn();
        } else if (city == "21") {
            Tbd();
        } else if (city == "back" || city == "Back" || city == "BACK") {
            std::cout << "\n===========================\n";
            break;
        } else if (city == "more info"){
            more_info_srgo_dl_sr();
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] city dont exist";
            std::cout << "\n===========================\n";
        }

        

    }

}

void srgo_dl_sr(){
    std::cout << "\n======= Surigao del Sur (province) =======\n" << std::endl;
    std::cout << "Description: A scenic province along Mindanao eastern coast, \n known for Enchanted River, Tinuy-an Falls, \n and its rich biodiversity and cultural heritage." << std::endl;
    std::cout << "\n===========================================\n" << std::endl;

    std::string cities[] = {
        "Tandag City (City) = 1", "Bislig City (City) = 2", "Barobo (Municipality) = 3", "Bayabas (Municipality) = 4", "Cagwait (Municipality) = 5", "Cantilan (Municipality) = 6",
        "Carmen (Municipality) = 7", "Carrascal (Municipality) = 8", "Cortes (Municipality) = 9", "Hinatuan (Municipality) = 10", "Lanuza (Municipality) = 11", "Lianga (City) = 12", "Lingig (Municipality) = 13",
        "Madrid (Municipality) = 14", "Marihatag (Municipality) = 15", "San Agustin (Municipality) = 16", "San Miguel (Municipality) = 17", "Tagbina (Municipality) = 18"
    };
    int size = sizeof(cities) / sizeof(cities[0]);
    std::string city;

    while (true) {
        std::cout << "\n---------------- Cities/Municipalities Surigao del Sur -------------\n";
        for (int i = 0; i < size; i++) {
            std::cout << cities[i] << std::endl;
        }
        std::cout << "\n[type]: back - Previous;\n";
        std::cout << "[type]: more info = for more info about the city;\n";
        std::cout << "[Select] City: ";
        std::getline(std::cin >> std::ws, city);
        if (city == "1") {
            Tndg_City();
        } else if (city == "2") {
            Bsig_City();
        } else if (city == "3") {
            Brbo();
        } else if (city == "4") {
            Bybas();
        } else if (city == "5") {
            Cgwit();
        } else if (city == "6") {
            Cntln();
        } else if (city == "7") {
            Crn();
        } else if (city == "8") {
            Crrscl();
        } else if (city == "9") {
            Cts();
        } else if (city == "10") {
            Hntn();
        } else if (city == "11") {
            Lnz();
        } else if (city == "12") {
            Lnga();
        } else if (city == "13") {
            Lngg();
        } else if (city == "14") {
            Mdrd();
        } else if (city == "15") {
            Mrhtg();
        } else if (city == "16") {
            Sn_Agn();
        } else if (city == "17") {
            Sn_Mgl();
        } else if (city == "18") {
            Tgbn();
        } else if (city == "19") {
            Tg();
        } else if (city == "back" || city == "Back" || city == "BACK") {
            std::cout << "\n===========================\n";
            break;
        } else if (city == "more info"){
            more_info_srgo_dl_sr();
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] city dont exist";
            std::cout << "\n===========================\n";
        }

    }

}

/// BARMM REGION PROVINCES
void Basilan(){
    std::cout << "\n======= Basilan (province) =======\n" << std::endl;
    std::cout << "Description: An island province off the southern coast of Mindanao, \n known for its natural beauty, rubber plantations, \n and the diverse cultures of the Yakan, Tausug, and Chavacano peoples." << std::endl;
    std::cout << "\n=================================\n" << std::endl;

    std::string cities[] = {
        "Lamitan City (City) = 1", "Akbar (Municipality) = 2", "Al-Barka (Municipality) = 3", "Hadji Mohammad Ajul (Municipality) = 4", "Hadji Muhtamad (Municipality) = 5",
        "Lantawan (Municipality) = 6", "Maluso (Municipality) = 7", "Sumisip (Municipality) = 8", "Tabuan-Lasa (Municipality) = 9", "Tipo-Tipo (Municipality) = 10"
    };

    int size = sizeof(cities) / sizeof(cities[0]);
    std::string city;

    while (true) {
        std::cout << "\n---------------- Cities/Municipalities Basilan -------------\n";
        for (int i = 0; i < size; i++) {
            std::cout << cities[i] << std::endl;
        }
        std::cout << "\n[type]: back - Previous;\n";
        std::cout << "[type]: more info = for more info about the city;\n";
        std::cout << "[Select] City: ";
        std::getline(std::cin >> std::ws, city);
        
        if (city == "1") {
            Lmtn_Cty();
        } else if (city == "2") {
            kbr();
        } else if (city == "3") {
            Al_Brk();
        } else if (city == "4") {
            Hdj_Mhmmd_Ajl();
        } else if (city == "5") {
            H_Mhtmd();
        } else if (city == "6") {
            Lntwn();
        } else if (city == "7") {
            Mls();
        } else if (city == "8") {
            Smsip();
        } else if (city == "9") {
            Tbn_Lsa();
        } else if (city == "10") {
            T_Tp();
        } else if (city == "back" || city == "Back" || city == "BACK") {
            std::cout << "\n===========================\n";
            break;
        } else if (city == "more info"){
            more_info_basilan();

        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] city dont exist";
            std::cout << "\n===========================\n";
        }
    }


}

void Lno_dl_Sr(){
    std::cout << "\n======= Lanao del Sur (province) =======\n" << std::endl;
    std::cout << "Description: A culturally vibrant province in Mindanao, \n known for Marawi City, Lake Lanao, \n and its strong Maranao traditions rooted in Islamic and royal heritage." << std::endl;
    std::cout << "\n========================================\n" << std::endl;


    std::string cities[] = {
        "Marawi City (City) = 1", "Bacolod-Kalawi (Municipality) = 2", "Balabagan (Municipality) = 3", "Balindong (Municipality) = 4", "Bayang (Municipality) = 5", "Binidayan (Municipality) = 6",
        "Buadiposo (Municipality) = 7", "Bubong (Municipality) = 8", "Butig (Municipality) = 9", "Calanogas (Municipality) = 10", "Sultan Dumalondong (Municipality) = 11",
        "Ditsaan (Municipality) = 12", "Ganassi (Municipality) = 13", "Kapai (Municipality) = 14", "Kapatagan (Municipality) = 15", "Lumba (Municipality) = 16",
        "Lumbaca (Municipality) = 17", "Lumbatan (Municipality) = 18", "Lumbayanague (Municipality) = 19", "Madalum (Municipality) = 20", "Madamba (Municipality) = 21",
        "Maguing (Municipality) = 22", "Malabang (Municipality) = 23", "Marantao (Municipality) = 24"
    };

    int size = sizeof(cities) / sizeof(cities[0]);
    std::string city;  

    while (true){
        std::cout << "\n---------------- Cities/Municipalities Lanao del Sur ----------------\n";
        for(int i=0; i<size; i++){
            std::cout << cities[i] << std::endl;
        }
        std::cout << "\n[type]: back - Previous;\n";
        std::cout << "[type]: more info - for more info about the city;\n";
        std::cout << "[Select] City: ";
        std::getline(std::cin >> std::ws, city);
        if (city == "1") {
            Mrwi_Cty();
        } else if (city == "2") {
            Bcld_Klwi();
        } else if (city == "3") {
            Blbgn();
        } else if (city == "4") {
            Balindong();
        } else if (city == "5") {
            Bayang();
        } else if (city == "6") {
            Binidayan();
        } else if (city == "7") {
            Budposo();
        } else if (city == "8") {
            Bubong();
        } else if (city == "9") {
            Butig();
        } else if (city == "10") {
            Calanogas();
        } else if (city == "11") {
            Sltn_Dmlndng();
        } else if (city == "12") {
            dtsn();
        } else if (city == "13") {
            Ganassi();
        } else if (city == "14") {
            Kapi();
        } else if (city == "15") {
            Kptagn();
        } else if (city == "16") {
            Lmba();
        } else if (city == "17") {
            Lmbca();
        } else if (city == "18") {
            Lmbtan();
        } else if (city == "19") {
            Lumbayangue();
        } else if (city == "20") {
            Madlm();
        } else if (city == "21") {
            Madmb();
        } else if (city == "22") {
            Magung();
        } else if (city == "23") {
            Mlabang();
        } else if (city == "24") {
            Marnto();
        } else if (city == "more info") {
            more_info_lano_dl_sr();

        } else if (city == "back" || city == "Back" || city == "BACK") {
            std::cout << "\n===========================\n";
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] city dont exist";
            std::cout << "\n===========================\n";
        }
    }
}

void Mguindno_dl_Nrte(){
    std::cout << "\n======= Maguindanao del Norte (province) =======\n" << std::endl;
    std::cout << "Description: A coastal province in central Mindanao \n known for its fertile plains, cultural diversity, \n and its proximity to Cotabato City as a commercial center." << std::endl;
    std::cout << "\n===============================================\n" << std::endl;

    std::string cities[] = {
        "Parang City =1", " Barira (Municipality) = 2", "Buldon (Municipality) = 3", "Datu Blah T. Sinsuat (Municipality) = 4", "Datu Odin Sinsuat  (Municipality) = 5", "Kabuntalan (Municipality) = 6",
        "Matanog (Municipality) = 7", "Sultan Mastura (Municipality) = 8", "Talitay (Municipality) = 9", "Upi (Municipality) = 10"
    };

    int size = sizeof(cities) / sizeof(cities[0]);
    std::string city;

    while (true){
        std::cout << "\n---------------- Cities/Municipalities Maguindanao del Norte ----------------\n";
        for(int i=0; i<size; i++){
            std::cout << cities[i] << std::endl;
        }
        std::cout << "\n[type]: back - Previous;\n";
        std::cout << "[type]: more info - for more info about the city;\n";
        std::cout << "[Select] City: ";
        std::getline(std::cin >> std::ws, city);
        
        if (city == "1") {
            Parang_City();
        } else if (city == "2") {
            Barira();
        } else if (city == "3") {
            Buldon();
        } else if (city == "4") {
            Datu_Blah_T_Sinsuat();
        } else if (city == "5") {
            Datu_Odin_Sinsuat();
        } else if (city == "6") {
            Kabuntalan();
        } else if (city == "7") {
            Matanog();
        } else if (city == "8") {
            Northern_Kabuntalan();
        } else if (city == "9") {
            Sultan_Kudarat();
        } else if (city == "10") {
            Sultan_Mastura();
        } else if (city == "11") {
            Talitay();
        } else if (city == "12") {
            Upi();
        } else if (city == "more info") {
            more_info_mguindno_dl_nrte();

        } else if (city == "back" || city == "Back" || city == "BACK") {
            std::cout << "\n===========================\n";
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] city dont exist";
            std::cout << "\n===========================\n";
        }
    }    


}

void Mguindanao_dl_Sur(){
    std::cout << "\n======= Maguindanao del Sur (province) =======\n" << std::endl;
    std::cout << "Description: is a landlocked province in central Mindanao \n celebrated for its deep-rooted heritage, agricultural strength, \n and historical significance as the Maguindanaon heartland." << std::endl;
    std::cout << "\n==============================================\n" << std::endl;

    std::string cities[] = {
    // List of cities in Maguindanao del Sur
        "Ampatuan (Municipality) = 1", "Buluan (Municipality) = 2", "Datu Sangki (Municipality) = 3", "Datu Anggal Midtimbang (Municipality) = 4", "Datu Hoffer Ampatuan (Municipality) = 5",
        "Datu Paglas (Municipality) = 6", "Datu Piang (Municipality) = 7", "Datu Salibo (Municipality) = 8", "Datu Saudi Ampatuan (Municipality) = 9", "Datu Unsay (Municipality) = 10",
        "Gen S. K. Pendatun (Municipality) = 11", "Guindulungan (Municipality) = 12", "Mamasapano (Municipality) = 13", "Mangudadatu (Municipality) = 14", "Pagalungan (Municipality) = 15",
        "Paglat (Municipality) = 16", "Rajah Buayan (Municipality) = 17", "Shariff Aguak (Municipality) = 18", "Shariff Saydona Mustapha (Municipality) = 19", "South Upi (Municipality) = 20",
        "Sultan sa Barongis (Municipality) = 21", "Talayan (Municipality) = 22"
    };
    int size = sizeof(cities) / sizeof(cities[0]);
    std::string city;

    while (true){
        std::cout << "\n---------------- Cities/Municipalities Maguindanao del Norte ----------------\n";
        for(int i=0; i<size; i++){
            std::cout << cities[i] << std::endl;
        }
        std::cout << "\n[type]: back - Previous;\n";
        std::cout << "[type]: more info - for more info about the city;\n";
        std::cout << "[Select] City: ";
        std::getline(std::cin >> std::ws, city);
        
        if (city == "1") {
            Ampatuan();
        } else if (city == "2") {
            Buluan();
        } else if (city == "3") {
            Datu_Sangki();
        } else if (city == "4") {
            Datu_Anggl_Mdtmbng();
        } else if (city == "5") {
            Datu_Hffer_Amptan();
        } else if (city == "6") {
            Datu_Paglas();
        } else if (city == "7") {
            Datu_Piang();
        } else if (city == "8") {
            Dtu_Slib();
        } else if (city == "9") {
            Dtu_Saudi_Amptuan();
        } else if (city == "10") {
            Datu_Unsay();
        } else if (city == "11") {
            Gen_S_K_Pendatun();
        } else if (city == "12") {
            Guindulungan();
        } else if (city == "13") {
            Mamasapano();
        } else if (city == "14") {
            Mangudadatu();
        } else if (city == "15") {
            Pagalungan();
        } else if (city == "16") {
            Paglat();
        } else if (city == "17") {
            Pandag();
        } else if (city == "18") {
            Rajah_Buayan();
        } else if (city == "19") {
            Pagalungan();
        } else if (city == "20") {
            Shariff_Aguak();
        } else if (city == "21") {
            Shariff_Saydona_Mustapha();
        } else if (city == "22") {
            South_Upi();
        } else if (city == "23") {
            Sultan_sa_Barongis();
        } else if (city == "24") {
            Talayan();
        } else if (city == "more info") {
            more_info_mguindno_dl_sr();

        } else if (city == "back" || city == "Back" || city == "BACK") {
            std::cout << "\n===========================\n";
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] city dont exist";
            std::cout << "\n===========================\n";
        }
    }    


}


void Tawi_Tawi(){
    std::cout << "\n======= Tawi-Tawi (province) =======\n" << std::endl;
    std::cout << "Description: The southernmost province of the Philippines, \n known for its pristine islands, strong Sama-Bajau maritime culture, \n and peaceful island communities." << std::endl;
    std::cout << "\n===================================\n" << std::endl;

    std::string cities[] = {
        "Bongao (Municipality) = 1", "Languyan (Municipality) = 3", "Mapun (Municipality) = 4", "Sapa-Sapa (Municipality) = 5",
        "Sibutu (Municipality) = 6", "Simunul (Municipality) = 7", "Sitangkai (Municipality) = 8", "South Ubian (Municipality) = 9", "Tandubas (Municipality) = 10",
        "Turtle Islands (Municipality) = 11"
    };

    int size = sizeof(cities) / sizeof(cities[0]);
    std::string city;

    while (true){
        std::cout << "\n---------------- Cities/Municipalities Tawi-Tawi ----------------\n";
        for(int i=0; i<size; i++){
            std::cout << cities[i] << std::endl;
        }
        std::cout << "\n[type]: back - Previous;\n";
        std::cout << "[type]: more info - for more info about the city;\n";
        std::cout << "[Select] City: ";
        std::getline(std::cin >> std::ws, city);

        if (city == "1") {
            Bng();
        } else if (city == "3") {
            Lngyn();
        } else if (city == "4") {
            Mpn();
        } else if (city == "5") {
            Panglima_Sugala();
        } else if (city == "6") {
            Sapa_Sapa();
        } else if (city == "7") {
            Sibutu();
        } else if (city == "8") {
            Sitangkai();
        } else if (city == "9") {
            South_Ubian();
        } else if (city == "10") {
            Tandubas();
        } else if (city == "11") {
            Turtle_Islands();
        } else if (city == "more info") {
            more_info_twi_tawi();
        } else if (city == "back" || city == "Back" || city == "BACK") {
            std::cout << "\n===========================\n";
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] city dont exist";
            std::cout << "\n===========================\n";
        }
    }
}