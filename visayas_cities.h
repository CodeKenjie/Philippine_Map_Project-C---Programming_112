#pragma once
#include <iostream>
#include <string>
#include <fstream>

/* [Reminder] THIS IS A CITIES FILE - palagi po maglagay ng comments para alam ng mga nag eedit */

// ================================================== 149 cities / 1,493 municipalities ((void)Functionalities) ===========================================================================================================================================
/////// ALL CITIES IN VISAYAS ONLY



// Eastern Visayas ===========================================================================================================

void almria(){
    std::string act;
    std::cout << "\n======= Almeria (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 6544";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 8 Barangay\\b1.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void blirn(){
    std::string act;
    std::cout << "\n======= Biliran (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 6549";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 8 Barangay\\b2.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void cbcgyn(){
    std::string act;
    std::cout << "\n======= Cabucgayan (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 6550";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 8 Barangay\\b3.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void cbran(){
    std::string act;
    std::cout << "\n======= Caibiran (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 6548";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 8 Barangay\\b4.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void clba(){
    std::string act;
    std::cout << "\n======= Culaba (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 6547";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 8 Barangay\\b5.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void kwyan(){
    std::string act;
    std::cout << "\n======= Kawayan (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 6545";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 8 Barangay\\b6.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void mrpipi(){
    std::string act;
    std::cout << "\n======= Maripipi (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 6546";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 8 Barangay\\b7.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void nval(){
    std::string act;
    std::cout << "\n======= Naval (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 6543";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 8 Barangay\\b8.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

// Eastern Samar
void brngn(){
    std::string act;
    std::cout << "\n======= Borongan (Provincial Capital Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 6800";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 8 Barangay\\b9.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void artch(){
    std::string act;
    std::cout << "\n======= Arteche (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 6822";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 8 Barangay\\b10.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void blngga(){
    std::string act;
    std::cout << "\n======= Balangiga (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 6812";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 8 Barangay\\b11.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void blngkyan(){
    std::string act;
    std::cout << "\n======= Balangkayan (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 6801";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 8 Barangay\\b12.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void cnavd(){
    std::string act;
    std::cout << "\n======= Can-Avid (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 6806";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 8 Barangay\\b13.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void dlrs(){
    std::string act;
    std::cout << "\n======= Dolores (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 6817";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 8 Barangay\\b14.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void ishllrtrn(){
    std::string act;
    std::cout << "\n======= General MacArthur (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 6805";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 8 Barangay\\b15.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void gprls(){
    std::string act;
    std::cout << "\n======= Giporlos (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 6811";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 8 Barangay\\b16.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void giuan(){
    std::string act;
    std::cout << "\n======= Guiuan (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 6809";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 8 Barangay\\b17.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void hrnani(){
    std::string act;
    std::cout << "\n======= Hernani (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 6804";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 8 Barangay\\b18.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void jppd(){
    std::string act;
    std::cout << "\n======= Jipapad (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 6819";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 8 Barangay\\b19.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void lwan(){
    std::string act;
    std::cout << "\n======= Lawaan (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 6819";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 8 Barangay\\b20.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void llrnte(){
    std::string act;
    std::cout << "\n======= Llorente (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 6803";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 8 Barangay\\b21.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void mslg(){
    std::string act;
    std::cout << "\n======= Maslog (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 6818";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 8 Barangay\\b22.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void mydlng(){
    std::string act;
    std::cout << "\n======= Maydolong (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 6802";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 8 Barangay\\b23.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void mrcds_benz(){
    std::string act;
    std::cout << "\n======= Mercedes (Municipality) =======\n" << std::endl;
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
            Barangay.open("Barangay\\Region 8 Barangay\\b24.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void btqtroras(){
    std::string act;
    std::cout << "\n======= Oras (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 6814";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 8 Barangay\\b25.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void qnpndn(){
    std::string act;
    std::cout << "\n======= Quinapondan (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 6810";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 8 Barangay\\b26.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void jero(){
    std::string act;
    std::cout << "\n======= Salcedo (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 6808";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 8 Barangay\\b27.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void san_jlan(){
    std::string act;
    std::cout << "\n======= San Julian (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 6815";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 8 Barangay\\b28.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void san_plcrpo(){
    std::string act;
    std::cout << "\n======= San Policarpo (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 6821";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 8 Barangay\\b29.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void write(){
    std::string act;
    std::cout << "\n======= Sulat (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 6816";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 8 Barangay\\b30.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void tftp(){
    std::string act;
    std::cout << "\n======= Taft (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 6807";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 8 Barangay\\b31.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

// Leyte ----------------------------------------------------------------------------------------------------------------
void tclban_city() {
    std::string act;
    std::cout << "\n======= Leyte (City) =======\n" << std::endl;
    std::cout << "Zip Code: 6510";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 8 Barangay\\b32.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void ormc_city() {
    std::string act;
    std::cout << "\n======= Ormoc (City) =======\n" << std::endl;
    std::cout << "Zip Code: 6541";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 8 Barangay\\b33.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void byebye_city() {
    std::string act;
    std::cout << "\n======= Baybay (City) =======\n" << std::endl;
    std::cout << "Zip Code: 6521";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 8 Barangay\\b34.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void abyg() {
    std::string act;
    std::cout << "\n=========== 1st District =============\n" << std::endl;
    std::cout << "\n======= Abuyog (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 6510";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 8 Barangay\\b35.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void alngln() {
    std::string act;
    std::cout << "\n=========== 1st District =============\n" << std::endl;
    std::cout << "\n======= Alangalang (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 6517";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 8 Barangay\\b36.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void bbtngon() {
    std::string act;
    std::cout << "\n=========== 1st District =============\n" << std::endl;
    std::cout << "\n======= Babatngon (Municipality) =======\n" << std::endl;
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
            Barangay.open("Barangay\\Region 8 Barangay\\b37.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void plo() {
    std::string act;
    std::cout << "\n=========== 1st District =============\n" << std::endl;
    std::cout << "\n======= Palo (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 6501";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 8 Barangay\\b38.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void san_migcz() {
    std::string act;
    std::cout << "\n=========== 1st District =============\n" << std::endl;
    std::cout << "\n======= San Miguel (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 6518";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 8 Barangay\\b39.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void tnuan() {
    std::string act;
    std::cout << "\n=========== 1st District =============\n" << std::endl;
    std::cout << "\n======= Tanauan (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 6502";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 8 Barangay\\b40.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void bruen() {
    std::string act;
    std::cout << "\n=========== 2nd District =============\n" << std::endl;
    std::cout << "\n======= Burauen (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 6516";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 8 Barangay\\b41.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void dgam() {
    std::string act;
    std::cout << "\n=========== 2nd District =============\n" << std::endl;
    std::cout << "\n======= Dagami (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 6515";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 8 Barangay\\b42.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void dlg() {
    std::string act;
    std::cout << "\n=========== 2nd District =============\n" << std::endl;
    std::cout << "\n======= Dulag (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 6505";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 8 Barangay\\b43.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void jlita() {
    std::string act;
    std::cout << "\n=========== 2nd District =============\n" << std::endl;
    std::cout << "\n======= Julita (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 6506";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 8 Barangay\\b44.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void lola_paz() {
    std::string act;
    std::cout << "\n=========== 2nd District =============\n" << std::endl;
    std::cout << "\n======= La Paz (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 6508";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 8 Barangay\\b45.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void myrga() {
    std::string act;
    std::cout << "\n=========== 2nd District =============\n" << std::endl;
    std::cout << "\n======= Mayorga (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 6507";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 8 Barangay\\b46.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void brbck() {
    std::string act;
    std::cout << "\n=========== 2nd District =============\n" << std::endl;
    std::cout << "\n======= MacArthur (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 6509";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 8 Barangay\\b47.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void clubian() {
    std::string act;
    std::cout << "\n=========== 3rd District =============\n" << std::endl;
    std::cout << "\n======= Calubian (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 6534";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 8 Barangay\\b48.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void lyte_2() {
    std::string act;
    std::cout << "\n=========== 3rd District =============\n" << std::endl;
    std::cout << "\n======= Leyte (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 6533";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 8 Barangay\\b49.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void san_isro() {
    std::string act;
    std::cout << "\n=========== 3rd District =============\n" << std::endl;
    std::cout << "\n======= San Isidro (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 6535";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 8 Barangay\\b50.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void tbng() {
    std::string act;
    std::cout << "\n=========== 3rd District =============\n" << std::endl;
    std::cout << "\n======= Tabango (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 6536";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 8 Barangay\\b51.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void tbntbn() {
    std::string act;
    std::cout << "\n=========== 3rd District =============\n" << std::endl;
    std::cout << "\n======= Tabontabon (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 6504";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 8 Barangay\\b52.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void albera() {
    std::string act;
    std::cout << "\n=========== 3rd District =============\n" << std::endl;
    std::cout << "\n======= Albuera (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 6542";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 8 Barangay\\b53.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void vllba() {
    std::string act;
    std::cout << "\n=========== 3rd District =============\n" << std::endl;
    std::cout << "\n======= Villaba (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 6537";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 8 Barangay\\b54.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void byebye() {
    std::string act;
    std::cout << "\n=========== 4th District =============\n" << std::endl;
    std::cout << "\n======= Baybay (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 6521";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 8 Barangay\\b55.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void hlongs() {
    std::string act;
    std::cout << "\n=========== 4th District =============\n" << std::endl;
    std::cout << "\n======= Hilongos (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 6524";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 8 Barangay\\b56.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void inpacn() {
    std::string act;
    std::cout << "\n=========== 4th District =============\n" << std::endl;
    std::cout << "\n======= Inopacan (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 6522";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 8 Barangay\\b57.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void isbl() {
    std::string act;
    std::cout << "\n=========== 4th District =============\n" << std::endl;
    std::cout << "\n======= Isabel (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 6539";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 8 Barangay\\b58.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void knngan() {
    std::string act;
    std::cout << "\n=========== 4th District =============\n" << std::endl;
    std::cout << "\n======= Kananga (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 6531";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 8 Barangay\\b59.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void mrda() {
    std::string act;
    std::cout << "\n=========== 4th District =============\n" << std::endl;
    std::cout << "\n======= Merida (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 6540";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 8 Barangay\\b60.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void plmpln() {
    std::string act;
    std::cout << "\n=========== 4th District =============\n" << std::endl;
    std::cout << "\n======= Palompon (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 6538";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 8 Barangay\\b73.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

void gn_bato() {
    std::string act;
    std::cout << "\n=========== 5th District =============\n" << std::endl;
    std::cout << "\n======= Bato (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 6525";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 8 Barangay\\b61.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void hndang() {
    std::string act;
    std::cout << "\n=========== 5th District =============\n" << std::endl;
    std::cout << "\n======= Hindang (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 6523";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 8 Barangay\\b62.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void mhplg() {
    std::string act;
    std::cout << "\n=========== 5th District =============\n" << std::endl;
    std::cout << "\n======= Mahaplag (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 6512";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 8 Barangay\\b63.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void mtlm(){
    std::string act;
    std::cout << "\n=========== 5th District =============\n" << std::endl;
    std::cout << "\n======= Matalom (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 6526";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 8 Barangay\\b64.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void mtgob() {
    std::string act;
    std::cout << "\n=========== 5th District =============\n" << std::endl;
    std::cout << "\n======= Matag-ob (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 6532";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 8 Barangay\\b65.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void brgo() {
    std::string act;
    std::cout << "\n=========== 6th District =============\n" << std::endl;
    std::cout << "\n======= Barugo (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 6521";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 8 Barangay\\b66.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void cpocan() {
    std::string act;
    std::cout << "\n=========== 6th District =============\n" << std::endl;
    std::cout << "\n======= Capoocan (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 6530";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 8 Barangay\\b67.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void crgra() {
    std::string act;
    std::cout << "\n=========== 6th District =============\n" << std::endl;
    std::cout << "\n======= Carigara (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 6529";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 8 Barangay\\b78.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void jro() {
    std::string act;
    std::cout << "\n=========== 6th District =============\n" << std::endl;
    std::cout << "\n======= Jaro (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 6527";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 8 Barangay\\b69.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void pstrna() {
    std::string act;
    std::cout << "\n=========== 6th District =============\n" << std::endl;
    std::cout << "\n======= Pastrana (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 6514";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 8 Barangay\\b70.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void tlsa() {
    std::string act;
    std::cout << "\n=========== 6th District =============\n" << std::endl;
    std::cout << "\n======= Tolosa (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 6503";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 8 Barangay\\b71.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void tnga() {
    std::string act;
    std::cout << "\n=========== 6th District =============\n" << std::endl;
    std::cout << "\n======= Tunga (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 6528";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 8 Barangay\\b72.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

// Northern Samar
void ctrman(){
    std::string act;
    std::cout << "\n======= Catarman (Capital Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 6400";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 8 Barangay\\b74.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void alln(){
    std::string act;
    std::cout << "\n======= Allen (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 6405";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 8 Barangay\\b75.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void bri(){
    std::string act;
    std::cout << "\n======= Biri (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 6410";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 8 Barangay\\b76.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void bbn(){
    std::string act;
    std::cout << "\n======= Bobon (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 6401";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 8 Barangay\\b77.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void cpl(){
    std::string act;
    std::cout << "\n======= Capul (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 6408";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 8 Barangay\\b78.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void ctbig(){
    std::string act;
    std::cout << "\n======= Catubig (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 6418";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 8 Barangay\\b79.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void gmy(){
    std::string act;
    std::cout << "\n======= Gamay (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 6422";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 8 Barangay\\b80.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void loang(){
    std::string act;
    std::cout << "\n======= Laoang (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 6411";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 8 Barangay\\b81.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void lpng(){
    std::string act;
    std::cout << "\n======= Lapinig (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 6423";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 8 Barangay\\b82.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void ls_nvs(){
    std::string act;
    std::cout << "\n======= Las Navas (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 6420";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 8 Barangay\\b83.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void lvzrs(){
    std::string act;
    std::cout << "\n======= Lavezares (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 6404";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 8 Barangay\\b84.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void lp_d_vg(){
    std::string act;
    std::cout << "\n======= Lope de Vega (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 6403";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 8 Barangay\\b85.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void mpns(){
    std::string act;
    std::cout << "\n======= Mapanas (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 6421";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 8 Barangay\\b86.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void mndrgon(){
    std::string act;
    std::cout << "\n======= Mondragon (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 6402";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 8 Barangay\\b87.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void plpg(){
    std::string act;
    std::cout << "\n======= Palapag (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 6412";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 8 Barangay\\b88.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void pmbjan(){
    std::string act;
    std::cout << "\n======= Pambujan (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 6413";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 8 Barangay\\b89.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void rsrio(){
    std::string act;
    std::cout << "\n======= Rosario (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 6416";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 8 Barangay\\b90.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void san_atnio(){
    std::string act;
    std::cout << "\n======= San Antonio (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 6407";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 8 Barangay\\b91.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void sn_isdo(){
    std::string act;
    std::cout << "\n======= San Isidro (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 6409";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 8 Barangay\\b92.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void sn_js(){
    std::string act;
    std::cout << "\n======= San Jose (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 6406";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 8 Barangay\\b93.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void sn_rq(){
    std::string act;
    std::cout << "\n======= San Roque (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 6415";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 8 Barangay\\b94.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void sn_vcnt(){
    std::string act;
    std::cout << "\n======= San Vicente (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 6419";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 8 Barangay\\b95.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void slvn_lbs(){
    std::string act;
    std::cout << "\n======= Silvino Lobos (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 6417";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 8 Barangay\\b96.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void victria(){
    std::string act;
    std::cout << "\n======= Victoria (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 6414";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 8 Barangay\\b97.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

// Samar
void clbyg_city(){
    std::string act;
    std::cout << "\n======= Calbayog City (City) =======\n" << std::endl;
    std::cout << "Zip Code: 6710";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 8 Barangay\\b98.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }

}
void almgro(){
    std::string act;
    std::cout << "\n======= Almagro (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 6724";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 8 Barangay\\b99.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void bsey(){
    std::string act;
    std::cout << "\n======= Basey (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 6720";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 8 Barangay\\b100.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void clbga(){
    std::string act;
    std::cout << "\n======= Calbiga (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 6715";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 8 Barangay\\b101.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void dram(){
    std::string act;
    std::cout << "\n======= Daram (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 6722";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 8 Barangay\\b102.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void gndara(){
    std::string act;
    std::cout << "\n======= Gandara (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 6706";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 8 Barangay\\b103.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void hnbngan(){
    std::string act;
    std::cout << "\n======= Hinabangan (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 6716";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 8 Barangay\\b104.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void jabong(){
    std::string act;
    std::cout << "\n======= Jiabong (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 6701";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 8 Barangay\\b105.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void mrbt(){
    std::string act;
    std::cout << "\n======= Marabut (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 6721";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 8 Barangay\\b106.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void mtginao(){
    std::string act;
    std::cout << "\n======= Matuguinao (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 6708";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 8 Barangay\\b107.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void mtong(){
    std::string act;
    std::cout << "\n======= Motiong (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 6702";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 8 Barangay\\b108.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void pgsnghan(){
    std::string act;
    std::cout << "\n======= Pagsanghan (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 6705";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 8 Barangay\\b109.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void prnas(){
    std::string act;
    std::cout << "\n======= Paranas (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 6717";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 8 Barangay\\b110.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void pnbcdao(){
    std::string act;
    std::cout << "\n======= Pinabacdao (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 6714";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 8 Barangay\\b111.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void sn_jrge(){
    std::string act;
    std::cout << "\n======= San Jorge (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 6707";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 8 Barangay\\b112.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void sn_js_d_ban(){
    std::string act;
    std::cout << "\n======= San Jose de Buan (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 6718";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 8 Barangay\\b113.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void sn_sbstan(){
    std::string act;
    std::cout << "\n======= San Sebastian (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 6704";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 8 Barangay\\b114.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void snt_mrgrta(){
    std::string act;
    std::cout << "\n======= Santa Margarita (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 6703";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 8 Barangay\\b115.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void snt_rt(){
    std::string act;
    std::cout << "\n======= Santa Rita (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 6719";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 8 Barangay\\b116.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void snto_nno(){
    std::string act;
    std::cout << "\n======= Santo Nino (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 6723";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 8 Barangay\\b117.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void tllra(){
    std::string act;
    std::cout << "\n======= Talalora (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 6713";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 8 Barangay\\b118.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void trngnn(){
    std::string act;
    std::cout << "\n======= Tarangnan (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 6709";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 8 Barangay\\b119.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void vllreal(){
    std::string act;
    std::cout << "\n======= Villareal (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 6712";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 8 Barangay\\b120.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void zmrrga(){
    std::string act;
    std::cout << "\n======= Zumarraga (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 6711";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 8 Barangay\\b121.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void ctblgan_city(){
    std::string act;
    std::cout << "\n======= Catbalogan City (City) =======\n" << std::endl;
    std::cout << "Zip Code: 6700";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 8 Barangay\\b122.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}

// Southern Leyte

void kenjie_city(){
    std::string act;
    std::cout << "\n======= Maasin City (City) =======\n" << std::endl;
    std::cout << "Zip Code: 6600";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 8 Barangay\\b123.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void anhw(){
    std::string act;
    std::cout << "\n======= Anahawan (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 6610";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 8 Barangay\\b124.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void bntoc(){
    std::string act;
    std::cout << "\n======= Bontoc (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 6604";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 8 Barangay\\b125.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void hnnngan(){
    std::string act;
    std::cout << "\n======= Hinunangan (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 6608";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 8 Barangay\\b126.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void hnndyn(){
    std::string act;
    std::cout << "\n======= Hinundayan (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 6608";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 8 Barangay\\b127.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void dirty(){
    std::string act;
    std::cout << "\n======= Libagon (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 6615";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 8 Barangay\\b129.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void llon(){
    std::string act;
    std::cout << "\n======= Liloan (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 6612";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 8 Barangay\\b130.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void f_mass(){
    std::string act;
    std::cout << "\n======= Limasawa  (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 6618";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 8 Barangay\\b131.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void mltbog(){
    std::string act;
    std::cout << "\n======= Malitbog (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 6603";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 8 Barangay\\b132.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void pdr_bur(){
    std::string act;
    std::cout << "\n======= Padre Burgos (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 6602";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 8 Barangay\\b133.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void thts_a_door(){
    std::string act;
    std::cout << "\n======= Pintuyan (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 6614";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 8 Barangay\\b134.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void snt_brnrd(){
    std::string act;
    std::cout << "\n======= Saint Bernard (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 6616";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 8 Barangay\\b135.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void sn_frncsco(){
    std::string act;
    std::cout << "\n======= San Francisco (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 6613";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 8 Barangay\\b136.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void sn_jan(){
    std::string act;
    std::cout << "\n======= San Juan (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 6611";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 8 Barangay\\b137.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void sn_rchrd(){
    std::string act;
    std::cout << "\n======= San Ricardo (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 6617";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 8 Barangay\\b138.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void slgo(){
    std::string act;
    std::cout << "\n======= Silago (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 6607";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 8 Barangay\\b139.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void sgod(){
    std::string act;
    std::cout << "\n======= Sogod (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 6606";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 8 Barangay\\b140.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void tms_ops(){
    std::string act;
    std::cout << "\n======= Tomas Oppus (Municipality) =======\n" << std::endl;
    std::cout << "Zip Code: 6605";
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "[type] barangays - view [Barangays];\n";
        std::cout << "[type] back - leave the [more info];\n";
        std::cout << "[type]: ";
        std::cin >> act;
        
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\Region 8 Barangay\\b141.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}
void mcrhn(){
    std::string act;
    std::cout << "\n======= Macrohon (Municipality) =======\n" << std::endl;
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
            Barangay.open("Barangay\\Region 8 Barangay\\b142.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

        } else if (act == "back" || act == "Back" || act == "BACK") {
            break;
        } else {
            std::cout << "\n===========================\n";
            std::cout << "[error] action;";
            std::cout << "\n===========================\n";
        }
    }
}