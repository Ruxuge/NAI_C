#include "tabu_search.h"
#include <functional>
#include <iostream>
#include <random>
#include <vector>
#include "../../helpers.h"

using namespace std;


vector<double> tabu_search(function<double(vector<double>)> f, function<bool(vector<double>)> f_domain, vector<double> p0, int iterations)
{


    const double mod_range = 0.01;

    auto offset_f = [=](int i, double dir) {
        vector<double> v(p0.size());
        v[i] = dir;
        return v;
    };
    vector<vector<double>> directions;
    for (int i = 0; i < p0.size(); i++) {
        directions.push_back(offset_f(i, mod_range));
        directions.push_back(offset_f(i, -mod_range));
    }

    vector<vector<double>> tabu_list = {p0};
    auto in_tabu = [&tabu_list](vector<double> p) {
        for (auto& e : tabu_list) {
            int checks = 0;
            for (int i = 0; i < e.size(); i++)
                if (abs(e[i] - p[i]) < 0.00000001) checks++;
                if (checks == e.size()) return true; // in tabu
        }
        return false;
    };

    for (int i = 0; i < iterations; i++) {
        int tabu_i = tabu_list.size() - 1;
        vector<double> best_neighbour;

        while (tabu_i >= 0) {
            for (auto direction : directions) {
                if (((best_neighbour.size() == 0) ||
                (f(tabu_list[tabu_i] + direction) < f(best_neighbour))) &&
                (!in_tabu(tabu_list[tabu_i] + direction))) {
                    best_neighbour = tabu_list[tabu_i] + direction;
                }
            }
            if (best_neighbour.size() != 0) break;
            tabu_i--;
        }
        tabu_list.push_back(best_neighbour);
        cout << (tabu_list.back()) << " " << f(tabu_list.back()) << endl;
    }
    return tabu_list.back();
}
int wyk2() {
    static random_device rd;
    static mt19937 gen(rd());
    auto ackley = [](vector<double> v) {
        double x = v.at(0), y = v.at(1);
            return -20 * exp(-0.2 * sqrt(0.5 * (x * x + y * y))) - exp(0.5 * (cos(2 * M_PI * x) + cos(2 * M_PI * y))) + M_E + 20.0;
        };

        auto ackley_domain = [](vector<double> v) {
            return (abs(v[0]) <= 5) && (abs(v[1]) <= 5);
        };

        uniform_real_distribution<> distrib_r(-5, 5);
        vector<double> ackley_p0 = {
                distrib_r(gen),
                distrib_r(gen),
            };

    auto result = tabu_search(ackley, ackley_domain, ackley_p0, 100000);
    return 0;
}