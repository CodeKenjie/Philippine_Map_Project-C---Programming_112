#pragma once
#include <iostream>
#include <string>
#include <fstream>

/* [Reminder] THIS IS A CITIES FILE - palagi po maglagay ng comments para alam ng mga nag eedit */

// ================================================== 149 cities / 1,493 municipalities ((void)Functionalities) ===========================================================================================================================================
/////// ALL CITIES IN MINDANAO ONLY

// Region 11 Cities / Municipalities

// Davao De Oro Barangays

void compos(){
    std::string act;
    std::cout << "\n======= Compostela (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 8803";
    std::cout << "\n=========================================\n" << std::endl;

    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 11 Barangay\\b1.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void laak(){
    std::string act;
    std::cout << "\n======= Laak (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 8810";
    std::cout << "\n===================================\n" << std::endl;

    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 11 Barangay\\b2.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void mabini(){
    std::string act;
    std::cout << "\n======= Mabini (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 8807";
    std::cout << "\n=====================================\n" << std::endl;
    
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 11 Barangay\\b3.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void maco(){
    std::string act;
    std::cout << "\n======= Maco (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 8806";
    std::cout << "\n===================================\n" << std::endl;

    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 11 Barangay\\b4.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}


void mrgsan(){
    std::string act;
    std::cout << "\n======= Maragusan (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 8808";
    std::cout << "\n========================================\n" << std::endl;

    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 11 Barangay\\b5.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void mawab(){
    std::string act;
    std::cout << "\n======= Mawab (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 8802";
    std::cout << "\n====================================\n" << std::endl;

    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 11 Barangay\\b6.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void mntvsta(){
    std::string act;
    std::cout << "\n======= Montevista (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 8801";
    std::cout << "\n=========================================\n" << std::endl;

    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 11 Barangay\\b7.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void nbnturan(){
    std::string act;
    std::cout << "\n======= Nabunturan (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 8800";
    std::cout << "\n=========================================\n" << std::endl;

    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 11 Barangay\\b8.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void nwbtaan(){
    std::string act;
    std::cout << "\n======= New Bataan (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 8804";
    std::cout << "\n=========================================\n" << std::endl;

    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 11 Barangay\\b9.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void pntukan(){
    std::string act;
    std::cout << "\n======= Pantukan (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 8809";
    std::cout << "\n=======================================\n" << std::endl;

    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 11 Barangay\\b10.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

// Davao Del Sur Barangays
void digos(){
    std::string act;
    std::cout << "\n======= Digos (Capital City) =======\n" << std::endl;
    std::cout << "Zip Code: 8002";
    std::cout << "\n====================================\n" << std::endl;

    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 11 Barangay\\b11.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void hgnoy(){
    std::string act;
    std::cout << "\n======= Hagonoy (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 8006";
    std::cout << "\n======================================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 11 Barangay\\b12.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void kblawan(){
    std::string act;
    std::cout << "\n======= Kiblawan (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 8008";
    std::cout << "\n=======================================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 11 Barangay\\b13.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void magsaysayy(){
    std::string act;
    std::cout << "\n======= Magsaysay (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 8004";
    std::cout << "\n========================================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 11 Barangay\\b14.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }
            
        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void mlalag(){
    std::string act;
    std::cout << "\n======= Malalag (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 8010";
    std::cout << "\n======================================\n" << std::endl;
    
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 11 Barangay\\b15.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }
            
        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void mtnao(){
    std::string act;
    std::cout << "\n======= Matanao (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 8003";
    std::cout << "\n======================================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 11 Barangay\\b16.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }
            
        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void pdd(){
    std::string act;
    std::cout << "\n======= Padada (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 8007";
    std::cout << "\n=====================================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 11 Barangay\\b17.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }
            
        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void sntcruz(){
    std::string act;
    std::cout << "\n======= Santa Cruz (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 8001";
    std::cout << "\n=========================================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;

        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 11 Barangay\\b18.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }
            
        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void sulop(){
    std::string act;
    std::cout << "\n======= Sulop (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 8009";
    std::cout << "\n====================================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;

        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 11 Barangay\\b19.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }
            
        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

// Davao Del Norte Barangays

void panobo(){
    std::string act;
    std::cout << "\n======= Panobo City (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 8105";
    std::cout << "\n==========================================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;

        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 11 Barangay\\b20.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }
            
        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void samal(){
    std::string act;
    std::cout << "\n======= Island Garden City of Samal (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 8119";
    std::cout << "\n==========================================================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;

        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 11 Barangay\\b21.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }
            
        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void tagum(){
    std::string act;
    std::cout << "\n======= Tagum (Capital City) =======\n" << std::endl;
    std::cout << "Zip Code: 8100";
    std::cout << "\n====================================\n" << std::endl;
    
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;

        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 11 Barangay\\b22.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }
            
        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void asuncion(){
    std::string act;
    std::cout << "\n======= Asuncion (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 8102";
    std::cout << "\n=======================================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;

        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 11 Barangay\\b23.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }
            
        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void carmen(){
    std::string act;
    std::cout << "\n======= Carmen (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 8101";
    std::cout << "\n=====================================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;

        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 11 Barangay\\b24.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }
            
        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void kplong(){
    std::string act;
    std::cout << "\n======= Kapalong (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 8113";
    std::cout << "\n=======================================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;

        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 11 Barangay\\b25.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }
            
        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void nwcrlla(){
    std::string act;
    std::cout << "\n======= New Corella (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 8104";
    std::cout << "\n==========================================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;

        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 11 Barangay\\b26.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }
            
        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void snttomas(){
    std::string act;
    std::cout << "\n======= Santo Tomas (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 8112";
    std::cout << "\n==========================================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;

        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 11 Barangay\\b27.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }
            
        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void talaingod(){
    std::string act;
    std::cout << "\n======= Talaingod (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 8107";
    std::cout << "\n========================================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;

        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 11 Barangay\\b28.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }
            
        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void braulio(){
    std::string act;
    std::cout << "\n======= Braulio E. Dujali (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 8106";
    std::cout << "\n================================================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;

        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 11 Barangay\\b29.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }
            
        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void snisidro(){
    std::string act;
    std::cout << "\n======= San Isidro (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 8121";
    std::cout << "\n=========================================\n" << std::endl;

    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;

        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 11 Barangay\\b30.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }
            
        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

// Davao Occidental Barangays

void donmarcelino(){
    std::string act;
    std::cout << "\n======= Don Marcelino (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 8013";
    std::cout << "\n============================================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;

        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 11 Barangay\\b31.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }
            
        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void joseabdsntos(){
    std::string act;
    std::cout << "\n======= Jose Abad Santos (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 8014";
    std::cout << "\n===============================================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;

        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 11 Barangay\\b32.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }
            
        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void malita(){
    std::string act;
    std::cout << "\n======= Malita (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 8012";
    std::cout << "\n=====================================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;

        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 11 Barangay\\b33.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }
            
        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void sntamaria(){
    std::string act;
    std::cout << "\n======= Santa Maria (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 8011";
    std::cout << "\n==========================================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;

        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 11 Barangay\\b34.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }
            
        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void sarangani(){
    std::string act;
    std::cout << "\n======= Sarangani (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 8015";
    std::cout << "\n========================================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;

        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 11 Barangay\\b35.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }
            
        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

// Davao Oriental Barangays

void mati(){
    std::string act;
    std::cout << "\n======= Mati City (Capital City) =======\n" << std::endl;
    std::cout << "Zip Code: 8200";
    std::cout << "\n========================================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;

        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 11 Barangay\\b36.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }
            
        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void baganga(){
    std::string act;
    std::cout << "\n======= Baganga (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 8204";
    std::cout << "\n======================================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;

        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 11 Barangay\\b37.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }
            
        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}   

void banaybanay(){
    std::string act;
    std::cout << "\n======= Banaybanay (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 8208";
    std::cout << "\n=========================================\n" << std::endl;

    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;

        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 11 Barangay\\b38.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }
            
        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}   
void boston(){
    std::string act;
    std::cout << "\n======= Boston (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 8206";
    std::cout << "\n=====================================\n" << std::endl;

    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;

        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 11 Barangay\\b39.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }
            
        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}   

void caraga(){
    std::string act;
    std::cout << "\n======= Caraga (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 8203";
    std::cout << "\n=====================================\n" << std::endl;

    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;

        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 11 Barangay\\b40.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }
            
        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}   

void cateel(){
    std::string act;
    std::cout << "\n======= Cateel (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 8205";
    std::cout << "\n=====================================\n" << std::endl;

    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;

        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 11 Barangay\\b41.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }
            
        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}   


void govgenroso(){
    std::string act;
    std::cout << "\n======= Governor Generoso (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 8210";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;

        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 11 Barangay\\b42.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }
            
        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}   


void lupon(){
    std::string act;
    std::cout << "\n======= Lupon (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 8207";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;

        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 11 Barangay\\b43.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }
            
        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}   

void manay(){
    std::string act;
    std::cout << "\n======= Manay (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 8202";
    std::cout << "\n====================================\n" << std::endl;

    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;

        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 11 Barangay\\b44.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }
            
        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}   

void snisidro2(){
    std::string act;
    std::cout << "\n======= San Isidro (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 8209";
    std::cout << "\n=========================================\n" << std::endl;

    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;

        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 11 Barangay\\b45.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }
            
        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}   

void tarragona(){
    std::string act;
    std::cout << "\n======= Tarragona (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 8201";
    std::cout << "\n========================================\n" << std::endl;

    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;

        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 11 Barangay\\b46.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }
            
        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}   





// Region 12 SOCCSKSARGEN ===============================================================================================================================================================


//Cotabato Barangays

void kidapawan(){
    std::string act;
    std::cout << "\n======= Kidapawan (Capital City) =======\n" << std::endl;
    std::cout << "Zip Code: 9400";
    std::cout << "\n========================================\n" << std::endl;

    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;

        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 12 Barangay\\b1.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }
            
        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}   

void alamada(){
    std::string act;
    std::cout << "\n======= Alamada (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 9413";
    std::cout << "\n======================================\n" << std::endl;

    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;

        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 12 Barangay\\b2.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }
            
        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}   

void aleosan(){
    std::string act;
    std::cout << "\n======= Aleosan (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 9415";
    std::cout << "\n======================================\n" << std::endl;

    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;

        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 12 Barangay\\b3.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }
            
        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}   

