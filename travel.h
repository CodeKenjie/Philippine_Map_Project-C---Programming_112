#pragma once
#include <iostream>

void travel() {
    std::string frm, whr;
    std::cout << "\n================== Luzon Int'l Airports ====================\n";
    std::cout << "MNL == Ninoy Aquino Int'l Airport\n";
    std::cout << "CRK == Clark Int'l Airport\n";
    std::cout << "BAG == Loakan Airport\n";
    std::cout << "TUG == Tuguegarao Airport\n";
    std::cout << "BSO == Basco Airport\n";
    std::cout << "LAO == Laoag Int'l Airport\n";
    std::cout << "USU == Busuanga Airport\n";
    std::cout << "SJI == San Jose Airport\n";
    std::cout << "PPS == Puerto Princesa Int'l Airport\n";
    std::cout << "LGP == Bicol Int'l Airport\n";
    std::cout << "\n================== Visayas Int'l Airports ====================\n";
    std::cout << "CEB == Mactan-Cebu Int'l Airport\n";
    std::cout << "ILO == Ilo-ilo int'l Airport\n";
    std::cout << "KLO == Kalibo int'l Airport\n";
    std::cout << "MPH == Godofredo P. Ramos Airport\n";
    std::cout << "TAG == Bohol-Panglao Int'l Airport\n";
    std::cout << "TAC == Daniel Z. Ramualdez Airport\n";
    std::cout << "DGT == Dumaguete-Sibulan Airport\n";
    std::cout << "\n================== Mindanao Int'l Airports ====================\n";
    std::cout << "DVO == Francisco Bangoy Int'l Airport\n";
    std::cout << "ZAM == Zambuanga Int'l Airport\n";
    std::cout << "CGY == Laguindingan Int'l Airport\n" << std::endl;

    while (true) {
        std::cout << "\n[Type] Back - to go to Home page\n";
        std::cout << "[From]: ";
        std::getline(std::cin >> std::ws, frm);
        std::cout << "[To]: ";
        std::getline(std::cin >> std::ws, whr);

       
        if (frm == "mnl" || frm == "ceb" && whr == "ceb" || whr == "mnl") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' <<"Approx. 565 km \nFlight time: ~1h : 45 min " << std::endl;
        } else if (frm == "mnl" || frm == "dvo" && whr == "dvo" || whr == "mnl") {
            std::cout << "From: "<< frm <<'\n' << "To: " << "To: " << whr << '\n' << "Approx. 960 km \nFlight time: ~2h : 25 min " << std::endl;
        } else if (frm == "mnl" || frm == "ilo" && whr == "ilo" || whr == "mnl") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' <<"Approx. 451 km \nFlight time: ~1h : 21 min " << std::endl;
        } else if (frm == "mnl" || frm == "klo" && whr == "klo" || whr == "mnl") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' <<"Approx. 346 km \nFlight time: ~1h : 1 min " << std::endl;
        } else if (frm == "mnl" || frm == "mph" && whr == "mph" || whr == "mnl") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 303 km \nFlight time: ~ 56 min " << std::endl;
        } else if (frm == "mnl" || frm == "tag" && whr == "tag" || whr == "mnl") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 618 km \nFlight time: ~1h : 55 min " << std::endl;
        } else if (frm == "mnl" || frm == "pps" && whr == "pps" || whr == "mnl") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 582 km \nFlight time: ~1h : 48 min " << std::endl;
        } else if (frm == "mnl" || frm == "usu" && whr == "usu" || whr == "mnl") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 282 km \nFlight time: ~ 53 min " << std::endl;
        } else if (frm == "mnl" || frm == "zam" && whr == "zam" || whr == "mnl") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 847 km \nFlight time: ~2h : 01 min " << std::endl;
        } else if (frm == "mnl" || frm == "cgy" && whr == "cgy" || whr == "mnl") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 752 km \nFlight time: ~2h : 23 min " << std::endl;
        } else if (frm == "mnl" || frm == "lgp" && whr == "lgp" || whr == "mnl") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 329 km \nFlight time: ~ 59 min " << std::endl;
        } else if (frm == "mnl" || frm == "tac" && whr == "tac" || whr == "mnl") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 566 km \nFlight time: ~1h : 27 min " << std::endl;
        } else if (frm == "mnl" || frm == "dgt" && whr == "dgt" || whr == "mnl") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 624 km \nFlight time: ~1h : 34 min " << std::endl;
        } else if (frm == "mnl" || frm == "bso" && whr == "bso" || whr == "mnl") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 666 km \nFlight time: ~1h : 39 min " << std::endl;
        } else if (frm == "mnl" || frm == "lao" && whr == "lao" || whr == "mnl") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 410 km \nFlight time: ~1h : 06 min " << std::endl;
        } else if (frm == "mnl" || frm == "tug" && whr == "tug" || whr == "mnl") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 355 km \nFlight time: ~1h : 02 min " << std::endl;
        } else if (frm == "mnl" || frm == "crk" && whr == "crk" || whr == "mnl") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 90 km \nFlight time: ~ 30 min " << std::endl;
        } else if (frm == "mnl" || frm == "sji" && whr == "sji" || whr == "mnl") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 238 km \nFlight time: ~ 48 min " << std::endl;
        } else if (frm == "mnl" || frm == "bag" && whr == "bag" || whr == "mnl") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 211 km \nFlight time: ~ 45 min " << std::endl;
        } else if (frm == "ceb" || frm == "dvo" && whr == "dvo" || whr == "ceb") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 397 km \nFlight time: ~1h : 07 min " << std::endl;
        } else if (frm == "ceb" || frm == "ilo" && whr == "ilo" || whr == "ceb") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 163 km \nFlight time: ~ 39 min " << std::endl;
        } else if (frm == "ceb" || frm == "klo" && whr == "klo" || whr == "ceb") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 232 km \nFlight time: ~ 47 min " << std::endl;
        } else if (frm == "ceb" || frm == "mph" && whr == "mph" || whr == "ceb") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 284 km \nFlight time: ~ 53 min " << std::endl;
        } else if (frm == "ceb" || frm == "tag" && whr == "tag" || whr == "ceb") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 72 km \nFlight time: ~ 28 min " << std::endl;
        } else if (frm == "ceb" || frm == "pps" && whr == "pps" || whr == "ceb") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 576 km \nFlight time: ~1h : 38 min " << std::endl;
        } else if (frm == "ceb" || frm == "usu" && whr == "usu" || whr == "ceb") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 469 km \nFlight time: ~1h : 26 min " << std::endl;
        } else if (frm == "ceb" || frm == "zam" && whr == "zam" || whr == "ceb") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 430 km \nFlight time: ~1h : 21 min " << std::endl;
        } else if (frm == "ceb" || frm == "cgy" && whr == "cgy" || whr == "ceb") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 195 km \nFlight time: ~ 43 min " << std::endl;
        } else if (frm == "ceb" || frm == "lgp" && whr == "lgp" || whr == "ceb") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 316 km \nFlight time: ~ 57 min " << std::endl;
        } else if (frm == "ceb" || frm == "tac" && whr == "tac" || whr == "ceb") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 153 km \nFlight time: ~ 38 min " << std::endl;
        } else if (frm == "ceb" || frm == "dgt" && whr == "dgt" || whr == "ceb") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 131 km \nFlight time: ~ 35 min " << std::endl;
        } else if (frm == "ceb" || frm == "bso" && whr == "bso" || whr == "ceb") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 1143 km \nFlight time: ~3h : 00 min " << std::endl;
        } else if (frm == "ceb" || frm == "lao" && whr == "lao" || whr == "ceb") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 947 km \nFlight time: ~2h : 21 min " << std::endl;
        } else if (frm == "ceb" || frm == "tug" && whr == "tug" || whr == "ceb") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 847 km \nFlight time: ~2h : 01 min " << std::endl;
        } else if (frm == "ceb" || frm == "crk" && whr == "crk" || whr == "ceb") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 655 km \nFlight time: ~1h : 38 min " << std::endl;
        } else if (frm == "ceb" || frm == "sji" && whr == "sji" || whr == "ceb") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 393 km \nFlight time: ~1h : 06 min " << std::endl;
        } else if (frm == "ceb" || frm == "bag" && whr == "bag" || whr == "ceb") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 763 km \nFlight time: ~1h : 51 min " << std::endl;
        } else if (frm == "dvo" || frm == "ilo" && whr == "ilo" || whr == "dvo") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 523 km \nFlight time: ~1h : 22 min " << std::endl;
        } else if (frm == "dvo" || frm == "klo" && whr == "klo" || whr == "dvo") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 619 km \nFlight time: ~1h : 34 min " << std::endl;
        } else if (frm == "dvo" || frm == "mph" && whr == "mph" || whr == "dvo") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 668 km \nFlight time: ~1h : 39 min " << std::endl;
        } else if (frm == "dvo" || frm == "tag" && whr == "tag" || whr == "dvo") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 343 km \nFlight time: ~1h : 00 min " << std::endl;
        } else if (frm == "dvo" || frm == "pps" && whr == "pps" || whr == "dvo") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 812 km \nFlight time: ~1h : 57 min " << std::endl;
        } else if (frm == "dvo" || frm == "usu" && whr == "usu" || whr == "dvo") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 822 km \nFlight time: ~1h : 58 min " << std::endl;
        } else if (frm == "dvo" || frm == "zam" && whr == "zam" || whr == "dvo") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 397 km \nFlight time: ~1h : 07 min " << std::endl;
        } else if (frm == "dvo" || frm == "cgy" && whr == "cgy" || whr == "dvo") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 210 km \nFlight time: ~ 45 min " << std::endl;
        } else if (frm == "dvo" || frm == "lpg" && whr == "lpg" || whr == "dvo") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 699 km \nFlight time: ~1h : 07 min " << std::endl;
        } else if (frm == "dvo" || frm == "tac" && whr == "tac" || whr == "dvo") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 459 km \nFlight time: ~1h : 14 min " << std::endl;
        } else if (frm == "dvo" || frm == "dgt" && whr == "dgt" || whr == "dvo") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 356 km \nFlight time: ~1h : 02 min " << std::endl;
        } else if (frm == "dvo" || frm == "bso" && whr == "bso" || whr == "dvo") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 1527 km \nFlight time: ~3h : 36 min " << std::endl;
        } else if (frm == "dvo" || frm == "lao" && whr == "lao" || whr == "dvo") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 1343 km \nFlight time: ~3h : 00 min " << std::endl;
        } else if (frm == "dvo" || frm == "tug" && whr == "tug" || whr == "dvo") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 1239 km \nFlight time: ~2h : 40 min " << std::endl;
        } else if (frm == "dvo" || frm == "crk" && whr == "crk" || whr == "dvo") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 1050 km \nFlight time: ~2h : 31 min " << std::endl;
        } else if (frm == "dvo" || frm == "sji" && whr == "sji" || whr == "dvo") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 768 km \nFlight time: ~1h : 45 min " << std::endl;
        } else if (frm == "dvo" || frm == "bag" && whr == "bag" || whr == "dvo") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 1160 km \nFlight time: ~2h : 35 min " << std::endl;
        } else if (frm == "ilo" || frm == "klo" && whr == "klo" || whr == "ilo") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 108 km \nFlight time: ~ 32 min " << std::endl;
        } else if (frm == "ilo" || frm == "mph" && whr == "mph" || whr == "ilo") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 149 km \nFlight time: ~ 37 min " << std::endl;
        } else if (frm == "ilo" || frm == "tag" && whr == "tag" || whr == "ilo") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 184 km \nFlight time: ~ 41 min " << std::endl;
        } else if (frm == "ilo" || frm == "pps" && whr == "pps" || whr == "ilo") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 428 km \nFlight time: ~1h : 11 min " << std::endl;
        } else if (frm == "ilo" || frm == "usu" && whr == "usu" || whr == "ilo") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 309 km \nFlight time: ~ 56 min " << std::endl;
        } else if (frm == "ilo" || frm == "zam" && whr == "zam" || whr == "ilo") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 423 km \nFlight time: ~1h : 10 min " << std::endl;
        } else if (frm == "ilo" || frm == "cgy" && whr == "cgy" || whr == "ilo") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 313 km \nFlight time: ~ 57 min " << std::endl;
        } else if (frm == "ilo" || frm == "lgp" && whr == "lgp" || whr == "ilo") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 300 km \nFlight time: ~ 56 min " << std::endl;
        } else if (frm == "ilo" || frm == "tac" && whr == "tac" || whr == "ilo") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 277 km \nFlight time: ~ 53 min " << std::endl;
        } else if (frm == "ilo" || frm == "dgt" && whr == "dgt" || whr == "ilo") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 174 km \nFlight time: ~ 40 min " << std::endl;
        } else if (frm == "ilo" || frm == "bso" && whr == "bso" || whr == "ilo") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 1079 km \nFlight time: ~2h : 48 min " << std::endl;
        } else if (frm == "ilo" || frm == "lao" && whr == "lao" || whr == "ilo") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 854 km \nFlight time: ~2h : 03 min " << std::endl;
        } else if (frm == "ilo" || frm == "tug" && whr == "tug" || whr == "ilo") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 772 km \nFlight time: ~1h : 46 min " << std::endl;
        } else if (frm == "ilo" || frm == "crk" && whr == "crk" || whr == "ilo") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 540 km \nFlight time: ~1h : 24 min " << std::endl;
        } else if (frm == "ilo" || frm == "sji" && whr == "sji" || whr == "ilo") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 245 km \nFlight time:  49 min " << std::endl;
        } else if (frm == "ilo" || frm == "bag" && whr == "bag" || whr == "ilo") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 660 km \nFlight time: ~1h : 49 min " << std::endl;
        } else if (frm == "klo" || frm == "mph" && whr == "mph" || whr == "klo") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 53 km \nFlight time: ~ 26 min " << std::endl;
        } else if (frm == "klo" || frm == "tag" && whr == "tag" || whr == "klo") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 275 km \nFlight time: ~ 52 min " << std::endl;
        } else if (frm == "klo" || frm == "pps" && whr == "pps" || whr == "klo") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 450 km \nFlight time: ~1h : 13 min " << std::endl;
        } else if (frm == "klo" || frm == "usu" && whr == "usu" || whr == "klo") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 253 km \nFlight time: ~ 50 min " << std::endl;
        } else if (frm == "klo" || frm == "zam" && whr == "zam" || whr == "klo") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 527 km \nFlight time: ~1h : 23 min " << std::endl;
        } else if (frm == "klo" || frm == "cgy" && whr == "cgy" || whr == "klo") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 409 km \nFlight time: ~1h : 08 min " << std::endl;
        } else if (frm == "klo" || frm == "lgp" && whr == "lgp" || whr == "klo") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 220 km \nFlight time: ~ 45 min " << std::endl;
        } else if (frm == "klo" || frm == "tac" && whr == "tac" || whr == "klo") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 294 km \nFlight time: ~ 55 min " << std::endl;
        } else if (frm == "klo" || frm == "dgt" && whr == "dgt" || whr == "klo") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 278 km \nFlight time: ~ 53 min " << std::endl;
        } else if (frm == "klo" || frm == "bso" && whr == "bso" || whr == "klo") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 972 km \nFlight time: ~2h : 16 min " << std::endl;
        } else if (frm == "klo" || frm == "lao" && whr == "lao" || whr == "klo") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 746 km \nFlight time: ~1h : 49 min " << std::endl;
        } else if (frm == "klo" || frm == "tug" && whr == "tug" || whr == "klo") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 664 km \nFlight time: ~1h : 39 min " << std::endl;
        } else if (frm == "klo" || frm == "crk" && whr == "crk" || whr == "klo") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 435 km \nFlight time: ~1h : 11 min " << std::endl;
        } else if (frm == "klo" || frm == "sji" && whr == "sji" || whr == "klo") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 163 km \nFlight time: ~ 39 min " << std::endl;
        } else if (frm == "klo" || frm == "bag" && whr == "bag" || whr == "klo") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 553 km \nFlight time: ~1h : 26 min " << std::endl;
        } else if (frm == "mph" || frm == "tag" && whr == "tag" || whr == "mph") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 325 km \nFlight time: ~ 58 min " << std::endl;
        } else if (frm == "mph" || frm == "pps" && whr == "pps" || whr == "mph") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 425 km \nFlight time: ~1h : 10 min " << std::endl;
        } else if (frm == "mph" || frm == "usu" && whr == "usu" || whr == "mph") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 203 km \nFlight time: ~ 45 min " << std::endl;
        } else if (frm == "mph" || frm == "zam" && whr == "zam" || whr == "mph") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 553 km \nFlight time: ~1h : 26 min " << std::endl;
        } else if (frm == "mph" || frm == "cgy" && whr == "cgy" || whr == "mph") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 458 km \nFlight time: ~1h : 14 min " << std::endl;
        } else if (frm == "mph" || frm == "lgp" && whr == "lgp" || whr == "mph") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 237 km \nFlight time: ~ 48 min " << std::endl;
        } else if (frm == "mph" || frm == "tac" && whr == "tac" || whr == "mph") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 344 km \nFlight time: ~1h : 01 min " << std::endl;
        } else if (frm == "mph" || frm == "dgt" && whr == "dgt" || whr == "mph") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 322 km \nFlight time: ~ 58 min " << std::endl;
        } else if (frm == "mph" || frm == "bso" && whr == "bso" || whr == "mph") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 944 km \nFlight time: ~2h : 21 min " << std::endl;
        } else if (frm == "mph" || frm == "lao" && whr == "lao" || whr == "mph") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 709 km \nFlight time: ~1h : 44 min " << std::endl;
        } else if (frm == "mph" || frm == "tug" && whr == "tug" || whr == "mph") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 633 km \nFlight time: ~1h : 35 min " << std::endl;
        } else if (frm == "mph" || frm == "crk" && whr == "crk" || whr == "mph") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 391 km \nFlight time: ~1h : 06 min " << std::endl;
        } else if (frm == "mph" || frm == "sji" && whr == "sji" || whr == "mph") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 110 km \nFlight time: ~ 33 min " << std::endl;
        } else if (frm == "mph" || frm == "bag" && whr == "bag" || whr == "mph") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 513 km \nFlight time: ~1h : 21 min " << std::endl;
        } else if (frm == "tag" || frm == "pps" && whr == "pps" || whr == "tag") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx.  559 km \nFlight time: ~1h : 26 min " << std::endl;
        } else if (frm == "tag" || frm == "usu" && whr == "usu" || whr == "tag") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 492 km \nFlight time: ~1h : 18 min " << std::endl;
        } else if (frm == "tag" || frm == "zam" && whr == "zam" || whr == "tag") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 362 km \nFlight time: ~1h : 03 min " << std::endl;
        } else if (frm == "tag" || frm == "cgy" && whr == "cgy" || whr == "tag") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 134 km \nFlight time: ~ 45 min " << std::endl;
        } else if (frm == "tag" || frm == "lgp" && whr == "lgp" || whr == "tag") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 387 km \nFlight time: ~1h : 06 min " << std::endl;
        } else if (frm == "tag" || frm == "tac" && whr == "tac" || whr == "tag") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 216 km \nFlight time: 45 min " << std::endl;
        } else if (frm == "tag" || frm == "dgt" && whr == "dgt" || whr == "tag") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 71 km \nFlight time: 28 min " << std::endl;
        } else if (frm == "tag" || frm == "bso" && whr == "bso" || whr == "tag") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 1210 km \nFlight time: ~2h : 45 min " << std::endl;
        } else if (frm == "tag" || frm == "lao" && whr == "lao" || whr == "tag") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 1008 km \nFlight time: ~2h : 20 min " << std::endl;
        } else if (frm == "tag" || frm == "tug" && whr == "tug" || whr == "tag") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 912 km \nFlight time: ~2h : 09 min " << std::endl;
        } else if (frm == "tag" || frm == "crk" && whr == "crk" || whr == "tag") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 708 km \nFlight time: ~1h : 34 min " << std::endl;
        } else if (frm == "tag" || frm == "sji" && whr == "sji" || whr == "tag") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 428 km \nFlight time: ~1h : 11 min " << std::endl;
        } else if (frm == "tag" || frm == "bag" && whr == "bag" || whr == "tag") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 821 km \nFlight time: ~1h : 58 min " << std::endl;
        } else if (frm == "pps" || frm == "usu" && whr == "usu" || whr == "pps") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 301 km \nFlight time: 55 min " << std::endl;
        } else if (frm == "pps" || frm == "zam" && whr == "zam" || whr == "pps") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 479 km \nFlight time: ~1h : 27 min " << std::endl;
        } else if (frm == "pps" || frm == "cgy" && whr == "cgy" || whr == "pps") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 638 km \nFlight time: ~1h : 36 min " << std::endl;
        } else if (frm == "pps" || frm == "lgp" && whr == "lgp" || whr == "pps") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 661 km \nFlight time: ~1h : 39 min " << std::endl;
        } else if (frm == "pps" || frm == "tac" && whr == "tac" || whr == "pps") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 383 km \nFlight time: ~1h : 05 min " << std::endl;
        } else if (frm == "pps" || frm == "dgt" && whr == "dgt" || whr == "pps") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 761 km \nFlight time: ~1h : 51 min " << std::endl;
        } else if (frm == "pps" || frm == "bso" && whr == "bso" || whr == "pps") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 1234 km \nFlight time: ~2h : 36 min " << std::endl;
        } else if (frm == "pps" || frm == "lao" && whr == "lao" || whr == "pps") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 953 km \nFlight time: ~2h : 14 min " << std::endl;
        } else if (frm == "pps" || frm == "tug" && whr == "tug" || whr == "pps") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 931 km \nFlight time: ~2h : 11 min " << std::endl;
        } else if (frm == "pps" || frm == "crk" && whr == "crk" || whr == "pps") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 633 km \nFlight time: ~2h : 35 min " << std::endl;
        } else if (frm == "pps" || frm == "sji" && whr == "sji" || whr == "pps") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 383 km \nFlight time: ~1h : 05 min " << std::endl;
        } else if (frm == "pps" || frm == "bag" && whr == "bag" || whr == "pps") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 761 km \nFlight time: ~1h : 51 min " << std::endl;
        } else if (frm == "usu" || frm == "zam" && whr == "zam" || whr == "usu") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 614 km \nFlight time: ~1h : 33 min " << std::endl;
        } else if (frm == "usu" || frm == "cgy" && whr == "cgy" || whr == "usu") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 615 km \nFlight time: ~1h : 33 min " << std::endl;
        } else if (frm == "usu" || frm == "lgp" && whr == "lgp" || whr == "usu") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 411 km \nFlight time: ~1h : 09 min " << std::endl;
        } else if (frm == "usu" || frm == "tac" && whr == "tac" || whr == "usu") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 546 km \nFlight time: ~1h : 25 min " << std::endl;
        } else if (frm == "usu" || frm == "dgt" && whr == "dgt" || whr == "usu") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 467 km \nFlight time: ~1h : 15 min " << std::endl;
        } else if (frm == "usu" || frm == "bso" && whr == "bso" || whr == "usu") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 943 km \nFlight time: ~2h : 13 min " << std::endl;
        } else if (frm == "usu" || frm == "lao" && whr == "lao" || whr == "usu") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 672 km \nFlight time: ~1h : 40 min " << std::endl;
        } else if (frm == "usu" || frm == "tug" && whr == "tug" || whr == "usu") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 636 km \nFlight time: ~1h : 36 min " << std::endl;
        } else if (frm == "usu" || frm == "crk" && whr == "crk" || whr == "usu") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 343 km \nFlight time: ~1h : 00 min " << std::endl;
        } else if (frm == "usu" || frm == "sji" && whr == "sji" || whr == "usu") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 106 km \nFlight time: ~ 32 min " << std::endl;
        } else if (frm == "usu" || frm == "bag" && whr == "bag" || whr == "usu") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 474 km \nFlight time: ~1h : 16 min " << std::endl;
        } else if (frm == "zam" || frm == "cgy" && whr == "cgy" || whr == "zam") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 324 km \nFlight time: ~ 58 min " << std::endl;
        } else if (frm == "zam" || frm == "lgp" && whr == "lgp" || whr == "zam") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 714 km \nFlight time: ~1h : 45 min " << std::endl;
        } else if (frm == "zam" || frm == "tac" && whr == "tac" || whr == "zam") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 577 km \nFlight time: ~1h : 29 min " << std::endl;
        } else if (frm == "zam" || frm == "dgt" && whr == "dgt" || whr == "zam") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 300 km \nFlight time: ~ 55 min " << std::endl;
        } else if (frm == "zam" || frm == "bso" && whr == "bso" || whr == "zam") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 1497 km \nFlight time: ~3h : 09 min " << std::endl;
        } else if (frm == "zam" || frm == "lao" && whr == "lao" || whr == "zam") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 1256 km \nFlight time: ~2h : 50 min " << std::endl;
        } else if (frm == "zam" || frm == "tug" && whr == "tug" || whr == "zam") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 1187 km \nFlight time: ~2h : 22 min " << std::endl;
        } else if (frm == "zam" || frm == "crk" && whr == "tug" || whr == "zam") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 929 km \nFlight time: ~2h : 11 min " << std::endl;
        } else if (frm == "zam" || frm == "sji" && whr == "sji" || whr == "zam") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 612 km \nFlight time: ~1h : 33 min " << std::endl;
        } else if (frm == "zam" || frm == "bag" && whr == "bag" || whr == "zam") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 1057 km \nFlight time: ~2h : 20 min " << std::endl;
        } else if (frm == "cgy" || frm == "lgp" && whr == "lgp" || whr == "cgy") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 509 km \nFlight time: ~1h : 20 min " << std::endl;
        } else if (frm == "cgy" || frm == "tac" && whr == "tac" || whr == "cgy") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 296 km \nFlight time: ~ 55 min " << std::endl;
        } else if (frm == "cgy" || frm == "dgt" && whr == "dgt" || whr == "cgy") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 150 km \nFlight time: ~ 37 min " << std::endl;
        } else if (frm == "cgy" || frm == "bso" && whr == "bso" || whr == "cgy") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 1337 km \nFlight time: ~2h : 50 min " << std::endl;
        } else if (frm == "cgy" || frm == "lao" && whr == "lao" || whr == "cgy") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 1140 km \nFlight time: ~2h : 36 min " << std::endl;
        } else if (frm == "cgy" || frm == "tug" && whr == "tug" || whr == "cgy") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 1042 km \nFlight time: ~2h : 22 min " << std::endl;
        } else if (frm == "cgy" || frm == "crk" && whr == "crk" || whr == "cgy") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 842 km \nFlight time: ~2h : 00 min " << std::endl;
        } else if (frm == "cgy" || frm == "sji" && whr == "sji" || whr == "cgy") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 558 km \nFlight time: ~1h : 26 min " << std::endl;
        } else if (frm == "cgy" || frm == "bag" && whr == "bag" || whr == "cgy") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 955 km \nFlight time: ~2h : 14 min " << std::endl;
        } else if (frm == "lgp" || frm == "tac" && whr == "tac" || whr == "lgp") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 256 km \nFlight time: ~ 50 min " << std::endl;
        } else if (frm == "lgp" || frm == "dgt" && whr == "dgt" || whr == "lgp") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 426 km \nFlight time: ~1h : 10 min " << std::endl;
        } else if (frm == "lgp" || frm == "bso" && whr == "bso" || whr == "lgp") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 829 km \nFlight time: ~1h : 59 min " << std::endl;
        } else if (frm == "lgp" || frm == "lao" && whr == "lao" || whr == "lgp") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 653 km \nFlight time: ~1h : 48 min " << std::endl;
        } else if (frm == "lgp" || frm == "tug" && whr == "tug" || whr == "lgp") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 541 km \nFlight time: ~1h : 34 min " << std::endl;
        } else if (frm == "lgp" || frm == "crk" && whr == "crk" || whr == "lgp") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 410 km \nFlight time: ~1h : 08 min " << std::endl;
        } else if (frm == "lgp" || frm == "sji" && whr == "sji" || whr == "lgp") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 305 km \nFlight time: ~ 56 min " << std::endl;
        } else if (frm == "lgp" || frm == "bag" && whr == "bag" || whr == "lgp") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 489 km \nFlight time: ~1h : 18 min " << std::endl;
        } else if (frm == "tac" || frm == "dgt" && whr == "dgt" || whr == "tac") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 282 km \nFlight time: ~ 53 min " << std::endl;
        } else if (frm == "tac" || frm == "bso" && whr == "bso" || whr == "tac") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 1071 km \nFlight time: ~2h : 24 min " << std::endl;
        } else if (frm == "tac" || frm == "lao" && whr == "lao" || whr == "tac") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 909 km \nFlight time: ~2h : 08 min " << std::endl;
        } else if (frm == "tac" || frm == "tug" && whr == "tug" || whr == "tac") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 794 km \nFlight time: ~1h : 55 min " << std::endl;
        } else if (frm == "tac" || frm == "crk" && whr == "crk" || whr == "tac") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 653 km \nFlight time: ~1h : 38 min " << std::endl;
        } else if (frm == "tac" || frm == "sji" && whr == "sji" || whr == "tac") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 452 km \nFlight time: ~1h : 13 min " << std::endl;
        } else if (frm == "tac" || frm == "bag" && whr == "bag" || whr == "tac") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 742 km \nFlight time: ~1h : 48 min " << std::endl;
        } else if (frm == "dgt" || frm == "bso" && whr == "bso" || whr == "dgt") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 1238 km \nFlight time: ~2h : 38 min " << std::endl;
        } else if (frm == "dgt" || frm == "lao" && whr == "lao" || whr == "dgt") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 1023 km \nFlight time: ~2h : 22 min " << std::endl;
        } else if (frm == "dgt" || frm == "tug" && whr == "tug" || whr == "dgt") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 935 km \nFlight time: ~2h : 11 min " << std::endl;
        } else if (frm == "dgt" || frm == "crk" && whr == "crk" || whr == "dgt") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 713 km \nFlight time: ~1h : 45 min " << std::endl;
        } else if (frm == "dgt" || frm == "sji" && whr == "sji" || whr == "dgt") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 416 km \nFlight time: ~1h : 09 min " << std::endl;
        } else if (frm == "dgt" || frm == "bag" && whr == "bag" || whr == "dgt") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 831 km \nFlight time: ~1h : 59 min " << std::endl;
        } else if (frm == "bso" || frm == "lao" && whr == "lao" || whr == "bso") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 294 km \nFlight time: ~ 55 min " << std::endl;
        } else if (frm == "bso" || frm == "tug" && whr == "tug" || whr == "bso") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 312 km \nFlight time: ~ 57 min " << std::endl;
        } else if (frm == "bso" || frm == "crk" && whr == "crk" || whr == "bso") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 602 km \nFlight time: ~1h : 32 min " << std::endl;
        } else if (frm == "bso" || frm == "sji" && whr == "sji" || whr == "bso") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 901 km \nFlight time: ~2h : 06 min " << std::endl;
        } else if (frm == "bso" || frm == "bag" && whr == "bag" || whr == "bso") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 474 km \nFlight time: ~1h : 16 min " << std::endl;
        } else if (frm == "lao" || frm == "tug" && whr == "tug" || whr == "bso") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 140 km \nFlight time: ~ 36 min " << std::endl;
        } else if (frm == "lao" || frm == "crk" && whr == "crk" || whr == "bso") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 331 km \nFlight time: ~ 59 min " << std::endl;
        } else if (frm == "lao" || frm == "sji" && whr == "sji" || whr == "bso") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 646 km \nFlight time: ~1h : 37 min " << std::endl;
        } else if (frm == "lao" || frm == "bag" && whr == "bag" || whr == "bso") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 200 km \nFlight time: ~ 43 min " << std::endl;
        } else if (frm == "tug" || frm == "crk" && whr == "crk" || whr == "tug") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 299 km \nFlight time: ~ 55 min " << std::endl;
        } else if (frm == "tug" || frm == "sji" && whr == "sji" || whr == "tug") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 589 km \nFlight time: ~1h : 30 min " << std::endl;
        } else if (frm == "tug" || frm == "bag" && whr == "bag" || whr == "tug") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 184 km \nFlight time: ~ 41 min " << std::endl;
        } else if (frm == "crk" || frm == "sji" && whr == "sji" || whr == "crk") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 317 km \nFlight time: ~ 57 min " << std::endl;
        } else if (frm == "crk" || frm == "bag" && whr == "bag" || whr == "crk") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 132 km \nFlight time: ~ 35 min " << std::endl;
        } else if (frm == "sji" || frm == "bag" && whr == "bag" || whr == "sji") {
            std::cout << "From: "<< frm <<'\n' << "To: " << whr << '\n' << "Approx. 464 km \nFlight time: ~1h : 13 min " << std::endl;
        } else if (frm == "back" || frm == "Back" || frm == "BACK") {
            break;
        } else {
            std::cout << "\n==========================================================================\n";
            std::cout << "[Sorry] : The Selected Airport Is not Supported or flight is not available";
            std::cout << "\n==========================================================================\n";
        }
    }
}
