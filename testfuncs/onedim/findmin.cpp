/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   findmin.cpp
 * Author: mposypkin
 *
 * Created on April 5, 2018, 11:29 AM
 */

#include <cstdlib>
#include <iostream>
#include <vector>
#include <limits>
#include "univarbenchmarks.hpp"
#include "univarbenchmark.hpp"
#include "common/sgerrcheck.hpp"

constexpr double eps = 0.0001;

void findGlobMin(const std::shared_ptr<UnivarBenchmark<double>> pbench, double& fbest, double& xbest) {
    const double a = pbench->getBounds().first;
    const double b = pbench->getBounds().second;
    std::vector<Interval<double>> segments;
    segments.emplace_back(a, b);
    while (!segments.empty()) {
        try {
            const Interval<double> ci = segments.back();
            segments.pop_back();
            const double c = 0.5 * (ci.lb() + ci.rb());
            double fm = pbench->calcFunc(c);
            if (fm < fbest) {
                fbest = fm;
                xbest = c;
            }
            const Interval<double> ib = pbench->calcInterval(ci);
            const double lb = ib.lb();
            if (fbest - lb > eps) {
                segments.emplace_back(ci.lb(), c);
                segments.emplace_back(c, ci.rb());
            }
        } catch (const std::invalid_argument& e) {
            std::cout << "Exception caught!\n";
            break;
        }
    }
}

void findMinForAllBenchMarks() {
    UnivarBenchmarks<double> bms;
    for (auto ptrBench : bms) {
        std::cout << "*************Testing benchmark**********" << std::endl;
        std::cout << *ptrBench;
        double fbest = std::numeric_limits<double>::max();
        double xbest = 0;
        findGlobMin(ptrBench, fbest, xbest);
        std::cout << "Found f = " << fbest << " at x = " << xbest << std::endl; 
        std::cout << "****************************************" << std::endl << std::endl;
    }

}

/*
 * 
 */
int main(int argc, char** argv) {
    findMinForAllBenchMarks();
    return 0;
}

