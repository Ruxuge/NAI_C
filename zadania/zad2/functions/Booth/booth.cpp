#include "booth.h"
#include <valarray>
#include <iostream>

using namespace std;

double booth(double x, double y) {
    return pow(x + (2 * y) - 7, 2) +
    pow((2 * x) + y - 5, 2);
}


double runBooth(double x, double y){
    auto result = booth(x,y);
    cout << "Booth: " << result << endl;
}