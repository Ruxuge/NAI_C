//
// Created by ruxuge on 27.10.2021.
//

#include <iostream>
#include "lab4.h"
#include "../functions/HimmelBlau/himmelBlau.h"

int genetic_menu(int num){
    switch(num){
        case 1:
            HimmelBlau();
            break;
            default:
            std::cout << "Bad input" << std::endl;
    }
    return 0;
};

int lab4() {
    std::cout << "Choose climbing function:" << std::endl;
    std::cout << "3. HimmelBlau" << std::endl;
    int num;
    std::cin >> num;
    genetic_menu(num);
    return 0;
}
