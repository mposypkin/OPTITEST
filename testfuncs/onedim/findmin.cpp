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
#include <chrono>

using namespace std::chrono;

constexpr double eps = 0.0001;

int findGlobMin(const std::shared_ptr<UnivarBenchmark<double>> pbench, double& fbest, double& xbest) {
    const double a = pbench->getBounds().first;
    const double b = pbench->getBounds().second;
    std::vector<Interval<double>> segments;
    segments.emplace_back(a, b);
	int i = 0;
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
			i++;
            const double lb = ib.lb();
            if (fbest - lb > eps) {
                segments.emplace_back(ci.lb(), c);
                segments.emplace_back(c, ci.rb());
            }
        } catch (const std::invalid_argument& e) {
            std::cout << "Exception caught! " << e.what() << "\n";
            break;
        }
    }
	return i;
}

struct Seg {
	double a;
	double b;
};

void get_intersection(const std::vector<Point<double>>& points, std::set<Point<double>>& x, double y)
{
	auto last = std::prev(points.cend());
	for (auto it = points.cbegin(); it != last; ++it) {
		auto next = std::next(it);
		if (moeq(y, std::min(it->y, next->y)) && lseq(y, std::max(it->y, next->y))) { // stay between
			double x0 = get_intersect(it->x, it->y, next->x, next->y, y);
			x.insert({ x0, y });
		}
	}
}

int findGlobMinPwl(const std::shared_ptr<UnivarBenchmark<double>> pbench, double& fbest, double& xbest) {
    const double a = pbench->getBounds().first;
    const double b = pbench->getBounds().second;
    std::vector<Seg> sections;
	int steps = 3;
	
    sections.push_back({a,b});
	int i = 0;
    while (!sections.empty()) {
        try {
            Seg sec = sections.back();
            sections.pop_back();
			PwlBound<double> pwlBound = pbench->calcPwlBound(sec.a, sec.b, steps);
			i++;
            Point<double> minPoint = pwlBound.get_min_point();
            double fm = pbench->calcFunc(minPoint.x);
            if (fm < fbest) {
                fbest = fm;
                xbest = minPoint.x;
            }
            if (fbest - minPoint.y > eps) {
				auto lower = pwlBound.get_lower();
				Point<double> maxPoint = lower.get_max_point();
				if(fbest < maxPoint.y){
					//reduction
					std::set<Point<double>> x{ {sec.a,fbest}, {sec.b, fbest} };
					get_intersection(lower.Points(), x, fbest);
					auto last = std::prev(x.cend());
					for (auto it = x.cbegin(); it != last; ++it) {
						double x1 = it->x;
						double x2 = std::next(it)->x;
						auto t = lower.get_pwl_func(x1,x2);
						if (lseq(t.get_max(), fbest)) {
							sections.push_back({x1, x2});
						}
					}					
				}
				else{
					const double c = 0.5 * (sec.a + sec.b);
		            sections.push_back({sec.a, c});
		            sections.push_back({c, sec.b});
				}
            }
        } catch (const std::invalid_argument& e) {
            std::cout << "Exception caught! " << e.what() << "\n";
            break;
        }	
    }
	return i;
}

void findMinForAllBenchMarks() {
    UnivarBenchmarks<double> bms;
    for (auto ptrBench : bms) {
        std::cout << "*************Testing benchmark**********" << std::endl;
        std::cout << *ptrBench;
        double fbest = std::numeric_limits<double>::max();
        double xbest = 0;
		auto t0 = high_resolution_clock::now();
        int i = findGlobMin(ptrBench, fbest, xbest);
		auto t1 = high_resolution_clock::now();
        std::cout << "Found f = " << fbest << " at x = " << xbest << std::endl; 
		std::cout << "interval time: " << duration_cast<milliseconds>(t1-t0).count() << " msec " << "iterations: " << i <<" \n";

        fbest = std::numeric_limits<double>::max();
        xbest = 0;
		t0 = high_resolution_clock::now();
		i = findGlobMinPwl(ptrBench, fbest, xbest);
		t1 = high_resolution_clock::now();
        std::cout << "Found(pwl) f = " << fbest << " at x = " << xbest << std::endl; 
		std::cout << "pwl time: " << duration_cast<milliseconds>(t1-t0).count() << " msec " << "iterations: " << i <<" \n";

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

