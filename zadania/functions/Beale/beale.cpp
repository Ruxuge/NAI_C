#include <valarray>
#include <iostream>
#include <vector>
#include <random>
#include "../../../helpers.h"
#include "beale.h"


using namespace std;

//f(x) = (1.5 - x1 + x1x2)^2 + (2.25 - x1 + x1x2^2)^2 + (2.625 - x1 + x1x2^3)^2
//The function is usually evaluated on the square xi ∈ [-4.5, 4.5]

int Beale()
{
    random_device rd;
    mt19937 mt_generator(rd());

    auto beale = [](vector<double> v) {
        double x = v.at(0),y= v.at(1);
        return pow((1.5 - x + (x * y)), 2)
        + pow((2.25 - x + (x * pow(y, 2))), 2)
        + pow((2.626 - x + (x * pow(y, 3))), 2);
    };

    auto beale_domain = [](vector<double> v) {
        return (abs(v[0]) <= 5) && (abs(v[1]) <= 5);
    };

    uniform_real_distribution<> distrib_r(-5, 5);
    vector<double> beale_p0 = {
            distrib_r(mt_generator),
            distrib_r(mt_generator),
            };

    //auto result = hill_climbing(beale, beale_domain, beale_p0, 10);
    //std::cout << result << " -> " << beale(result) << std::endl;

    auto result = simulated_annealing(
            beale, beale_domain, beale_p0, 10000,
            [=](auto p) {
                normal_distribution<double> n(0.0, 0.3);
                for (auto& e : p) {
                    e = e + n(mt_generator);
                }
                return p;
                },
                [](int k) { return 1000.0 / k; });
    cout << result << " -> " << beale(result) << endl;

    return 0;


}


