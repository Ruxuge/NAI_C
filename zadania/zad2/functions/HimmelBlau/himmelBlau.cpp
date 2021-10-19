#include <valarray>
#include <iostream>
#include "himmelBlau.h"

using namespace std;

double himmelBlau(double x, double y) {
    return pow(pow(x, 2) + y - 11, 2) +
    pow(x + pow(y, 2) - 7, 2);
}


double runHimmelBlau(double x, double y){

    auto result = himmelBlau(x,y);
    cout << "HimmelBlau: " << result << endl;
}