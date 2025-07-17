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
            std::cout << "\n===========================\n";}
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
            std::cout << "\n===========================\n";}
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
            std::cout << "\n===========================\n";}
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
            std::cout << "\n===========================\n";}
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
            std::cout << "\n===========================\n";}
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
            std::cout << "\n===========================\n";}
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
            std::cout << "\n===========================\n";}
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

    
// Tim Ame's personal slave ============================================================================