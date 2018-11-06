#include <iostream>
#include "univarbenchmarks.hpp"
#include "univarbenchmark.hpp"

void TesPwlBounds()
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
			int steps = 5;
			auto bound = ptrBench->calcPwlBound(a, b, steps);
			std::cout << "\nPwl bounds: " << bound << std::endl;
			std::cout << "min = " << bound.get_min() << " max = " << bound.get_max() << std::endl;
			Interval<double> i(a,b);
			auto interval = ptrBench->calcInterval(i);
			std::cout << "Interval bounds: " << interval << std::endl;
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
	TesPwlBounds();                                                                                     
}
