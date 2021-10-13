#include <valarray>
#include <tuple>
#include <iostream>

using namespace std;

auto obliczenia = [](auto f1, auto f2, auto n){

    //auto pair = make_pair(2, "yudgue");

    auto max_x = f1(0);
    auto max_y = f2(max_x);
    for (int i = 0; i < n; i++){
        auto x = f2(i);
        auto y = f1(x);
        if (y > max_y){
            max_x = x;
            max_y = y;
        }
    }
    return max_x;
};

auto f1 = [](int x){
    return x = 20-abs(x);
};

auto f2 = [](int i){
    return i = (2*(i%2)-1)*i/2;
};

int lab1(){
    auto result = obliczenia(f1, f2, int (10));

    cout << result;
};