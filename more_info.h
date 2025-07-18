#pragma once
#include <iostream>
#include <string>
#include <fstream>

/* THIS IS A MORE INFO FILE - pakilagyan po ng comment "//" yung every more info ng bawat city*/

// Aurora more info
void more_info_ara(){
        std::string act;
        std::fstream mrinf;

        mrinf.open("more_info//ara_mi.txt", std::ios::in);
        
        if(mrinf.is_open()){
            std::string line;
            while(std::getline(mrinf, line)){
                std::cout << line << std::endl;
            }
            mrinf.close();
        } else {
            std::cout << "\n[error] cant trace the file.\n";
        }
        
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


void more_info_btan(){
        std::string act;
        std::fstream mrinf;

        mrinf.open("more_info//btan_mi.txt", std::ios::in);
        
        if(mrinf.is_open()){
            std::string line;
            while(std::getline(mrinf, line)){
                std::cout << line << std::endl;
            }
            mrinf.close();
        } else {
            std::cout << "\n[error] cant trace the file.\n";
        }
        
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

void more_info_blcan(){
        std::string act;
        std::fstream mrinf;

        mrinf.open("more_info//blcan_mi.txt", std::ios::in);
        
        if(mrinf.is_open()){
            std::string line;
            while(std::getline(mrinf, line)){
                std::cout << line << std::endl;
            }
            mrinf.close();
        } else {
            std::cout << "\n[error] cant trace the file.\n";
        }
        
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

void more_info_nuva_ecja(){
        std::string act;
        std::fstream mrinf;

        mrinf.open("more_info//nuva_ecja_mi.txt", std::ios::in);
        
        if(mrinf.is_open()){
            std::string line;
            while(std::getline(mrinf, line)){
                std::cout << line << std::endl;
            }
            mrinf.close();
        } else {
            std::cout << "\n[error] cant trace the file.\n";
        }
        
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

void more_info_pamga(){
        std::string act;
        std::fstream mrinf;

        mrinf.open("more_info//pamga_mi.txt", std::ios::in);
        
        if(mrinf.is_open()){
            std::string line;
            while(std::getline(mrinf, line)){
                std::cout << line << std::endl;
            }
            mrinf.close();
        } else {
            std::cout << "\n[error] cant trace the file.\n";
        }
        
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

void more_info_tlac(){
        std::string act;
        std::fstream mrinf;

        mrinf.open("more_info//tlac_mi.txt", std::ios::in);
        
        if(mrinf.is_open()){
            std::string line;
            while(std::getline(mrinf, line)){
                std::cout << line << std::endl;
            }
            mrinf.close();
        } else {
            std::cout << "\n[error] cant trace the file.\n";
        }
        
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

void more_info_zmbls(){
        std::string act;
        std::fstream mrinf;

        mrinf.open("more_info//zmbls_mi.txt", std::ios::in);
        
        if(mrinf.is_open()){
            std::string line;
            while(std::getline(mrinf, line)){
                std::cout << line << std::endl;
            }
            mrinf.close();
        } else {
            std::cout << "\n[error] cant trace the file.\n";
        }
        
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

// Cavite more info
void more_info_cvte(){
        std::string act;
        std::fstream mrinf;

        mrinf.open("more_info//cvte_mi.txt", std::ios::in);
        
        if(mrinf.is_open()){
            std::string line;
            while(std::getline(mrinf, line)){
                std::cout << line << std::endl;
            }
            mrinf.close();
        } else {
            std::cout << "\n[error] cant trace the file.\n";
        }
        
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

void more_info_lgna(){
        std::string act;
        std::fstream mrinf;

        mrinf.open("more_info//lgna_mi.txt", std::ios::in);
        
        if(mrinf.is_open()){
            std::string line;
            while(std::getline(mrinf, line)){
                std::cout << line << std::endl;
            }
            mrinf.close();
        } else {
            std::cout << "\n[error] cant trace the file.\n";
        }
        
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

void more_info_btgas(){
        std::string act;
        std::fstream mrinf;

        mrinf.open("more_info//btgas_mi.txt", std::ios::in);
        
        if(mrinf.is_open()){
            std::string line;
            while(std::getline(mrinf, line)){
                std::cout << line << std::endl;
            }
            mrinf.close();
        } else {
            std::cout << "\n[error] cant trace the file.\n";
        }
        
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

void more_info_rzl(){
        std::string act;
        std::fstream mrinf;

        mrinf.open("more_info//rzl_mi.txt", std::ios::in);
        
        if(mrinf.is_open()){
            std::string line;
            while(std::getline(mrinf, line)){
                std::cout << line << std::endl;
            }
            mrinf.close();
        } else {
            std::cout << "\n[error] cant trace the file.\n";
        }
        
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

void more_info_qzn(){
        std::string act;
        std::fstream mrinf;

        mrinf.open("more_info//qzn_mi.txt", std::ios::in);
        
        if(mrinf.is_open()){
            std::string line;
            while(std::getline(mrinf, line)){
                std::cout << line << std::endl;
            }
            mrinf.close();
        } else {
            std::cout << "\n[error] cant trace the file.\n";
        }
        
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



// Occidental mindoro more info
void more_info_occm(){
        std::string act;
        std::fstream mrinf;

        mrinf.open("more_info//occid_m_mi.txt", std::ios::in);
        
        if(mrinf.is_open()){
            std::string line;
            while(std::getline(mrinf, line)){
                std::cout << line << std::endl;
            }
            mrinf.close();
        } else {
            std::cout << "\n[error] cant trace the file.\n";
        }
        
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
        std::fstream mrinf;

        mrinf.open("more_info//orin_m_mi.txt", std::ios::in);

        if (mrinf.is_open()){
            std::string line;
            while (std::getline(mrinf, line)) {
                std::cout << line << std::endl;
            }
            mrinf.close();
        } else {
            std::cout << "\n[error] cant trace the file.\n";
        }

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

void more_info_mrndque(){
        std::string act;
        std::fstream mrinf;

        mrinf.open("more_info//mrnduq_mi.txt", std::ios::in);

        if (mrinf.is_open()){
            std::string line;
            while (std::getline(mrinf, line)) {
                std::cout << line << std::endl;
            }
            mrinf.close();
        } else {
            std::cout << "\n[error] cant trace the file.\n";
        }

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

void more_info_rmble(){
        std::string act;
        std::fstream mrinf;

        mrinf.open("more_info//rmble_mi.txt", std::ios::in);

        if (mrinf.is_open()){
            std::string line;
            while (std::getline(mrinf, line)) {
                std::cout << line << std::endl;
            }
            mrinf.close();
        } else {
            std::cout << "\n[error] cant trace the file.\n";
        }

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

void more_info_plwn(){
        std::string act;
        std::fstream mrinf;

        mrinf.open("more_info//plwn_mi.txt", std::ios::in);

        if (mrinf.is_open()){
            std::string line;
            while (std::getline(mrinf, line)) {
                std::cout << line << std::endl;
            }
            mrinf.close();
        } else {
            std::cout << "\n[error] cant trace the file.\n";
        }

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

void more_info_alby(){
        std::string act;
        std::fstream mrinf;

        mrinf.open("more_info//alby_mi.txt", std::ios::in);

        if (mrinf.is_open()){
            std::string line;
            while (std::getline(mrinf, line)) {
                std::cout << line << std::endl;
            }
            mrinf.close();
        } else {
            std::cout << "\n[error] cant trace the file.\n";
        }

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

void more_info_CN(){
        std::string act;
        std::fstream mrinf;

        mrinf.open("more_info//CN_mi.txt", std::ios::in);

        if (mrinf.is_open()){
            std::string line;
            while (std::getline(mrinf, line)) {
                std::cout << line << std::endl;
            }
            mrinf.close();
        } else {
            std::cout << "\n[error] cant trace the file.\n";
        }

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

void more_info_CS(){
        std::string act;
        std::fstream mrinf;

        mrinf.open("more_info//CS_mi.txt", std::ios::in);

        if (mrinf.is_open()){
            std::string line;
            while (std::getline(mrinf, line)) {
                std::cout << line << std::endl;
            }
            mrinf.close();
        } else {
            std::cout << "\n[error] cant trace the file.\n";
        }

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

void more_info_ctndanes(){
        std::string act;
        std::fstream mrinf;

        mrinf.open("more_info//ctndnes_mi.txt", std::ios::in);

        if (mrinf.is_open()){
            std::string line;
            while (std::getline(mrinf, line)) {
                std::cout << line << std::endl;
            }
            mrinf.close();
        } else {
            std::cout << "\n[error] cant trace the file.\n";
        }

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

void more_info_msbt(){
        std::string act;
        std::fstream mrinf;

        mrinf.open("more_info//msbt_mi.txt", std::ios::in);

        if (mrinf.is_open()){
            std::string line;
            while (std::getline(mrinf, line)) {
                std::cout << line << std::endl;
            }
            mrinf.close();
        } else {
            std::cout << "\n[error] cant trace the file.\n";
        }

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

void more_info_srsgon(){
        std::string act;
        std::fstream mrinf;

        mrinf.open("more_info//srsgon_mi.txt", std::ios::in);

        if (mrinf.is_open()){
            std::string line;
            while (std::getline(mrinf, line)) {
                std::cout << line << std::endl;
            }
            mrinf.close();
        } else {
            std::cout << "\n[error] cant trace the file.\n";
        }

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

void more_info_blrn(){
        std::string act;
        std::fstream mrinf;

        mrinf.open("more_info//blrn_mi.txt", std::ios::in);

        if (mrinf.is_open()){
            std::string line;
            while (std::getline(mrinf, line)) {
                std::cout << line << std::endl;
            }
            mrinf.close();
        } else {
            std::cout << "\n[error] cant trace the file.\n";
        }

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

void more_info_est_smr(){
        std::string act;
        std::fstream mrinf;

        mrinf.open("more_info//blrn_mi.txt", std::ios::in);

        if (mrinf.is_open()){
            std::string line;
            while (std::getline(mrinf, line)) {
                std::cout << line << std::endl;
            }
            mrinf.close();
        } else {
            std::cout << "\n[error] cant trace the file.\n";
        }

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

void more_info_lyte(){
        std::string act;
        std::fstream mrinf;

        mrinf.open("more_info//lyte_mi.txt", std::ios::in);

        if (mrinf.is_open()){
            std::string line;
            while (std::getline(mrinf, line)) {
                std::cout << line << std::endl;
            }
            mrinf.close();
        } else {
            std::cout << "\n[error] cant trace the file.\n";
        }

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

void more_info_nrth_srm(){
        std::string act;
        std::fstream mrinf;

        mrinf.open("more_info//nrth_smr_mi.txt", std::ios::in);

        if (mrinf.is_open()){
            std::string line;
            while (std::getline(mrinf, line)) {
                std::cout << line << std::endl;
            }
            mrinf.close();
        } else {
            std::cout << "\n[error] cant trace the file.\n";
        }

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

void more_info_smr(){
        std::string act;
        std::fstream mrinf;

        mrinf.open("more_info//smr_mi.txt", std::ios::in);

        if (mrinf.is_open()){
            std::string line;
            while (std::getline(mrinf, line)) {
                std::cout << line << std::endl;
            }
            mrinf.close();
        } else {
            std::cout << "\n[error] cant trace the file.\n";
        }

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

void more_info_srth_lyte(){
        std::string act;
        std::fstream mrinf;

        mrinf.open("more_info//srth_lyte_mi.txt", std::ios::in);

        if (mrinf.is_open()){
            std::string line;
            while (std::getline(mrinf, line)) {
                std::cout << line << std::endl;
            }
            mrinf.close();
        } else {
            std::cout << "\n[error] cant trace the file.\n";
        }

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


// Region 11 _ Davao ===========================================================================================================

void more_info_dvo_del_sur(){
        std::string act;
        std::fstream mrinf;

        mrinf.open("more_info//dvo_del_sur.txt", std::ios::in);

        if (mrinf.is_open()){
            std::string line;
            while (std::getline(mrinf, line)) {
                std::cout << line << std::endl;
            }
            mrinf.close();
        } else {
            std::cout << "\n[error] cant trace the file.\n";
        }

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

void more_info_dvo_oriental(){
        std::string act;
        std::fstream mrinf;

        mrinf.open("more_info//dvo_oriental.txt", std::ios::in);

        if (mrinf.is_open()){
            std::string line;
            while (std::getline(mrinf, line)) {
                std::cout << line << std::endl;
            }
            mrinf.close();
        } else {
            std::cout << "\n[error] cant trace the file.\n";
        }

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

void more_info_dvo_occidental(){
        std::string act;
        std::fstream mrinf;

        mrinf.open("more_info//dvo_occidental.txt", std::ios::in);

        if (mrinf.is_open()){
            std::string line;
            while (std::getline(mrinf, line)) {
                std::cout << line << std::endl;
            }
            mrinf.close();
        } else {
            std::cout << "\n[error] cant trace the file.\n";
        }

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

void more_info_dvo_de_oro(){
        std::string act;
        std::fstream mrinf;

        mrinf.open("more_info//dvo_de_oro.txt", std::ios::in);

        if (mrinf.is_open()){
            std::string line;
            while (std::getline(mrinf, line)) {
                std::cout << line << std::endl;
            }
            mrinf.close();
        } else {
            std::cout << "\n[error] cant trace the file.\n";
        }

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

void more_info_dvo_del_norte(){
        std::string act;
        std::fstream mrinf;

        mrinf.open("more_info//dvo_del_norte.txt", std::ios::in);

        if (mrinf.is_open()){
            std::string line;
            while (std::getline(mrinf, line)) {
                std::cout << line << std::endl;
            }
            mrinf.close();
        } else {
            std::cout << "\n[error] cant trace the file.\n";
        }

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

// Region 12 _ Soccsksargen ===========================================================================================================

void more_info_cotabato(){
        std::string act;
        std::fstream mrinf;

        mrinf.open("more_info//cotabato.txt", std::ios::in);

        if (mrinf.is_open()){
            std::string line;
            while (std::getline(mrinf, line)) {
                std::cout << line << std::endl;
            }
            mrinf.close();
        } else {
            std::cout << "\n[error] cant trace the file.\n";
        }

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

void more_info_south_cotabato(){
        std::string act;
        std::fstream mrinf;

        mrinf.open("more_info//south_cotabato.txt", std::ios::in);

        if (mrinf.is_open()){
            std::string line;
            while (std::getline(mrinf, line)) {
                std::cout << line << std::endl;
            }
            mrinf.close();
        } else {
            std::cout << "\n[error] cant trace the file.\n";
        }

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

void more_info_sarangani(){
        std::string act;
        std::fstream mrinf;

        mrinf.open("more_info//sarangani.txt", std::ios::in);

        if (mrinf.is_open()){
            std::string line;
            while (std::getline(mrinf, line)) {
                std::cout << line << std::endl;
            }
            mrinf.close();
        } else {
            std::cout << "\n[error] cant trace the file.\n";
        }

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

void more_info_sultan_kudarat(){
        std::string act;
        std::fstream mrinf;

        mrinf.open("more_info//sultan_kudarat.txt", std::ios::in);

        if (mrinf.is_open()){
            std::string line;
            while (std::getline(mrinf, line)) {
                std::cout << line << std::endl;
            }
            mrinf.close();
        } else {
            std::cout << "\n[error] cant trace the file.\n";
        }

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

// more info Region 1

void more_info_ilocos_norte(){
        std::string act;
        std::fstream mrinf;

        mrinf.open("more_info//ilocsnort.txt", std::ios::in);

        if (mrinf.is_open()){
            std::string line;
            while (std::getline(mrinf, line)) {
                std::cout << line << std::endl;
            }
            mrinf.close();
        } else {
            std::cout << "\n[error] cant trace the file.\n";
        }

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

void more_info_ilocossur(){
        std::string act;
        std::fstream mrinf;

        mrinf.open("more_info//ilocos_sur.txt", std::ios::in);

        if (mrinf.is_open()){
            std::string line;
            while (std::getline(mrinf, line)) {
                std::cout << line << std::endl;
            }
            mrinf.close();
        } else {
            std::cout << "\n[error] cant trace the file.\n";
        }

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

void more_info_la_unionz(){
        std::string act;
        std::fstream mrinf;

        mrinf.open("more_info//la_un.txt", std::ios::in);

        if (mrinf.is_open()){
            std::string line;
            while (std::getline(mrinf, line)) {
                std::cout << line << std::endl;
            }
            mrinf.close();
        } else {
            std::cout << "\n[error] cant trace the file.\n";
        }

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

void more_info_pangasinanz(){
        std::string act;
        std::fstream mrinf;

        mrinf.open("more_info//pngsnn.txt", std::ios::in);

        if (mrinf.is_open()){
            std::string line;
            while (std::getline(mrinf, line)) {
                std::cout << line << std::endl;
            }
            mrinf.close();
        } else {
            std::cout << "\n[error] cant trace the file.\n";
        }

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


void more_info_batanezz(){
        std::string act;
        std::fstream mrinf;

        mrinf.open("more_info//btszz.txt", std::ios::in);

        if (mrinf.is_open()){
            std::string line;
            while (std::getline(mrinf, line)) {
                std::cout << line << std::endl;
            }
            mrinf.close();
        } else {
            std::cout << "\n[error] cant trace the file.\n";
        }

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

void more_info_cagaynz(){
        std::string act;
        std::fstream mrinf;

        mrinf.open("more_info//cgyn.txt", std::ios::in);

        if (mrinf.is_open()){
            std::string line;
            while (std::getline(mrinf, line)) {
                std::cout << line << std::endl;
            }
            mrinf.close();
        } else {
            std::cout << "\n[error] cant trace the file.\n";
        }

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

void more_info_izabels(){
        std::string act;
        std::fstream mrinf;

        mrinf.open("more_info//isbl.txt", std::ios::in);

        if (mrinf.is_open()){
            std::string line;
            while (std::getline(mrinf, line)) {
                std::cout << line << std::endl;
            }
            mrinf.close();
        } else {
            std::cout << "\n[error] cant trace the file.\n";
        }

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

void more_info_nuevaaviz(){
        std::string act;
        std::fstream mrinf;

        mrinf.open("more_info//nuev_viz.txt", std::ios::in);

        if (mrinf.is_open()){
            std::string line;
            while (std::getline(mrinf, line)) {
                std::cout << line << std::endl;
            }
            mrinf.close();
        } else {
            std::cout << "\n[error] cant trace the file.\n";
        }

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

void more_info_qrnose(){
        std::string act;
        std::fstream mrinf;

        mrinf.open("more_info//abra_mi.txt", std::ios::in);

        if (mrinf.is_open()){
            std::string line;
            while (std::getline(mrinf, line)) {
                std::cout << line << std::endl;
            }
            mrinf.close();
        } else {
            std::cout << "\n[error] cant trace the file.\n";
        }

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


// more info car region ================================================

void more_info_abraa_v2(){
        std::string act;
        std::fstream mrinf;

        mrinf.open("more_info//abra_mi.txt", std::ios::in);

        if (mrinf.is_open()){
            std::string line;
            while (std::getline(mrinf, line)) {
                std::cout << line << std::endl;
            }
            mrinf.close();
        } else {
            std::cout << "\n[error] cant trace the file.\n";
        }

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


void more_info_apayaoo(){
        std::string act;
        std::fstream mrinf;

        mrinf.open("more_info//Apayao_mi.txt", std::ios::in);

        if (mrinf.is_open()){
            std::string line;
            while (std::getline(mrinf, line)) {
                std::cout << line << std::endl;
            }
            mrinf.close();
        } else {
            std::cout << "\n[error] cant trace the file.\n";
        }

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

void more_info_benguett(){
        std::string act;
        std::fstream mrinf;

        mrinf.open("more_info//Benguet_mi.txt", std::ios::in);

        if (mrinf.is_open()){
            std::string line;
            while (std::getline(mrinf, line)) {
                std::cout << line << std::endl;
            }
            mrinf.close();
        } else {
            std::cout << "\n[error] cant trace the file.\n";
        }

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

void more_info_ifugaoo(){
        std::string act;
        std::fstream mrinf;

        mrinf.open("more_info//ifugao_mi.txt", std::ios::in);

        if (mrinf.is_open()){
            std::string line;
            while (std::getline(mrinf, line)) {
                std::cout << line << std::endl;
            }
            mrinf.close();
        } else {
            std::cout << "\n[error] cant trace the file.\n";
        }

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

void more_info_kalingaa(){
        std::string act;
        std::fstream mrinf;

        mrinf.open("more_info//Kalinga_mi.txt", std::ios::in);

        if (mrinf.is_open()){
            std::string line;
            while (std::getline(mrinf, line)) {
                std::cout << line << std::endl;
            }
            mrinf.close();
        } else {
            std::cout << "\n[error] cant trace the file.\n";
        }

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

void more_info_mountain_provincee(){
        std::string act;
        std::fstream mrinf;

        mrinf.open("more_info//MT_mi.txt", std::ios::in);

        if (mrinf.is_open()){
            std::string line;
            while (std::getline(mrinf, line)) {
                std::cout << line << std::endl;
            }
            mrinf.close();
        } else {
            std::cout << "\n[error] cant trace the file.\n";
        }

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

