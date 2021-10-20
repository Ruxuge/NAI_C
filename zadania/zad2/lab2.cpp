#include "lab2.h"
#include <iostream>
#include "functions/Beale/beale.h"
#include "functions/HimmelBlau/himmelBlau.h"
#include "functions/Booth/booth.h"

int climbing_menu(int num){
        switch(num){
            case 1:
                runBeale();
                break;
            case 2:
                //runBooth();
                break;
            case 3:
                runHimmelBlau();
                break;
            case 4:
                runBeale();
                //runBooth();
                runHimmelBlau();
            default:
                std::cout << "Bad input" << std::endl;
        }
        return 0;
    };

int lab2() {
    std::cout << "Choose climbing function:" << std::endl;
    std::cout << "1. Beale" << std::endl;
    std::cout << "2. Booth" << std::endl;
    std::cout << "3. HimmelBlau" << std::endl;
    std::cout << "4. all" << std::endl;
    int num;
    std::cin >> num;
    climbing_menu(num);
    return 0;
}