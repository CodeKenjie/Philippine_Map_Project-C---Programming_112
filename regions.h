#pragma once
#include "provinces.h"
/* THIS IS A REGIONS FILE */

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
        std::cout << "\n[type]: back - Previous;\n";
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
    std::string prov;
    std::string provinces[] = {"Albay", "Camarines Norte", "Camarines Sur", "Masbate", "Sorsogon"
    };
    int size = sizeof(provinces) / sizeof(provinces[0]);
    
    
    while (true) {
        for (int i = 0; i < size; i++) {
        std::cout << provinces[i] << std::endl;
        }
        std::cout << "\n[type]: back - Previous;\n";
        std::cout << "[Select] Provice: ";
        std::getline(std::cin >> std::ws, prov);
    
        if (prov == "albay" || prov == "Albay"|| prov == "ALBAY") {
            aby();
        } else if (prov == "camarines norte" || prov == "Camarines Norte"|| prov == "CAMARINES NORTE") {
            cmrns_nrt();
        } else if (prov == "camarines sur" || prov == "Camarines Sur"|| prov == "CAMARINES SUR") {
            cmrns_sr();
        } else if (prov == "catanduanes" || prov == "Catanduanes"|| prov == "CATANDUANES") {
            ctndns();
        } else if (prov == "masbate" || prov == "Masbate"|| prov == "MASBATE") {
            msbt();
        }  else if(prov == "sorsogon" || prov == "Sorsogon"|| prov == "SORSOGON") {
            srsgn();
        } else if (prov == "back" || prov == "Back" || prov == "BACK") {
            std::cout << "\n===========================\n";
            break;
        }else {
            std::cout << "\n===========================\n";
            std::cout << "[error] Province dont Exist";
            std::cout << "\n===========================\n";
        }
    
    }
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
//kenjie the great -------------------------------------------------
void reg_viii() {
    std::cout << "\n====== Region VIII (Eastern Visayas) =======\n";
    std::string prov;
    std::string provinces[] = {"Biliran", "Eastern Samar", "Leyte", "Northern Samar", "Samar", "Southern Leyte"
    };
    int size = sizeof(provinces) / sizeof(provinces[0]);
    
    
    while (true) {
        for (int i = 0; i < size; i++) {
        std::cout << provinces[i] << std::endl;
        }
        std::cout << "\n[type]: back - Previous;\n";
        std::cout << "[Select] Provice: ";
        std::getline(std::cin >> std::ws, prov);
    
        if (prov == "biliran" || prov == "Biliran"|| prov == "BILIRAN") {
            blran();
        } else if (prov == "eastern samar" || prov == "Eastern Samar"|| prov == "EASTERN SAMAR") {
            east_smr();
        } else if (prov == "leyte" || prov == "Leyte"|| prov == "LEYTE") {
            lyte();
        } else if (prov == "northern samar" || prov == "Norther Samar"|| prov == "NORTHERN SAMAR") {
            north_smr();
        } else if (prov == "samar" || prov == "Samar"|| prov == "SAMAR") {
            smr();
        }  else if(prov == "southern samar" || prov == "Southern Samar"|| prov == "SAUTHERN SAMAR") {
            south_smr();
        } else if (prov == "back" || prov == "Back" || prov == "BACK") {
            std::cout << "\n===========================\n";
            break;
        }else {
            std::cout << "\n===========================\n";
            std::cout << "[error] Province dont Exist";
            std::cout << "\n===========================\n";
        }
    
    }
    
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