void antipas(){
    std::string act;
    std::cout << "\n======= Antipas (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 9414";
    std::cout << "\n======================================\n" << std::endl;

    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;

        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 12 Barangay\\b4.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }
            
        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}   

void arakan(){
    std::string act;
    std::cout << "\n======= Arakan (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 9417";
    std::cout << "\n=====================================\n" << std::endl;

    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;

        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 12 Barangay\\b5.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }
            
        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}   

void banisilan(){
    std::string act;
    std::cout << "\n======= Banisilan (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 9416";
    std::cout << "\n========================================\n" << std::endl;

    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;

        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 12 Barangay\\b6.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }
            
        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}   

void carmen2(){
    std::string act;
    std::cout << "\n======= Carmen (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 9408";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;

        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 12 Barangay\\b7.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }
            
        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}   

void kabacan(){
    std::string act;
    std::cout << "\n======= Kabacan (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 9407";
    std::cout << "\n======================================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;

        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 12 Barangay\\b8.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }
            
        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";}
        }
    }
void libungan(){
    std::string act;
    std::cout << "\n======= Libungan (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 9411";
    std::cout << "\n=======================================\n" << std::endl;

    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;

        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 12 Barangay\\b9.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }
            
        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";}
        }
    }

    void magpet(){
    std::string act;
    std::cout << "\n======= Magpet (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 9404";
    std::cout << "\n=====================================\n" << std::endl;

    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;

        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 12 Barangay\\b10.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }
            
        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";}
        }
    }

    void makilala(){
    std::string act;
    std::cout << "\n======= Makilala (Municipality) =======\n" << std::endl;

    std::cout << "Zip Code: 9401";
    std::cout << "\n=======================================\n" << std::endl;

    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;

        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 12 Barangay\\b11.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }
            
        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";}
        }
    }

    void matalam(){
    std::string act;
    std::cout << "\n======= Matalam (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 9406";
    std::cout << "\n======================================\n" << std::endl;

    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;

        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 12 Barangay\\b12.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }
            
        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";}
        }
    }

    void mlang(){
    std::string act;
    std::cout << "\n======= M'lang (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 9402";
    std::cout << "\n=====================================\n" << std::endl;

    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;

        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 12 Barangay\\b13.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }
            
        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";}
        }
    }

    void pigcawayan(){
    std::string act;
    std::cout << "\n======= Pigcawayan (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 9412";
    std::cout << "\n=========================================\n" << std::endl;

    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;

        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 12 Barangay\\b14.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }
            
        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";}
        }
    }

    void pikit(){
    std::string act;
    std::cout << "\n======= Pikit (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 9409";
    std::cout << "\n====================================\n" << std::endl;

    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;

        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 12 Barangay\\b15.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }
            
        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";}
        }
    }


