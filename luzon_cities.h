#pragma once
#include <iostream>
#include <string>
#include <fstream>

/* [Reminder] THIS IS A CITIES FILE - palagi po maglagay ng comments para alam ng mga nag eedit */

// ================================================== 149 cities / 1,493 municipalities ((void)Functionalities) ===========================================================================================================================================

//// ALL CITIES IN LUZON ONLY


// Aurora municipalities

void balr(){
    std::string act;
    std::cout << "\n======= Baler Capital (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 3200";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 3 Barangay\\b1.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
 
void casgurn(){
    std::string act;
    std::cout << "\n======= Casiguran (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 3204";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 3 Barangay\\b2.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void dilsg(){
    std::string act;
    std::cout << "\n======= Dilasag (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 3205";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 3 Barangay\\b3.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void dinlngn(){
    std::string act;
    std::cout << "\n======= Dinalungan (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 3206";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 3 Barangay\\b4.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void dingln(){
    std::string act;
    std::cout << "\n======= Dingalan (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 3207";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 3 Barangay\\b5.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void dipclao(){
    std::string act;
    std::cout << "\n======= Dipaculao (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 3203";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 3 Barangay\\b6.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void mria_urra(){
    std::string act;
    std::cout << "\n======= Maria Aurora (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 3202";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 3 Barangay\\b7.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void sanls(){
    std::string act;
    std::cout << "\n======= San Luis (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 3201";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 3 Barangay\\b8.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

// Bataan Cities

void balngga(){
    std::string act;
    std::cout << "\n======= Balangga (City) =======\n" << std::endl;
    std::cout << "Zip Code: 2100";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 3 Barangay\\b9.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

// Bulacan cities

void mallos(){
    std::string act;
    std::cout << "\n======= Malolos Capital (City) =======\n" << std::endl;
    std::cout << "Zip Code: 3000";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 3 Barangay\\b10.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void meycayn(){
    std::string act;
    std::cout << "\n======= Meycauayan (City) =======\n" << std::endl;
    std::cout << "Zip Code: 3020";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 3 Barangay\\b11.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void sanjsdlmnt(){
    std::string act;
    std::cout << "\n======= San Jose Del Monte (City) =======\n" << std::endl;
    std::cout << "Zip Code: 3023";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 3 Barangay\\b12.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void santmria(){
    std::string act;
    std::cout << "\n======= Santa Maria (City) =======\n" << std::endl;
    std::cout << "Zip Code: 3022";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 3 Barangay\\b13.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

// Nueva Ecija Cities

void plyn(){
    std::string act;
    std::cout << "\n======= Palayan Capital (City) =======\n" << std::endl;
    std::cout << "Zip Code: 3132";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 3 Barangay\\b14.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void cbntuan(){
    std::string act;
    std::cout << "\n======= Cabanatuan (City) =======\n" << std::endl;
    std::cout << "Zip Code: 3100";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 3 Barangay\\b15.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void gapn(){
    std::string act;
    std::cout << "\n======= Gapan (Municipalities) =======\n" << std::endl;
    std::cout << "Zip Code: 3105";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 3 Barangay\\b16.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void snjse(){
    std::string act;
    std::cout << "\n======= San Jose (City) =======\n" << std::endl;
    std::cout << "Zip Code: 3121";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 3 Barangay\\b17.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void scncectymnz(){
    std::string act;
    std::cout << "\n======= Science City of Munoz (City) =======\n" << std::endl;
    std::cout << "Zip Code: 3119";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 3 Barangay\\b18.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

// Pampanga cities

void sanfrndo(){
    std::string act;
    std::cout << "\n======= San Fernando Capital (City) =======\n" << std::endl;
    std::cout << "Zip Code: 2000";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 3 Barangay\\b19.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void angls(){
    std::string act;
    std::cout << "\n======= Angeles (City) =======\n" << std::endl;
    std::cout << "Zip Code: 2009";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 3 Barangay\\b20.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void mablct(){
    std::string act;
    std::cout << "\n======= Mabalacat (City) =======\n" << std::endl;
    std::cout << "Zip Code: 2010";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 3 Barangay\\b21.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

// Tarlac

void trlc(){
    std::string act;
    std::cout << "\n======= Tarlac (City) =======\n" << std::endl;
    std::cout << "Zip Code: 2300";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 3 Barangay\\b22.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

//Zambales

void olngpo(){
    std::string act;
    std::cout << "\n======= Olongapo (City) =======\n" << std::endl;
    std::cout << "Zip Code: 2200";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 3 Barangay\\b23.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

// Cavite

void etivc(){
    std::string act;
    std::cout << "\n======= Cavite (City) =======\n" << std::endl;
    std::cout << "Zip Code: 4100";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 4a Barangay\\b24.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void baccr(){
    std::string act;
    std::cout << "\n======= Bacoor (City) =======\n" << std::endl;
    std::cout << "Zip Code: 4102";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 4a Barangay\\b25.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void dasmrns(){
    std::string act;
    std::cout << "\n======= Dasmarinias (City) =======\n" << std::endl;
    std::cout << "Zip Code: 4114";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 4a Barangay\\b26.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void ims(){
    std::string act;
    std::cout << "\n======= Imus (City) =======\n" << std::endl;
    std::cout << "Zip Code: 4103";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 4a Barangay\\b27.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void gntrs(){
    std::string act;
    std::cout << "\n======= General Trias (City) =======\n" << std::endl;
    std::cout << "Zip Code: 4107";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 4a Barangay\\b28.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void trcmrtrs(){
    std::string act;
    std::cout << "\n======= Trece Martiris (City) =======\n" << std::endl;
    std::cout << "Zip Code: 4109";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 4a Barangay\\b29.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void tagty(){
    std::string act;
    std::cout << "\n======= Tagaytay (City) =======\n" << std::endl;
    std::cout << "Zip Code: 4120";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 4a Barangay\\b30.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void tnza(){
    std::string act;
    std::cout << "\n======= Tanza (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 4108";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 4a Barangay\\b31.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

// Laguna 

void calmba(){
    std::string act;
    std::cout << "\n======= Calamba (City) =======\n" << std::endl;
    std::cout << "Zip Code: 4027";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 4a Barangay\\b32.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void bnan(){
    std::string act;
    std::cout << "\n======= Binan (City) =======\n" << std::endl;
    std::cout << "Zip Code: 4024";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 4a Barangay\\b33.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void strsa(){
    std::string act;
    std::cout << "\n======= Santa Rosa (City) =======\n" << std::endl;
    std::cout << "Zip Code: 4026";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 4a Barangay\\b34.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void cbyao(){
    std::string act;
    std::cout << "\n======= Cabuyao (City) =======\n" << std::endl;
    std::cout << "Zip Code: 4025";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 4a Barangay\\b35.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void snpdro(){
    std::string act;
    std::cout << "\n======= San Pedro (City) =======\n" << std::endl;
    std::cout << "Zip Code: 4023";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 4a Barangay\\b36.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void sanpblo(){
    std::string act;
    std::cout << "\n======= San Pablo (City) =======\n" << std::endl;
    std::cout << "Zip Code: 4000";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 4a Barangay\\b37.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

// Batangas

void batngsu(){
    std::string act;
    std::cout << "\n======= Batangas (City) =======\n" << std::endl;
    std::cout << "Zip Code: 4200";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 4a Barangay\\b38.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void lipa(){
    std::string act;
    std::cout << "\n======= Lipa (City) =======\n" << std::endl;
    std::cout << "Zip Code: 4217";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 4a Barangay\\b39.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void tuan(){
    std::string act;
    std::cout << "\n======= Tanauan (City) =======\n" << std::endl;
    std::cout << "Zip Code: 4232";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 4a Barangay\\b40.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void sntmas(){
    std::string act;
    std::cout << "\n======= Santo Tomas (City) =======\n" << std::endl;
    std::cout << "Zip Code: 4234";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 4a Barangay\\b41.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

// Rizal

void antplo(){
    std::string act;
    std::cout << "\n======= Antipolo (City) =======\n" << std::endl;
    std::cout << "Zip Code: 1870";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 4a Barangay\\b42.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void mrong(){
    std::string act;
    std::cout << "\n======= Morong (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 1960";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 4a Barangay\\b43.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void sanmteo(){
    std::string act;
    std::cout << "\n======= San Mateo (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 1850";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 4a Barangay\\b44.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void jlajla(){
    std::string act;
    std::cout << "\n======= Jala-jala (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 1990";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 4a Barangay\\b45.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void bars(){
    std::string act;
    std::cout << "\n======= Baras (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 1970";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 4a Barangay\\b46.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void cardna(){
    std::string act;
    std::cout << "\n======= Cardona (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 1950";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 4a Barangay\\b47.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}


void markna(){
    std::string act;
    std::cout << "\n======= Marikina (City) =======\n" << std::endl;
    std::cout << "Zip Code: 1800";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 4a Barangay\\b48.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void rizal(){
    std::string act;
    std::cout << "\n======= Rizal (City) =======\n" << std::endl;
    std::cout << "Zip Code: 1870";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 4a Barangay\\b48.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void bingnan(){
    std::string act;
    std::cout << "\n======= Binangonan (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 1940";

    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 4a Barangay\\b49.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void ango(){
    std::string act;
    std::cout << "\n======= Angono (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 1930";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 4a Barangay\\b50.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void rodquez(){
    std::string act;
    std::cout << "\n======= Rodriguez (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 1860";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 4a Barangay\\b51.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void tersa(){
    std::string act;
    std::cout << "\n======= Teresa (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 1880";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 4a Barangay\\b52.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void pasg(){
    std::string act;
    std::cout << "\n======= Pasig (City) =======\n" << std::endl;
    std::cout << "Zip Code: 1600";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 4a Barangay\\b53.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void cinta(){
    std::string act;
    std::cout << "\n======= Cainta (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 1900";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 4a Barangay\\b54.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void tytay(){
    std::string act;
    std::cout << "\n======= Taytay (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 1920";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 4a Barangay\\b55.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void tany(){
    std::string act;
    std::cout << "\n======= Tanay (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 1980";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 4a Barangay\\b56.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void pilla(){
    std::string act;
    std::cout << "\n======= Pililla (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 1910";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 4a Barangay\\b57.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void burds(){
    std::string act;
    std::cout << "\n======= Burdeos (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 4340";

    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 4a Barangay\\b59.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void genralnakr(){
    std::string act;
    std::cout << "\n======= General Nakar (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 4329";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 4a Barangay\\b60.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void infta(){
    std::string act;
    std::cout << "\n======= Infanta (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 4336";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 4a Barangay\\b61.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void jomlig(){
    std::string act;
    std::cout << "\n======= Jomalig (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 4342";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 4a Barangay\\b62.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void lucbn(){
    std::string act;
    std::cout << "\n======= Lucban (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 4328";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 4a Barangay\\b63.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void mban(){
    std::string act;
    std::cout << "\n======= Mauban (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 4330";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 4a Barangay\\b64.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void pagblo(){
    std::string act;
    std::cout << "\n======= Pagbilao (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 4302";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 4a Barangay\\b65.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void pankln(){
    std::string act;
    std::cout << "\n======= Panukulan (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 4337";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 4a Barangay\\b66.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void patngan(){
    std::string act;
    std::cout << "\n======= Patnanungan (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 4341";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 4a Barangay\\b67.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void polio(){
    std::string act;
    std::cout << "\n======= Polillo (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 4339";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 4a Barangay\\b68.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void smpalc(){
    std::string act;
    std::cout << "\n======= Sampaloc (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 4329";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 4a Barangay\\b69.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void tybs(){
    std::string act;
    std::cout << "\n======= Tayabas (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 4327";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 4a Barangay\\b70.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void candlra(){
    std::string act;
    std::cout << "\n======= Candelaria (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 4323";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 4a Barangay\\b71.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void dlres(){
    std::string act;
    std::cout << "\n======= Dolores (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 4326";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 4a Barangay\\b72.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void lcna(){
    std::string act;
    std::cout << "\n======= Lucena (City) =======\n" << std::endl;
    std::cout << "Zip Code: 4301";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 4a Barangay\\b73.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void snantno(){
    std::string act;
    std::cout << "\n======= San Antonio (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 4324";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 4a Barangay\\b74.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void srya(){
    std::string act;
    std::cout << "\n======= Sariaya (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 4322";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 4a Barangay\\b75.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void taong(){
    std::string act;
    std::cout << "\n======= Tiaong (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 4325";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 4a Barangay\\b76.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void agdnan(){
    std::string act;
    std::cout << "\n======= Agdangan (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 4304";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 4a Barangay\\b77.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void buenvsta(){
    std::string act;
    std::cout << "\n======= Buenavista (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 4320";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 4a Barangay\\b78.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void cantnuan(){
    std::string act;
    std::cout << "\n======= Catanauan (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 4311";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 4a Barangay\\b79.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void genlna(){
    std::string act;
    std::cout << "\n======= Gen Luna (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 4310";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 4a Barangay\\b80.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void maclon(){
    std::string act;
    std::cout << "\n======= Maclelon (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 4309";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 4a Barangay\\b81.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void mlnay(){
    std::string act;
    std::cout << "\n======= Mulanay (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 4312";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 3 Barangay\\b82.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void pdrebrgos(){
    std::string act;
    std::cout << "\n======= Padre Burgos (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 4303";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 3 Barangay\\b83.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void ptgo(){
    std::string act;
    std::cout << "\n======= Pitogo (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 4308";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 3 Barangay\\b84.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void sandrs(){
    std::string act;
    std::cout << "\n======= San Andres (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 4314";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 3 Barangay\\b85.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void sanfrcso(){
    std::string act;
    std::cout << "\n======= San Francisco (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 4315";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 3 Barangay\\b86.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void sannrcso(){
    std::string act;
    std::cout << "\n======= San Narciso (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 4313"; 
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 3 Barangay\\b87.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void unsn(){
    std::string act;
    std::cout << "\n======= Unisan (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 4339";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 3 Barangay\\b89.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void albt(){
    std::string act;
    std::cout << "\n======= Alabat (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 4333";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 3 Barangay\\b89.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void atmon(){
    std::string act;
    std::cout << "\n======= Atimonan (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 4331";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 3 Barangay\\b90.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void calg(){
    std::string act;
    std::cout << "\n======= Calauag (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 4318";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 3 Barangay\\b91.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void guinyngn(){
    std::string act;
    std::cout << "\n======= Guinayangan (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 4319";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 3 Barangay\\b92.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void gumca(){
    std::string act;
    std::cout << "\n======= Gumaca (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 4307";

    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 3 Barangay\\b93.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void lopz(){
    std::string act;
    std::cout << "\n======= Lopez (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 4316";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 3 Barangay\\b94.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void perz(){
    std::string act;
    std::cout << "\n======= Perez (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 4334";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 3 Barangay\\b95.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void plrdl(){
    std::string act;
    std::cout << "\n======= Plaridel (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 3004";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 3 Barangay\\b96.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void qezon(){
    std::string act;
    std::cout << "\n======= Quezon (City) =======\n" << std::endl;
    std::cout << "Zip Code: 0000";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 3 Barangay\\b97.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void tagkawyn(){
    std::string act;
    std::cout << "\n======= Tagkawayan (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 4321";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 3 Barangay\\b98.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void ril(){
    std::string act;
    std::cout << "\n======= Real (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 4335";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 3 Barangay\\b99.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}



// Occidental Mindoro cities =========================================
void san_j() {
    std::string act;
    std::cout << "\n======= San Jose (City) =======\n" << std::endl;
    std::cout << "Zip Code: 5100";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 4b Barangay\\b1.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }

}
void mamburao() {
    std::string act;
    std::cout << "\n======= Mamburao (City) =======\n" << std::endl;
    std::cout << "Zip Code: 5106";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 4b Barangay\\b2.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }

}
void magsaysay() {
    std::string act;
    std::cout << "\n======= Magsaysay (City) =======\n" << std::endl;
    std::cout << "Zip Code: 5101";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 4b Barangay\\b3.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void calintaan() {
    std::string act;
    std::cout << "\n======= Calintaan (City) =======\n" << std::endl;
    std::cout << "Zip Code: 5102";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 4b Barangay\\b4.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void sablayan() {
    std::string act;
    std::cout << "\n======= Sablayan (City) =======\n" << std::endl;
    std::cout << "Zip Code: 5104";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 4b Barangay\\b5.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void looc() {
    std::string act;
    std::cout << "\n======= Looc (City) =======\n" << std::endl;
    std::cout << "Zip Code: 5111";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 4b Barangay\\b6.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void paluan() {
    std::string act;
    std::cout << "\n======= Panluan (City) =======\n" << std::endl;
    std::cout << "Zip Code: 5107";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 4b Barangay\\b7.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void adi() {
    std::string act;
    std::cout << "\n======= Abra Del Ilog (City) =======\n" << std::endl;
    std::cout << "Zip Code: 5108";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 4b Barangay\\b8.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void lubang() {
    std::string act;
    std::cout << "\n======= Lubang (City) =======\n" << std::endl;
    std::cout << "Zip Code: 5109";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 4b Barangay\\b9.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void riz() {
    std::string act;
    std::cout << "\n======= Rizal (City) =======\n" << std::endl;
    std::cout << "Zip Code: 5103";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 4b Barangay\\b10.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void santa_cruz() {
    std::string act;
    std::cout << "\n======= Santa Cruz (City) =======\n" << std::endl;
    std::cout << "Zip Code: 5105";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 4b Barangay\\b11.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void tlik() {
    std::string act;
    std::cout << "\n======= Tilik (City) =======\n" << std::endl;
    std::cout << "Zip Code: 5201";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 4b Barangay\\b12.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void naujan() {
    std::string act;
    std::cout << "\n======= Naujan (City) =======\n" << std::endl;
    std::cout << "Zip Code: 5204";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 4b Barangay\\b13.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
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
    std::string act;
    std::cout << "\n======= Calapan (City) =======\n" << std::endl;
    std::cout << "Zip Code: 5200";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 4b Barangay\\b14.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void bongabong() {
    std::string act;
    std::cout << "\n======= Bongabong (City) =======\n" << std::endl;
    std::cout << "Zip Code: 5211";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 4b Barangay\\b15.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }

}
void bulalacao() {
    std::string act;
    std::cout << "\n======= Bulalacao (City) =======\n" << std::endl;
    std::cout << "Zip Code: 5214";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 4b Barangay\\b16.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }

}
void gloria(){
    std::string act;
    std::cout << "\n======= Gloria (City) =======\n" << std::endl;
    std::cout << "Zip Code: 5209";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 4b Barangay\\b17.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void mansalay() {
    std::string act;
    std::cout << "\n======= Mansalay (City) =======\n" << std::endl;
    std::cout << "Zip Code: 5213";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 4b Barangay\\b18.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void pinamalayan() {
    std::string act;
    std::cout << "\n======= Pinamalayan (City) =======\n" << std::endl;
    std::cout << "Zip Code: 5208";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 4b Barangay\\b19.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void pola() {
    std::string act;
    std::cout << "\n======= Pola (City) =======\n" << std::endl;
    std::cout << "Zip Code: 5206";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 4b Barangay\\b20.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void puerto_gal() {
    std::string act;
    std::cout << "\n======= Puerto Galera (City) =======\n" << std::endl;
    std::cout << "Zip Code: 5203";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 4b Barangay\\b21.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void roxy() {
    std::string act;
    std::cout << "\n======= Roxas (City) =======\n" << std::endl;
    std::cout << "Zip Code: 5212";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 4b Barangay\\b22.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void san_tdr() {
    std::string act;
    std::cout << "\n======= San Teodoro (City) =======\n" << std::endl;
    std::cout << "Zip Code: 5202";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 4b Barangay\\b23.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }

}
void socorro() {
    std::string act;
    std::cout << "\n======= Socorro (City) =======\n" << std::endl;
    std::cout << "Zip Code: 5207";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 4b Barangay\\b24.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }

}
void victoria() {
    std::string act;
    std::cout << "\n======= Victoria (City) =======\n" << std::endl;
    std::cout << "Zip Code: 5205";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 4b Barangay\\b25.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }

}

// Marinduque cities

void boac(){
    std::string act;
    std::cout << "\n======= Boac (City) =======\n" << std::endl;
    std::cout << "Zip Code: 4900";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 4b Barangay\\b26.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }

}
void buenavista(){
    std::string act;
    std::cout << "\n======= Buenavista (City) =======\n" << std::endl;
    std::cout << "Zip Code: 4904";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 4b Barangay\\b27.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void gasan(){
    std::string act;
    std::cout << "\n======= Gasan (City) =======\n" << std::endl;
    std::cout << "Zip Code: 4905";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 4b Barangay\\b28.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void mogpog(){
    std::string act;
    std::cout << "\n======= Mogpog (City) =======\n" << std::endl;
    std::cout << "Zip Code: 4901";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 4b Barangay\\b29.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void santa_C(){
    std::string act;
    std::cout << "\n======= Santa Cruz (City) =======\n" << std::endl;
    std::cout << "Zip Code: 4902";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 4b Barangay\\b30.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void torrijos(){
    std::string act;
    std::cout << "\n======= Torrijos (City) =======\n" << std::endl;
    std::cout << "Zip Code: 4903";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 4b Barangay\\b31.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

// Romblon Municipalities
void alctra() {
    std::string act;
    std::cout << "\n======= Alcantara (City) =======\n" << std::endl;
    std::cout << "Zip Code: 5509";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 4b Barangay\\b32.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void btn() {
    std::string act;
    std::cout << "\n======= Banton (City) =======\n" << std::endl;
    std::cout << "Zip Code: 5515";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 4b Barangay\\b33.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
    
}
void cjcn() {
    std::string act;
    std::cout << "\n======= Cajidiocan (City) =======\n" << std::endl;
    std::cout << "Zip Code: 5512";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 4b Barangay\\b34.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void cltrv() {
    std::string act;
    std::cout << "\n======= Calatrava (City) =======\n" << std::endl;
    std::cout << "Zip Code: 5503";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 4b Barangay\\b35.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void cncptn() {
    std::string act;
    std::cout << "\n======= Conception (City) =======\n" << std::endl;
    std::cout << "Zip Code: 5516";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 4b Barangay\\b36.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void crqer() {
    std::string act;
    std::cout << "\n======= Corcuera (City) =======\n" << std::endl;
    std::cout << "Zip Code: 5514";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 4b Barangay\\b37.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void frrl() {
    std::string act;
    std::cout << "\n======= Ferrol (City) =======\n" << std::endl;
    std::cout << "Zip Code: 5506";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 4b Barangay\\b38.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void looc_2() {
    std::string act;
    std::cout << "\n======= Looc (City) =======\n" << std::endl;
    std::cout << "Zip Code: 5507";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 4b Barangay\\b39.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void mgdwng() {
    std::string act;
    std::cout << "\n======= Magdiwang (City) =======\n" << std::endl;
    std::cout << "Zip Code: 5511";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 4b Barangay\\b40.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void odogn() {
    std::string act;
    std::cout << "\n======= Odiongan (City) =======\n" << std::endl;
    std::cout << "Zip Code: 5505";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 4b Barangay\\b41.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void romblon_cap() {
    std::string act;
    std::cout << "\n======= Romblon Capital (City) =======\n" << std::endl;
    std::cout << "Zip Code: 5500";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 4b Barangay\\b42.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void san_agstn() {
    std::string act;
    std::cout << "\n======= San Agustin (City) =======\n" << std::endl;
    std::cout << "Zip Code: 5501";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 4b Barangay\\b43.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void san_adrs() {
    std::string act;
    std::cout << "\n======= San Andres (City) =======\n" << std::endl;
    std::cout << "Zip Code: 5504";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 4b Barangay\\b44.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void san_frnd() {
    std::string act;
    std::cout << "\n======= San Fernando (City) =======\n" << std::endl;
    std::cout << "Zip Code: 5513";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 4b Barangay\\b45.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void san_js() {
    std::string act;
    std::cout << "\n======= San Jose (City) =======\n" << std::endl;
    std::cout << "Zip Code: 5510";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 4b Barangay\\b46.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void snt_f() {
    std::string act;
    std::cout << "\n======= Santa Fe (City) =======\n" << std::endl;
    std::cout << "Zip Code: 5508";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 4b Barangay\\b47.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void snt_mra() {
    std::string act;
    std::cout << "\n======= Santa Maria (Imelda) (City) =======\n" << std::endl;
    std::cout << "Zip Code: 5502";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 4b Barangay\\b48.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

// Palawan Cities

void ptoprcsa_city() {
    std::string act;
    std::cout << "\n======= Puerto Princesa (City) =======\n" << std::endl;
    std::cout << "Zip Code: 5300";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 4b Barangay\\b49.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void abln() {
    std::string act;
    std::cout << "\n======= Aborlan (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 5302";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 4b Barangay\\b50.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void agty() {
    std::string act;
    std::cout << "\n======= Agutaya (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 5320";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 4b Barangay\\b51.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void arcl() {
    std::string act;
    std::cout << "\n======= Araceli (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 5311";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 4b Barangay\\b52.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void blbc() {
    std::string act;
    std::cout << "\n======= Balabac (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 5307";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 4b Barangay\\b53.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void btrz() {
    std::string act;
    std::cout << "\n======= Bataraza (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 5306";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 4b Barangay\\b54.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void brks_point() {
    std::string act;
    std::cout << "\n======= Brook's Point (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 5305";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 4b Barangay\\b55.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void bsanga() {
    std::string act;
    std::cout << "\n======= Busuangan (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 5317";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 4b Barangay\\b56.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void cgynclo() {
    std::string act;
    std::cout << "\n======= Cagayancillo (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 5321";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 4b Barangay\\b57.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void crn() {
    std::string act;
    std::cout << "\n======= Coron (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 5316";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 4b Barangay\\b58.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void cln() {
    std::string act;
    std::cout << "\n======= Culion (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 5315";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 4b Barangay\\b59.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void cyo() {
    std::string act;
    std::cout << "\n======= Cuyo (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 5318";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 4b Barangay\\b60.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void dmr() {
    std::string act;
    std::cout << "\n======= Dumaran (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 5310";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 4b Barangay\\b61.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void bonakid() {
    std::string act;
    std::cout << "\n======= El Nido (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 5313";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 4b Barangay\\b62.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void klyan() {
    std::string act;
    std::cout << "\n======= Kalayaan (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 5322";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 4b Barangay\\b63.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void lnpacn() {
    std::string act;
    std::cout << "\n======= Linapacan (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 5314";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 4b Barangay\\b64.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void mgssy() {
    std::string act;
    std::cout << "\n======= Magsaysay (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 5319";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 4b Barangay\\b65.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void nra() {
    std::string act;
    std::cout << "\n======= Narra (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 5303";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 4b Barangay\\b66.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void qoen() {
    std::string act;
    std::cout << "\n======= Quezon (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 5304";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 4b Barangay\\b67.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void rizzler() {
    std::string act;
    std::cout << "\n======= Rizal (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 5100";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 4b Barangay\\b68.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void rxs() {
    std::string act;
    std::cout << "\n======= Roxas (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 5308";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 4b Barangay\\b69.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void san_vsnt() {
    std::string act;
    std::cout << "\n======= San Vicente (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 5309";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 4b Barangay\\b70.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void sofnyo_espnl() {
    std::string act;
    std::cout << "\n======= Sofronio Espanola (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 5100";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 4b Barangay\\b71.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void tyty() {
    std::string act;
    std::cout << "\n======= Taytay (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 5312";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 4b Barangay\\b72.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

// albay ---- Cities and municipalities
void lgzpi(){
    std::string act;
    std::cout << "\n======= Legazpi (City) =======\n" << std::endl;
    std::cout << "Zip Code: 4500";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 5 Barangay\\b73.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void bccy(){
    std::string act;
    std::cout << "\n======= Bacacay (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 4509";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 5 Barangay\\b74.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void cmlg(){
    std::string act;
    std::cout << "\n======= Camalig (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 4502";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 5 Barangay\\b75.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void drg(){
    std::string act;
    std::cout << "\n======= Daraga (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 5100";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 5 Barangay\\b76.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void ginbtn(){
    std::string act;
    std::cout << "\n======= Guinobatan (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 4503";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 5 Barangay\\b77.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void jvllr(){
    std::string act;
    std::cout << "\n======= Jovellar (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 4515";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 5 Barangay\\b78.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void lbn(){
    std::string act;
    std::cout << "\n======= Libon (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 4507";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 5 Barangay\\b79.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void lgao(){
    std::string act;
    std::cout << "\n======= Ligao City (City) =======\n" << std::endl;
    std::cout << "Zip Code: 4504";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 5 Barangay\\b80.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void mllpt(){
    std::string act;
    std::cout << "\n======= Malilipot (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 4510";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 5 Barangay\\b81.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void mlnao(){
    std::string act;
    std::cout << "\n======= Malinao (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 4512";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 5 Barangay\\b82.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void mnto(){
    std::string act;
    std::cout << "\n======= Manito (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 4514";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 5 Barangay\\b83.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void oas(){
    std::string act;
    std::cout << "\n======= Oas (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 4505";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 5 Barangay\\b84.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void pi_drn(){
    std::string act;
    std::cout << "\n======= Pio Duran (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 4516";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 5 Barangay\\b85.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void plngui(){
    std::string act;
    std::cout << "\n======= Polangui (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 4506";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 5 Barangay\\b86.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void rp_rp(){
    std::string act;
    std::cout << "\n======= Rapu Rapu (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 4517";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 5 Barangay\\b87.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void snt_dmg(){
    std::string act;
    std::cout << "\n======= Santo Domingo (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 4508";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 5 Barangay\\b88.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void tbc(){
    std::string act;
    std::cout << "\n======= Tabacao (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 4511";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 5 Barangay\\b89.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void tw(){
    std::string act;
    std::cout << "\n======= Tiwi (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 4513";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 5 Barangay\\b90.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

// Camarines Norte
void daet(){
    std::string act;
    std::cout << "\n======= Daet (Capital Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 4600";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 5 Barangay\\b91.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void bsd(){
    std::string act;
    std::cout << "\n======= Basud (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 4608";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 5 Barangay\\b92.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void cplga(){
    std::string act;
    std::cout << "\n======= Capalonga (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 4607";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 5 Barangay\\b93.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void js_pngnbn(){
    std::string act;
    std::cout << "\n======= Jose Panganiban (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 4606";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 5 Barangay\\b94.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void lbo(){
    std::string act;
    std::cout << "\n======= Labo (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 4604";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 5 Barangay\\b95.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void mrcds(){
    std::string act;
    std::cout << "\n======= Mercedes (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 4601";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 5 Barangay\\b96.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void prcl(){
    std::string act;
    std::cout << "\n======= Paracale (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 4605";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 5 Barangay\\b97.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void san_lrnz_riz(){
    std::string act;
    std::cout << "\n======= San Lurenzo Ruiz (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 4610";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 5 Barangay\\b98.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void san_vnte(){
    std::string act;
    std::cout << "\n======= San Vicente (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 4609";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 5 Barangay\\b99.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void snt_elna(){
    std::string act;
    std::cout << "\n======= Santa Elena (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 4611";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 5 Barangay\\b100.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void tlsy(){
    std::string act;
    std::cout << "\n======= Talisay (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 4602";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 5 Barangay\\b101.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void vzons(){
    std::string act;
    std::cout << "\n======= Vinzon (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 4603";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 5 Barangay\\b102.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

// Camarines Sur
void ng_city() {
    std::string act;
    std::cout << "\n======= Naga City (City) =======\n" << std::endl;
    std::cout << "Zip Code: 4400";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 5 Barangay\\b1.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void irga_city() {
    std::string act;
    std::cout << "\n======= Iriga City (City) =======\n" << std::endl;
    std::cout << "Zip Code: 4431";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 5 Barangay\\b2.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void bao() {
    std::string act;
    std::cout << "\n======= Baao (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 4432";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 5 Barangay\\b3.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void bltn() {
    std::string act;
    std::cout << "\n======= Balatan (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 4436";    
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 5 Barangay\\b4.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void stone() {
    std::string act;
    std::cout << "\n======= Bato (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 4435";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 5 Barangay\\b5.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void bomb() {
    std::string act;
    std::cout << "\n======= Bombon (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 4404";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 5 Barangay\\b6.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void bhi() {
    std::string act;
    std::cout << "\n======= Buhi (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 4433";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 5 Barangay\\b7.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void bla() {
    std::string act;
    std::cout << "\n======= Bula (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 4430";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 5 Barangay\\b8.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void cbsao() {
    std::string act;
    std::cout << "\n======= Cabusao (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 4406";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 5 Barangay\\b9.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void clbnga() {
    std::string act;
    std::cout << "\n======= Calabanga (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 4405";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 5 Barangay\\b10.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void camlgn() {
    std::string act;
    std::cout << "\n======= Camaligan (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 4401";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 5 Barangay\\b11.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void toys() {
    std::string act;
    std::cout << "\n======= Canaman (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 4402";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 5 Barangay\\b12.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void crmoan() {
    std::string act;
    std::cout << "\n======= Caramoan (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 4429";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 5 Barangay\\b13.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void dl_glgo() {
    std::string act;
    std::cout << "\n======= Del Gallego (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 4411";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 5 Barangay\\b14.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void ginza() {
    std::string act;
    std::cout << "\n======= Gainza (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 4412";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 5 Barangay\\b15.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void grchtrn() {
    std::string act;
    std::cout << "\n======= Garchitorena (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 4428";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 5 Barangay\\b16.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void gogogo() {
    std::string act;
    std::cout << "\n======= Goa (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 4422";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 5 Barangay\\b17.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void lgny() {
    std::string act;
    std::cout << "\n======= Lagonoy (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 4425";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 5 Barangay\\b18.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void lbmnan() {
    std::string act;
    std::cout << "\n======= Libmanan (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 4407";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 5 Barangay\\b19.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void lpi() {
    std::string act;
    std::cout << "\n======= Lupi (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 4409";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 5 Barangay\\b20.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void mgrao() {
    std::string act;
    std::cout << "\n======= Magarao (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 4403";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 5 Barangay\\b21.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void mlaor() {
    std::string act;
    std::cout << "\n======= Milaor (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 4413";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 5 Barangay\\b22.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void mnlbc() {
    std::string act;
    std::cout << "\n======= Minalabac (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 4414";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 5 Barangay\\b23.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void nbu() {
    std::string act;
    std::cout << "\n======= Nabua (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 4434";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 5 Barangay\\b24.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void ocmp() {
    std::string act;
    std::cout << "\n======= Ocampo (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 4419";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 5 Barangay\\b25.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void pmpln() {
    std::string act;
    std::cout << "\n======= Pamplona (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 4416";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 5 Barangay\\b26.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void pcscao() {
    std::string act;
    std::cout << "\n======= Pasacao (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 4417";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 5 Barangay\\b27.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void pli() {
    std::string act;
    std::cout << "\n======= Pili (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 4418";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 5 Barangay\\b28.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void reprt() {
    std::string act;
    std::cout << "\n======= Presentacion (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 4424";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 5 Barangay\\b29.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void rgy() {
    std::string act;
    std::cout << "\n======= Ragay (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 4410";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 5 Barangay\\b30.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void sgny() {
    std::string act;
    std::cout << "\n======= Sagnay (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 4421";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 5 Barangay\\b31.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void san_frfr() {
    std::string act;
    std::cout << "\n======= San Fernando (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 4415";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 5 Barangay\\b32.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void san_jse() {
    std::string act;
    std::cout << "\n======= San Jose (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 4423";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 5 Barangay\\b33.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void sipct() {
    std::string act;
    std::cout << "\n======= Sipocot (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 4408";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 5 Barangay\\b34.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void sirm() {
    std::string act;
    std::cout << "\n======= Siruma (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 4427";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 5 Barangay\\b35.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void tgaon() {
    std::string act;
    std::cout << "\n======= Tigaon (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 4420";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 5 Barangay\\b36.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void timbac() {
    std::string act;
    std::cout << "\n======= Tinambac (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 4426";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 5 Barangay\\b37.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

// Catanduanes -------
void vrc_city(){
    std::string act;
    std::cout << "\n======= Virac (City) =======\n" << std::endl;
    std::cout << "Zip Code: 4805";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 5 Barangay\\b38.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void bgmanc(){
    std::string act;
    std::cout << "\n======= Bagamanoc (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 4807";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 5 Barangay\\b39.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void brs(){
    std::string act;
    std::cout << "\n======= Baras (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 4803";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 5 Barangay\\b40.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void bto(){
    std::string act;
    std::cout << "\n======= Bato (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 4801";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 5 Barangay\\b41.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void crmorn(){
    std::string act;
    std::cout << "\n======= Caramoran (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 4808";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 5 Barangay\\b42.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void ggmt(){
    std::string act;
    std::cout << "\n======= Gigmoto (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 4804";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 5 Barangay\\b43.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void buko_pndn(){
    std::string act;
    std::cout << "\n======= Pandan (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 4809";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 5 Barangay\\b44.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void dnger(){
    std::string act;
    std::cout << "\n======= Panganiban (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 4806";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 5 Barangay\\b45.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void san_ads(){
    std::string act;
    std::cout << "\n======= San Andres (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 4810";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 5 Barangay\\b46.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void pilsen(){
    std::string act;
    std::cout << "\n======= San Miguel (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 4802";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 5 Barangay\\b47.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void vga(){
    std::string act;
    std::cout << "\n======= Viga (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 4805";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 5 Barangay\\b48.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
// Masbate
void msbt_city(){
    std::string act;
    std::cout << "\n======= Masbate City (Capital City) =======\n" << std::endl;
    std::cout << "Zip Code: 5400";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 5 Barangay\\b49.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void array(){
    std::string act;
    std::cout << "\n======= Aroroy (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 5414";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 5 Barangay\\b50.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void bln(){
    std::string act;
    std::cout << "\n======= Baleno (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 5413";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 5 Barangay\\b51.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void blud(){
    std::string act;
    std::cout << "\n======= Balud (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 5412";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 5 Barangay\\b52.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void btuan(){
    std::string act;
    std::cout << "\n======= Batuan (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 5415";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 5 Barangay\\b53.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void ctingan(){
    std::string act;
    std::cout << "\n======= Cataingan (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 5405";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 5 Barangay\\b54.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void cwyan(){
    std::string act;
    std::cout << "\n======= Cawayan (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 5409";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 5 Barangay\\b55.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void clvria(){
    std::string act;
    std::cout << "\n======= Claveria (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 5419";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 5 Barangay\\b56.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void dmslng(){
    std::string act;
    std::cout << "\n======= Dimasalang (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 5403";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 5 Barangay\\b57.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void esprnza(){
    std::string act;
    std::cout << "\n======= Esperanza (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 5407";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 5 Barangay\\b58.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void mndon(){
    std::string act;
    std::cout << "\n======= Mandaon (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 5411";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 5 Barangay\\b59.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void mlgros(){
    std::string act;
    std::cout << "\n======= Milagros (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 5410";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 5 Barangay\\b60.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void mobpscho(){
    std::string act;
    std::cout << "\n======= Mobo (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 5401";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 5 Barangay\\b61.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void mnrel(){
    std::string act;
    std::cout << "\n======= Monreal (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 5418";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 5 Barangay\\b62.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void plns(){
    std::string act;
    std::cout << "\n======= Palanas (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 5404";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 5 Barangay\\b63.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void pvc_pipe(){
    std::string act;
    std::cout << "\n======= Pio V. Corpus (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 5406";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 5 Barangay\\b64.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void plcer(){
    std::string act;
    std::cout << "\n======= Placer (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 5408";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 5 Barangay\\b65.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void san_frnndo(){
    std::string act;
    std::cout << "\n======= San Fernando (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 5416";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 5 Barangay\\b66.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void san_jcnto(){
    std::string act;
    std::cout << "\n======= San Jacinto (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 5417";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 5 Barangay\\b67.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void san_papa_p(){
    std::string act;
    std::cout << "\n======= San Pascual (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 5420";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 5 Barangay\\b68.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void usn(){
    std::string act;
    std::cout << "\n======= Uson (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 5402";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 5 Barangay\\b69.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
// Sorsogon
void srsgon_city(){
    std::string act;
    std::cout << "\n======= Sorsogon City (Capital City) =======\n" << std::endl;
    std::cout << "Zip Code: 4700";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 5 Barangay\\b70.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void brcln(){
    std::string act;
    std::cout << "\n======= Barcelona (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 4712";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 5 Barangay\\b71.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void blan(){
    std::string act;
    std::cout << "\n======= Bulan (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 4706";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 5 Barangay\\b72.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void blsan(){
    std::string act;
    std::cout << "\n======= Bulusan (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 4704";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 5 Barangay\\b103.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void csgran(){
    std::string act;
    std::cout << "\n======= Casiguran (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 4702";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 5 Barangay\\b104.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void cstlla(){
    std::string act;
    std::cout << "\n======= Castilla (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 4713";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 5 Barangay\\b105.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void dnsl(){
    std::string act;
    std::cout << "\n======= Donsol (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 4715";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 5 Barangay\\b106.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void forst(){
    std::string act;
    std::cout << "\n======= Gubat (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 4710";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 5 Barangay\\b107.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void irsn(){
    std::string act;
    std::cout << "\n======= Irosin (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 4707";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 5 Barangay\\b108.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void jojo(){
    std::string act;
    std::cout << "\n======= Juban (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 4704";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 5 Barangay\\b109.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void mgllnes(){
    std::string act;
    std::cout << "\n======= Magallanes (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 4705";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 5 Barangay\\b110.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void mtnog(){
    std::string act;
    std::cout << "\n======= Matnog (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 4708";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 5 Barangay\\b111.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void plar(){
    std::string act;
    std::cout << "\n======= Pilar (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 4714";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 5 Barangay\\b112.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void prito_diz(){
    std::string act;
    std::cout << "\n======= Prieto Diaz (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 4711";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 5 Barangay\\b113.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void snt_mgdlna(){
    std::string act;
    std::cout << "\n======= Santa Magdalena (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 4709";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 5 Barangay\\b114.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}


//　Region 1 - Ash
// Ilocos Norte - Cities and Municipalities

void lag(){
    std::string act;
    std::cout << "\n======= Laoag (City) =======\n" << std::endl;
    std::cout << "Zip Code: 2900 ";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 1 Barangay\\b1.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void batacs(){
    std::string act;
    std::cout << "\n======= Batac (City) =======\n" << std::endl;
    std::cout << "Zip Code: 2906 ";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 1 Barangay\\b2.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void adms(){
    std::string act;
    std::cout << "\n======= Adams (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 2922 ";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 1 Barangay\\b3.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void bcrra(){
    std::string act;
    std::cout << "\n======= Bacarra (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 2916 ";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 1 Barangay\\b4.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void bdc(){
    std::string act;
    std::cout << "\n======= Badoc (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 2904 ";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 1 Barangay\\b5.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void bngui(){
    std::string act;
    std::cout << "\n======= Bangui (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 2920 ";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 1 Barangay\\b6.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void bnna(){
    std::string act;
    std::cout << "\n======= Banna(Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 2908 ";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 1 Barangay\\b7.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void brgs(){
    std::string act;
    std::cout << "\n======= Burgos (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 2918 ";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 1 Barangay\\b8.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void carc(){
    std::string act;
    std::cout << "\n======= Carasi (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 2911 ";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 1 Barangay\\b9.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void crrmao(){
    std::string act;
    std::cout << "\n======= Currimao (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 2903 ";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 1 Barangay\\b10.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void dngrs(){
    std::string act;
    std::cout << "\n======= Dingras (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 2913";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 1 Barangay\\b11.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void dumlng(){
    std::string act;
    std::cout << "\n======= Dumalneg (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 2921 ";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 1 Barangay\\b12.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void mrcs(){
    std::string act;
    std::cout << "\n======= Marcos (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 2907 ";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 1 Barangay\\b13.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void nuev_era(){
    std::string act;
    std::cout << "\n======= Nueva Era (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 2909 ";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 1 Barangay\\b14.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void pgdpd(){
    std::string act;
    std::cout << "\n======= Pagudpud (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 2919 ";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 1 Barangay\\b15.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void pawayz(){
    std::string act;
    std::cout << "\n======= Paoay (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 2902 ";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 1 Barangay\\b16.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void psquin(){
    std::string act;
    std::cout << "\n======= Pasuquin (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 2917 ";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 1 Barangay\\b17.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void pddg(){
    std::string act;
    std::cout << "\n======= Piddig (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 2912 ";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 1 Barangay\\b18.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void pnli(){
    std::string act;
    std::cout << "\n======= Pinili (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 2905 ";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 1 Barangay\\b19.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void san_nicos(){
    std::string act;
    std::cout << "\n======= San Nicolas (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 2901";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 1 Barangay\\b20.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void srrt(){
    std::string act;
    std::cout << "\n======= Sarrat (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 2914 ";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 1 Barangay\\b21.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void solsn(){
    std::string act;
    std::cout << "\n======= Solsona (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 2910 ";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 1 Barangay\\b22.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void vnctr(){
    std::string act;
    std::cout << "\n======= Vintar (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 2915 ";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 1 Barangay\\b23.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

// Ilocos Sur

void vegan(){
    std::string act;
    std::cout << "\n======= Vigan (City) =======\n" << std::endl;
    std::cout << "Zip Code: 2700 ";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 1 Barangay\\b24.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void cndn(){
    std::string act;
    std::cout << "\n======= Candon (City) =======\n" << std::endl;
    std::cout << "Zip Code: 2710";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 1 Barangay\\b25.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void allm(){
    std::string act;
    std::cout << "\n======= Alilem (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 2716 ";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 1 Barangay\\b26.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void bnyyo(){
    std::string act;
    std::cout << "\n======= Banayoyo (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 2708 ";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 1 Barangay\\b27.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void bnty(){
    std::string act;
    std::cout << "\n======= Bantay (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 2727";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 1 Barangay\\b28.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void bgs(){
    std::string act;
    std::cout << "\n======= Burgos (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 2724";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 1 Barangay\\b29.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void cbgao(){
    std::string act;
    std::cout << "\n======= Cabugao (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 2732";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 1 Barangay\\b30.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void cawayan(){
    std::string act;
    std::cout << "\n======= Caoayan (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 2702";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 1 Barangay\\b31.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void crvnts(){
    std::string act;
    std::cout << "\n======= Cervantes (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 2718";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 1 Barangay\\b32.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void glmyd(){
    std::string act;
    std::cout << "\n======= Galimuyod (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 2709";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 1 Barangay\\b33.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void delplar(){
    std::string act;
    std::cout << "\n======= Gregorio Del Pilar (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 2720";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 1 Barangay\\b34.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void lidlid(){
    std::string act;
    std::cout << "\n======= Lidlidda (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 2723";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 1 Barangay\\b35.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void mgcngl(){
    std::string act;
    std::cout << "\n======= Magsingal (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 2730";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 1 Barangay\\b36.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void ngbkl(){
    std::string act;
    std::cout << "\n======= Nagbukel (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 2725";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 1 Barangay\\b37.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void nrvcn(){
    std::string act;
    std::cout << "\n======= Narvacan (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 2704";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 1 Barangay\\b38.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void qrno(){
    std::string act;
    std::cout << "\n======= Quirino (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 2721";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 1 Barangay\\b39.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void slcdo(){
    std::string act;
    std::cout << "\n======= Salcedo (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 2711";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 1 Barangay\\b40.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void san_emi(){
    std::string act;
    std::cout << "\n======= San Emilio (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 2722";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 1 Barangay\\b41.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void san_st(){
    std::string act;
    std::cout << "\n======= San Esteban (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 2706";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 1 Barangay\\b42.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void san_idy(){
    std::string act;
    std::cout << "\n======= San Ildefonso (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 2728";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 1 Barangay\\b43.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void san_jn_v2() { 
    std::string act;
    std::cout << "\n======= San Juan (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 2731";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 1 Barangay\\b44.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void san_vi(){
    std::string act;
    std::cout << "\n======= San Vicente (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 2726";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 1 Barangay\\b45.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void snt(){
    std::string act;
    std::cout << "\n======= Santa (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 2703";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 1 Barangay\\b46.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void snt_ctln(){
    std::string act;
    std::cout << "\n======= Santa Catalina (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 2701";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 1 Barangay\\b47.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void snt_crz(){
    std::string act;
    std::cout << "\n======= Santa Cruz (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 2713";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 1 Barangay\\b48.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void snt_lc(){
    std::string act;
    std::cout << "\n======= Santa Lucia (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 2712";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 1 Barangay\\b49.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void snt_mr(){
    std::string act;
    std::cout << "\n======= Santa Maria (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 2705";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 1 Barangay\\b50.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void sntgooo(){
    std::string act;
    std::cout << "\n======= Santiago (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 2707";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 1 Barangay\\b51.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void snt_dmngo(){
    std::string act;
    std::cout << "\n======= Santo Domingo (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 2729";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 1 Barangay\\b52.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void cgay(){
    std::string act;
    std::cout << "\n======= Sigay (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 2719";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 1 Barangay\\b53.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void cnait(){
    std::string act;
    std::cout << "\n======= Sinait (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 2733";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 1 Barangay\\b54.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void sgpn(){
    std::string act;
    std::cout << "\n======= Sugpon (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 2717";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 1 Barangay\\b55.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void suyi(){
    std::string act;
    std::cout << "\n======= Suyo (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 2715";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 1 Barangay\\b56.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void tgdn(){
    std::string act;
    std::cout << "\n======= Tagudin (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 2714";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 1 Barangay\\b57.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

// La Union cities and municipalities

void sn_fnndo(){
    std::string act;
    std::cout << "\n======= San Fernando (City) =======\n" << std::endl;
    std::cout << "Zip Code: 2500";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 1 Barangay\\b58.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void aggo(){
    std::string act;
    std::cout << "\n======= Agoo (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 2504";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 1 Barangay\\b59.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void arngy(){
    std::string act;
    std::cout << "\n======= Aringay (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 2503";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 1 Barangay\\b60.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void bcntn(){
    std::string act;
    std::cout << "\n======= Bacnotan (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 2515";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 1 Barangay\\b61.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void bgln(){
    std::string act;
    std::cout << "\n======= Bagulin (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 2512";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 1 Barangay\\b62.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void blano_ns(){
    std::string act;
    std::cout << "\n======= Balaoan (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 2517";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 1 Barangay\\b63.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void bngr(){
    std::string act;
    std::cout << "\n======= Bangar (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 2519";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 1 Barangay\\b64.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void bang(){
    std::string act;
    std::cout << "\n======= Bauang (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 2501";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 1 Barangay\\b65.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void brgss(){
    std::string act;
    std::cout << "\n======= Burgos (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 2510";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 1 Barangay\\b66.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void cba(){
    std::string act;
    std::cout << "\n======= Caba (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 2502";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 1 Barangay\\b67.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void lnaa(){
    std::string act;
    std::cout << "\n======= Luna (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 2518";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 1 Barangay\\b68.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void nagilan(){
    std::string act;
    std::cout << "\n======= Naguilian (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 2511";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 1 Barangay\\b69.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void pgo(){
    std::string act;
    std::cout << "\n======= Pugo (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 2508";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 1 Barangay\\b70.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void rsr_io(){
    std::string act;
    std::cout << "\n======= Rosario (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 2506";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 1 Barangay\\b71.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void sng_briel(){
    std::string act;
    std::cout << "\n======= San Gabriel (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 2513";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 1 Barangay\\b72.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void san_jun(){
    std::string act;
    std::cout << "\n======= San Juan (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 2514";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 1 Barangay\\b73.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void satomas(){
    std::string act;
    std::cout << "\n======= Santo Tomas (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 2505";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 1 Barangay\\b74.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void sntl(){
    std::string act;
    std::cout << "\n======= Santol (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 2516";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 1 Barangay\\b75.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void sudpn(){
    std::string act;
    std::cout << "\n======= Sudipen (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 2520";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 1 Barangay\\b76.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void tbao(){
    std::string act;
    std::cout << "\n======= Tubao (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 2509";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 1 Barangay\\b23.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

// Pangasinan cities and municipalities

void dgpnct(){
    std::string act;
    std::cout << "\n======= Dagupan (City) =======\n" << std::endl;
    std::cout << "Zip Code: 2400";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 1 Barangay\\b78.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void scct(){
    std::string act;
    std::cout << "\n======= San Carlos (City) =======\n" << std::endl;
    std::cout << "Zip Code: 2420";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 1 Barangay\\b79.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void urdnt(){
    std::string act;
    std::cout << "\n======= Urdaneta (City) =======\n" << std::endl;
    std::cout << "Zip Code: 2428";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 1 Barangay\\b80.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void almns(){
    std::string act;
    std::cout << "\n======= Alaminos (City) =======\n" << std::endl;
    std::cout << "Zip Code: 2404";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 1 Barangay\\b81.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void agn(){
    std::string act;
    std::cout << "\n======= Agno (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 2408";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 1 Barangay\\b82.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void alcl(){
    std::string act;
    std::cout << "\n======= Alcala (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 2425";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 1 Barangay\\b83.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void andaaa(){
    std::string act;
    std::cout << "\n======= Anda (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 2405";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 1 Barangay\\b84.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void acngn(){
    std::string act;
    std::cout << "\n======= Asingan (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 2439";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 1 Barangay\\b85.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void blng(){
    std::string act;
    std::cout << "\n======= Balungao (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 2442";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 1 Barangay\\b86.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void baniii(){
    std::string act;
    std::cout << "\n======= Bani (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 2407";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 1 Barangay\\b87.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void bssta(){
    std::string act;
    std::cout << "\n======= Basista (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 2422";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 1 Barangay\\b88.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void bautst(){
    std::string act;
    std::cout << "\n======= Bautista (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 2424";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 1 Barangay\\b89.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void bymbng(){
    std::string act;
    std::cout << "\n=======　Bayambang (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 2423";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 1 Barangay\\b90.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void bnlnn(){
    std::string act;
    std::cout << "\n=======　Binalonan (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 2436";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 1 Barangay\\b91.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void bnmly(){
    std::string act;
    std::cout << "\n=======　Binmaley (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 2417";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 1 Barangay\\b92.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void blnao(){
    std::string act;
    std::cout << "\n=======　Bolinao (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 2406";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 1 Barangay\\b93.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void bglln(){
    std::string act;
    std::cout << "\n=======　Bugallon (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 2416";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 1 Barangay\\b94.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void brgsss(){
    std::string act;
    std::cout << "\n=======　Burgos (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 2410";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 1 Barangay\\b95.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void clss(){
    std::string act;
    std::cout << "\n=======　Calasiao (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 2418";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 1 Barangay\\b96.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void dsol(){
    std::string act;
    std::cout << "\n=======　Dasol (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 2411";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 1 Barangay\\b97.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void nfnta(){
    std::string act;
    std::cout << "\n=======　Infanta (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 2412";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 1 Barangay\\b98.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void lbrdr(){
    std::string act;
    std::cout << "\n=======　Labrador (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 2402";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 1 Barangay\\b99.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void laok(){
    std::string act;
    std::cout << "\n=======　Laoac (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 2437";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 1 Barangay\\b100.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void lngyn(){
    std::string act;
    std::cout << "\n=======　Lingayen (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 2401";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 1 Barangay\\b101.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void mbini(){
    std::string act;
    std::cout << "\n=======　Mabini (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 2409";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 1 Barangay\\b102.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void malacq(){
    std::string act;
    std::cout << "\n=======　Malasiqui (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 2421";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 1 Barangay\\b103.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void manawag(){
    std::string act;
    std::cout << "\n=======　Manaoag (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 2430";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 1 Barangay\\b104.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void mngldn(){
    std::string act;
    std::cout << "\n=======　Mangaldan (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 2432";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 1 Barangay\\b105.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void mngtrn(){
    std::string act;
    std::cout << "\n=======　Mangataren (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 2413";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 1 Barangay\\b106.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void mpndn(){
    std::string act;
    std::cout << "\n=======　Mapandan (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 2429";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 1 Barangay\\b107.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void ntvdad(){
    std::string act;
    std::cout << "\n=======　Natividad (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 2446";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 1 Barangay\\b108.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void pzrrbio(){
    std::string act;
    std::cout << "\n=======　Pozorrubio (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 2435";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 1 Barangay\\b109.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void rsls(){
    std::string act;
    std::cout << "\n=======　Rosales (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 2441";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 1 Barangay\\b110.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void san_fb(){
    std::string act;
    std::cout << "\n=======　San Fabian (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 2433";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 1 Barangay\\b111.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void snjcnto(){
    std::string act;
    std::cout << "\n=======　San Jacinto (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 2431";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 1 Barangay\\b112.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void snm_nel(){
    std::string act;
    std::cout << "\n=======　San Manuel (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 2438";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 1 Barangay\\b113.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void snncls(){
    std::string act;
    std::cout << "\n=======　San Nicolas (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 2447";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 1 Barangay\\b114.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void snkntn(){
    std::string act;
    std::cout << "\n=======　San Quintin (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 2444";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 1 Barangay\\b115.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void sntbrbra(){
    std::string act;
    std::cout << "\n=======　Santa Barbara (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 2419";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 1 Barangay\\b116.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void sntmria(){
    std::string act;
    std::cout << "\n=======　Santa Maria (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 2440";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 1 Barangay\\b117.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void stotoms(){
    std::string act;
    std::cout << "\n=======　Santo Tomas (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 2426";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 1 Barangay\\b118.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void cson(){
    std::string act;
    std::cout << "\n=======　Sison (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 2434";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 1 Barangay\\b119.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void sualll(){
    std::string act;
    std::cout << "\n=======　Sual (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 2403";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 1 Barangay\\b120.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void taug(){
    std::string act;
    std::cout << "\n=======　Tayug (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 2445";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 1 Barangay\\b121.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void umngn(){
    std::string act;
    std::cout << "\n=======　Umingan (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 2443";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 1 Barangay\\b122.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void rbiztndo(){
    std::string act;
    std::cout << "\n=======　Urbioztondo (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 2414";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 1 Barangay\\b123.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void vlls(){
    std::string act;
    std::cout << "\n=======　Villasis (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 2427";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 1 Barangay\\b124.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

// REGION 2
// Batanes

void bsco(){
    std::string act;
    std::cout << "\n=======　Basco (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 3900";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 2 Barangay\\b1.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void itbyt(){
    std::string act;
    std::cout << "\n=======　Itbayat (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 3905";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 2 Barangay\\b2.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void ivna(){
    std::string act;
    std::cout << "\n=======　Ivana (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 3902";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 2 Barangay\\b3.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void mhtao(){
    std::string act;
    std::cout << "\n=======　Mahatao (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 3901";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 2 Barangay\\b4.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void sbtng(){
    std::string act;
    std::cout << "\n=======　Sabtang (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 3904";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 2 Barangay\\b5.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void uygn(){
    std::string act;
    std::cout << "\n=======　Uyugan (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 3903";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 2 Barangay\\b6.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

// Cagayan cities and municipalities

void tggrao(){
    std::string act;
    std::cout << "\n=======　Tuguegarao (City) =======\n" << std::endl;
    std::cout << "Zip Code: 3500";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 2 Barangay\\b7.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void alcssl(){
    std::string act;
    std::cout << "\n=======　Alcala (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 3507";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 2 Barangay\\b8.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void allcpn(){
    std::string act;
    std::cout << "\n=======　Allacapan (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 3523";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 2 Barangay\\b9.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void amlng(){
    std::string act;
    std::cout << "\n=======　Amulung (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 3505";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 2 Barangay\\b10.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void aprri(){
    std::string act;
    std::cout << "\n=======　Aparri (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 3515";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 2 Barangay\\b11.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void bggo(){
    std::string act;
    std::cout << "\n=======　Baggao (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 3506";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 2 Barangay\\b12.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void bllstrs(){
    std::string act;
    std::cout << "\n=======　Ballesteros (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 3516";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 2 Barangay\\b13.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void bugy(){
    std::string act;
    std::cout << "\n=======　Buguey (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 3511";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 2 Barangay\\b14.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void clyn(){
    std::string act;
    std::cout << "\n=======　Calayan (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 3520";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 2 Barangay\\b15.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void cmlngn(){
    std::string act;
    std::cout << "\n=======　Camalaniugan (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 3510";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 2 Barangay\\b16.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void clv_ia(){
    std::string act;
    std::cout << "\n=======　Claveria (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 3519";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 2 Barangay\\b17.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void nrle(){
    std::string act;
    std::cout << "\n=======　Enrile (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 3501";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 2 Barangay\\b18.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void gtrrn(){
    std::string act;
    std::cout << "\n=======　Gattaran (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 3508";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 2 Barangay\\b19.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void gnzga(){
    std::string act;
    std::cout << "\n=======　Gonzaga (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 3513";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 2 Barangay\\b20.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void igig(){
    std::string act;
    std::cout << "\n=======　Iguig (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 3504";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 2 Barangay\\b21.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void lalo(){
    std::string act;
    std::cout << "\n=======　Lal-lo (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 3509";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 2 Barangay\\b22.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void lsam(){
    std::string act;
    std::cout << "\n=======　Lasam (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 3524";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 2 Barangay\\b23.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void pmplona(){
    std::string act;
    std::cout << "\n=======　Pamplona (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 3522";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 2 Barangay\\b24.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void pnblnca(){
    std::string act;
    std::cout << "\n=======　Peñablanca (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 3502";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 2 Barangay\\b25.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void piyat(){
    std::string act;
    std::cout << "\n=======　Piat (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 3527";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 2 Barangay\\b26.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void rizzal(){
    std::string act;
    std::cout << "\n=======　Rizal (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 3526";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 2 Barangay\\b27.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void snchzmra(){
    std::string act;
    std::cout << "\n=======　Sanchez-Mira (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 3518";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 2 Barangay\\b28.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void staanaa(){
    std::string act;
    std::cout << "\n=======　Santa Ana (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 3514";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 2 Barangay\\b29.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void staprax(){
    std::string act;
    std::cout << "\n=======　Santa Praxedes (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 3521";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 2 Barangay\\b30.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void statere(){
    std::string act;
    std::cout << "\n=======　Santa Teresita (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 3512";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 2 Barangay\\b31.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void stoninoo(){
    std::string act;
    std::cout << "\n=======　Santo Niño (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 3525";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 2 Barangay\\b32.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}


void soln(){
    std::string act;
    std::cout << "\n=======　Solana (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 3503";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 2 Barangay\\b33.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}


void twowz(){
    std::string act;
    std::cout << "\n=======　Tuao (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 3528";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 2 Barangay\\b34.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

// Isabela cities and municipalities

void ilgnct(){
    std::string act;
    std::cout << "\n=======　Ilagan (City) =======\n" << std::endl;
    std::cout << "Zip Code: 3300";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 2 Barangay\\b35.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void kwynct(){
    std::string act;
    std::cout << "\n=======　Cauayan (City) =======\n" << std::endl;
    std::cout << "Zip Code: 3305";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 2 Barangay\\b36.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void snt_go(){
    std::string act;
    std::cout << "\n=======　Santiago (City) =======\n" << std::endl;
    std::cout << "Zip Code: 3311";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 2 Barangay\\b37.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void alsya(){
    std::string act;
    std::cout << "\n=======　Alicia (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 3306";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 2 Barangay\\b38.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void angdnn(){
    std::string act;
    std::cout << "\n=======　Angadanan (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 3307";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 2 Barangay\\b39.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void aaqes(){
    std::string act;
    std::cout << "\n=======　Aurora (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 3316";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 2 Barangay\\b40.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void bntoslvn(){
    std::string act;
    std::cout << "\n=======　Benito Soliven (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 3331";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 2 Barangay\\b41.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void brgoz(){
    std::string act;
    std::cout << "\n=======　Burgos (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 3322";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 2 Barangay\\b42.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void cbgn(){
    std::string act;
    std::cout << "\n=======　Cabagan (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 3328";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 2 Barangay\\b43.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void cbtan(){
    std::string act;
    std::cout << "\n=======　Cabatuan (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 3315";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 2 Barangay\\b44.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void crdn(){
    std::string act;
    std::cout << "\n=======　Cordon (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 3312";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 2 Barangay\\b45.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void dlfnalbn(){
    std::string act;
    std::cout << "\n=======　Delfion Albano (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 3326";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 2 Barangay\\b46.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void dnapd(){
    std::string act;
    std::cout << "\n=======　Dinapigue (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 3336";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 2 Barangay\\b47.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void dvlkn(){
    std::string act;
    std::cout << "\n=======　Divilacan (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 3335";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 2 Barangay\\b48.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void echags(){
    std::string act;
    std::cout << "\n=======　Echague (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 3309";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 2 Barangay\\b49.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void gmo(){
    std::string act;
    std::cout << "\n=======　Gamu (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 3301";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 2 Barangay\\b50.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void jns(){
    std::string act;
    std::cout << "\n=======　Jones (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 3313";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 2 Barangay\\b51.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void lna(){
    std::string act;
    std::cout << "\n=======　Luna (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 3304";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 2 Barangay\\b52.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void mconcn(){
    std::string act;
    std::cout << "\n=======　Maconacon (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 3333";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 2 Barangay\\b53.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void mllg(){
    std::string act;
    std::cout << "\n=======　Mallig (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 3323";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 2 Barangay\\b54.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void nagln(){
    std::string act;
    std::cout << "\n=======　Naguilian (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 3302";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 2 Barangay\\b55.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void plnn(){
    std::string act;
    std::cout << "\n=======　Palanan (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 3334";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 2 Barangay\\b56.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void qzone(){
    std::string act;
    std::cout << "\n=======　Quezon (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 3324";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 2 Barangay\\b57.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void grno(){
    std::string act;
    std::cout << "\n=======　Quirino (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 3321";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 2 Barangay\\58.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void rmon(){
    std::string act;
    std::cout << "\n=======　Ramon (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 3319";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 2 Barangay\\b59.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void reinmer(){
    std::string act;
    std::cout << "\n=======　Reina Mercedes (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 3303";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 2 Barangay\\b60.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void roxs(){
    std::string act;
    std::cout << "\n=======　Roxas (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 3320";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 2 Barangay\\b61.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void snagstn(){
    std::string act;
    std::cout << "\n=======　San Agustin (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 3314";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 2 Barangay\\b62.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void sngllrm(){
    std::string act;
    std::cout << "\n=======　San Guillermo (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 3308";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 2 Barangay\\b63.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void snisdr(){
    std::string act;
    std::cout << "\n=======　San Isidro (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 3310";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 2 Barangay\\b64.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void snmnel(){
    std::string act;
    std::cout << "\n=======　San Manuel (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 3317";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 2 Barangay\\b65.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void snmrno(){
    std::string act;
    std::cout << "\n=======　San Mariano (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 3332";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 2 Barangay\\b66.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void snmto(){
    std::string act;
    std::cout << "\n=======　San Mateo (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 3318";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 2 Barangay\\b67.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void snpblo(){
    std::string act;
    std::cout << "\n=======　San Pablo (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 3329";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 2 Barangay\\b68.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void stamra(){
    std::string act;
    std::cout << "\n=======　Santa Maria (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 3330";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 2 Barangay\\b69.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void sto_toms(){
    std::string act;
    std::cout << "\n=======　Santo Tomas (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 3327";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 2 Barangay\\b70.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void tumwni(){
    std::string act; 
    std::cout << "\n=======　Tumauini (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 3325";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 2 Barangay\\b71.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

//Nueva Vizcaya cities and municipalities

void alfnscn(){
    std::string act;
    std::cout << "\n=======　Alfonso Castañeda (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 3714";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 2 Barangay\\b72.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void ambgo(){
    std::string act;
    std::cout << "\n=======　Ambaguio (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 3701";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 2 Barangay\\b73.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void arto(){
    std::string act;
    std::cout << "\n=======　Aritao (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 3704";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 2 Barangay\\b74.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void bgbg(){
    std::string act;
    std::cout << "\n=======　Bagabag (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 3711";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 2 Barangay\\b75.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void bang_bang(){
    std::string act;
    std::cout << "\n=======　Bambang (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 3702";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 2 Barangay\\b76.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void bym_bang(){
    std::string act;
    std::cout << "\n=======　Bayombong (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 3700";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 2 Barangay\\b77.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void diads(){
    std::string act;
    std::cout << "\n=======　Diadi (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 3712";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 2 Barangay\\b78.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void dpn(){
    std::string act;
    std::cout << "\n=======　Dupax del Norte (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 3706";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 2 Barangay\\b79.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void dps(){
    std::string act;
    std::cout << "\n=======　Dupax del Sur (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 3707";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 2 Barangay\\b80.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void ksbu(){
    std::string act;
    std::cout << "\n=======　Kasibu (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 3703";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 2 Barangay\\b81.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void kyaps(){
    std::string act;
    std::cout << "\n=======　Kayapa (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 3708";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 2 Barangay\\b82.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void qzono(){
    std::string act;
    std::cout << "\n=======　Quezon (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 3713";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 2 Barangay\\b83.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void stafet(){
    std::string act;
    std::cout << "\n=======　Santa Fe (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 3705";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 2 Barangay\\b84.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void solno(){
    std::string act;
    std::cout << "\n=======　Solano (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 3709";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 2 Barangay\\b85.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void villvrd(){
    std::string act;
    std::cout << "\n=======　Villaverde (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 3710";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 2 Barangay\\b86.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

//Quirino cities and municipalities

void agpay(){
    std::string act;
    std::cout << "\n=======　Aglipay (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 3403";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 2 Barangay\\b87.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void cabs(){
    std::string act;
    std::cout << "\n=======　Cabarroguis (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 3400";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 2 Barangay\\b88.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void diffs(){
    std::string act;
    std::cout << "\n=======　Diffun (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 3401";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 2 Barangay\\b89.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void mads(){
    std::string act;
    std::cout << "\n=======　Maddela (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 3404";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 2 Barangay\\b90.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void nagtips(){
    std::string act;
    std::cout << "\n=======　Nagtipunan (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 3405";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 2 Barangay\\b91.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void sagdy(){
    std::string act;
    std::cout << "\n=======　Saguday (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 3402";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 2 Barangay\\b92.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void clocan(){
    std::string act;
    std::cout << "\n======= caloocan (city) =======\n" << std::endl;
    std::cout << "Zip Code: 1420 - 1428";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\NCR Barangay\\b1.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
    

}
void ls_pns(){
    std::string act;
    std::cout << "\n======= LAS PINAS (city) =======\n" << std::endl;
    std::cout << "Zip Code: 1740 - 1750";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\NCR Barangay\\b2.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
    
}
void mkati(){
    std::string act;
    std::cout << "\n======= Makati (city) =======\n" << std::endl;
    std::cout << "Zip Code: 1200 - 1630";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\NCR Barangay\\b3.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
    
}
void mlabon(){
    std::string act;
    std::cout << "\n======= Malabon (city) =======\n" << std::endl;
    std::cout << "Zip Code: 1470 - 1475";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\NCR Barangay\\b4.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
    

}
void mndluyng(){
    std::string act;
    std::cout << "\n======= Mandaluyong (city) =======\n" << std::endl;
    std::cout << "Zip Code: 1550";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\NCR Barangay\\b5.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
    

}
void mnila(){
    std::string act;
    std::cout << "\n======= Manila (city) =======\n" << std::endl;
    std::cout << "Zip Code: 1000 - 1013";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\NCR Barangay\\b6.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
    

}
void mrikin(){
    std::string act;
    std::cout << "\n======= Marikina (city) =======\n" << std::endl;
    std::cout << "Zip Code: 1800 - 1811";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\NCR Barangay\\b7.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
    

}
void mntinlpa(){
    std::string act;
    std::cout << "\n======= Muntinlupa (city) =======\n" << std::endl;
    std::cout << "Zip Code: 1770 - 1776";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\NCR Barangay\\b8.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
    

}
void nvots(){
    std::string act;
    std::cout << "\n======= Navotas (city) =======\n" << std::endl;
    std::cout << "Zip Code: 1485 - 1490";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\NCR Barangay\\b9.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
    

}
void prnaue(){
    std::string act;
    std::cout << "\n======= Paranaque (city) =======\n" << std::endl;
    std::cout << "Zip Code: 1700 - 1718";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\NCR Barangay\\b10.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
    

}
void psay(){
    std::string act;
    std::cout << "\n======= Pasay (city) =======\n" << std::endl;
    std::cout << "Zip Code:  1300 - 1309";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\NCR Barangay\\b11.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
    

}
void psig(){
    std::string act;
    std::cout << "\n======= Pasig (city) =======\n" << std::endl;
    std::cout << "Zip Code: 1600 - 1612";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\NCR Barangay\\b12.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
    

}
void qezon_city(){
    std::string act;
    std::cout << "\n======= Quezon City (city) =======\n" << std::endl;
    std::cout << "Zip Code: 1100 - 1119";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\NCR Barangay\\b13.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
    

}
void san_jn(){
    std::string act;
    std::cout << "\n======= San Juan (city) =======\n" << std::endl;
    std::cout << "Zip Code: 1500";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\NCR Barangay\\b14.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
    

}
void tgig(){
    std::string act;
    std::cout << "\n======= Taguig (city) =======\n" << std::endl;
    std::cout << "Zip Code: 1630 - 1638";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\NCR Barangay\\b15.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
    

}
void vlenzela(){
    std::string act;
    std::cout << "\n======= Valenzuela (city) =======\n" << std::endl;
    std::cout << "Zip Code:  1440 - 1448";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\NCR Barangay\\b16.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
    

}
void pters(){
    std::string act;
    std::cout << "\n======= Pateros (city) =======\n" << std::endl;
    std::cout << "Zip Code: 1620";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\NCR Barangay\\b17.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
    

}


/// CAR cities =====================================================================================

//abra
void bnged(){
    std::string act;
    std::cout << "\n======= bengued (city) =======\n" << std::endl;
    std::cout << "Zip Code: 2800";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\CAR Barangay\\b1.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void bucy(){
    std::string act;
    std::cout << "\n======= Bucay (city) =======\n" << std::endl;
    std::cout << "Zip Code: 2805";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\CAR Barangay\\b2.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void blc(){
    std::string act;
    std::cout << "\n======= Bucloc (city) =======\n" << std::endl;
    std::cout << "Zip Code: 2817";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\CAR Barangay\\b3.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void daguman_(){
    std::string act;
    std::cout << "\n======= Daguioman (city) =======\n" << std::endl;
    std::cout << "Zip Code: 2821";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\CAR Barangay\\b4.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void daglas(){
    std::string act;
    std::cout << "\n======= Danglas (city) =======\n" << std::endl;
    std::cout << "Zip Code: 2822";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\CAR Barangay\\b5.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void dlors(){
    std::string act;
    std::cout << "\n======= Dolores (city) =======\n" << std::endl;
    std::cout << "Zip Code: 2811";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\CAR Barangay\\b6.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void l_pz(){
    std::string act;
    std::cout << "\n======= La Paz (city) =======\n" << std::endl;
    std::cout << "Zip Code: 2826";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\CAR Barangay\\b7.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void lcb(){
    std::string act;
    std::cout << "\n======= Lacub (city) =======\n" << std::endl;
    std::cout << "Zip Code: 2820";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\CAR Barangay\\b8.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void lagagilg(){
    std::string act;
    std::cout << "\n======= Lagangilang (city) =======\n" << std::endl;
    std::cout << "Zip Code: 2802";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\CAR Barangay\\b9.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void lgyan(){
    std::string act;
    std::cout << "\n======= Lagayan (city) =======\n" << std::endl;
    std::cout << "Zip Code: 2824";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\CAR Barangay\\b10.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void lngidn(){
    std::string act;
    std::cout << "\n======= Langiden (city) =======\n" << std::endl;
    std::cout << "Zip Code: 2809";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\CAR Barangay\\b11.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void licn_by(){
    std::string act;
    std::cout << "\n======= Licuan-Baay (city) =======\n" << std::endl;
    std::cout << "Zip Code: 2819";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\CAR Barangay\\b12.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void lba_(){
    std::string act;
    std::cout << "\n======= Luba (city) =======\n" << std::endl;
    std::cout << "Zip Code: 2813";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\CAR Barangay\\b13.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void mlbcong(){
    std::string act;
    std::cout << "\n======= Malibcong (city) =======\n" << std::endl;
    std::cout << "Zip Code: 2825";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\CAR Barangay\\b14.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void mnbo(){
    std::string act;
    std::cout << "\n======= Manabo (city) =======\n" << std::endl;
    std::cout << "Zip Code: 2810";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\CAR Barangay\\b15.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void pnrruba(){
    std::string act;
    std::cout << "\n======= Penarrubia (city) =======\n" << std::endl;
    std::cout << "Zip Code: 2804";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\CAR Barangay\\b16.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void pdgan(){
   std::string act;
    std::cout << "\n======= Pidigan (city) =======\n" << std::endl;
    std::cout << "Zip Code: 2806";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\CAR Barangay\\b17.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void plr(){
    std::string act;
    std::cout << "\n======= Pilar (city) =======\n" << std::endl;
    std::cout << "Zip Code: 2812";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\CAR Barangay\\b18.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void sllapdan(){
    std::string act;
    std::cout << "\n======= Sallapadan (city) =======\n" << std::endl;
    std::cout << "Zip Code: 2818";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\CAR Barangay\\b19.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void sn_isdro(){
    std::string act;
    std::cout << "\n======= San Isidro (city) =======\n" << std::endl;
    std::cout << "Zip Code: 2808";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\CAR Barangay\\b20.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void sn_jn_(){
    std::string act;
    std::cout << "\n======= San Juan  (city) =======\n" << std::endl;
    std::cout << "Zip Code: 2823";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\CAR Barangay\\b21.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void sn_qntin(){
    std::string act;
    std::cout << "\n======= San Quintin (city) =======\n" << std::endl;
    std::cout << "Zip Code: 2807";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\CAR Barangay\\b22.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void tyum(){
   std::string act;
    std::cout << "\n======= Tayum (city) =======\n" << std::endl;
    std::cout << "Zip Code: 2803";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\CAR Barangay\\b23.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void tneg(){
    std::string act;
    std::cout << "\n======= Tineg (city) =======\n" << std::endl;
    std::cout << "Zip Code: 2827";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\CAR Barangay\\b24.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void tbo_(){
   std::string act;
    std::cout << "\n======= Tubo (city) =======\n" << std::endl;
    std::cout << "Zip Code: 2815";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\CAR Barangay\\b25.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void vllvicisa_(){
    std::string act;
    std::cout << "\n======= Villaviciosa (city) =======\n" << std::endl;
    std::cout << "Zip Code: 2814";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\CAR Barangay\\b26.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

// apayao ==========================================
void clnsan(){
std::string act;
    std::cout << "\n======= Calanasan (city) =======\n" << std::endl;
    std::cout << "Zip Code: 3814";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\CAR Barangay\\b27.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void cnr(){
    std::string act;
    std::cout << "\n======= Conner (city) =======\n" << std::endl;
    std::cout << "Zip Code: 3807";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\CAR Barangay\\b28.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void flra(){
    std::string act;
    std::cout << "\n======= Flora (city) =======\n" << std::endl;
    std::cout << "Zip Code: 3810";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\CAR Barangay\\b29.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    } 
}

void kbgo(){
    std::string act;
    std::cout << "\n======= Kabugao (city) =======\n" << std::endl;
    std::cout << "Zip Code: 3809";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\CAR Barangay\\b30.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void lunaa_(){
    std::string act;
    std::cout << "\n======= Luna (city) =======\n" << std::endl;
    std::cout << "Zip Code: 3813";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\CAR Barangay\\b31.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void pudtl(){
    std::string act;
    std::cout << "\n======= Pudtol (city) =======\n" << std::endl;
    std::cout << "Zip Code: 3812";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\CAR Barangay\\b32.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void snt_mrcl(){
    std::string act;
    std::cout << "\n======= Santa Marcela (city) =======\n" << std::endl;
    std::cout << "Zip Code: 3811";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\CAR Barangay\\b33.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

// benguet =========================

void atok_(){
    std::string act;
    std::cout << "\n======= Atok (city) =======\n" << std::endl;
    std::cout << "Zip Code: 2612";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\CAR Barangay\\b34.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void bakun_(){
    std::string act;
    std::cout << "\n======= Bakun (city) =======\n" << std::endl;
    std::cout << "Zip Code: 2615";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\CAR Barangay\\b35.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void bokod_(){
    std::string act;
    std::cout << "\n======= Bokod (city) =======\n" << std::endl;
    std::cout << "Zip Code: 2605";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\CAR Barangay\\b36.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void bugis_(){
    std::string act;
    std::cout << "\n======= Buguias (city) =======\n" << std::endl;
    std::cout << "Zip Code: 2607";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\CAR Barangay\\b37.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void itogo_(){
    std::string act;
    std::cout << "\n======= Itogon (city) =======\n" << std::endl;
    std::cout << "Zip Code: 2604";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\CAR Barangay\\b38.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void kabayo_(){
    std::string act;
    std::cout << "\n======= Kabayan (city) =======\n" << std::endl;
    std::cout << "Zip Code: 2606";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\CAR Barangay\\b39.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
} 
void kpngan_(){
    std::string act;
    std::cout << "\n======= Kapangan (city) =======\n" << std::endl;
    std::cout << "Zip Code: 2613";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\CAR Barangay\\b40.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void kbngan_(){
    std::string act;
    std::cout << "\n======= Kibungan (city) =======\n" << std::endl;
    std::cout << "Zip Code: 2611";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\CAR Barangay\\b41.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void l_trndad(){
    std::string act;
    std::cout << "\n======= La Trinidad (city) =======\n" << std::endl;
    std::cout << "Zip Code: 2601";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\CAR Barangay\\b42.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void mnkaya_(){
    std::string act;
    std::cout << "\n======= Mankayan (city) =======\n" << std::endl;
    std::cout << "Zip Code: 2608";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\CAR Barangay\\b43.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

 void sbln_(){
    std::string act;
    std::cout << "\n======= Sablan (city) =======\n" << std::endl;
    std::cout << "Zip Code: 2614";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\CAR Barangay\\b44.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void tubaa_(){
    std::string act;
    std::cout << "\n======= Tuba (city) =======\n" << std::endl;
    std::cout << "Zip Code: 2603";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\CAR Barangay\\b45.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void tbly_(){
    std::string act;
    std::cout << "\n======= Tublay (city) =======\n" << std::endl;
    std::cout << "Zip Code: 2610";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\CAR Barangay\\b46.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

// ifugaoo =============================================
void aginaldo_(){
    std::string act;
    std::cout << "\n======= Aguinaldo (city) =======\n" << std::endl;
    std::cout << "Zip Code: 3606";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\CAR Barangay\\b47.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void alfons_lsta(){
    std::string act;
    std::cout << "\n======= Alfonso Lista (city) =======\n" << std::endl;
    std::cout << "Zip Code: 3608";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\CAR Barangay\\b48.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void aspulo_(){
    std::string act;
    std::cout << "\n======= Asipulo (city) =======\n" << std::endl;
    std::cout << "Zip Code: 3610";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\CAR Barangay\\b49.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void bunue_(){
    std::string act;
    std::cout << "\n======= Banaue (city) =======\n" << std::endl;
    std::cout << "Zip Code: 3601";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\CAR Barangay\\b50.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void hinyn_(){
    std::string act;
    std::cout << "\n======= Hingyon (city) =======\n" << std::endl;
    std::cout << "Zip Code: 3607";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\CAR Barangay\\b51.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void hungdan_(){
    std::string act;
    std::cout << "\n======= Hungduan (city) =======\n" << std::endl;
    std::cout << "Zip Code: 3603";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\CAR Barangay\\b52.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void kingan_(){
    std::string act;
    std::cout << "\n======= Kiangan (city) =======\n" << std::endl;
    std::cout << "Zip Code: 3604";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\CAR Barangay\\b53.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
} 
void lagare_(){
    std::string act;
    std::cout << "\n======= Lagawe (city) =======\n" << std::endl;
    std::cout << "Zip Code: 3600";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\CAR Barangay\\b54.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void lmut_(){
    std::string act;
    std::cout << "\n======= Lamut (city) =======\n" << std::endl;
    std::cout << "Zip Code: 3605";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\CAR Barangay\\b55.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void myyao_(){
    std::string act;
    std::cout << "\n======= Mayoyao (city) =======\n" << std::endl;
    std::cout << "Zip Code: 3602";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\CAR Barangay\\b56.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void tinoc_(){
    std::string act;
    std::cout << "\n======= Tinoc (city) =======\n" << std::endl;
    std::cout << "Zip Code: 3611";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\CAR Barangay\\b57.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

// kalinga =========================================
void tbuk_(){
    std::string act;
    std::cout << "\n======= Tabuk (city) =======\n" << std::endl;
    std::cout << "Zip Code: 3800";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\CAR Barangay\\b58.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void balbln_(){
    std::string act;
    std::cout << "\n======= Balbalan (city) =======\n" << std::endl;
    std::cout << "Zip Code: 3801";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\CAR Barangay\\b59.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void lbgan_(){
    std::string act;
    std::cout << "\n======= Lubuagan (city) =======\n" << std::endl;
    std::cout << "Zip Code: 3802";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\CAR Barangay\\b60.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void psil_(){
    std::string act;
    std::cout << "\n======= Pasil (city) =======\n" << std::endl;
    std::cout << "Zip Code: 3803";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\CAR Barangay\\b61.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void pnkpk_(){
    std::string act;
    std::cout << "\n======= Pinukpuk (city) =======\n" << std::endl;
    std::cout << "Zip Code: 3806";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\CAR Barangay\\b62.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void rizl_(){
    std::string act;
    std::cout << "\n======= Rizal (city) =======\n" << std::endl;
    std::cout << "Zip Code: 3805";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\CAR Barangay\\b63.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void tnudn_(){
    std::string act;
    std::cout << "\n======= Tanudan (city) =======\n" << std::endl;
    std::cout << "Zip Code: 3804";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\CAR Barangay\\b64.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
} 

void tnglyan_(){
    std::string act;
    std::cout << "\n======= Tinglayan (city) =======\n" << std::endl;
    std::cout << "Zip Code: 3807";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\CAR Barangay\\b65.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

// mountain_province ====================================
void brlig_(){
    std::string act;
    std::cout << "\n======= Barlig (city) =======\n" << std::endl;
    std::cout << "Zip Code: 2613";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\CAR Barangay\\b66.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void bako_(){
    std::string act;
    std::cout << "\n======= Bauko (city) =======\n" << std::endl;
    std::cout << "Zip Code: 2610";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\CAR Barangay\\b67.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void beso_(){
    std::string act;
    std::cout << "\n======= Besao (city) =======\n" << std::endl;
    std::cout << "Zip Code: 2618";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\CAR Barangay\\b68.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void bntc_(){
    std::string act;
    std::cout << "\n======= Bontoc (city) =======\n" << std::endl;
    std::cout << "Zip Code: 2616";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\CAR Barangay\\b69.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void ntnin_(){
    std::string act;
    std::cout << "\n======= Natonin (city) =======\n" << std::endl;
    std::cout << "Zip Code: 2614";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\CAR Barangay\\b70.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void prcls_(){
    std::string act;
    std::cout << "\n======= Paracelis (city) =======\n" << std::endl;
    std::cout << "Zip Code: 2612";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\CAR Barangay\\b71.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void sbngan_(){
    std::string act;
    std::cout << "\n======= Sabangan (city) =======\n" << std::endl;
    std::cout << "Zip Code: 2622";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\CAR Barangay\\b72.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void sdanga_(){
    std::string act;
    std::cout << "\n======= Sadanga (city) =======\n" << std::endl;
    std::cout << "Zip Code: 2617";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\CAR Barangay\\b73.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void sgda_(){
    std::string act;
    std::cout << "\n======= Sagada (city) =======\n" << std::endl;
    std::cout << "Zip Code: 2619";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\CAR Barangay\\b74.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
} 

void tdian(){
    std::string act;
    std::cout << "\n======= Tadian (city) =======\n" << std::endl;
    std::cout << "Zip Code: 2611";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\CAR Barangay\\b75.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}


























































