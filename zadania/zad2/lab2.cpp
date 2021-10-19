#include "lab2.h"
#include <iostream>
#include "functions/Beale/beale.h"
#include "functions/HimmelBlau/himmelBlau.h"
#include "functions/Booth/booth.h"

int climbing_menu(int num, double x, double y){
        switch(num){
            case 1:
                runBeale(x, y);
                break;
            case 2:
                runBooth(x, y);
                break;
            case 3:
                runHimmelBlau(x, y);
                break;
            case 4:
                runBeale(x, y);
                runBooth(x, y);
                runHimmelBlau(x, y);
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
    double x;
    double y;
    std::cout << "print x: " << std::endl;
    std::cin >> x;
    std::cout << "print y: " << std::endl;
    std::cin >> y;
    climbing_menu(num, x, y);
    return 0;
}