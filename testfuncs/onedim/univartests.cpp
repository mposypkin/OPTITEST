#include <iostream>
#include "univarbenchmarks.hpp"

int main(int argc, char** argv) 
{
	Holder1Benchmark<double> bm1;
	Holder2Benchmark<double> bm2;
	Holder3Benchmark<double> bm3;
	Holder4Benchmark<double> bm4;
	Holder5Benchmark<double> bm5;
	Holder6Benchmark<double> bm6;
	Holder7Benchmark<double> bm7;
	Holder8Benchmark<double> bm8;
	Univar21Benchmark<double> bm9;

	std::cout << "Holder1Benchmark: " << bm1.calcFunc(bm1.getGlobMinX()) <<  std::endl;
	std::cout << "Holder2Benchmark: " << bm2.calcFunc(bm2.getGlobMinX()) <<  std::endl;
	std::cout << "Holder3Benchmark: " << bm3.calcFunc(bm3.getGlobMinX()) <<  std::endl;
	std::cout << "Holder4Benchmark: " << bm4.calcFunc(bm4.getGlobMinX()) <<  std::endl;
	std::cout << "Holder5Benchmark: " << bm5.calcFunc(bm5.getGlobMinX()) <<  std::endl;
	std::cout << "Holder6Benchmark: " << bm6.calcFunc(bm6.getGlobMinX()) <<  std::endl;
	std::cout << "Holder7Benchmark: " << bm7.calcFunc(bm7.getGlobMinX()) <<  std::endl;
	std::cout << "Holder8Benchmark: " << bm8.calcFunc(bm8.getGlobMinX()) <<  std::endl;
	std::cout << "Univar21Benchmark: " << bm9.calcFunc(2.5) <<  std::endl;

        std::cout << "Holder1Benchmark(der high order): " << bm1.calcDerHighOrder(bm1.getGlobMinX(), 3) <<  std::endl;
}
