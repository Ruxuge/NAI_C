#include <iostream>
#include "zadania/zad1/hill_climbing.h"
#include "zadania/zad1/lab1.h"
using namespace std;

int switch_menu(int num){
    switch(num){
        case 1:
            start();
            break;
        case 2:
            lab1();
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

