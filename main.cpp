#include <iostream>
#include "wykłady/wyk1/hill_climbing.h"
#include "zadania/zad1/lab1.h"
#include "zadania/zad2/lab2.h"
#include "wykłady/wyk2/tabu_search.h"
#include "zadania/zad3/lab3.h"
#include "zadania/zad5/lab5.h"
#include "zadania/zad6/lab6.hpp"
#include "zadania/zad7/lab7.h"
#include "zadania/zad8/lab8.h"
#include "zadania/zad9/lab9.h"

using namespace std;

int switch_menu(int num)
{
    switch (num)
    {
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
        lab5();
        break;
    case 6:
        lab6();
        break;
    case 7:
        lab7();
        break;
    case 8:
        lab8();
        break;
    case 9:
        lab9();
        break;
    default:
        std::cout << "Bad input" << std::endl;
    }
    return 0;
}

int main()
{
    std::cout << "Hello, World!" << std::endl;
    std::cout << "Choose example:" << std::endl;
    int num;
    cin >> num;
    switch_menu(num);
    return 0;
}
