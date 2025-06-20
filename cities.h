#pragma once
#include <iostream>

/* THIS IS A CITIES FILE */


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
        std::cout << "\n[type] back - leave the [more info];\n";
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
        std::cout << "\n[type] back - leave the [more info];\n";
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
        std::cout << "\n[type] back - leave the [more info];\n";
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
        std::cout << "\n[type] back - leave the [more info];\n";
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
        std::cout << "\n[type] back - leave the [more info];\n";
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
        std::cout << "\n[type] back - leave the [more info];\n";
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
        std::cout << "\n[type] back - leave the [more info];\n";
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
        std::cout << "\n[type] back - leave the [more info];\n";
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
        std::cout << "\n[type] back - leave the [more info];\n";
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
        std::cout << "\n[type] back - leave the [more info];\n";
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
        std::cout << "\n[type] back - leave the [more info];\n";
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
        std::cout << "\n[type] back - leave the [more info];\n";
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
        std::cout << "\n[type] back - leave the [more info];\n";
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
        std::cout << "\n[type] back - leave the [more info];\n";
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

