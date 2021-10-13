#include "lab2.h"
#include <functional>
#include <iostream>
#include <random>
#include <vector>
#include "../../helpers.h"

using namespace std;

vector<double> hill_climbing(function<double(vector<double>)> f, vector<double> p0, int iterations)
{


    static random_device rd;
    static mt19937 gen(rd());
    auto p = p0;
    uniform_int_distribution<> distrib(0, p.size() - 1);
    uniform_real_distribution<> distrib_r(-0.1, 0.1);

    for (int i = 0; i < iterations; i++) {
        auto p2 = p;

        p[distrib(gen)] += distrib_r(gen);
        double y2 = f(p2);
        if (y2 > f(p)) {
            p = p2;
        }
        cout << p << " ->" << f(p) << endl;
    }
    return p;
}

int wyk1()
{
    hill_climbing([](vector<double> v) {
        return 100 - v[0] * v[0];
        },{10.2, 5.5}, 5000);
    return 0;
}