void presidentroxas(){
    std::string act;
    std::cout << "\n======= President Roxas (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 9405";
    std::cout << "\n==============================================\n" << std::endl;

    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;

        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 12 Barangay\\b16.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }
            
        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";}
        }
    }


    void tulunan(){
    std::string act;
    std::cout << "\n======= Tulunan (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 9403";
    std::cout << "\n======================================\n" << std::endl;

    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;

        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 12 Barangay\\b17.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }
            
        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";}
        }
    }

    void midsayap(){
    std::string act;
    std::cout << "\n======= Midsayap (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 9410";
    std::cout << "\n=======================================\n" << std::endl;

    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;

        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 12 Barangay\\b18.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }
            
        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";}
        }
    }


    //South Cotabato Barangays

    void koronodal(){
    std::string act;
    std::cout << "\n======= Koronodal (Capital City) =======\n" << std::endl;
    std::cout << "Zip Code: 9506";
    std::cout << "\n========================================\n" << std::endl;

    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;

        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 12 Barangay\\b19.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }
            
        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";}
        }
    }

    void banga(){
    std::string act;
    std::cout << "\n======= Banga (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 9511";
    std::cout << "\n====================================\n" << std::endl;

    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;

        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 12 Barangay\\b20.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }
            
        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";}
        }
    }

    void lakesebu(){
    std::string act;
    std::cout << "\n======= Lake Sebu (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 9514";
    std::cout << "\n========================================\n" << std::endl;

    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;

        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 12 Barangay\\b21.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }
            
        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";}
        }
    }

    void norala(){
    std::string act;
    std::cout << "\n======= Norala (Municipality) =======\n" << std::endl;
     std::cout << "Zip Code: 9508";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;

        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 12 Barangay\\b22.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }
            
        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";}
        }
    }



//Barangays below have no info ================================================================================================================================================
// Tim Ame's personal slave 
// South Cotabato Unfinished


void polomok(){
    std::string act;
    std::cout << "\n======= Polomok (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 9504";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;

        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 12 Barangay\\b23.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }
            
        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
        }
    }
}


void sntnino(){
    std::string act;
    std::cout << "\n======= Santo Niño (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 9509";
    std::cout << "\n=========================================\n" << std::endl;

    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;

        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 12 Barangay\\b24.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }
            
        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
        }
    }
}

void surallah(){
    std::string act;
    std::cout << "\n======= Surallah (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 9512";
    std::cout << "\n=======================================\n" << std::endl;

    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;

        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 12 Barangay\\b25.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }
            
        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
        }
    }
}


void tampakan(){
    std::string act;
    std::cout << "\n======= Tampakan (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 9507";
    std::cout << "\n=======================================\n" << std::endl;

    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;

        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 12 Barangay\\b26.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }
            
        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
        }
    }
}

void tantangan(){
    std::string act;
    std::cout << "\n======= Tantangan (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 9510";
    std::cout << "\n========================================\n" << std::endl;

    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;

        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 12 Barangay\\b27.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }
            
        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
        }
    }
}

void tboli(){
    std::string act;
    std::cout << "\n======= T'boli (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 9513";
    std::cout << "\n=====================================\n" << std::endl;

    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;

        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 12 Barangay\\b28.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }
            
        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
        }
    }
}

void tupi(){
    std::string act;
    std::cout << "\n======= Tupi (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 9505";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;

        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 12 Barangay\\b29.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }
            
        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
        }
    }
}

    // Sultan Kudarat Barangays ======(No info)==========(No info)==========================================================================================================

    void tacurong(){
    std::string act;
    std::cout << "\n======= Tacurong (Capital City) =======\n" << std::endl;
    std::cout << "Zip Code: 9800";
    std::cout << "\n=======================================\n" << std::endl;

    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;

        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 12 Barangay\\b30.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }
            
        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";}
        }
    }

    void bagumbayan2(){
    std::string act;
    std::cout << "\n======= Bagumbayan (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 9810";
    std::cout << "\n=========================================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;

        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 12 Barangay\\b31.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }
            
        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";}
        }
    }

    void columbio(){
    std::string act;
    std::cout << "\n======= Columbio (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 9801";
    std::cout << "\n=======================================\n" << std::endl;

    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;

        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 12 Barangay\\b32.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }
            
        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";}
        }
    }

    void esperanza2(){
    std::string act;
    std::cout << "\n======= Esperanza (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 9806";
    std::cout << "\n========================================\n" << std::endl;

    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;

        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 12 Barangay\\b33.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }
            
        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";}
        }
    }

    void kalamansig(){
    std::string act;
    std::cout << "\n======= Kalamansig (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 9808";
    std::cout << "\n=========================================\n" << std::endl;

    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;

        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 12 Barangay\\b34.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }
            
        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";}
        }
    }

    void lambayong(){
    std::string act;
    std::cout << "\n======= Lambayong (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 9802";
    std::cout << "\n========================================\n" << std::endl;

    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;

        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 12 Barangay\\b35.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }
            
        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";}
        }
    }

    void lebak(){
    std::string act;
    std::cout << "\n======= Lebak (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 9807";
    std::cout << "\n====================================\n" << std::endl;

    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;

        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 12 Barangay\\b36.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }
            
        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";}
        }
    }


