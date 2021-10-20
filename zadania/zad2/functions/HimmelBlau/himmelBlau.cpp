#include <valarray>
#include <iostream>
#include <vector>
#include <random>
#include "../../../../helpers.h"
#include "himmelBlau.h"

using namespace std;


double runHimmelBlau(){

    random_device rd;
    mt19937 mt_generator(rd());

    auto himmelBlau = [](vector<double> v) {
        double x = v.at(0),y= v.at(1);
        return pow(pow(x, 2) + y - 11, 2) +
        pow(x + pow(y, 2) - 7, 2);
    };

    auto himmelBlau_domain = [](vector<double> v) {
        return (abs(v[0]) <= 5) && (abs(v[1]) <= 5);
    };

    uniform_real_distribution<> distrib_r(-5, 5);
    vector<double> himmelBlau_p0 = {
            distrib_r(mt_generator),
            distrib_r(mt_generator),
            };

    auto result = hill_climbing(himmelBlau, himmelBlau_domain, himmelBlau_p0, 10);
    cout << result << " -> " << himmelBlau(result) << endl;

    return 0;
}