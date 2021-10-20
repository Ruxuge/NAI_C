#include "hill_climbing.h"
#include <functional>
#include <iostream>
#include <random>
#include <vector>
#include "../../helpers.h"

using namespace std;

int wyk1()
{
    random_device rd;
    mt19937 mt_generator(rd());

    auto function1 = [](vector<double> v) {
        return 100 - (v[0] * v[0] + v[1] * v[1]);
    };

    auto ackley = [](vector<double> v) {
        double x = v.at(0), y = v.at(1);
        return -20 * exp(-0.2 * sqrt(0.5 * (x * x + y * y))) - exp(0.5 * (cos(2 * M_PI * x) + cos(2 * M_PI * y))) + M_E + 20.0;
    };

    auto ackley_domain = [](vector<double> v) {
        return (abs(v[0]) <= 5) && (abs(v[1]) <= 5);
    };

    uniform_real_distribution<> distrib_r(-5, 5);
    vector<double> ackley_p0 = {
            distrib_r(mt_generator),
            distrib_r(mt_generator),
            };


    auto result = hill_climbing(ackley, ackley_domain, ackley_p0, 10);
    cout << result << " -> " << ackley(result) << endl;

    return 0;
}
