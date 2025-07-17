#pragma once
#include <iostream>
#include <string>
#include <fstream>

/* [Reminder] THIS IS A CITIES FILE - palagi po maglagay ng comments para alam ng mga nag eedit */

// ================================================== 149 cities / 1,493 municipalities ((void)Functionalities) ===========================================================================================================================================

//// ALL CITIES IN LUZON ONLY


// Aurora municipalities

void baler(){
    std::string act;
    std::cout << "\n======= Baler Capital (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 3200"
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
    std::cout << "Zip Code: 3204"

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
    std::cout << "Zip Code: 3205"

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
    std::cout << "Zip Code: 3206"

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
    std::cout << "Zip Code: 3207"

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
    std::cout << "Zip Code: 3203"

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

void mariaurra(){
    std::string act;
    std::cout << "\n======= Maria Aurora (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 3202"

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
    std::cout << "Zip Code: 3201"

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
    std::cout << "Zip Code: 2100"

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
    std::cout << "Zip Code: 3000"

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
    std::cout << "Zip Code: 3020"

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
    std::cout << "Zip Code: 3023" 

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

void sntmria(){
    std::string act;
    std::cout << "\n======= Santa Maria (City) =======\n" << std::endl;
    std::cout << "Zip Code: 3022"

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
    std::cout << "Zip Code: 3132"
    
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
    std::cout << "Zip Code: 3100"

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
    std::cout << "Zip Code: 3105"

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
    std::cout << "Zip Code: 3121"

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
    std::cout << "Zip Code: 3119"

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
    std::cout << "Zip Code: 2000"

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
    std::cout << "Zip Code: 2009"

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
    std::cout << "Zip Code: 2010"

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

void tlc(){
    std::string act;
    std::cout << "\n======= Tarlac (City) =======\n" << std::endl;
    std::cout << "Zip Code: 2300"

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
    std::cout << "Zip Code: 2200"

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

void cavte(){
    std::string act;
    std::cout << "\n======= Cavite (City) =======\n" << std::endl;
    std::cout << "Zip Code: 4100"

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
    std::cout << "Zip Code: 4102"

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
    std::cout << "Zip Code: 4114"

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
    std::cout << "Zip Code: 4103"

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
    std::cout << "Zip Code: 4107"

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
    std::cout << "Zip Code: 4109"

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
    std::cout << "Zip Code: 4120"

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
    std::cout << "Zip Code: 4108"
    
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
    std::cout << "Zip Code: 4027"

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
    std::cout << "Zip Code: 4024"

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
    std::cout << "Zip Code: 4026"

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
    std::cout << "Zip Code: 4025"

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
    std::cout << "Zip Code: 4023"

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

void snpblo(){
    std::string act;
    std::cout << "\n======= San Pablo (City) =======\n" << std::endl;
    std::cout << "Zip Code: 4000"

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

void batngs(){
    std::string act;
    std::cout << "\n======= Batangas (City) =======\n" << std::endl;
    std::cout << "Zip Code: 4200"

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

void Lipa(){
    std::string act;
    std::cout << "\n======= Lipa (City) =======\n" << std::endl;
    std::cout << "Zip Code: 4217"

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
    std::cout << "Zip Code: 4232"

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
    std::cout << "Zip Code: 4234"

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
    std::cout << "Zip Code: 1870"

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
    std::cout << "Zip Code: 1960"

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
    std::cout << "Zip Code: 1850"

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
    std::cout << "Zip Code: 1990"

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

void brs(){
    std::string act;
    std::cout << "\n======= Baras (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 1970"

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
    std::cout << "Zip Code: 1950"

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
    std::cout << "Zip Code: 1800"

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

void \bingnan(){
    std::string act;
    std::cout << "\n======= Binangonan (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 1940"

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
    std::cout << "Zip Code: 1930"

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
    std::cout << "Zip Code: 1860"

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
    std::cout << "Zip Code: 1880"

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
    std::cout << "Zip Code: 1600"

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
    std::cout << "Zip Code: 1900"

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
    std::cout << "Zip Code: 1920"

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
    std::cout << "Zip Code: 1980"
    
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
    std::cout << "Zip Code: 1910"

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
    std::cout << "Zip Code: 4340"

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
    std::cout << "Zip Code: 4329"

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
    std::cout << "Zip Code: 4336"

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
    std::cout << "Zip Code: 4342"

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
    std::cout << "Zip Code: 4328"

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
    std::cout << "Zip Code: 4330"

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
    std::cout << "Zip Code: 4302"

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
    std::cout << "Zip Code: 4337"

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
    std::cout << "Zip Code: 4341"

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
    std::cout << "Zip Code: 4339"

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
    std::cout << "Zip Code: 4329"

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
    std::cout << "Zip Code: 4327"

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
    std::cout << "Zip Code: 4323"

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
    std::cout << "Zip Code: 4326"

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
    std::cout << "Zip Code: 4301"

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
    std::cout << "Zip Code: 4324"

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
    std::cout << "Zip Code: 4322"

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

void tng(){
    std::string act;
    std::cout << "\n======= Tiaong (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 4325"

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
    std::cout << "Zip Code: 4304"

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
    std::cout << "Zip Code: 4320"

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
    std::cout << "Zip Code: 4311"

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
    std::cout << "Zip Code: 4310"

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
    std::cout << "Zip Code: 4309"

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
    std::cout << "Zip Code: 4312"

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
    std::cout << "Zip Code: 4303"

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
    std::cout << "Zip Code: 4308"

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
    std::cout << "Zip Code: 4314"

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
    std::cout << "Zip Code: 4315"

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
    std::cout << "Zip Code: 4313" 

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

    void albt(){
    std::string act;
    std::cout << "\n======= Alabat (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 4333"

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
    std::cout << "Zip Code: 4331"

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
    std::cout << "Zip Code: 4318
    "
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
    std::cout << "Zip Code: 4319"

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
    std::cout << "Zip Code: 4307"

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

void lpz(){
    std::string act;
    std::cout << "\n======= Lopez (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 4316
    "
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
    std::cout << "Zip Code: 4334"

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
    std::cout << "Zip Code: 3004"
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

void qzon(){
    std::string act;
    std::cout << "\n======= Quezon (City) =======\n" << std::endl;
    std::cout << "Zip Code: "

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
    std::cout << "Zip Code: 4321"
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
    td::cout << "Zip Code: 4335"

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
void baco() {
    std::string act;
    std::cout << "\n======= Baco (City) =======\n" << std::endl;
    
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
    std::cout << "\n======= Sofronio Española (Municipality) =======\n" << std::endl;
    
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
    std::cout << "\n======= Ligao (City) =======\n" << std::endl;
    
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
    std::cout << "\n======= Sagñay (Municipality) =======\n" << std::endl;
    
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
 
