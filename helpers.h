//
// Created by ruxuge on 13.10.2021.
//

#ifndef NAI_C_HELPERS_H
#define NAI_C_HELPERS_H
#include <iostream>
#include <vector>
inline std::ostream& operator<<(std::ostream& o, std::vector<double> v)
{
    for (auto e : v) {
        o << e << ",";
    }
    return o;
}

inline std::vector<double> operator+(std::vector<double> a, std::vector<double> b)
{
    for (int i = 0; i < a.size(); i++) {
        a[i] += b[i];
    }
    return a;
}
#endif //NAI_C_HELPERS_H
