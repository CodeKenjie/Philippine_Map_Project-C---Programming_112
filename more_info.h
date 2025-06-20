#pragma once
#include <iostream>

/* THIS IS A MORE INFO FILE - pakilagyan po ng comment "//" yung every more info ng bawat city*/

// Occidental mindoro more info
void more_info_occm(){
        std::string act;  
        std::cout << "-------------------- more info about the city --------------------\n";
        std::cout << "\n==Places you need to visit in Occidental Mindoro (Province) ==\n";
        // mga baya na nakuha ko lang sa google
        std::cout << "-------------------- Natural & Wild Life --------------------\n";
        std::cout << "\tAmbulong Island (3.8): A large island near San Jose with fine white sand beaches.\n";
        std::cout << "\tIlin Island (4.2): Known for its calm seas and beautiful scenery. \n";
        std::cout << "\tWhite Island (Manadi) (4.5): Another island with white sand beaches, popular for its proximity to San Jose. \n";
        std::cout << "\tInasakan Beach (4.5): A popular beach with opportunities for swimming and snorkeling. \n";
        std::cout << "\tApo Reef Natural Park (N.R): A world-class diving and snorkeling destination, one of the largest contiguous coral reefs globally. \n";
        std::cout << "\tPandurucan River (N.R): A salt-water lake with beautiful views.\n";
        std::cout << "\tAroma Beach (4.3): Offers a panoramic view of the sunset and is a good spot for jet skiing.\n";
        std::cout << "-------------------- Cultural & Historical Sites --------------------\n";
        std::cout << "\tHanging Bridge of San Agustin: A unique landmark and a great spot for photos. \n";
        std::cout << "\tSablayan Museum: Explore the local culture and history through exhibits and artifacts. \n";
        std::cout << "\tSt. Joseph Cathedral: A beautiful church and a place of worship. \n";
        std::cout << "\tSan Jose Archeological Site: Discover the rich history of the area. \n";

        // leave more info
        while (true){
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

// Oriental mindoro More info
void more_info_orm(){
        std::string act;  
        std::cout << "-------------------- more info about the city --------------------\n";
        std::cout << "\n==Places you need to visit in Oriental Mindoro (Province) ==\n";
        // mga baya na nakuha ko lang sa google
        std::cout << "-------------------- Beaches and Coastal Areas --------------------\n";
        std::cout << "\tWhite Beach:  A popular destination in Puerto Galera, known for its white sand and various water sports activities. \n";
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

