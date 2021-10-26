#include "lab3.h"
#include "../functions/Beale/beale.h"
#include "../functions/Booth/booth.h"
#include "../functions/HimmelBlau/himmelBlau.h"
#include <iostream>

int annealing_menu(int num){
    switch(num){
        case 1:
            Beale();
            break;
        case 2:
            Booth();
            break;
        case 3:
            HimmelBlau();
            break;
        default:
            std::cout << "Bad input" << std::endl;
    }
    return 0;
};

int lab3() {
    std::cout << "Choose climbing function:" << std::endl;
    std::cout << "1. Beale" << std::endl;
    std::cout << "2. Booth" << std::endl;
    std::cout << "3. HimmelBlau" << std::endl;
    std::cout << "4. all" << std::endl;
    int num;
    std::cin >> num;
    annealing_menu(num);
    return 0;
}