#include <iostream>
#include <vector>
#include <chrono>
#include "univarbenchmarks.hpp"
#include "univarbenchmark.hpp"
#include "pwl/utils.hpp"

#define EPS_ROOT  0.01

using namespace std::chrono;

struct Root{
	double a, b;
	bool operator<(const Root& p) const {
		return ls(a, p.a);
	}
	bool operator==(const Root& p) const {
		return eq(a, p.a) && eq(b, p.b);
	}	
};

std::ostream& operator<<(std::ostream & out, const Root root){
	out << '[' << root.a << ", " << root.b << ']';
	return out;
}

void get_intersection(const std::vector<Point<double>>& points, std::set<Point<double>>& x)
{
	auto last = std::prev(points.cend());
	for (auto it = points.cbegin(); it != last; ++it) {
		auto next = std::next(it);
		if (moeq(0.0, std::min(it->y, next->y)) && lseq(0.0, std::max(it->y, next->y))) { // stay between
			double x0 = get_intersect(it->x, it->y, next->x, next->y, 0.0);
			x.insert({ x0, 0.0 });
		}
	}
}

int get_roots(const PtrBenchOneDim<double>& ptrBench, double a, double b, std::set<Root>& roots, bool is_print = false){
	int iteractions = 1;
	int steps = 2;
	auto bound = ptrBench->calcPwlBound(a, b, steps);
	if(is_print)
		std::cout << "\nPwl bounds: " << bound << std::endl;
	std::set<Point<double>> x{ {a,0.0}, {b, 0.0} };
	get_intersection(bound.lower_bound(), x);
	get_intersection(bound.upper_bound(), x);

	auto last = std::prev(x.cend());
	for (auto it = x.cbegin(); it != last; ++it) {
		double x1 = it->x;
		double x2 = std::next(it)->x;
		double c = ptrBench->calcFunc(x1);
		double d = ptrBench->calcFunc(x2);
		if (c == 0.0) {
			roots.insert({ x1,x1 });
		}
		else if (eq(c, 0.0)) {
			double l = ptrBench->calcFunc(x1 - EPS_ROOT / 2);
			double r = ptrBench->calcFunc(x1 + EPS_ROOT / 2);
			if((std::min(l, r) < 0.0) && (std::max(l, r) > 0.0))
				roots.insert({ x1,x1 });
		}
		if (d == 0.0) {
			roots.insert({ x1,x1 });
		}
		else if (eq(d, 0.0)) {
			double l = ptrBench->calcFunc(x2 - EPS_ROOT / 2);
			double r = ptrBench->calcFunc(x2 + EPS_ROOT / 2);
			if ((std::min(l, r) < 0.0) && (std::max(l, r) > 0.0))
				roots.insert({ x2,x2 });
		}
		PwlBound<double> sub_bound = bound.get_pwl_bound(x1, x2);
		if (lseq(sub_bound.get_max(), 0.0) || moeq(sub_bound.get_min(), 0.0)) {
			continue;
		}
		else {
			if ((x2 - x1) > EPS_ROOT) {
				iteractions+=get_roots(ptrBench, x1, x2, roots);
			}
			else if ((std::min(c, d) < 0.0) && (std::max(c, d) > 0.0)) {//(b-a) <= EPS_ROOT
				roots.insert({ x1,x2 });
			}
		}
	}
	return iteractions;
}

int get_interval_roots(const PtrBenchOneDim<double>& ptrBench, double a, double b, std::set<Root>& roots){
	Interval<double> i(a,b);
	int iteractions = 1;
	auto bound = ptrBench->calcInterval(i);
	if((bound.lb() > 0.0) || (bound.rb() < 0.0)){
		return iteractions;
	}else{
		double c = ptrBench->calcFunc(a);
		double d = ptrBench->calcFunc(b);
		if (c == 0.0) {
			roots.insert({ a, a });
		}
		else if (eq(c, 0.0)) {
			double l = ptrBench->calcFunc(a - EPS_ROOT/2);
			double r = ptrBench->calcFunc(a + EPS_ROOT / 2);
			if((std::min(l, r) < 0.0) && (std::max(l, r) > 0.0))
				roots.insert({ a, a });
		}
		if (d == 0.0) {
			roots.insert({ b, b });
		}
		else if (eq(d, 0.0)) {
			double l = ptrBench->calcFunc(b - EPS_ROOT / 2);
			double r = ptrBench->calcFunc(b + EPS_ROOT / 2);
			if ((std::min(l, r) < 0.0) && (std::max(l, r) > 0.0))
				roots.insert({ b, b });
		}
		if((b-a) > EPS_ROOT){
			double m = a + (b-a)/2.0;
			iteractions+=get_interval_roots(ptrBench, a, m, roots);
			iteractions+=get_interval_roots(ptrBench, m, b, roots); 
		}
		else if((std::min(c,d) < 0.0) && (std::max(c,d) > 0.0)){//(b-a) <= EPS_ROOT
			roots.insert({a,b});	
		}			
	}
	return iteractions;
}

void TestPwlRoots()
{
	UnivarBenchmarks<double> bms;

	for(auto ptrBench : bms)
	{
		std::cout << "*************Testing benchmark**********" << std::endl;
		std::cout << *ptrBench;
		double a = ptrBench->getBounds().first;
		double b = ptrBench->getBounds().second;
		std::set<Root> roots;
		try
 		{
			auto t0 = high_resolution_clock::now();
			int iteractions = get_roots(ptrBench, a,b,roots,false);
			auto t1 = high_resolution_clock::now();
			
			if(roots.size()==0)
				std::cout << "pwl roots: not found";
			else{
				std::cout << "pwl time: " << duration_cast<milliseconds>(t1-t0).count() << " msec "  << "iteractions: " <<  iteractions << '\n';
				std::cout << "pwl roots: ";
			}
			for(const Root& r : roots)
				std::cout << r << " ";
			
		}
		catch(std::exception &ex)
		{
			std::cout << "\nException: " << ex.what() << "\n\n";
		}
	
		try
 		{
			roots.clear();
			auto t0 = high_resolution_clock::now();
			int iteractions = get_interval_roots(ptrBench, a,b,roots);
			auto t1 = high_resolution_clock::now();

			if(roots.size()==0)
				std::cout << "\ninterval roots: not found";
			else{
				std::cout << "\ninterval time: " << duration_cast<milliseconds>(t1-t0).count() << " msec " << "iteractions: " <<  iteractions << '\n';
				std::cout << "interval roots: ";
			}
			for(const Root& r : roots)
				std::cout << r << " ";
			
		}
		catch(std::exception &ex)
		{
			std::cout << "\nException: " << ex.what() << "\n\n";
		}

	  	std::cout << "\n****************************************" << std::endl << std::endl;
	}  
}

int main(int argc, char** argv) 
{  
	TestPwlRoots();                                                                                     
}