void lutayan(){
    std::string act;
    std::cout << "\n======= Lutayan (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 9803";
    std::cout << "\n======================================\n" << std::endl;

    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;

        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 12 Barangay\\b37.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }
            
        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";}
        }
    }


void palimbang(){
    std::string act;
    std::cout << "\n======= Palimbang (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 9809";
    std::cout << "\n========================================\n" << std::endl;

    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;

        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 12 Barangay\\b38.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }
            
        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";}
        }
    }


void presidentquirino(){
    std::string act;
    std::cout << "\n======= President Quirino (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 9804";
    std::cout << "\n================================================\n" << std::endl;

    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;

        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 12 Barangay\\b39.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }
            
        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";}
        }
    }

void sntorninoy(){
    std::string act;
    std::cout << "\n======= Senator Ninoy Aquino (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 9811";
    std::cout << "\n===================================================\n" << std::endl;

    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;

        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 12 Barangay\\b40.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }
            
        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";}
        }
    }

void isulan(){
    std::string act;
    std::cout << "\n======= Isulan (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 9805";
    std::cout << "\n=====================================\n" << std::endl;

    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;

        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 12 Barangay\\b41.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }
            
        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";}
        }
    }

// Saragani Barangays 

void alabel(){
    std::string act;
    std::cout << "\n======= Alabel (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 9501";
    std::cout << "\n=====================================\n" << std::endl;

    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;

        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 12 Barangay\\b42.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }
            
        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";}
        }
    }

void glan(){
    std::string act;
    std::cout << "\n======= Glan (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 9517";
    std::cout << "\n===================================\n" << std::endl;

    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;

        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 12 Barangay\\b43.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }
            
        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";}
        }
    }

void kiamba(){
    std::string act;
    std::cout << "\n======= Kiamba (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 9514";
    std::cout << "\n=====================================\n" << std::endl;

    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;

        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 12 Barangay\\b44.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }
            
        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";}
        }
    }

void maasim(){
    std::string act;
    std::cout << "\n======= Maasim (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 9502";
    std::cout << "\n=====================================\n" << std::endl;

    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;

        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 12 Barangay\\b45.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }
            
        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";}
        }
    }

void maitum(){
    std::string act;
    std::cout << "\n======= Maitum (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 9515";
    std::cout << "\n=====================================\n" << std::endl;

    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;

        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 12 Barangay\\b46.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }
            
        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";}
        }
    }

void malapatan(){
    std::string act;
    std::cout << "\n======= Malapatan (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 9516";
    std::cout << "\n========================================\n" << std::endl;

    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;

        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 12 Barangay\\b47.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }
            
        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";}
        }
    }

void malungon(){
    std::string act;
    std::cout << "\n======= Malungon (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 9503";
    std::cout << "\n=======================================\n" << std::endl;

    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;

        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 12 Barangay\\b48.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }
            
        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";}
        }
    }

    
// Tim Ame's personal slave ============================================================================#pragma once


// region 13 caraga region

//agusan del norte cities

