#include <iostream>
#include "univarbenchmarks.hpp"
#include "univarbenchmark.hpp"
#include <random>
#include "common/sgerrcheck.hpp"


std::mt19937 gen;
using BM = UnivarBenchmark<double>;

double getRandomPoint(const BM& bm)
{
	double a = bm.getBounds().first;
	double b = bm.getBounds().second;
	std::uniform_real_distribution<> urd(a, b);
	return urd(gen);
}

void TestDerInPoint()
{
	UnivarBenchmarks<double> bms;

	for(auto ptrBench : bms)
	{
	        std::cout << "*************Testing benchmark**********" << std::endl;
	        std::cout << *ptrBench;
		double point = getRandomPoint(*ptrBench);
		auto ser = ptrBench->calcDerHighOrder(point, 2);
		double der1 = ser.der(1);
		std::cout << "Taylor first der in point " << point << " is " << der1 << std::endl;
		double der2 = ptrBench->calcSymDiff(point, 1);
		std::cout << "Symbol first der in point " << point << " is " << der2 << std::endl;
		SG_ASSERT_NEAR(der1, der2, 0.0001);

                der1 = ser.der(2);
		std::cout << "Symbol second der in point " << point << " is " << der1 << std::endl;
		der2 = ptrBench->calcSymDiff(point, 2);
		std::cout << "Taylor second der in point " << point << " is " << der2 << std::endl;
		SG_ASSERT_NEAR(der1, der2, 0.0001);

                std::cout << "****************************************" << std::endl << std::endl;
	}  
}

void TestDerInInterval()
{
	UnivarBenchmarks<double> bms;

	for(auto ptrBench : bms)
	{
		try
 		{
			std::cout << "*************Testing benchmark**********" << std::endl;
			std::cout << *ptrBench;
			double a = ptrBench->getBounds().first;
			double b = ptrBench->getBounds().second;
		        Interval<double> i(a,b);
			auto ser = ptrBench->calcIntervalDerHighOrder(i, 2);
			auto der1 = ser.der(1);
			std::cout << "Taylor first der for interval " << i << " is " << der1 << std::endl;
			auto der2 = ptrBench->calcIntervalSymDiff(i, 1);
			std::cout << "Symbol first der for interval " << i << " is " << der2 << std::endl;
			der1 = ser.der(2);
			std::cout << "Taylor second der for interval " << i << " is " << der1 << std::endl;
			der2 = ptrBench->calcIntervalSymDiff(i, 2);
			std::cout << "Symbol second der for interval " << i << " is " << der2 << std::endl;
         
		        std::cout << "****************************************" << std::endl << std::endl;
			
		}
		catch(std::exception &ex)
		{
			std::cout << "\nException: " << ex.what() << "\n\n";
			continue;
		}
	}  
}

int main(int argc, char** argv) 
{
	TestDerInPoint();   
	TestDerInInterval();                                                                                        
}
