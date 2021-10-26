#include <iostream>
#include "wykłady/wyk1/hill_climbing.h"
#include "zadania/zad1/lab1.h"
#include "zadania/zad2/lab2.h"
#include "wykłady/wyk2/tabu_search.h"
#include "zadania/zad3/lab3.h"

using namespace std;

int switch_menu(int num){
    switch(num){
        case 1:
            wyk1();
            break;
        case 2:
            lab1();
            break;
        case 3:
            wyk2();
            break;
        case 4:
            lab2();
            break;
        case 5:
            lab3();
            break;
        default:
            std::cout << "Bad input" << std::endl;
    }
    return 0;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    std::cout << "Choose example:" << std::endl;
    int num;
    cin >> num;
    switch_menu(num);
    return 0;
}

