#include "booth.h"
#include "../../../helpers.h"
#include <valarray>
#include <iostream>
#include <random>

using namespace std;

int Booth()
{
    random_device rd;
    mt19937 mt_generator(rd());

    auto booth = [](vector<double> v) {
        double x = v.at(0),y= v.at(1);
        return pow(x + (2 * y) - 7, 2) +
        pow((2 * x) + y - 5, 2);
    };

    auto booth_domain = [](vector<double> v) {
        return (abs(v[0]) <= 5) && (abs(v[1]) <= 5);
    };

    uniform_real_distribution<> distrib_r(-5, 5);
    vector<double> booth_p0 = {
            distrib_r(mt_generator),
            distrib_r(mt_generator),
            };


    //auto result = hill_climbing(booth, booth_domain, booth_p0, 10);
    //cout << result << " -> " << booth(result) << endl;

    auto result = simulated_annealing(
            booth, booth_domain, booth_p0, 10000,
            [&mt_generator](auto p) {
                normal_distribution<double> n(0.0, 0.3);
                for (auto& e : p) {
                    e = e + n(mt_generator);
                }
                return p;
                },
                [](int k) { return 1000.0 / k; });
    cout << result << " -> " << booth(result) << endl;

    return 0;
}

