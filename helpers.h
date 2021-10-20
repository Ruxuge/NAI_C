//
// Created by ruxuge on 13.10.2021.
//

#ifndef NAI_C_HELPERS_H
#define NAI_C_HELPERS_H
#include <iostream>
#include <vector>
#include <functional>

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

        if(!f_domain(p2)) throw std::invalid_argument("the p0 point must be in domain");

        p2[distrib(gen)] += distrib_r(gen);
        double y2 = f(p2);
        if (y2 > f(p)) {
            p = p2;
        }
        std::cout << p << " ->" << f(p) << std::endl;
    }
    return p;
}
#endif //NAI_C_HELPERS_H
