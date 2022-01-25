#include <iostream>
#include "funcControler.h"
#include "Beale/beale.h"
#include "../../helpers.h"


//auto runBaleWithHC(){
//    auto result = hill_climbing(beale, beale_domain, beale_p0, 10);
//    std::cout << result << " -> " << beale(result) << std::endl;
//
//}
//
//auto runBaleWithSA(){
//    auto result = simulated_annealing(
//            beale, beale_domain, beale_p0, 10000,
//            [&mt_generator](auto p) {
//                normal_distribution<double> n(0.0, 0.3);
//                for (auto& e : p) {
//                    e = e + n(mt_generator);
//                }
//                return p;
//                },
//                [](int k) { return 1000.0 / k; });
//    cout << result << " -> " << beale(result) << endl;
//}