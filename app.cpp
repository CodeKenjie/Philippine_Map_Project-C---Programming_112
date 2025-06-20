#include <iostream>
#include <string>
#include <iomanip>
// ================================================== 149 cities ((void)Functionalities) ==================================

// Occidental Mindoro cities =========================================
void san_j() {
    std::cout << "\n======= San Jose (City) =======\n";
    std::string act;
    std::cout << "The Municipality of San Jose is a first class municipality in the province of Occidental Mindoro Philippines.\n According to the 2020 census, it has a population of 153,267 in 37,331 households.\n"; 
    //table this is still under examination: iniisip ko pa kung bakit di gumagana yung theory ko;
    std::string barangays[13][3] = {
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
        std::cout << "\n======= San Jose (Barangays) =======\n";
        for (int i = 0; i < 13; i++) {
            for (int j = 0; j < 3; j++){
                std::cout << barangays[i][j] << '\t';
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
    std::string barangays[5][3] = {
        {"Poblacion 1", "Poblacion 6", "Talabaan"},
        {"Poblacion 2", "Poblacion 7", "Tangkalan"},
        {"Poblacion 3", "Poblacion 8", "Tayamaan"},
        {"Poblacion 4", "Balansay", "San Luis (Ligang)"},
        {"Poblacion 5", "Payompon", "Fatima (also known as Tii)"},
    };
    std::cout << "\n======= Mamburao(Barangays) =======\n";
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 3; j++){
            std::cout << barangays[i][j] << '\t';
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
    std::string act;
    std::cout << "Magsaysay, officially the Municipality of Magsaysay,\n is a municipality in the province of Occidental Mindoro,\n Philippines. According to the 2020 census,\npopulation of 39,767 people\n"; 
    //table this is still under examination: iniisip ko pa kung bakit di gumagana yung theory ko;
    std::string barangays[4][3] = {
        {"Alibog", "Laste", "Purnaga"},
        {"Caguray", "Lourdes", "Santa Teresa"},
        {"Calawag", "Nicolas (Bulo)", "Sibalat"},
        {"Gapasan", "Paclolo", ""},
    };
    std::cout << "\n======= Magsaysay (Barangays) =======\n";
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++){
            std::cout << barangays[i][j] << '\t';
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
void calintaan() {
    std::cout << "\n======= Calintaan (City) =======\n";
    std::string act;
    std::cout << "Calintaan, officially the Municipality of Calintaan,\n is a municipality in the province of Occidental Mindoro, Philippines.\n According to the 2020 census, it has a population of 30,190 people.\n"; 
    //table this is still under examination: iniisip ko pa kung bakit di gumagana yung theory ko;
    std::string barangays[4][2] = {
        {"Poblacion (urban center)", "Iriron"},
        {"Concepcion", "Malpalon"},
        {"Poypoy", "Tanyag"},
        {"Purnaga", "New Dagupan"},
    };
    std::cout << "\n======= Calintaan (Barangays) =======\n";
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 2; j++){
            std::cout << barangays[i][j] << '\t';
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
void sablayan() {
    std::cout << "\n======= Sablayan (City) =======\n";
    std::string act;
    std::cout << "Calintaan, officially the Municipality of Calintaan,\n is a municipality in the province of Occidental Mindoro, Philippines.\n According to the 2020 census, it has a population of 30,190 people.\n"; 
    //table this is still under examination: iniisip ko pa kung bakit di gumagana yung theory ko;
    std::string barangays[6][4] = {
        {"Poblacion (urban center)", "Batong Buhay", "Buenavista", "Burgos "},
        {"Claudio Salgado", "General Emilio Aguinaldo", "Ibud ", "Ilvita"},
        {"Lagnas ", "Ligaya ", "Malisbong", "Paetan "},
        {"Pag‑asa", "San Agustin", "San Francisco", "San Nicolas"},
        {"San Vicente ", "Santa Lucia", "Santo Niño", "Tagumpay"},
        {"Tuban", "Victoria", "", ""},
    };
    std::cout << "\n======= Sablayan (Barangays) =======\n";
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 4; j++){
            std::cout << barangays[i][j] << '\t';
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
void looc() {
    std::cout << "\n======= Looc (City) =======\n";
    std::string act;
    std::cout << "Looc, officially the Municipality of Looc, is a municipality in the province of Occidental Mindoro,\nPhilippines. According to the 2020 census, it has a population of 7,802 people,\nmaking it the least populated municipality in the province.\n"; 
    //table this is still under examination: iniisip ko pa kung bakit di gumagana yung theory ko;
    std::string barangays[3][3] = {
        {"Ambil", "Balikyas", "Agkawayan"},
        {"Bonbon (Poblacion)", "Bulacan", "Burol "},
        {"Guitna (Poblacion) ", "Kanluran (Poblacion)", "Talaotao"}
    };
    std::cout << "\n======= Looc (Barangays) =======\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++){
            std::cout << barangays[i][j] << '\t';
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
void paluan() {
    std::cout << "\n======= Paluan (City) =======\n";
    std::string act;
    std::cout << "Paluan, officially the Municipality of Paluan, is a municipality in the province of Occidental Mindoro,\n Philippines. According to the 2020 census, it has a population of 18,566 people.\n"; 
    //table this is still under examination: iniisip ko pa kung bakit di gumagana yung theory ko;
    std::string barangays[4][3] = {
        {"Alipaoy", "Harrison", "Lumangbayan"},
        {"Mananao", "Marikit", "Mapalad Poblacion (Brgy 1)"},
        {"Handang Tumulong Poblacion (Brgy 2)", "Silahis ng Pag-Asa Poblacion (Brgy 3)", "Pag-Asa ng Bayan Poblacion (Brgy 4)"},
        {"Bagong Silang Poblacion (Brgy 5)", "San Jose Poblacion (Brgy 6)", "Tubili"}
    };
    std::cout << "\n======= Paluan (Barangays) =======\n";
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++){
            std::cout << barangays[i][j] << '\t';
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
void adi() {
    std::cout << "\n======= Abra De Ilog (City) =======\n";
    std::string act;
    std::cout << "Abra de Ilog, officially the Municipality of Abra de Ilog, is a municipality in the province of Occidental Mindoro,\n Philippines. According to the 2020 census, it has a population of 35,176 people. Abra de Ilog is classified as partially urban.\n It is 32 kilometers from Mamburao.\n"; 
    //table this is still under examination: iniisip ko pa kung bakit di gumagana yung theory ko;
    std::string barangays[5][2] = {
        {"Armado", "Balao"},
        {"Cabacao", "Lumangbayan"},
        {"Poblacion", "San Vicente"},
        {"Santa Maria", "Tibag"},
        {"Udalo", "Wawa"}
    };
    std::cout << "\n======= Abra De Ilog (Barangays) =======\n";
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 2; j++){
            std::cout << barangays[i][j] << '\t';
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
void lubang() {
    std::cout << "\n======= Lubang (City) =======\n";
    std::string act;
    std::cout << "Lubang Island is the largest among the seven islands in the Lubang Group of Islands,\n an archipelago situated to the northwest of the northern tip of the island of Mindoro in the Philippines.\n It is positioned approximately 40 kilometers west of Calatagan, Batangas, or 117 kilometers southwest of Manila.\n"; 
    //table this is still under examination: iniisip ko pa kung bakit di gumagana yung theory ko;
    std::string barangays[4][4] = {
        {"Binakas", "Cabra (Cabra Island)", "Araw At Bituin", "Bagong Sikat"},
        {"Maligaya (formerly Bonbon)", "Maliig", "Banaag Ng Pag‑Asa", "Likas Ng Silangan"},
        {"Tagbac", "Tangal", "Maginhawa", "Ninikat Ng Pag‑Asa"},
        {"Tilik", "Vigo", "Paraiso", "Surville (formerly Ambulong)"}
    };
    std::cout << "\n======= Lubang (Barangays) =======\n";
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++){
            std::cout << barangays[i][j] << '\t';
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
void riz() {
    std::cout << "\n======= Rizal (City) =======\n";
    std::string act;
    std::cout << "Rizal, officially the Municipality of Rizal, is a municipality in the province of Occidental Mindoro, Philippines.\nAccording to the 2020 census, it has a population of 40,429 people. Rizal is 153 kilometres from Mamburao.\n"; 
    //table this is still under examination: iniisip ko pa kung bakit di gumagana yung theory ko;
    std::string barangays[4][3] = {
        {"Adela", "Aguas", "Magsikap"},
        {"Malawaan", "Manoot", "Pitogo"},
        {"Rizal (Poblacion)", "Rumbang", "Salvacion"},
        {"San Pedro", "Santo Niño", ""}
    };
    std::cout << "\n======= Rizal (Barangays) =======\n";
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++){
            std::cout << barangays[i][j] << '\t';
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
void santa_cruz() {
    std::cout << "\n======= Santa Cruz (City) =======\n";
    std::string act;
    std::cout << "Santa Cruz, officially the Municipality of Santa Cruz, is a municipality in the province of Occidental Mindoro, Philippines.\nAccording to the 2020 census, it has a population of 42,417 people. Santa Cruz was formerly known as Talabasi during the precolonial era.\n It is 25 kilometres from Mamburao. \n"; 
    //table this is still under examination: iniisip ko pa kung bakit di gumagana yung theory ko;
    std::string barangays[4][3] = {
        {"Alacaak", "Barahan", "Casague"},
        {"Dayap", "Kurtinganan", "Lumangbayan"},
        {"Mulawin ", "Pinagturilan (San Pedro)", "Poblacion I (Brgy 1)"},
        {"Poblacion II (Brgy 2)", "San Vicente", ""}
    };
    std::cout << "\n======= Rizal (Barangays) =======\n";
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++){
            std::cout << barangays[i][j] << '\t';
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
void baco() {
    std::cout << "\n======= Baco (City) =======\n";
    std::string act;
    std::cout << "Baco, officially the Municipality of Baco, is a municipality in the province of Oriental Mindoro, Philippines.\n According to the 2020 census, it has a population of 39,817 people.\n"; 
    //table this is still under examination: iniisip ko pa kung bakit di gumagana yung theory ko;
    std::string barangays[9][3] = {
        {"Alag", "Bangkatan", "Baras"},
        {"Bayanan", "Burbuli", "Catwiran I"},
        {"Catwiran II", "Dulangan I", "Dulangan II"},
        {"Lantuyang", "Lumang Bayan", "Malapad"},
        {"Mangangan I", "Mangangan II", "Mayabig"},
        {"Pambisan", "Poblacion", "Pulang-Tubig"},
        {"Putican–Cabulo", "San Andres", "San Ignacio "},
        {"Santa Cruz", "Santa Rosa I", "Santa Rosa II"},
        {"Tabon-Tabon", "Tagumpay", "Water"}
    };
    std::cout << "\n======= Baco (Barangays) =======\n";
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 3; j++){
            std::cout << barangays[i][j] << '\t';
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
void naujan() {
    std::cout << "\n======= Naujan (City) =======\n";
    std::string act;
    std::cout << "Baco, officially the Municipality of Baco, is a municipality in the province of Oriental Mindoro, Philippines.\n According to the 2020 census, it has a population of 39,817 people.\n"; 
    //table this is still under examination: iniisip ko pa kung bakit di gumagana yung theory ko;
    std::string barangays[14][5] = {
        {"Adrialuna", "Andres Ylagan", "Antipolo ", "Apitong", "Arangin"},
        {"Aurora", "Bacungan", "Bagong Buhay", "Balite", "Bancuro"},
        {"Banuton", "Dulangan I", "Barcenaga ", "Bayani", "Buhangin"},
        {"Caburo", "Concepcion ", "Dao", "Del Pilar", "Estrella"},
        {"Evangelista", "Gamao ", "General Esco", "Herrera", "Inarawan"},
        {"Kalinisan ", "Laguna ", "Mabini", "Mahabang Parang", "Malaya"},
        {"Malinao", "Malvar", "Masagana", "Masaguing", "Melgar A"},
        {"Melgar B", "SMetolza", "Montelago", "Montemayor", "Motoderazo"},
        {"Mulawin", "Nag‑Iba I", "Nag‑Iba II", "Pagkakaisa", "Paniquian"},
        {"Pinagsabangan I", "Pinagsabangan II", "Pinahan", "Poblacion II (Barangay II)", "Poblacion II (Barangay II)"},
        {"Poblacion III (Barangay III)", "Sampaguita", "San Agustin I", "San Agustin II", "San Andres"},
        {"San Antonio", "San Carlos", "San Isidro", "San Jose", "San Luis"},
        {"San Nicolas", "San Pedro", "Santa Cruz ", "Santa Isabel", "Santa Maria"},
        {"Santiago", "Santo Niño", "Tagumpay", "Tigkan", ""}
    };
    std::cout << "\n======= Naujan (Barangays) =======\n";
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 3; j++){
            std::cout << barangays[i][j] << '\t';
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

// Oriental Mindoro Cities =========================================================================================================================
void calapan_CAP() {
    std::cout << "\n======= Calapan (Capital City) =======\n";
    std::string act;
    std::cout << "Baco, officially the Municipality of Baco, is a municipality in the province of Oriental Mindoro, Philippines.\n According to the 2020 census, it has a population of 39,817 people.\n"; 
    //table this is still under examination: iniisip ko pa kung bakit di gumagana yung theory ko;
    // todo barrangays
    std::string barangays[12][5] = {
        {"Adrialuna", "Andres Ylagan", "Antipolo ", "Apitong", "Arangin"},
        {"Aurora", "Bacungan", "Bagong Buhay", "Balite", "Bancuro"},
        {"Banuton", "Dulangan I", "Barcenaga ", "Bayani", "Buhangin"},
        {"Caburo", "Concepcion ", "Dao", "Del Pilar", "Estrella"},
        {"Evangelista", "Gamao ", "General Esco", "Herrera", "Inarawan"},
        {"Kalinisan ", "Laguna ", "Mabini", "Mahabang Parang", "Malaya"},
        {"Malinao", "Malvar", "Masagana", "Masaguing", "Melgar A"},
        {"Melgar B", "SMetolza", "Montelago", "Montemayor", "Motoderazo"},
        {"Mulawin", "Nag‑Iba I", "Nag‑Iba II", "Pagkakaisa", "Paniquian"},
        {"Pinagsabangan I", "Pinagsabangan II", "Pinahan", "Poblacion II (Barangay II)", "Poblacion II (Barangay II)"},
        {"Poblacion III (Barangay III)", "Sampaguita", "San Agustin I", "San Agustin II", "San Andres"}
    };
    std::cout << "\n======= Naujan (Barangays) =======\n";
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 3; j++){
            std::cout << barangays[i][j] << '\t';
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

void bongabong() {

}
void bulalacao() {

}
void gloria(){
    
}
void mansalay() {

}
void naujan_orm() {

}
void pinamalayan() {

}
void pola() {

}
void puerto_gal() {

}
void roxy() {

}
void san_tdr() {

}
void socorro() {

}
void victoria() {

}


// Occidental mindoro more info
void more_info_occm(){
        std::string act;  
        std::cout << "-------------------- more info about the city --------------------\n";
        std::cout << "\n==Places you need to visit in Occidental Mindoro (Province) ==\n";
        // mga baya na nakuha ko lang sa google
        std::cout << "-------------------- Natural & Wild Life --------------------\n";
        std::cout << "\tAmbulong Island (3.8): "<< std::right << std::setw(10) << "A large island near San Jose with fine white sand beaches.\n";
        std::cout << "\tIlin Island (4.2): "<< std::right << std::setw(10) << "Known for its calm seas and beautiful scenery. \n";
        std::cout << "\tWhite Island (Manadi) (4.5): "<< std::right << std::setw(10) << "Another island with white sand beaches, popular for its proximity to San Jose. \n";
        std::cout << "\tInasakan Beach (4.5): "<< std::right << std::setw(10) << "A popular beach with opportunities for swimming and snorkeling. \n";
        std::cout << "\tApo Reef Natural Park (N.R): "<< std::right << std::setw(10) << "A world-class diving and snorkeling destination, one of the largest contiguous coral reefs globally. \n";
        std::cout << "\tPandurucan River (N.R): "<< std::right << std::setw(10) << "A salt-water lake with beautiful views.\n";
        std::cout << "\tAroma Beach (4.3): "<< std::right << std::setw(10) << "Offers a panoramic view of the sunset and is a good spot for jet skiing.\n";
        std::cout << "-------------------- Cultural & Historical Sites --------------------\n";
        std::cout << "\tHanging Bridge of San Agustin: "<< std::right << std::setw(10) << "A unique landmark and a great spot for photos. \n";
        std::cout << "\tSablayan Museum: "<< std::right << std::setw(10) << "Explore the local culture and history through exhibits and artifacts. \n";
        std::cout << "\tSt. Joseph Cathedral: "<< std::right << std::setw(10) << "A beautiful church and a place of worship. \n";
        std::cout << "\tSan Jose Archeological Site: "<< std::right << std::setw(10) << "Discover the rich history of the area. \n";

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
            more_info_occm();
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] city dont exist";
            std::cout << "\n===========================\n";
        }
        
    }
}
// Oriental mindoro More info
void more_info_orm(){
        std::string act;  
        std::cout << "-------------------- more info about the city --------------------\n";
        std::cout << "\n==Places you need to visit in Oriental Mindoro (Province) ==\n";
        // mga baya na nakuha ko lang sa google
        std::cout << "-------------------- Beaches and Coastal Areas --------------------\n";
        std::cout << "\tWhite Beach: "<< std::right << std::setw(10) << " A popular destination in Puerto Galera, known for its white sand and various water sports activities. \n";
        std::cout << "\tSabang: A beach area with diving and snorkeling opportunities, including Small and Big La Laguna beaches. \n";
        std::cout << "\tAninuan Beach: A quieter beach with a more remote feel, walkable from White Beach. \n";
        std::cout << "\tTalipanan Beach: A small beach with a few bars and a more laid-back atmosphere. \n";
        std::cout << "\tHaligi Beach: A great spot for a day out.";
        std::cout << "-------------------- Waterfalls --------------------\n";
        std::cout << "\tTamaraw Falls: A twin-tiered waterfall easily accessible from the highway, offering a refreshing stop. \n";
        std::cout << "\tTukuran Falls: A scenic waterfall, perfect for a visit. \n";
        std::cout << "\tManihala Waterfalls: Requires a short trek to reach, but offers a captivating cascade. \n";

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
void orin_mind() {
    std::cout << "\n======= Oriental Mindoro (Province) =======\n";
    std::cout << "Oriental Mindoro, officially the Province of Oriental Mindoro, is a province in the Philippines located on the island\n of Mindoro under Mimaropa region in Luzon, about 140 kilometres southwest of Manila.\n";
    std::string cities[] = {"Calapan City (Capital) = 1", "Baco = 2", "Bongabong = 3", "Bulalacao = 4", 
        "Gloria = 5", "Mansalay = 6", "Naujan = 7", "Pinamalayan = 8", "Pola = 9", "Puerto Galera = 10", 
        "Roxas = 11", "San Teodoro", "Socorro = 13", "Victoria = 14"};
    int size = sizeof(cities) / sizeof(cities[0]);
    std::string city;
    
    while (true) {
        std::cout << "\n---------------- Cities Oriental Mindoro -------------\n";
        for (int i = 0; i < size; i++) {
        std::cout << cities[i] << std::endl;
        }
        std::cout << "[type]: back - Previous;\n";
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
            naujan_orm();
        } else if (city == "7") {
            pinamalayan();
        } else if (city == "8") {
            pola();
        } else if (city == "9") {
            puerto_gal();
        } else if (city == "10") {
            roxy();
        } else if (city == "11") {
            san_tdr();
        }  else if (city == "12") {
            socorro();
        }  else if (city == "13") {
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
    std::string regions[] = {"Ilocos Region (Region I)", "Cagayan Valley (Region II)", "Central Luzon (Region III)", "CALABARZON (Region IV-A)", "MIMAROPA (Region IV-B): ===================>[4b]", "Bicol Region (Region V)", "National Capital Region (NCR)", "Cordillera Administrative Region (CAR)"
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