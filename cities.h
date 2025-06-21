#pragma once
#include <iostream>
#include <string>
#include <fstream>

/* [Reminder] THIS IS A CITIES FILE - palagi po maglagay ng comments para alam ng mga nag eedit */

// ================================================== 149 cities ((void)Functionalities) ===========================================================================================================================================

// Occidental Mindoro cities =========================================
void san_j() {
    std::string act;
    std::cout << "\n======= San Jose (City) =======\n" << std::endl;

    
    std::cout << "\n===============================\n" << std::endl;
    while(true) {
        // .txt file connection called the fstream
        std::cout << "\n[type] barangays - view [Barangays];\n";
        std::cout << "\n[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\b1.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

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
        std::cout << "\n[type] barangays - view [Barangays];\n";
        std::cout << "\n[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\b2.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

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
        std::cout << "\n[type] barangays - view [Barangays];\n";
        std::cout << "\n[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\b3.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

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
        std::cout << "\n[type] barangays - view [Barangays];\n";
        std::cout << "\n[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\b4.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

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
        std::cout << "\n[type] barangays - view [Barangays];\n";
        std::cout << "\n[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\b5.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

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
        std::cout << "\n[type] barangays - view [Barangays];\n";
        std::cout << "\n[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\b6.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

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
        std::cout << "\n[type] barangays - view [Barangays];\n";
        std::cout << "\n[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\b7.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

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
        std::cout << "\n[type] barangays - view [Barangays];\n";
        std::cout << "\n[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\b8.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

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
        std::cout << "\n[type] barangays - view [Barangays];\n";
        std::cout << "\n[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\b9.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

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
        std::cout << "\n[type] barangays - view [Barangays];\n";
        std::cout << "\n[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\b10.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

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
        std::cout << "\n[type] barangays - view [Barangays];\n";
        std::cout << "\n[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\b11.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

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
        std::cout << "\n[type] barangays - view [Barangays];\n";
        std::cout << "\n[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\b12.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

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
        std::cout << "\n[type] barangays - view [Barangays];\n";
        std::cout << "\n[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\b13.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

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
        std::cout << "\n[type] barangays - view [Barangays];\n";
        std::cout << "\n[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\b14.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

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
        std::cout << "\n[type] barangays - view [Barangays];\n";
        std::cout << "\n[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\b15.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

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
        std::cout << "\n[type] barangays - view [Barangays];\n";
        std::cout << "\n[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\b16.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

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
        std::cout << "\n[type] barangays - view [Barangays];\n";
        std::cout << "\n[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\b17.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

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
        std::cout << "\n[type] barangays - view [Barangays];\n";
        std::cout << "\n[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\b18.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

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
        std::cout << "\n[type] barangays - view [Barangays];\n";
        std::cout << "\n[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\b19.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

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
        std::cout << "\n[type] barangays - view [Barangays];\n";
        std::cout << "\n[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\b20.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

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
        std::cout << "\n[type] barangays - view [Barangays];\n";
        std::cout << "\n[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\b21.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

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
        std::cout << "\n[type] barangays - view [Barangays];\n";
        std::cout << "\n[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\b22.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

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
        std::cout << "\n[type] barangays - view [Barangays];\n";
        std::cout << "\n[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\b23.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

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
        std::cout << "\n[type] barangays - view [Barangays];\n";
        std::cout << "\n[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\b24.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

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
        std::cout << "\n[type] barangays - view [Barangays];\n";
        std::cout << "\n[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\b25.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

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
        std::cout << "\n[type] barangays - view [Barangays];\n";
        std::cout << "\n[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\b26.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

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
        std::cout << "\n[type] barangays - view [Barangays];\n";
        std::cout << "\n[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\b27.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

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
        std::cout << "\n[type] barangays - view [Barangays];\n";
        std::cout << "\n[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\b28.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

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
        std::cout << "\n[type] barangays - view [Barangays];\n";
        std::cout << "\n[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\b29.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

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
        std::cout << "\n[type] barangays - view [Barangays];\n";
        std::cout << "\n[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\b30.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

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
        std::cout << "\n[type] barangays - view [Barangays];\n";
        std::cout << "\n[type] back - leave the [more info];\n";
            std::cout << "[type]: ";
            std::cin >> act;
        if (act == "barangays") {
            std::fstream Barangay;
            Barangay.open("Barangay\\b31.txt", std::ios::in);

            if (Barangay.is_open()){
            std::string line;
            while (std::getline(Barangay, line)){
                std::cout << line << std::endl; 
            }
            Barangay.close();
            } else {
                std::cout << "\n[error]could not open file\n";
            }

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

}
void btn() {
    
}
void cjcn() {
    
}
void cltrv() {
    
}
void cncptn() {
    
}
void crqer() {
    
}
void frrl() {
    
}
void looc_2() {
    
}
void mgdwng() {
    
}
void odogn() {
    
}
void romblon_cap() {
    
}
void san_agstn() {
    
}
void san_adrs() {
    
}
void san_frnd() {
    
}
void san_js() {
    
}
void snt_f() {
    
}
void snt_mra() {
    
}