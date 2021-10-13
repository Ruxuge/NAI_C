#include <valarray>
#include <tuple>
#include <iostream>

using namespace std;

auto obliczenia = [](auto f1, auto f2, auto n){

    auto max_x = f1(0);
    auto max_y = f2(max_x);
    for (int i = 1; i < n; i++){
        auto x = f2(i);
        auto y = f1(x);
        if (y > max_y){
            max_x = x;
            max_y = y;
        }
        return (max_x, max_y);
    }
};

auto f1 = [](int x){
    x = 20-abs(x);
    return x;
};

auto f2 = [](int i){
    i = (2*(i%2)-1)*i/2;
    return i;
};

int lab1(){
    auto result = obliczenia(f1, f2, int (200));
    cout << result;
};