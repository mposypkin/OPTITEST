#include <iostream>
#include "univarbenchmarks.hpp"

template <class T> Expr<T> Holder1SecondDer() {
    Expr<T> x;
    Expr<T> y = 30.0 * (x[0]^4) - 180.0 * sqr(x[0]) + 54.0;
    return y;
}

int main(int argc, char** argv) {
    Holder1Benchmark<double> bm1;
    Holder2Benchmark<double> bm2;
    Holder3Benchmark<double> bm3;
    Holder4Benchmark<double> bm4;
    Holder5Benchmark<double> bm5;
    Holder6Benchmark<double> bm6;
    Holder7Benchmark<double> bm7;
    Holder8Benchmark<double> bm8;
    Univar21Benchmark<double> bm9;

    std::cout << "Holder1Benchmark: " << bm1.calcFunc(3.0) << std::endl;
    std::cout << "Holder1Benchmark(interval): " << bm1.calcInterval({2.9, 3.1}) << std::endl;
    std::cout << "Holder2Benchmark: " << bm2.calcFunc(bm2.getGlobMinX()) << std::endl;
    std::cout << "Holder3Benchmark: " << bm3.calcFunc(bm3.getGlobMinX()) << std::endl;
    std::cout << "Holder4Benchmark: " << bm4.calcFunc(bm4.getGlobMinX()) << std::endl;
    std::cout << "Holder5Benchmark: " << bm5.calcFunc(bm5.getGlobMinX()) << std::endl;
    std::cout << "Holder6Benchmark: " << bm6.calcFunc(bm6.getGlobMinX()) << std::endl;
    std::cout << "Holder7Benchmark: " << bm7.calcFunc(bm7.getGlobMinX()) << std::endl;
    std::cout << "Holder8Benchmark: " << bm8.calcFunc(bm8.getGlobMinX()) << std::endl;
    std::cout << "Univar21Benchmark: " << bm9.calcFunc(2.5) << std::endl;

    std::cout << "Holder1Benchmark(der high order): " << bm1.calcDerHighOrder(3.0, 3) << std::endl;
    std::cout << "Holder1Benchmark(interval estimation der high order): " << bm1.calcIntervalDerHighOrder({2.9, 3.1}, 3) << std::endl;

    Expr<Interval<double>> x;
    auto expr = Holder1SecondDer<Interval<double>>(); //expression for second der of Holder1
    std::cout << "Interval estimation of second der of Holder1: " << snowgoose::expression::calcInterval(expr, std::vector<Interval<double>>(1,{2.9, 3.1})) << std::endl;

    bool isDerExist = bm1.isDerExist(3.0);
    std::cout << "Univar14Benchmark: isDerExist " << (isDerExist ? 1 : 0) << std::endl;



}
