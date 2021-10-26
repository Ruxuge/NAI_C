#ifndef NAI_C_HELPERS_H
#define NAI_C_HELPERS_H
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <list>
#include <vector>
#include <random>
#include <functional>

//using namespace std;

inline std::ostream& operator<<(std::ostream& o, std::vector<double> v)
{
    for (auto e : v) {
        o << e << ",";
    }
    return o;
};

inline std::vector<double> operator+(std::vector<double> a, std::vector<double> b)
{
    for (int i = 0; i < a.size(); i++) {
        a[i] += b[i];
    }
    return a;
};

inline std::vector<double> hill_climbing(std::function<double(std::vector<double>)> f, std::function<bool (std::vector<double>)> f_domain, std::vector<double> p0, int iterations)
{
    static std::random_device rd;
    static std::mt19937 gen(rd());
    auto p = p0;
    std::uniform_int_distribution<> distrib(0, p.size() - 1);
    std::uniform_real_distribution<> distrib_r(-0.1, 0.1);

    if(!f_domain(p)) throw std::invalid_argument("the p0 point must be in domain");
    for (int i = 0; i < iterations; i++) {
        auto p2 = p;

        if(f_domain(p2)) {
            p2[distrib(gen)] += distrib_r(gen);
            double y2 = f(p2);
            if (y2 > f(p)) {
                p = p2;
            }
            std::cout << p << " ->" << f(p) << std::endl;
        }
    }
    return p;
}

inline std::vector<double> simulated_annealing(std::function<double(std::vector<double>)> f, std::function<bool (std::vector<double>)> f_domain, std::vector<double> p0, int iterations, std::function<std::vector<double>(std::vector<double>)> N, std::function<double(int)> T)
{
    static std::random_device rd;
    static std::mt19937 gen(rd());
    auto s_current = p0;
    auto s_global_best = p0;

    std::uniform_real_distribution<> u_k(0.0, 1.0);

    if (!f_domain(s_current)) throw std::invalid_argument("The p0 point must be in domain");

    for (int k = 0; k < iterations; k++) {
        auto s_next = N(s_current);
        if (f(s_next) < f(s_current)) {
            s_current = s_next;
        } else {
            double u = u_k(gen);
            if (u < std::exp(-std::abs(f(s_next) - f(s_current)) / T(k))) {
                s_current = s_next;
            } else {

            }
        }
        if (f(s_current) < f(s_global_best)) {
            s_global_best = s_current;
        }
        std::cout << s_current << " " << f(s_current) << std::endl;
    }
    return s_global_best;
}
#endif //NAI_C_HELPERS_H
