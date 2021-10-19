#include <valarray>
#include <iostream>
#include "beale.h"


using namespace std;

//f(x) = (1.5 - x1 + x1x2)^2 + (2.25 - x1 + x1x2^2)^2 + (2.625 - x1 + x1x2^3)^2
//The function is usually evaluated on the square xi ∈ [-4.5, 4.5]

double beale(double x, double y) {
    return pow((1.5 - x + (x * y)), 2)
    + pow((2.25 - x + (x * pow(y, 2))), 2)
    + pow((2.626 - x + (x * pow(y, 3))), 2);
}


double runBeale(double x, double y)
{
    auto result = beale(x, y);
    cout << "Beale: " << result << endl;
}