void Cbdarn_Cty () {
    std::string act;
    std::cout << "\n======= Cabadbaran_City (city) =======\n" << std::endl;
    std::cout << "Zip Code: 8605";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 13 Barangay\\b1.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void Btn_Cty () {
    std::string act;
    std::cout << "\n======= Butuan_City (city) =======\n" << std::endl;
    std::cout << "Zip Code: 8600";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 13 Barangay\\b2.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void Bnvst () {
    std::string act;
    std::cout << "\n======= Buenavista (city) =======\n" << std::endl;
    std::cout << "Zip Code: 8601";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 13 Barangay\\b3.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void Crmn () {
    std::string act;
    std::cout << "\n======= Carmen (city) =======\n" << std::endl;
    std::cout << "Zip Code: 8603";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 13 Barangay\\b4.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void Jbng () {
    std::string act;
    std::cout << "\n======= Jabonga (city) =======\n" << std::endl;
    std::cout << "Zip Code: 8607";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 13 Barangay\\b5.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void Ktchr () {
    std::string act;
    std::cout << "\n======= Kitcharao (city) =======\n" << std::endl;
    std::cout << "Zip Code: 8609";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 13 Barangay\\b6.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void Ls_Nvs () {
    std::string act;
    std::cout << "\n======= Las Nieves (city) =======\n" << std::endl;
    std::cout << "Zip code: 8610";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 13 Barangay\\b7.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void Mgllns () {
    std::string act;
    std::cout << "\n======= Magallanes (city) =======\n" << std::endl;
    std::cout << "Zip code: 8604";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 13 Barangay\\b8.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void Nspt () {
    std::string act;
    std::cout << "\n======= Nasipit (city) =======\n" << std::endl;
    std::cout << "Zip Code: 8602";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 13 Barangay\\b9.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void Rmds_Rmldz () {
    std::string act;
    std::cout << "\n======= Remedios Romualdez (city) =======\n" << std::endl;
    std::cout << "Zip Code: 8611";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 13 Barangay\\b10.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void Sntg () {
    std::string act;
    std::cout << "\n======= Santiago (city) =======\n" << std::endl;
    std::cout << "Zip Code: 8608";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 13 Barangay\\b11.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void Tby () {
    std::string act;
    std::cout << "\n======= Tubay (city) =======\n" << std::endl;
    std::cout << "Zip Code: 8606";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 13 Barangay\\b12.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}


// Agusan del sur cities

void Bygn_Cty() {
    std::string act;
    std::cout << "\n======= Bayugan (city) =======\n" << std::endl;
    std::cout << "Zip Code: 8502";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 13 Barangay\\b13.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void Bunwn() {
    std::string act;
    std::cout << "\n======= Bunawan (municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 8506";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 13 Barangay\\b14.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void Esprnz() {
    std::string act;
    std::cout << "\n======= Esperanza (municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 8513";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;

        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 13 Barangay\\b15.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void La_Pz() {
    std::string act;
    std::cout << "\n======= La Paz (municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 8508";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 13 Barangay\\b16.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void Lrt() {
    std::string act;
    std::cout << "\n======= Loreto (municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 8507";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 13 Barangay\\b17.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void Prsprdd() {
    std::string act;
    std::cout << "\n======= Prosperidad (municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 8500";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 13 Barangay\\b18.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void Rsro() {
    std::string act;
    std::cout << "\n======= Rosario (city) =======\n" << std::endl;
    std::cout << "Zip Code: 8504";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 13 Barangay\\b19.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void Sn_Frncsco() {
    std::string act;
    std::cout << "\n======= San Francisco (municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 8501";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 13 Barangay\\b20.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void Sn_Ls() {
    std::string act;
    std::cout << "\n======= San Luis (municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 8511";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 13 Barangay\\b21.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void Snta_Jsfa() {
    std::string act;
    std::cout << "\n======= Santa Josefa (municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 8512";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 13 Barangay\\b22.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void Sbgat() {
    std::string act;
    std::cout << "\n======= Sibagat (municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 8503";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 13 Barangay\\b23.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void Tlcgn() {
    std::string act;
    std::cout << "\n======= Talacogon (municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 8510";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 13 Barangay\\b24.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void Trnt() {
    std::string act;
    std::cout << "\n======= Trento (municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 8505";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 13 Barangay\\b25.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void Vrela() {
    std::string act;
    std::cout << "\n======= Veruela (municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 8509";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 13 Barangay\\b26.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

// dinagat islands cities

void Sn_Jse() {
    std::string act;
    std::cout << "\n======= Sn Jse  (municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 8427";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 13 Barangay\\b27.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl;
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void Bslis() {
    std::string act;
    std::cout << "\n======= Basilisa (municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 8413";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 13 Barangay\\b28.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl;
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void Cgdno() {
    std::string act;
    std::cout << "\n======= Cagdianao (municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 8411";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 13 Barangay\\b29.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl;
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void Dgt() {
    std::string act;
    std::cout << "\n======= Dinagat (municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 8412";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 13 Barangay\\b30.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl;
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void Lbo() {
    std::string act;
    std::cout << "\n======= Libjo (municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 8414";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 13 Barangay\\b31.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl;
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}


void Lto() {
    std::string act;
    std::cout << "\n======= Loreto (municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 8415";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 13 Barangay\\b32.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl;
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void Tbjn() {
    std::string act;
    std::cout << "\n======= Tubajon (city) =======\n" << std::endl;
    std::cout << "Zip Code: 8426";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 13 Barangay\\b33.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl;
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

// Surigao del norte cities
void Srg_Cty() {
    std::string act;
    std::cout << "\n======= Surigao city (city) =======\n" << std::endl;
    std::cout << "Zip Code: 8400 ";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 13 Barangay\\b34.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void Algra() {
    std::string act;
    std::cout << "\n======= 8415 (municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 8415";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 13 Barangay\\b35.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void Bcg() {
    std::string act;
    std::cout << "\n======= Bacuag (municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 8408";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 13 Barangay\\b36.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void Bgs() {
    std::string act;
    std::cout << "\n======= Burgos (municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 8424";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 13 Barangay\\b37.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void Clvr() {
    std::string act;
    std::cout << "\n======= Claver (municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 8410";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 13 Barangay\\b38.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void Dp() {
    std::string act;
    std::cout << "\n======= Dapa (municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 8417";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 13 Barangay\\b39.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void Dl_Crmn() {
    std::string act;
    std::cout << "\n======= Del Carmen (municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 8418";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 13 Barangay\\b40.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void Gnrl_Ln() {
    std::string act;
    std::cout << "\n======= General Luna (municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 8419";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 13 Barangay\\b41.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void Ggqt() {
    std::string act;
    std::cout << "\n======= Gigaquit (municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 8409";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 13 Barangay\\b42.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void Mnt() {
    std::string act;
    std::cout << "\n======= Maninit (municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 8407";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 13 Barangay\\b43.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void Mlmn() {
    std::string act;
    std::cout << "\n======= Malimono (municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 8402";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 13 Barangay\\b44.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void Plr() {
    std::string act;
    std::cout << "\n======= Pilar (municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 8420";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 13 Barangay\\b45.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void Plcr() {
    std::string act;
    std::cout << "\n======= Placer (municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 8405";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 13 Barangay\\b46.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void Sn_bnt() {
    std::string act;
    std::cout << "\n======= San Benito (municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 8423";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 13 Barangay\\b47.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void Sn_Frnc() {
    std::string act;
    std::cout << "\n======= San Francisco (municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 8401";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 13 Barangay\\b48.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void Sn_Isdr() {
    std::string act;
    std::cout << "\n======= San Isidro (municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 8421";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 13 Barangay\\b49.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void Snt_mnc() {
    std::string act;
    std::cout << "\n======= Santa Monica (municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 8422";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 13 Barangay\\b50.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void Sin() {
    std::string act;
    std::cout << "\n======= Sison (municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 8404";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 13 Barangay\\b51.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void Scro() {
    std::string act;
    std::cout << "\n======= Sicorro (municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 8416";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 13 Barangay\\b52.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void Tgnn() {
    std::string act;
    std::cout << "\n======= Taganaan (municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 8403";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 13 Barangay\\b53.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void Tbd() {
    std::string act;
    std::cout << "\n======= Tubod (municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 8406";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 13 Barangay\\b54.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}


//// Surigao del sur cities

void Tndg_City() {
    std::string act;
    std::cout << "\n======= Tandag City (city) =======\n" << std::endl;
    std::cout << "Zip Code: 8300";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 13 Barangay\\b55.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl;
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void Bsig_City() {
    std::string act;
    std::cout << "\n======= Bislig City (city) =======\n" << std::endl;
    std::cout << "Zip Code: 8311";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 13 Barangay\\b56.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl;
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void Brbo() {
    std::string act;
    std::cout << "\n======= Barobo (municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 8309";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 13 Barangay\\57.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl;
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void Bybas() {
    std::string act;
    std::cout << "\n======= Bayabas (municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 8303";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 13 Barangay\\58.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl;
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void Cgwit() {
    std::string act;
    std::cout << "\n======= Cagwait (municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 8304";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 13 Barangay\\b59.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl;
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void Cntln() {
    std::string act;
    std::cout << "\n======= Cantilan (municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 8317";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 13 Barangay\\b60.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl;
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void Crn () {
    std::string act;
    std::cout << "\n======= Carmen (municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 8315";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 13 Barangay\\b61.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl;
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void Crrscl() {
    std::string act;
    std::cout << "\n======= Carrascal (municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 8318";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 13 Barangay\\b62.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl;
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void Cts() {
    std::string act;
    std::cout << "\n======= Cortes (municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 8313";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 13 Barangay\\b63.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl;
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void Hntn() {
    std::string act;
    std::cout << "\n======= Hinatuan (municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 8310";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 13 Barangay\\b64.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl;
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void Lnz() {
    std::string act;
    std::cout << "\n======= Lanuza (municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 8316";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 13 Barangay\\b65.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl;
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void Lnga() {
    std::string act;
    std::cout << "\n======= Lianga (municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 8307";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 13 Barangay\\b66.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl;
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void Lngg() {
    std::string act;
    std::cout << "\n======= Lingig (municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 8312";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 13 Barangay\\b67.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl;
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void Mdrd() {
    std::string act;
    std::cout << "\n======= Madrid (municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 8316";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 13 Barangay\\b68.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl;
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void Mrhtg() {
    std::string act;
    std::cout << "\n======= Marihatag (municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 8306";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 13 Barangay\\b69.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl;
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void Sn_Agn() {
    std::string act;
    std::cout << "\n======= San Agustin (municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 8314";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 13 Barangay\\b70.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl;
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void Sn_Mgl() {
    std::string act;
    std::cout << "\n======= San Miguel (municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 8301";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 13 Barangay\\b71.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl;
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void Tgbn() {
    std::string act;
    std::cout << "\n======= Tagbina (municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 8308";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 13 Barangay\\b72.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl;
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void Tg () {
    std::string act;
    std::cout << "\n======= Tago (municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 8302";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 13 Barangay\\b73.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl;
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}



// BARMM REGION

// BASILAN province

void Lmtn_Cty() {
    std::string act;
    std::cout << "\n======= Lamitan City (city) =======\n" << std::endl;
    std::cout << "Zip Code: 7300";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\BARMM Barangay\\b74.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void kbr() {
    std::string act;
    std::cout << "\n======= Akbar (municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 7313";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\BARMM Barangay\\b75.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void Al_Brk() {
    std::string act;
    std::cout << "\n======= Al-Barka (municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 7311";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\BARMM Barangay\\b76.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void Hdj_Mhmmd_Ajl() {
    std::string act;
    std::cout << "\n======= Hadji Mohammad Ajul (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 7315";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\BARMM Barangay\\b77.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void H_Mhtmd() {
    std::string act;
    std::cout << "\n======= Hadji Muhtamad (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 7314";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\BARMM Barangay\\b78.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void Lntwn() {
    std::string act;
    std::cout << "\n======= Lantawan (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 7310";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\BARMM Barangay\\b79.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void Mls() {
    std::string act;
    std::cout << "\n======= Maluso (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 7308";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\BARMM Barangay\\b80.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void Smsip() {
    std::string act;
    std::cout << "\n======= Sumisip (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 7307";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\BARMM Barangay\\b81.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void Tbn_Lsa() {
    std::string act;
    std::cout << "\n======= Tabuan Lasa (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 7316";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\BARMM Barangay\\b82.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void T_Tp() {
    std::string act;
    std::cout << "\n======= Tipo Tipo (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 7309";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\BARMM Barangay\\b83.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void Tbrn() {
    std::string act;
    std::cout << "\n======= Tuburan (municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 7306";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\BARMM Barangay\\b84.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void Ungkya_Pkn() {
    std::string act;
    std::cout << "\n======= Ungkaya Pukan (municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 7312";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\BARMM Barangay\\b85.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}


// Lanao del Sur

void Mrwi_Cty() {
    std::string act;
    std::cout << "\n======= Marawi City (city) =======\n" << std::endl;
    std::cout << "Zip Code: 9700";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\BARMM Barangay\\b86.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void Bcld_Klwi() {
    std::string act;
    std::cout << "\n======= Bacolod_kalawi (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 9316";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\BARMM Barangay\\b87.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void Blbgn() {
    std::string act;
    std::cout << "\n======= Balabagan (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 9302";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\BARMM Barangay\\b88.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void Balindong() {
    std::string act;
    std::cout << "\n======= Balindong (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 9318";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\BARMM Barangay\\b89.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void Bayang() {
    std::string act;
    std::cout << "\n=======  Bayang (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 9309";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\BARMM Barangay\\b90.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void Binidayan() {
    std::string act;
    std::cout << "\n======= Binidayan (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 9310";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\BARMM Barangay\\b91.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void Budposo() {
    std::string act;
    std::cout << "\n======= Buadiposo (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 9714";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\BARMM Barangay\\b92.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void Bubong() {
    std::string act;
    std::cout << "\n======= Bubong (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 9708";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\BARMM Barangay\\b93.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void Butig() {
    std::string act;
    std::cout << "\n======= Butig (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 9305";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\BARMM Barangay\\b94.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void Calanogas() {
    std::string act;
    std::cout << "\n======= Calanogas (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 9319";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\BARMM Barangay\\b95.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void Sltn_Dmlndng() {
    std::string act;
    std::cout << "\n======= Sultan Dumalondong (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 9324";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\BARMM Barangay\\b96.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "back" || act == "back") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void dtsn() {
    std::string act;
    std::cout << "\n======= ditsaan (municipality) =======\n" << std::endl;
    std::cout << "zip code: 9713";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("barangay\\BARMM Barangay\\b97.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void Ganassi() {
    std::string act;
    std::cout << "\n======= Ganassi (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 9311";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\BARMM Barangay\\b98.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void Kapi() {
    std::string act;
    std::cout << "\n======= Kapai (Municiplity) =======\n" << std::endl;
    std::cout << "Zip Code: 9709";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\BARMM Barangay\\b99.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void Kptagn() {
    std::string act;
    std::cout << "\n======= Kapatagan (city) =======\n" << std::endl;
    std::cout << "Zip Code: 9322";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\BARMM Barangay\\b100.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void Lmba() {
    std::string act;
    std::cout << "\n======= Lumba (city) =======\n" << std::endl;
    std::cout << "Zip Code: 9703";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\BARMM Barangay\\b101.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void Lmbca() {
    std::string act;
    std::cout << "\n======= Lumbaca (city) =======\n" << std::endl;
    std::cout << "Zip Code: 9323";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\BARMM Barangay\\b102.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void Lmbtan() {
    std::string act;
    std::cout << "\n======= Lumbatan (city) =======\n" << std::endl;
    std::cout << "Zip Code: 9307";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\BARMM Barangay\\b103.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void Lumbayangue() {
    std::string act;
    std::cout << "\n======= Lumbayanague (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 9306";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\BARMM Barangay\\b104.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void Madlm() {
    std::string act;
    std::cout << "\n======= Madalum (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 9315";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\BARMM Barangay\\b105.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void Madmb() {
    std::string act;
    std::cout << "\n======= Madamba (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 9314";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\BARMM Barangay\\b106.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void Magung() {
    std::string act;
    std::cout << "\n======= Maguing (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 9715";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\BARMM Barangay\\b107.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void Mlabang() {
    std::string act;
    std::cout << "\n======= Malabang (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 9300";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\BARMM Barangay\\b108.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void Marnto() {
    std::string act;
    std::cout << "\n======= Marantao (municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 9711";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\BARMM Barangay\\b109.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

// Maguindanao del Norte cities

void Parang_City() {
    std::string act;
    std::cout << "\n======= Parang City (city) =======\n" << std::endl;
    std::cout << "Zip Code: 9604";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\BARMM Barangay\\b110.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void Barira () {
    std::string act;
    std::cout << "\n======= Barira (city) =======\n" << std::endl;
    std::cout << "Zip Code: 9614";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\BARMM Barangay\\b111.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}


void Buldon() {
    std::string act;
    std::cout << "\n======= Buldon (city) =======\n" << std::endl;
    std::cout << "Zip Code: 9615";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\BARMM Barangay\\b112.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void Datu_Blah_T_Sinsuat() {
    std::string act;
    std::cout << "\n======= Datu Blah T. Sinsuat (city) =======\n" << std::endl;
    std::cout << "Zip Code: 9623";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\BARMM Barangay\\b113.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void Datu_Odin_Sinsuat() {
    std::string act;
    std::cout << "\n======= Datu Odin Sinsuat (city) =======\n" << std::endl;
    std::cout << "Zip Code: 9601";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\BARMM Barangay\\b114.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void Kabuntalan() {
    std::string act;
    std::cout << "\n======= Kabuntalan (city) =======\n" << std::endl;
    std::cout << "Zip Code: 9606";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\BARMM Barangay\\b115.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }


}

void Matanog() {
    std::string act;
    std::cout << "\n======= Matanog (city) =======\n" << std::endl;
    std::cout << "Zip Code: 9613";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\BARMM Barangay\\b116.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }

}

void Northern_Kabuntalan() {
    std::string act;
    std::cout << "\n======= Northern Kabuntalan (city) =======\n" << std::endl;
    std::cout << "Zip Code: 9630";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\BARMM Barangay\\b117.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void Sultan_Kudarat() {
    std::string act;
    std::cout << "\n======= Sultan Kudarat (city) =======\n" << std::endl;
    std::cout << "Zip Code: 9605";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\BARMM Barangay\\b118.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }

}

void Sultan_Mastura() {
    std::string act;
    std::cout << "\n======= Sultan Mastura (city) =======\n" << std::endl;
    std::cout << "Zip Code: 9636";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\BARMM Barangay\\b119.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }

}

void Talitay() {
    std::string act;
    std::cout << "\n======= Talitay (city) =======\n" << std::endl;
    std::cout << "Zip Code: 9637";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\BARMM Barangay\\b120.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == +"Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }

}

void Upi() {
    std::string act;
    std::cout << "\n======= Upi (city) =======\n" << std::endl;
    std::cout << "Zip Code: 9602";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\BARMM Barangay\\b121.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }

}

// Maguindanao del Sur cities

void Ampatuan () {
std::string act;
    std::cout << "\n======= Ampatuan (city) =======\n" << std::endl;
    std::cout << "Zip Code: 9609";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\BARMM Barangay\\b122.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }

}

void Buluan () {
    std::string act;
    std::cout << "\n======= Buluan (city) =======\n" << std::endl;
    std::cout << "Zip Code: 9616";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\BARMM Barangay\\b123.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }

}

void Datu_Sangki () {
    std::string act;
    std::cout << "\n======= Datu Sangki (city) =======\n" << std::endl;
    std::cout << "Zip Code: 9621";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\BARMM Barangay\\b124.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }

}

void Datu_Anggl_Mdtmbng () {
    std::string act;
    std::cout << "\n======= Datu Anggal Midtimbang (city) =======\n" << std::endl;
    std::cout << "Zip Code: 9622";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\BARMM Barangay\\b125.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }

}

void Datu_Hffer_Amptan () {
    std::string act;
    std::cout << "\n======= Datu Hoffer Ampatuan (city) =======\n" << std::endl;
    std::cout << "Zip Code: 9624";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\BARMM Barangay\\b126.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }

}

void Datu_Paglas () {
    std::string act;
    std::cout << "\n======= Datu Paglas (city) =======\n" << std::endl;
    std::cout << "Zip Code: 9617";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\BARMM Barangay\\b127.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }

}

void Datu_Piang () {
    std::string act;
    std::cout << "\n======= Datu Piang (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 9607";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\BARMM Barangay\\b128.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }

}

void Dtu_Slib () {
    std::string act;
    std::cout << "\n======= Datu Salibo (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 9625";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\BARMM Barangay\\b129.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }

}

void Dtu_Saudi_Amptuan () {
    std::string act;
    std::cout << "\n======= Datu Saudi Ampatuan (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 9626";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\BARMM Barangay\\b130.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }

}

void Datu_Unsay () {
    std::string act;
    std::cout << "\n======= Datu Unsay (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 9627";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\BARMM Barangay\\b131.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }

}

void Gen_S_K_Pendatun () {
    std::string act;
    std::cout << "\n======= Gen S. K. Pendatun (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 9618";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\BARMM Barangay\\b132.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }

}

void Guindulungan () {
    std::string act;
    std::cout << "\n=======  Guindulungan (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 9628";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\BARMM Barangay\\b133.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }

}

void Mamasapano () {
    std::string act;
    std::cout << "\n======= Mamasapano (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 9629";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\BARMM Barangay\\b134.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }

}

void Mangudadatu () {
    std::string act;
    std::cout << "\n======= Mangudadatu (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 9620";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\BARMM Barangay\\b135.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }

}

void Pagalungan () {
    std::string act;
    std::cout << "\n======= Pagalungan (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 9610";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\BARMM Barangay\\b136.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }

}

void Paglat () {
    std::string act;
    std::cout << "\n======= Paglat (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 9632";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\BARMM Barangay\\b137.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }

}

void Pandag () {
    std::string act;
    std::cout << "\n======= Pandag (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 9633";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\BARMM Barangay\\b138.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void Rajah_Buayan () {
    std::string act;
    std::cout << "\n======= Rajah Buayan (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 9634";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\BARMM Barangay\\b139.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }

}

void Shariff_Aguak () {
    std::string act;
    std::cout << "\n======= Shariff Aguak (Municpality) =======\n" << std::endl;
    std::cout << "Zip Code: 9608";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\BARMM Barangay\\b140.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }

}

void Shariff_Saydona_Mustapha () {
    std::string act;
    std::cout << "\n======= Shariff Saydon Mustapha (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 9635";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\BARMM Barangay\\b141.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }

}

void South_Upi () {
    std::string act;
    std::cout << "\n======= South Upi (Muniipality) =======\n" << std::endl;
    std::cout << "Zip Code: 9603";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\BARMM Barangay\\b142.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }

}

void Sultan_sa_Barongis () {
    std::string act;
    std::cout << "\n======= Sultan sa Barongis (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 9611";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\BARMM Barangay\\b143.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }

}

void Talayan () {
    std::string act;
    std::cout << "\n======= Talayan (city) =======\n" << std::endl;
    std::cout << "Zip Code: 9612";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\BARMM Barangay\\b144.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }

}



// tawi tawi province

void Bng () {
    std::string act;
    std::cout << "\n======= Bongao (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 7500";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\BARMM Barangay\\b145.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}


void Lngyn () {
    std::string act;
    std::cout << "\n======= Languyan (city) =======\n" << std::endl;
    std::cout << "Zip Code: 7509";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\BARMM Barangay\\b146.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}


void  Mpn () {
    std::string act;
    std::cout << "\n======= Mapun (city) =======\n" << std::endl;
    std::cout << "Zip Code: 7511";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\BARMM Barangay\\b147.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}


void Panglima_Sugala() {
    std::string act;
    std::cout << "\n======= Panglima Sugala (city) =======\n" << std::endl;
    std::cout << "Zip Code: 7501";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\BARMM Barangay\\b148.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}


void Sapa_Sapa() {
    std::string act;
    std::cout << "\n======= Sapa Sapa (city) =======\n" << std::endl;
    std::cout << "Zip Code: 7503";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\BARMM Barangay\\b149.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}


void Sibutu() {
    std::string act;
    std::cout << "\n======= Sibutu (city) =======\n" << std::endl;
    std::cout << "Zip Code: 7510";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\BARMM Barangay\\b150.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}


void Sitangkai() {
    std::string act;
    std::cout << "\n======= Sitangkai (city) =======\n" << std::endl;
    std::cout << "Zip Code: 7506";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\BARMM Barangay\\b151.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}


void South_Ubian() {
    std::string act;
    std::cout << "\n======= South Ubian (city) =======\n" << std::endl;
    std::cout << "Zip Code: 7502";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\BARMM Barangay\\b152.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}


void Tandubas() {
    std::string act;
    std::cout << "\n======= Tandubas (city) =======\n" << std::endl;
    std::cout << "Zip Code: 7504";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\BARMM Barangay\\b153.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void Turtle_Islands () {
    std::string act;
    std::cout << "\n======= Turtle Islands (city) =======\n" << std::endl;
    std::cout << "Zip Code: 7508";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\BARMM Barangay\\b154.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
