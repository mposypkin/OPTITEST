/*
 * Locates all minima of univariate benchmarks
 */

/* 
 * File:   allmin.cpp
 * Author: mposypkin
 *
 * Created on March 7, 2018, 2:53 PM
 */

#include <iostream>
#include "univarbenchmarks.hpp"


void solveBench(const UnivarBenchmark<double> & bm) {
    auto bounds = bm.getBounds();
    const double a = bounds.first;
    const double b = bounds.second;
    Interval<double> interv(a,b);
    std::cout << interv << std::endl;
    std::vector<Interval<double>> pool;
    pool.push_back(interv);
    while(!pool.empty()) {
        auto cint = pool.back();
        pool.pop_back();
        auto dint = bm.calcIntervalDerHighOrder(cint, 2);
        std::cout << cint << std::endl;
        std::cout << dint << std::endl;
        char c;
        std::cin >> c;
        if((dint.der(1).lb() > 0)||(dint.der(1).rb() < 0)) {
            std::cout << dint.value() << " prune\n";
            continue;        
        }
        pool.emplace_back(cint.lb(), 0.5* (cint.lb() + cint.rb()));
        pool.emplace_back(0.5* (cint.lb() + cint.rb()), cint.rb());
        
    }
}


void processBench(const UnivarBenchmark<double> & bm) {
    std::cout << "Benchmark " << bm << "\n";
    std::cout << bm.getExpr() << "\n";
    solveBench(bm);
}

/*
 * 
 */
int main(int argc, char** argv) {

    Holder1Benchmark<double> bm;
    processBench(bm);    
    return 0;
}

