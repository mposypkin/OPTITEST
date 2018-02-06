#ifndef UNIVAR_BENCHMARKS_HPP
#define UNIVAR_BENCHMARKS_HPP

#include <iostream>
#include <vector>
#include <memory>
#include <math.h>

#include "univarbenchmark.hpp"
#include "expression/expr.hpp"
#include "univarproblem.hpp"


using namespace snowgoose::expression;
using namespace snowgoose::derivative;
using namespace OPTITEST;

template <class T>
class Holder1Benchmark : public UnivarBenchmark<T>
{
public:
	virtual T calcFunc(T point) const {		
		return ::calcFunc(Holder1<T>(), std::vector<T>(1, point));
	}

	virtual Interval<T> calcInterval(const Interval<T>& interval) const {
		return ::calcInterval(Holder1<Interval<T>>(), std::vector<Interval<T>>(1, interval));					
	}

	virtual ValDer<T> calcGrad(T point) const {
		return ::calcGrad(Holder1<ValDer<T>>(), std::vector<T>(1, point));
	}

	virtual IntervalDer<T> calcIntervalGrad(const Interval<T>& interval) const {
		return ::calcIntervalGrad(Holder1<IntervalDer<T>>(), std::vector<Interval<T>>(1, interval));
	}

	Holder1Benchmark() : UnivarBenchmark<T>("Holder1 function", 3.0, 7, {-4, 4}, true) {
	}
};

template <class T>
class Holder2Benchmark : public UnivarBenchmark<T>
{
public:
	virtual T calcFunc(T point) const {		
		return ::calcFunc(Holder2<T>(), std::vector<T>(1, point));
	}

	virtual Interval<T> calcInterval(const Interval<T>& interval) const {
		return ::calcInterval(Holder2<Interval<T>>(), std::vector<Interval<T>>(1, interval));					
	}

	virtual ValDer<T> calcGrad(T point) const {
		return ::calcGrad(Holder2<ValDer<T>>(), std::vector<T>(1, point));
	}

	virtual IntervalDer<T> calcIntervalGrad(const Interval<T>& interval) const {
		return ::calcIntervalGrad(Holder2<IntervalDer<T>>(), std::vector<Interval<T>>(1, interval));
	}

	Holder2Benchmark() : UnivarBenchmark<T>("Holder2 function", 2.414213, -1.71768,  {-5, 5}, true) {
	}
};

template <class T>
class Holder3Benchmark : public UnivarBenchmark<T>
{
public:
	virtual T calcFunc(T point) const {		
		return ::calcFunc(Holder3<T>(), std::vector<T>(1, point));
	}

	virtual Interval<T> calcInterval(const Interval<T>& interval) const {
		return ::calcInterval(Holder3<Interval<T>>(), std::vector<Interval<T>>(1, interval));					
	}

	virtual ValDer<T> calcGrad(T point) const {
		return ::calcGrad(Holder3<ValDer<T>>(), std::vector<T>(1, point));
	}

	virtual IntervalDer<T> calcIntervalGrad(const Interval<T>& interval) const {
		return ::calcIntervalGrad(Holder3<IntervalDer<T>>(), std::vector<Interval<T>>(1, interval));
	}

	Holder3Benchmark() : UnivarBenchmark<T>("Holder3 function", 2.0,  0, {0, 6}, true) {
	}
};

template <class T>
class Holder4Benchmark : public UnivarBenchmark<T>
{
public:
	virtual T calcFunc(T point) const {		
		return ::calcFunc(Holder4<T>(), std::vector<T>(1, point));
	}

	virtual Interval<T> calcInterval(const Interval<T>& interval) const {
		return ::calcInterval(Holder4<Interval<T>>(), std::vector<Interval<T>>(1, interval));					
	}

	virtual ValDer<T> calcGrad(T point) const {
		return ::calcGrad(Holder4<ValDer<T>>(), std::vector<T>(1, point));
	}

	virtual IntervalDer<T> calcIntervalGrad(const Interval<T>& interval) const {
		return ::calcIntervalGrad(Holder4<IntervalDer<T>>(), std::vector<Interval<T>>(1, interval));
	}

	Holder4Benchmark() : UnivarBenchmark<T>("Holder4 function", 4.0, -2, {0, 6}, true) {
	}
};

template <class T>
class Holder5Benchmark : public UnivarBenchmark<T>
{
public:
	virtual T calcFunc(T point) const {		
		return ::calcFunc(Holder5<T>(), std::vector<T>(1, point));
	}

	virtual Interval<T> calcInterval(const Interval<T>& interval) const {
		return ::calcInterval(Holder5<Interval<T>>(), std::vector<Interval<T>>(1, interval));					
	}

	virtual ValDer<T> calcGrad(T point) const {
		return ::calcGrad(Holder5<ValDer<T>>(), std::vector<T>(1, point));
	}

	virtual IntervalDer<T> calcIntervalGrad(const Interval<T>& interval) const {
		return ::calcIntervalGrad(Holder5<IntervalDer<T>>(), std::vector<Interval<T>>(1, interval));
	}

	Holder5Benchmark() : UnivarBenchmark<T>("Holder5 function", 0.966085, -1.48907,  {0, 1}, true) {
	}
};

template <class T>
class Holder6Benchmark : public UnivarBenchmark<T>
{
public:
	virtual T calcFunc(T point) const {		
		return ::calcFunc(Holder6<T>(), std::vector<T>(1, point));
	}

	virtual Interval<T> calcInterval(const Interval<T>& interval) const {
		return ::calcInterval(Holder6<Interval<T>>(), std::vector<Interval<T>>(1, interval));					
	}

	virtual ValDer<T> calcGrad(T point) const {
		return ::calcGrad(Holder6<ValDer<T>>(), std::vector<T>(1, point));
	}

	virtual IntervalDer<T> calcIntervalGrad(const Interval<T>& interval) const {
		return ::calcIntervalGrad(Holder6<IntervalDer<T>>(), std::vector<Interval<T>>(1, interval));
	}

	Holder6Benchmark() : UnivarBenchmark<T>("Holder6 function", 1.590717, 7.51592,  {-3, 3}, false) {
	}
};

template <class T>
class Holder7Benchmark : public UnivarBenchmark<T>
{
public:
	virtual T calcFunc(T point) const {		
		return ::calcFunc(Holder7<T>(), std::vector<T>(1, point));
	}

	virtual Interval<T> calcInterval(const Interval<T>& interval) const {
		return ::calcInterval(Holder7<Interval<T>>(), std::vector<Interval<T>>(1, interval));					
	}

	virtual ValDer<T> calcGrad(T point) const {
		return ::calcGrad(Holder7<ValDer<T>>(), std::vector<T>(1, point));
	}

	virtual IntervalDer<T> calcIntervalGrad(const Interval<T>& interval) const {
		return ::calcIntervalGrad(Holder7<IntervalDer<T>>(), std::vector<Interval<T>>(1, interval));
	}

	Holder7Benchmark() : UnivarBenchmark<T>("Holder7 function", -0.49139, 12.03125, {-10, 10}, true) {
	}
};

template <class T>
class Holder8Benchmark : public UnivarBenchmark<T>
{
public:
	virtual T calcFunc(T point) const {		
		return ::calcFunc(Holder8<T>(), std::vector<T>(1, point));
	}

	virtual Interval<T> calcInterval(const Interval<T>& interval) const {
		return ::calcInterval(Holder8<Interval<T>>(), std::vector<Interval<T>>(1, interval));					
	}

	virtual ValDer<T> calcGrad(T point) const {
		return ::calcGrad(Holder8<ValDer<T>>(), std::vector<T>(1, point));
	}

	virtual IntervalDer<T> calcIntervalGrad(const Interval<T>& interval) const {
		return ::calcIntervalGrad(Holder8<IntervalDer<T>>(), std::vector<Interval<T>>(1, interval));
	}

	Holder8Benchmark() : UnivarBenchmark<T>("Holder8 function", -0.8003, 14.508, {-10, 10}, true) {
	}
};

template <class T>
class Univar1Benchmark : public UnivarBenchmark<T>
{
public:
	virtual T calcFunc(T point) const {		
		return ::calcFunc(UnivarProblem1<T>(), std::vector<T>(1, point));
	}

	virtual Interval<T> calcInterval(const Interval<T>& interval) const {
		return ::calcInterval(UnivarProblem1<Interval<T>>(), std::vector<Interval<T>>(1, interval));					
	}

	virtual ValDer<T> calcGrad(T point) const {
		return ::calcGrad(UnivarProblem1<ValDer<T>>(), std::vector<T>(1, point));
	}

	virtual IntervalDer<T> calcIntervalGrad(const Interval<T>& interval) const {
		return ::calcIntervalGrad(UnivarProblem1<IntervalDer<T>>(), std::vector<Interval<T>>(1, interval));
	}

	Univar1Benchmark() : UnivarBenchmark<T>("Univariate 1 function", 0, 0,  {-1.5, 11}, false) {
	}
};

template <class T>
class Univar2Benchmark : public UnivarBenchmark<T>
{
public:
	virtual T calcFunc(T point) const {		
		return ::calcFunc(UnivarProblem2<T>(), std::vector<T>(1, point));
	}

	virtual Interval<T> calcInterval(const Interval<T>& interval) const {
		return ::calcInterval(UnivarProblem2<Interval<T>>(), std::vector<Interval<T>>(1, interval));					
	}

	virtual ValDer<T> calcGrad(T point) const {
		return ::calcGrad(UnivarProblem2<ValDer<T>>(), std::vector<T>(1, point));
	}

	virtual IntervalDer<T> calcIntervalGrad(const Interval<T>& interval) const {
		return ::calcIntervalGrad(UnivarProblem2<IntervalDer<T>>(), std::vector<Interval<T>>(1, interval));
	}

	Univar2Benchmark() : UnivarBenchmark<T>("Univariate 2 function", 5.145735, 1.899599, {2.7, 7.5}, true) {
	}
};

template <class T>
class Univar4Benchmark : public UnivarBenchmark<T>
{
public:
	virtual T calcFunc(T point) const {		
		return ::calcFunc(UnivarProblem4<T>(), std::vector<T>(1, point));
	}

	virtual Interval<T> calcInterval(const Interval<T>& interval) const {
		return ::calcInterval(UnivarProblem4<Interval<T>>(), std::vector<Interval<T>>(1, interval));					
	}

	virtual ValDer<T> calcGrad(T point) const {
		return ::calcGrad(UnivarProblem4<ValDer<T>>(), std::vector<T>(1, point));
	}

	virtual IntervalDer<T> calcIntervalGrad(const Interval<T>& interval) const {
		return ::calcIntervalGrad(UnivarProblem4<IntervalDer<T>>(), std::vector<Interval<T>>(1, interval));
	}

	Univar4Benchmark() : UnivarBenchmark<T>("Univariate 4 function", 2.868, 3.85045, {1.9, 3.9}, false) {
	}
};

template <class T>
class Univar5Benchmark : public UnivarBenchmark<T>
{
public:
	virtual T calcFunc(T point) const {		
		return ::calcFunc(UnivarProblem5<T>(), std::vector<T>(1, point));
	}

	virtual Interval<T> calcInterval(const Interval<T>& interval) const {
		return ::calcInterval(UnivarProblem5<Interval<T>>(), std::vector<Interval<T>>(1, interval));					
	}

	virtual ValDer<T> calcGrad(T point) const {
		return ::calcGrad(UnivarProblem5<ValDer<T>>(), std::vector<T>(1, point));
	}

	virtual IntervalDer<T> calcIntervalGrad(const Interval<T>& interval) const {
		return ::calcIntervalGrad(UnivarProblem5<IntervalDer<T>>(), std::vector<Interval<T>>(1, interval));
	}

	Univar5Benchmark() : UnivarBenchmark<T>("Univariate 5 function", 0.96609, 1.48907,  {0, 1.2}, false) {
	}
};

template <class T>
class Univar7Benchmark : public UnivarBenchmark<T>
{
public:
	virtual T calcFunc(T point) const {		
		return ::calcFunc(UnivarProblem7<T>(), std::vector<T>(1, point));
	}

	virtual Interval<T> calcInterval(const Interval<T>& interval) const {
		return ::calcInterval(UnivarProblem7<Interval<T>>(), std::vector<Interval<T>>(1, interval));					
	}

	virtual ValDer<T> calcGrad(T point) const {
		return ::calcGrad(UnivarProblem7<ValDer<T>>(), std::vector<T>(1, point));
	}

	virtual IntervalDer<T> calcIntervalGrad(const Interval<T>& interval) const {
		return ::calcIntervalGrad(UnivarProblem7<IntervalDer<T>>(), std::vector<Interval<T>>(1, interval));
	}

	Univar7Benchmark() : UnivarBenchmark<T>("Univariate 7 function", 0, 0,  {2.7, 7.5}, false) {
	}
};

template <class T>
class Univar9Benchmark : public UnivarBenchmark<T>
{
public:
	virtual T calcFunc(T point) const {		
		return ::calcFunc(UnivarProblem9<T>(), std::vector<T>(1, point));
	}

	virtual Interval<T> calcInterval(const Interval<T>& interval) const {
		return ::calcInterval(UnivarProblem9<Interval<T>>(), std::vector<Interval<T>>(1, interval));					
	}

	virtual ValDer<T> calcGrad(T point) const {
		return ::calcGrad(UnivarProblem9<ValDer<T>>(), std::vector<T>(1, point));
	}

	virtual IntervalDer<T> calcIntervalGrad(const Interval<T>& interval) const {
		return ::calcIntervalGrad(UnivarProblem9<IntervalDer<T>>(), std::vector<Interval<T>>(1, interval));
	}

	Univar9Benchmark() : UnivarBenchmark<T>("Univariate 9 function", 17.039, 1.90596,  {3.1, 20.4}, false) {
	}
};

template <class T>
class Univar10Benchmark : public UnivarBenchmark<T>
{
public:
	virtual T calcFunc(T point) const {		
		return ::calcFunc(UnivarProblem10<T>(), std::vector<T>(1, point));
	}

	virtual Interval<T> calcInterval(const Interval<T>& interval) const {
		return ::calcInterval(UnivarProblem10<Interval<T>>(), std::vector<Interval<T>>(1, interval));					
	}

	virtual ValDer<T> calcGrad(T point) const {
		return ::calcGrad(UnivarProblem10<ValDer<T>>(), std::vector<T>(1, point));
	}

	virtual IntervalDer<T> calcIntervalGrad(const Interval<T>& interval) const {
		return ::calcIntervalGrad(UnivarProblem10<IntervalDer<T>>(), std::vector<Interval<T>>(1, interval));
	}

	Univar10Benchmark() : UnivarBenchmark<T>("Univariate 10 function", 7.9787, 7.91673,  {0, 10}, false) {
	}
};


template <class T>
class Univar11Benchmark : public UnivarBenchmark<T>
{
public:
	virtual T calcFunc(T point) const {		
		return ::calcFunc(UnivarProblem11<T>(), std::vector<T>(1, point));
	}

	virtual Interval<T> calcInterval(const Interval<T>& interval) const {
		return ::calcInterval(UnivarProblem11<Interval<T>>(), std::vector<Interval<T>>(1, interval));					
	}

	virtual ValDer<T> calcGrad(T point) const {
		return ::calcGrad(UnivarProblem11<ValDer<T>>(), std::vector<T>(1, point));
	}

	virtual IntervalDer<T> calcIntervalGrad(const Interval<T>& interval) const {
		return ::calcIntervalGrad(UnivarProblem11<IntervalDer<T>>(), std::vector<Interval<T>>(1, interval));
	}

	Univar11Benchmark() : UnivarBenchmark<T>("Univariate 11 function", 4.189, 1.5,  {-1.57, 6.28}, false) {
	}
};

template <class T>
class Univar12Benchmark : public UnivarBenchmark<T>
{
public:
	virtual T calcFunc(T point) const {		
		return ::calcFunc(UnivarProblem12<T>(), std::vector<T>(1, point));
	}

	virtual Interval<T> calcInterval(const Interval<T>& interval) const {
		return ::calcInterval(UnivarProblem12<Interval<T>>(), std::vector<Interval<T>>(1, interval));					
	}

	virtual ValDer<T> calcGrad(T point) const {
		return ::calcGrad(UnivarProblem12<ValDer<T>>(), std::vector<T>(1, point));
	}

	virtual IntervalDer<T> calcIntervalGrad(const Interval<T>& interval) const {
		return ::calcIntervalGrad(UnivarProblem12<IntervalDer<T>>(), std::vector<Interval<T>>(1, interval));
	}

	Univar12Benchmark() : UnivarBenchmark<T>("Univariate 12 function", 4.712, 1,  {0, 6.28}, false) {
	}
};

template <class T>
class Univar13Benchmark : public UnivarBenchmark<T>
{
public:
	virtual T calcFunc(T point) const {		
		return ::calcFunc(UnivarProblem13<T>(), std::vector<T>(1, point));
	}

	virtual Interval<T> calcInterval(const Interval<T>& interval) const {
		return ::calcInterval(UnivarProblem13<Interval<T>>(), std::vector<Interval<T>>(1, interval));					
	}

	virtual ValDer<T> calcGrad(T point) const {
		return ::calcGrad(UnivarProblem13<ValDer<T>>(), std::vector<T>(1, point));
	}

	virtual IntervalDer<T> calcIntervalGrad(const Interval<T>& interval) const {
		return ::calcIntervalGrad(UnivarProblem13<IntervalDer<T>>(), std::vector<Interval<T>>(1, interval));
	}

	Univar13Benchmark() : UnivarBenchmark<T>("Univariate 13 function", 0.7071, 1.5874,  {0.001, 0.99}, false) {
	}
};

template <class T>
class Univar14Benchmark : public UnivarBenchmark<T>
{
public:
	virtual T calcFunc(T point) const {		
		return ::calcFunc(UnivarProblem14<T>(), std::vector<T>(1, point));
	}

	virtual Interval<T> calcInterval(const Interval<T>& interval) const {
		return ::calcInterval(UnivarProblem14<Interval<T>>(), std::vector<Interval<T>>(1, interval));					
	}

	virtual ValDer<T> calcGrad(T point) const {
		return ::calcGrad(UnivarProblem14<ValDer<T>>(), std::vector<T>(1, point));
	}

	virtual IntervalDer<T> calcIntervalGrad(const Interval<T>& interval) const {
		return ::calcIntervalGrad(UnivarProblem14<IntervalDer<T>>(), std::vector<Interval<T>>(1, interval));
	}

	Univar14Benchmark() : UnivarBenchmark<T>("Univariate 14 function", 0.224885, 0.788685,  {0, 4}, false) {
	}
};

template <class T>
class Univar15Benchmark : public UnivarBenchmark<T>
{
public:
	virtual T calcFunc(T point) const {		
		return ::calcFunc(UnivarProblem15<T>(), std::vector<T>(1, point));
	}

	virtual Interval<T> calcInterval(const Interval<T>& interval) const {
		return ::calcInterval(UnivarProblem15<Interval<T>>(), std::vector<Interval<T>>(1, interval));					
	}

	virtual ValDer<T> calcGrad(T point) const {
		return ::calcGrad(UnivarProblem15<ValDer<T>>(), std::vector<T>(1, point));
	}

	virtual IntervalDer<T> calcIntervalGrad(const Interval<T>& interval) const {
		return ::calcIntervalGrad(UnivarProblem15<IntervalDer<T>>(), std::vector<Interval<T>>(1, interval));
	}

	Univar15Benchmark() : UnivarBenchmark<T>("Univariate 15 function", 2.4142, 0.03553,  {-5, 5}, false) {
	}
};

template <class T>
class Univar16Benchmark : public UnivarBenchmark<T>
{
public:
	virtual T calcFunc(T point) const {		
		return ::calcFunc(UnivarProblem16<T>(), std::vector<T>(1, point));
	}

	virtual Interval<T> calcInterval(const Interval<T>& interval) const {
		return ::calcInterval(UnivarProblem16<Interval<T>>(), std::vector<Interval<T>>(1, interval));					
	}

	virtual ValDer<T> calcGrad(T point) const {
		return ::calcGrad(UnivarProblem16<ValDer<T>>(), std::vector<T>(1, point));
	}

	virtual IntervalDer<T> calcIntervalGrad(const Interval<T>& interval) const {
		return ::calcIntervalGrad(UnivarProblem16<IntervalDer<T>>(), std::vector<Interval<T>>(1, interval));
	}

	Univar16Benchmark() : UnivarBenchmark<T>("Univariate 16 function", 1.5907, -7.515924,  {-3, 3}, false) {
	}
};


template <class T>
class Univar19Benchmark : public UnivarBenchmark<T>
{
public:
	virtual T calcFunc(T point) const {		
		return ::calcFunc(UnivarProblem19<T>(), std::vector<T>(1, point));
	}

	virtual Interval<T> calcInterval(const Interval<T>& interval) const {
		return ::calcInterval(UnivarProblem19<Interval<T>>(), std::vector<Interval<T>>(1, interval));					
	}

	virtual ValDer<T> calcGrad(T point) const {
		return ::calcGrad(UnivarProblem19<ValDer<T>>(), std::vector<T>(1, point));
	}

	virtual IntervalDer<T> calcIntervalGrad(const Interval<T>& interval) const {
		return ::calcIntervalGrad(UnivarProblem19<IntervalDer<T>>(), std::vector<Interval<T>>(1, interval));
	}

	Univar19Benchmark() : UnivarBenchmark<T>("Univariate 19 function", 5.87287, 7.81567,  {0, 6.5}, false) {
	}
};

template <class T>
class Univar20Benchmark : public UnivarBenchmark<T>
{
public:
	virtual T calcFunc(T point) const {		
		return ::calcFunc(UnivarProblem20<T>(), std::vector<T>(1, point));
	}

	virtual Interval<T> calcInterval(const Interval<T>& interval) const {
		return ::calcInterval(UnivarProblem20<Interval<T>>(), std::vector<Interval<T>>(1, interval));					
	}

	virtual ValDer<T> calcGrad(T point) const {
		return ::calcGrad(UnivarProblem20<ValDer<T>>(), std::vector<T>(1, point));
	}

	virtual IntervalDer<T> calcIntervalGrad(const Interval<T>& interval) const {
		return ::calcIntervalGrad(UnivarProblem20<IntervalDer<T>>(), std::vector<Interval<T>>(1, interval));
	}

	Univar20Benchmark() : UnivarBenchmark<T>("Univariate 20 function", 1.195137, 0.0634905,  {-10, 10}, false) {
	}
};

template <class T>
class Univar21Benchmark : public UnivarBenchmark<T>
{
public:
	virtual T calcFunc(T point) const {		
		return ::calcFunc(UnivarProblem21<T>(), std::vector<T>(1, point));
	}

	virtual Interval<T> calcInterval(const Interval<T>& interval) const {
		return ::calcInterval(UnivarProblem21<Interval<T>>(), std::vector<Interval<T>>(1, interval));					
	}

	virtual ValDer<T> calcGrad(T point) const {
		return ::calcGrad(UnivarProblem21<ValDer<T>>(), std::vector<T>(1, point));
	}

	virtual IntervalDer<T> calcIntervalGrad(const Interval<T>& interval) const {
		return ::calcIntervalGrad(UnivarProblem21<IntervalDer<T>>(), std::vector<Interval<T>>(1, interval));
	}

	Univar21Benchmark() : UnivarBenchmark<T>("Univariate 21 function", -3, 2.5,  {0, 8}, true) {
	}
};

template <class T>
class Lipschitz1Benchmark : public UnivarBenchmark<T>
{
public:
	virtual T calcFunc(T point) const {		
		return ::calcFunc(LipschitzProblem1<T>(), std::vector<T>(1, point));
	}

	virtual Interval<T> calcInterval(const Interval<T>& interval) const {
		return ::calcInterval(LipschitzProblem1<Interval<T>>(), std::vector<Interval<T>>(1, interval));					
	}

	virtual ValDer<T> calcGrad(T point) const {
		return ::calcGrad(LipschitzProblem1<ValDer<T>>(), std::vector<T>(1, point));
	}

	virtual IntervalDer<T> calcIntervalGrad(const Interval<T>& interval) const {
		return ::calcIntervalGrad(LipschitzProblem1<IntervalDer<T>>(), std::vector<Interval<T>>(1, interval));
	}

	Lipschitz1Benchmark() : UnivarBenchmark<T>("LipschitzProblem 1 function", 29763.233, 10,  {0, 8}, true) {
	}
};

template <class T>
class Lipschitz2Benchmark : public UnivarBenchmark<T>
{
public:
	virtual T calcFunc(T point) const {		
		return ::calcFunc(LipschitzProblem2<T>(), std::vector<T>(1, point));
	}

	virtual Interval<T> calcInterval(const Interval<T>& interval) const {
		return ::calcInterval(LipschitzProblem2<Interval<T>>(), std::vector<Interval<T>>(1, interval));					
	}

	virtual ValDer<T> calcGrad(T point) const {
		return ::calcGrad(LipschitzProblem2<ValDer<T>>(), std::vector<T>(1, point));
	}

	virtual IntervalDer<T> calcIntervalGrad(const Interval<T>& interval) const {
		return ::calcIntervalGrad(LipschitzProblem2<IntervalDer<T>>(), std::vector<Interval<T>>(1, interval));
	}

	Lipschitz2Benchmark() : UnivarBenchmark<T>("LipschitzProblem 2 function", 0.67956, 0.824239,  {-10, 10}, true) {
	}
};

template <class T>
class Lipschitz3Benchmark : public UnivarBenchmark<T>
{
public:
	virtual T calcFunc(T point) const {		
		return ::calcFunc(LipschitzProblem3<T>(), std::vector<T>(1, point));
	}

	virtual Interval<T> calcInterval(const Interval<T>& interval) const {
		return ::calcInterval(LipschitzProblem3<Interval<T>>(), std::vector<Interval<T>>(1, interval));					
	}

	virtual ValDer<T> calcGrad(T point) const {
		return ::calcGrad(LipschitzProblem3<ValDer<T>>(), std::vector<T>(1, point));
	}

	virtual IntervalDer<T> calcIntervalGrad(const Interval<T>& interval) const {
		return ::calcIntervalGrad(LipschitzProblem3<IntervalDer<T>>(), std::vector<Interval<T>>(1, interval));
	}

	Lipschitz3Benchmark() : UnivarBenchmark<T>("LipschitzProblem 3 function", 5.19978, 1.6013,  {2.7, 7.5}, true) {
	}
};

template <class T>
class UnivarGradProblem1Benchmark : public UnivarBenchmark<T>
{
public:
	virtual T calcFunc(T point) const {		
		return ::calcFunc(UnivarGradProblem1<T>(), std::vector<T>(1, point));
	}

	virtual Interval<T> calcInterval(const Interval<T>& interval) const {
		return ::calcInterval(UnivarGradProblem1<Interval<T>>(), std::vector<Interval<T>>(1, interval));					
	}

	virtual ValDer<T> calcGrad(T point) const {
		return ::calcGrad(UnivarGradProblem1<ValDer<T>>(), std::vector<T>(1, point));
	}

	virtual IntervalDer<T> calcIntervalGrad(const Interval<T>& interval) const {
		return ::calcIntervalGrad(UnivarGradProblem1<IntervalDer<T>>(), std::vector<Interval<T>>(1, interval));
	}

	UnivarGradProblem1Benchmark() : UnivarBenchmark<T>("UnivarGradProblem1 function",0, -0.9999,  {0, 20}, true) {
	}
};

template <class T>
class UnivarGradProblem2Benchmark : public UnivarBenchmark<T>
{
public:
	virtual T calcFunc(T point) const {		
		return ::calcFunc(UnivarGradProblem2<T>(), std::vector<T>(1, point));
	}

	virtual Interval<T> calcInterval(const Interval<T>& interval) const {
		return ::calcInterval(UnivarGradProblem2<Interval<T>>(), std::vector<Interval<T>>(1, interval));					
	}

	virtual ValDer<T> calcGrad(T point) const {
		return ::calcGrad(UnivarGradProblem2<ValDer<T>>(), std::vector<T>(1, point));
	}

	virtual IntervalDer<T> calcIntervalGrad(const Interval<T>& interval) const {
		return ::calcIntervalGrad(UnivarGradProblem2<IntervalDer<T>>(), std::vector<Interval<T>>(1, interval));
	}

	UnivarGradProblem2Benchmark() : UnivarBenchmark<T>("UnivarGradProblem2 function",0, -1,  {0.2, 7}, true) {
	}
};

template <class T>
class UnivarGradProblem3Benchmark : public UnivarBenchmark<T>
{
public:
	virtual T calcFunc(T point) const {		
		return ::calcFunc(UnivarGradProblem3<T>(), std::vector<T>(1, point));
	}

	virtual Interval<T> calcInterval(const Interval<T>& interval) const {
		return ::calcInterval(UnivarGradProblem3<Interval<T>>(), std::vector<Interval<T>>(1, interval));					
	}

	virtual ValDer<T> calcGrad(T point) const {
		return ::calcGrad(UnivarGradProblem3<ValDer<T>>(), std::vector<T>(1, point));
	}

	virtual IntervalDer<T> calcIntervalGrad(const Interval<T>& interval) const {
		return ::calcIntervalGrad(UnivarGradProblem3<IntervalDer<T>>(), std::vector<Interval<T>>(1, interval));
	}

	UnivarGradProblem3Benchmark() : UnivarBenchmark<T>("UnivarGradProblem3 function",0, 0,  {-10, 10}, true) {
	}
};

template <class T>
class UnivarGradProblem4Benchmark : public UnivarBenchmark<T>
{
public:
	virtual T calcFunc(T point) const {		
		return ::calcFunc(UnivarGradProblem4<T>(), std::vector<T>(1, point));
	}

	virtual Interval<T> calcInterval(const Interval<T>& interval) const {
		return ::calcInterval(UnivarGradProblem4<Interval<T>>(), std::vector<Interval<T>>(1, interval));					
	}

	virtual ValDer<T> calcGrad(T point) const {
		return ::calcGrad(UnivarGradProblem4<ValDer<T>>(), std::vector<T>(1, point));
	}

	virtual IntervalDer<T> calcIntervalGrad(const Interval<T>& interval) const {
		return ::calcIntervalGrad(UnivarGradProblem4<IntervalDer<T>>(), std::vector<Interval<T>>(1, interval));
	}

	UnivarGradProblem4Benchmark() : UnivarBenchmark<T>("UnivarGradProblem4 function",0, -17.582872,  {0.2, 7}, true) {
	}
};

template <class T>
class UnivarGradProblem5Benchmark : public UnivarBenchmark<T>
{
public:
	virtual T calcFunc(T point) const {		
		return ::calcFunc(UnivarGradProblem5<T>(), std::vector<T>(1, point));
	}

	virtual Interval<T> calcInterval(const Interval<T>& interval) const {
		return ::calcInterval(UnivarGradProblem5<Interval<T>>(), std::vector<Interval<T>>(1, interval));					
	}

	virtual ValDer<T> calcGrad(T point) const {
		return ::calcGrad(UnivarGradProblem5<ValDer<T>>(), std::vector<T>(1, point));
	}

	virtual IntervalDer<T> calcIntervalGrad(const Interval<T>& interval) const {
		return ::calcIntervalGrad(UnivarGradProblem5<IntervalDer<T>>(), std::vector<Interval<T>>(1, interval));
	}

	UnivarGradProblem5Benchmark() : UnivarBenchmark<T>("UnivarGradProblem5 function",0, -0.020903,  {-10, 10}, true) {
	}
};

template <class T>
class UnivarGradProblem6Benchmark : public UnivarBenchmark<T>
{
public:
	virtual T calcFunc(T point) const {		
		return ::calcFunc(UnivarGradProblem6<T>(), std::vector<T>(1, point));
	}

	virtual Interval<T> calcInterval(const Interval<T>& interval) const {
		return ::calcInterval(UnivarGradProblem6<Interval<T>>(), std::vector<Interval<T>>(1, interval));					
	}

	virtual ValDer<T> calcGrad(T point) const {
		return ::calcGrad(UnivarGradProblem6<ValDer<T>>(), std::vector<T>(1, point));
	}

	virtual IntervalDer<T> calcIntervalGrad(const Interval<T>& interval) const {
		return ::calcIntervalGrad(UnivarGradProblem6<IntervalDer<T>>(), std::vector<Interval<T>>(1, interval));
	}

	UnivarGradProblem6Benchmark() : UnivarBenchmark<T>("UnivarGradProblem6 function",0, -0.952897,  {0.2, 7}, true) {
	}
};

template <class T>
class UnivarGradProblem7Benchmark : public UnivarBenchmark<T>
{
public:
	virtual T calcFunc(T point) const {		
		return ::calcFunc(UnivarGradProblem7<T>(), std::vector<T>(1, point));
	}

	virtual Interval<T> calcInterval(const Interval<T>& interval) const {
		return ::calcInterval(UnivarGradProblem7<Interval<T>>(), std::vector<Interval<T>>(1, interval));					
	}

	virtual ValDer<T> calcGrad(T point) const {
		return ::calcGrad(UnivarGradProblem7<ValDer<T>>(), std::vector<T>(1, point));
	}

	virtual IntervalDer<T> calcIntervalGrad(const Interval<T>& interval) const {
		return ::calcIntervalGrad(UnivarGradProblem7<IntervalDer<T>>(), std::vector<Interval<T>>(1, interval));
	}

	UnivarGradProblem7Benchmark() : UnivarBenchmark<T>("UnivarGradProblem7 function",0, -6.262872,  {0.2, 7}, true) {
	}
};

template <class T>
class UnivarGradProblem8Benchmark : public UnivarBenchmark<T>
{
public:
	virtual T calcFunc(T point) const {		
		return ::calcFunc(UnivarGradProblem8<T>(), std::vector<T>(1, point));
	}

	virtual Interval<T> calcInterval(const Interval<T>& interval) const {
		return ::calcInterval(UnivarGradProblem8<Interval<T>>(), std::vector<Interval<T>>(1, interval));					
	}

	virtual ValDer<T> calcGrad(T point) const {
		return ::calcGrad(UnivarGradProblem8<ValDer<T>>(), std::vector<T>(1, point));
	}

	virtual IntervalDer<T> calcIntervalGrad(const Interval<T>& interval) const {
		return ::calcIntervalGrad(UnivarGradProblem8<IntervalDer<T>>(), std::vector<Interval<T>>(1, interval));
	}

	UnivarGradProblem8Benchmark() : UnivarBenchmark<T>("UnivarGradProblem8 function",0, -0.077590,  {0.2, 7}, true) {
	}
};

template <class T>
class UnivarGradProblem9Benchmark : public UnivarBenchmark<T>
{
public:
	virtual T calcFunc(T point) const {		
		return ::calcFunc(UnivarGradProblem9<T>(), std::vector<T>(1, point));
	}

	virtual Interval<T> calcInterval(const Interval<T>& interval) const {
		return ::calcInterval(UnivarGradProblem9<Interval<T>>(), std::vector<Interval<T>>(1, interval));					
	}

	virtual ValDer<T> calcGrad(T point) const {
		return ::calcGrad(UnivarGradProblem9<ValDer<T>>(), std::vector<T>(1, point));
	}

	virtual IntervalDer<T> calcIntervalGrad(const Interval<T>& interval) const {
		return ::calcIntervalGrad(UnivarGradProblem9<IntervalDer<T>>(), std::vector<Interval<T>>(1, interval));
	}

	UnivarGradProblem9Benchmark() : UnivarBenchmark<T>("UnivarGradProblem9 function",0, 0.211315,  {0.2, 7}, true) {
	}
};

template <class T>
class UnivarGradProblem10Benchmark : public UnivarBenchmark<T>
{
public:
	virtual T calcFunc(T point) const {		
		return ::calcFunc(UnivarGradProblem10<T>(), std::vector<T>(1, point));
	}

	virtual Interval<T> calcInterval(const Interval<T>& interval) const {
		return ::calcInterval(UnivarGradProblem10<Interval<T>>(), std::vector<Interval<T>>(1, interval));					
	}

	virtual ValDer<T> calcGrad(T point) const {
		return ::calcGrad(UnivarGradProblem10<ValDer<T>>(), std::vector<T>(1, point));
	}

	virtual IntervalDer<T> calcIntervalGrad(const Interval<T>& interval) const {
		return ::calcIntervalGrad(UnivarGradProblem10<IntervalDer<T>>(), std::vector<Interval<T>>(1, interval));
	}

	UnivarGradProblem10Benchmark() : UnivarBenchmark<T>("UnivarGradProblem10 function",0, -0.478362,  {0.2, 7}, true) {
	}
};

template <class T>
class UnivarGradProblem11Benchmark : public UnivarBenchmark<T>
{
public:
	virtual T calcFunc(T point) const {		
		return ::calcFunc(UnivarGradProblem11<T>(), std::vector<T>(1, point));
	}

	virtual Interval<T> calcInterval(const Interval<T>& interval) const {
		return ::calcInterval(UnivarGradProblem11<Interval<T>>(), std::vector<Interval<T>>(1, interval));					
	}

	virtual ValDer<T> calcGrad(T point) const {
		return ::calcGrad(UnivarGradProblem11<ValDer<T>>(), std::vector<T>(1, point));
	}

	virtual IntervalDer<T> calcIntervalGrad(const Interval<T>& interval) const {
		return ::calcIntervalGrad(UnivarGradProblem11<IntervalDer<T>>(), std::vector<Interval<T>>(1, interval));
	}

	UnivarGradProblem11Benchmark() : UnivarBenchmark<T>("UnivarGradProblem11 function",0, -5.815675,  {0.2, 7}, true) {
	}
};

template <class T>
class UnivarGradProblem12Benchmark : public UnivarBenchmark<T>
{
public:
	virtual T calcFunc(T point) const {		
		return ::calcFunc(UnivarGradProblem12<T>(), std::vector<T>(1, point));
	}

	virtual Interval<T> calcInterval(const Interval<T>& interval) const {
		return ::calcInterval(UnivarGradProblem12<Interval<T>>(), std::vector<Interval<T>>(1, interval));					
	}

	virtual ValDer<T> calcGrad(T point) const {
		return ::calcGrad(UnivarGradProblem12<ValDer<T>>(), std::vector<T>(1, point));
	}

	virtual IntervalDer<T> calcIntervalGrad(const Interval<T>& interval) const {
		return ::calcIntervalGrad(UnivarGradProblem12<IntervalDer<T>>(), std::vector<Interval<T>>(1, interval));
	}

	UnivarGradProblem12Benchmark() : UnivarBenchmark<T>("UnivarGradProblem12 function",0, -7.047444,  {0.2, 7}, true) {
	}
};

template <class T>
class UnivarGradProblem13Benchmark : public UnivarBenchmark<T>
{
public:
	virtual T calcFunc(T point) const {		
		return ::calcFunc(UnivarGradProblem13<T>(), std::vector<T>(1, point));
	}

	virtual Interval<T> calcInterval(const Interval<T>& interval) const {
		return ::calcInterval(UnivarGradProblem13<Interval<T>>(), std::vector<Interval<T>>(1, interval));					
	}

	virtual ValDer<T> calcGrad(T point) const {
		return ::calcGrad(UnivarGradProblem13<ValDer<T>>(), std::vector<T>(1, point));
	}

	virtual IntervalDer<T> calcIntervalGrad(const Interval<T>& interval) const {
		return ::calcIntervalGrad(UnivarGradProblem13<IntervalDer<T>>(), std::vector<Interval<T>>(1, interval));
	}

	UnivarGradProblem13Benchmark() : UnivarBenchmark<T>("UnivarGradProblem13 function",0, -4.601308,  {2.7, 7.5}, true) {
	}
};

template <class T>
class UnivarGradProblem14Benchmark : public UnivarBenchmark<T>
{
public:
	virtual T calcFunc(T point) const {		
		return ::calcFunc(UnivarGradProblem14<T>(), std::vector<T>(1, point));
	}

	virtual Interval<T> calcInterval(const Interval<T>& interval) const {
		return ::calcInterval(UnivarGradProblem14<Interval<T>>(), std::vector<Interval<T>>(1, interval));					
	}

	virtual ValDer<T> calcGrad(T point) const {
		return ::calcGrad(UnivarGradProblem14<ValDer<T>>(), std::vector<T>(1, point));
	}

	virtual IntervalDer<T> calcIntervalGrad(const Interval<T>& interval) const {
		return ::calcIntervalGrad(UnivarGradProblem14<IntervalDer<T>>(), std::vector<Interval<T>>(1, interval));
	}

	UnivarGradProblem14Benchmark() : UnivarBenchmark<T>("UnivarGradProblem14 function",0, -0.141100,  {0.2, 7}, true) {
	}
};

template <class T>
class UnivarGradProblem15Benchmark : public UnivarBenchmark<T>
{
public:
	virtual T calcFunc(T point) const {		
		return ::calcFunc(UnivarGradProblem15<T>(), std::vector<T>(1, point));
	}

	virtual Interval<T> calcInterval(const Interval<T>& interval) const {
		return ::calcInterval(UnivarGradProblem15<Interval<T>>(), std::vector<Interval<T>>(1, interval));					
	}

	virtual ValDer<T> calcGrad(T point) const {
		return ::calcGrad(UnivarGradProblem15<ValDer<T>>(), std::vector<T>(1, point));
	}

	virtual IntervalDer<T> calcIntervalGrad(const Interval<T>& interval) const {
		return ::calcIntervalGrad(UnivarGradProblem15<IntervalDer<T>>(), std::vector<Interval<T>>(1, interval));
	}

	UnivarGradProblem15Benchmark() : UnivarBenchmark<T>("UnivarGradProblem15 function",0, -0.870885,  {0.2, 7}, true) {
	}
};

template <class T>
class UnivarGradProblem16Benchmark : public UnivarBenchmark<T>
{
public:
	virtual T calcFunc(T point) const {		
		return ::calcFunc(UnivarGradProblem16<T>(), std::vector<T>(1, point));
	}

	virtual Interval<T> calcInterval(const Interval<T>& interval) const {
		return ::calcInterval(UnivarGradProblem16<Interval<T>>(), std::vector<Interval<T>>(1, interval));					
	}

	virtual ValDer<T> calcGrad(T point) const {
		return ::calcGrad(UnivarGradProblem16<ValDer<T>>(), std::vector<T>(1, point));
	}

	virtual IntervalDer<T> calcIntervalGrad(const Interval<T>& interval) const {
		return ::calcIntervalGrad(UnivarGradProblem16<IntervalDer<T>>(), std::vector<Interval<T>>(1, interval));
	}

	UnivarGradProblem16Benchmark() : UnivarBenchmark<T>("UnivarGradProblem16 function",0, -9.031249,  {0.2, 7}, true) {
	}
};

template <class T>
class UnivarGradProblem17Benchmark : public UnivarBenchmark<T>
{
public:
	virtual T calcFunc(T point) const {		
		return ::calcFunc(UnivarGradProblem17<T>(), std::vector<T>(1, point));
	}

	virtual Interval<T> calcInterval(const Interval<T>& interval) const {
		return ::calcInterval(UnivarGradProblem17<Interval<T>>(), std::vector<Interval<T>>(1, interval));					
	}

	virtual ValDer<T> calcGrad(T point) const {
		return ::calcGrad(UnivarGradProblem17<ValDer<T>>(), std::vector<T>(1, point));
	}

	virtual IntervalDer<T> calcIntervalGrad(const Interval<T>& interval) const {
		return ::calcIntervalGrad(UnivarGradProblem17<IntervalDer<T>>(), std::vector<Interval<T>>(1, interval));
	}

	UnivarGradProblem17Benchmark() : UnivarBenchmark<T>("UnivarGradProblem17 function",0, 0.475689,  {-10, 10}, true) {
	}
};

template <class T>
class UnivarGradProblem18Benchmark : public UnivarBenchmark<T>
{
public:
	virtual T calcFunc(T point) const {		
		return ::calcFunc(UnivarGradProblem19<T>(), std::vector<T>(1, point));
	}

	virtual Interval<T> calcInterval(const Interval<T>& interval) const {
		return ::calcInterval(UnivarGradProblem19<Interval<T>>(), std::vector<Interval<T>>(1, interval));					
	}

	virtual ValDer<T> calcGrad(T point) const {
		return ::calcGrad(UnivarGradProblem19<ValDer<T>>(), std::vector<T>(1, point));
	}

	virtual IntervalDer<T> calcIntervalGrad(const Interval<T>& interval) const {
		return ::calcIntervalGrad(UnivarGradProblem19<IntervalDer<T>>(), std::vector<Interval<T>>(1, interval));
	}

	UnivarGradProblem18Benchmark() : UnivarBenchmark<T>("UnivarGradProblem18 function",0, 0,  {0.2, 7}, true) {
	}
};

template <class T>
class UnivarGradProblem19Benchmark : public UnivarBenchmark<T>
{
public:
	virtual T calcFunc(T point) const {		
		return ::calcFunc(UnivarGradProblem19<T>(), std::vector<T>(1, point));
	}

	virtual Interval<T> calcInterval(const Interval<T>& interval) const {
		return ::calcInterval(UnivarGradProblem19<Interval<T>>(), std::vector<Interval<T>>(1, interval));					
	}

	virtual ValDer<T> calcGrad(T point) const {
		return ::calcGrad(UnivarGradProblem19<ValDer<T>>(), std::vector<T>(1, point));
	}

	virtual IntervalDer<T> calcIntervalGrad(const Interval<T>& interval) const {
		return ::calcIntervalGrad(UnivarGradProblem19<IntervalDer<T>>(), std::vector<Interval<T>>(1, interval));
	}

	UnivarGradProblem19Benchmark() : UnivarBenchmark<T>("UnivarGradProblem19 function",0, -1,  {-5, 5}, true) {
	}
};

template <class T>
class UnivarGradProblem20Benchmark : public UnivarBenchmark<T>
{
public:
	virtual T calcFunc(T point) const {		
		return ::calcFunc(UnivarGradProblem20<T>(), std::vector<T>(1, point));
	}

	virtual Interval<T> calcInterval(const Interval<T>& interval) const {
		return ::calcInterval(UnivarGradProblem20<Interval<T>>(), std::vector<Interval<T>>(1, interval));					
	}

	virtual ValDer<T> calcGrad(T point) const {
		return ::calcGrad(UnivarGradProblem20<ValDer<T>>(), std::vector<T>(1, point));
	}

	virtual IntervalDer<T> calcIntervalGrad(const Interval<T>& interval) const {
		return ::calcIntervalGrad(UnivarGradProblem20<IntervalDer<T>>(), std::vector<Interval<T>>(1, interval));
	}

	UnivarGradProblem20Benchmark() : UnivarBenchmark<T>("UnivarGradProblem20 function",0, 1,  {-10,10}, true) {
	}
};

template <class T>
class UnivarGradProblem21Benchmark : public UnivarBenchmark<T>
{
public:
	virtual T calcFunc(T point) const {		
		return ::calcFunc(UnivarGradProblem21<T>(), std::vector<T>(1, point));
	}

	virtual Interval<T> calcInterval(const Interval<T>& interval) const {
		return ::calcInterval(UnivarGradProblem21<Interval<T>>(), std::vector<Interval<T>>(1, interval));					
	}

	virtual ValDer<T> calcGrad(T point) const {
		return ::calcGrad(UnivarGradProblem21<ValDer<T>>(), std::vector<T>(1, point));
	}

	virtual IntervalDer<T> calcIntervalGrad(const Interval<T>& interval) const {
		return ::calcIntervalGrad(UnivarGradProblem21<IntervalDer<T>>(), std::vector<Interval<T>>(1, interval));
	}

	UnivarGradProblem21Benchmark() : UnivarBenchmark<T>("UnivarGradProblem21 function",0, 1,  {-20,20}, true) {
	}
};

template <class T>
class UnivarGradProblem22Benchmark : public UnivarBenchmark<T>
{
public:
	virtual T calcFunc(T point) const {		
		return ::calcFunc(UnivarGradProblem22<T>(), std::vector<T>(1, point));
	}

	virtual Interval<T> calcInterval(const Interval<T>& interval) const {
		return ::calcInterval(UnivarGradProblem22<Interval<T>>(), std::vector<Interval<T>>(1, interval));					
	}

	virtual ValDer<T> calcGrad(T point) const {
		return ::calcGrad(UnivarGradProblem22<ValDer<T>>(), std::vector<T>(1, point));
	}

	virtual IntervalDer<T> calcIntervalGrad(const Interval<T>& interval) const {
		return ::calcIntervalGrad(UnivarGradProblem22<IntervalDer<T>>(), std::vector<Interval<T>>(1, interval));
	}

	UnivarGradProblem22Benchmark() : UnivarBenchmark<T>("UnivarGradProblem22 function",0, -0.918397,  {0.2, 7}, true) {
	}
};

template <class T>
class UnivarGradProblem23Benchmark : public UnivarBenchmark<T>
{
public:
	virtual T calcFunc(T point) const {		
		return ::calcFunc(UnivarGradProblem23<T>(), std::vector<T>(1, point));
	}

	virtual Interval<T> calcInterval(const Interval<T>& interval) const {
		return ::calcInterval(UnivarGradProblem23<Interval<T>>(), std::vector<Interval<T>>(1, interval));					
	}

	virtual ValDer<T> calcGrad(T point) const {
		return ::calcGrad(UnivarGradProblem23<ValDer<T>>(), std::vector<T>(1, point));
	}

	virtual IntervalDer<T> calcIntervalGrad(const Interval<T>& interval) const {
		return ::calcIntervalGrad(UnivarGradProblem23<IntervalDer<T>>(), std::vector<Interval<T>>(1, interval));
	}

	UnivarGradProblem23Benchmark() : UnivarBenchmark<T>("UnivarGradProblem23 function",0, -0.824239,  {-10, 10}, true) {
	}
};

template <class T>
class UnivarGradProblem24Benchmark : public UnivarBenchmark<T>
{
public:
	virtual T calcFunc(T point) const {		
		return ::calcFunc(UnivarGradProblem24<T>(), std::vector<T>(1, point));
	}

	virtual Interval<T> calcInterval(const Interval<T>& interval) const {
		return ::calcInterval(UnivarGradProblem24<Interval<T>>(), std::vector<Interval<T>>(1, interval));					
	}

	virtual ValDer<T> calcGrad(T point) const {
		return ::calcGrad(UnivarGradProblem24<ValDer<T>>(), std::vector<T>(1, point));
	}

	virtual IntervalDer<T> calcIntervalGrad(const Interval<T>& interval) const {
		return ::calcIntervalGrad(UnivarGradProblem24<IntervalDer<T>>(), std::vector<Interval<T>>(1, interval));
	}

	UnivarGradProblem24Benchmark() : UnivarBenchmark<T>("UnivarGradProblem24 function",0, -0.027864,  {0.2, 7}, true) {
	}
};

template <class T>
class UnivarGradProblem25Benchmark : public UnivarBenchmark<T>
{
public:
	virtual T calcFunc(T point) const {		
		return ::calcFunc(UnivarGradProblem25<T>(), std::vector<T>(1, point));
	}

	virtual Interval<T> calcInterval(const Interval<T>& interval) const {
		return ::calcInterval(UnivarGradProblem25<Interval<T>>(), std::vector<Interval<T>>(1, interval));					
	}

	virtual ValDer<T> calcGrad(T point) const {
		return ::calcGrad(UnivarGradProblem25<ValDer<T>>(), std::vector<T>(1, point));
	}

	virtual IntervalDer<T> calcIntervalGrad(const Interval<T>& interval) const {
		return ::calcIntervalGrad(UnivarGradProblem25<IntervalDer<T>>(), std::vector<Interval<T>>(1, interval));
	}

	UnivarGradProblem25Benchmark() : UnivarBenchmark<T>("UnivarGradProblem25 function",0, 3.5,  {0.2, 7}, true) {
	}
};

template <class T>
class UnivarGradProblem26Benchmark : public UnivarBenchmark<T>
{
public:
	virtual T calcFunc(T point) const {		
		return ::calcFunc(UnivarGradProblem26<T>(), std::vector<T>(1, point));
	}

	virtual Interval<T> calcInterval(const Interval<T>& interval) const {
		return ::calcInterval(UnivarGradProblem26<Interval<T>>(), std::vector<Interval<T>>(1, interval));					
	}

	virtual ValDer<T> calcGrad(T point) const {
		return ::calcGrad(UnivarGradProblem26<ValDer<T>>(), std::vector<T>(1, point));
	}

	virtual IntervalDer<T> calcIntervalGrad(const Interval<T>& interval) const {
		return ::calcIntervalGrad(UnivarGradProblem26<IntervalDer<T>>(), std::vector<Interval<T>>(1, interval));
	}

	UnivarGradProblem26Benchmark() : UnivarBenchmark<T>("UnivarGradProblem26 function",0, 0.367879,  {0.2, 7}, true) {
	}
};

template <class T>
class UnivarGradProblem27Benchmark : public UnivarBenchmark<T>
{
public:
	virtual T calcFunc(T point) const {		
		return ::calcFunc(UnivarGradProblem27<T>(), std::vector<T>(1, point));
	}

	virtual Interval<T> calcInterval(const Interval<T>& interval) const {
		return ::calcInterval(UnivarGradProblem27<Interval<T>>(), std::vector<Interval<T>>(1, interval));					
	}

	virtual ValDer<T> calcGrad(T point) const {
		return ::calcGrad(UnivarGradProblem27<ValDer<T>>(), std::vector<T>(1, point));
	}

	virtual IntervalDer<T> calcIntervalGrad(const Interval<T>& interval) const {
		return ::calcIntervalGrad(UnivarGradProblem27<IntervalDer<T>>(), std::vector<Interval<T>>(1, interval));
	}

	UnivarGradProblem27Benchmark() : UnivarBenchmark<T>("UnivarGradProblem27 function",0, -0.451388,  {0.2, 7}, true) {
	}
};

template <class T>
class UnivarGradProblem28Benchmark : public UnivarBenchmark<T>
{
public:
	virtual T calcFunc(T point) const {		
		return ::calcFunc(UnivarGradProblem28<T>(), std::vector<T>(1, point));
	}

	virtual Interval<T> calcInterval(const Interval<T>& interval) const {
		return ::calcInterval(UnivarGradProblem28<Interval<T>>(), std::vector<Interval<T>>(1, interval));					
	}

	virtual ValDer<T> calcGrad(T point) const {
		return ::calcGrad(UnivarGradProblem28<ValDer<T>>(), std::vector<T>(1, point));
	}

	virtual IntervalDer<T> calcIntervalGrad(const Interval<T>& interval) const {
		return ::calcIntervalGrad(UnivarGradProblem28<IntervalDer<T>>(), std::vector<Interval<T>>(1, interval));
	}

	UnivarGradProblem28Benchmark() : UnivarBenchmark<T>("UnivarGradProblem28 function",0, -1,  {0, 20}, true) {
	}
};

template <class T>
class UnivarGradProblem29Benchmark : public UnivarBenchmark<T>
{
public:
	virtual T calcFunc(T point) const {		
		return ::calcFunc(UnivarGradProblem29<T>(), std::vector<T>(1, point));
	}

	virtual Interval<T> calcInterval(const Interval<T>& interval) const {
		return ::calcInterval(UnivarGradProblem29<Interval<T>>(), std::vector<Interval<T>>(1, interval));					
	}

	virtual ValDer<T> calcGrad(T point) const {
		return ::calcGrad(UnivarGradProblem29<ValDer<T>>(), std::vector<T>(1, point));
	}

	virtual IntervalDer<T> calcIntervalGrad(const Interval<T>& interval) const {
		return ::calcIntervalGrad(UnivarGradProblem29<IntervalDer<T>>(), std::vector<Interval<T>>(1, interval));
	}

	UnivarGradProblem29Benchmark() : UnivarBenchmark<T>("UnivarGradProblem29 function",0, -0.410315,  {0.2, 7}, true) {
	}
};

template <class T>
class UnivarGradProblem30Benchmark : public UnivarBenchmark<T>
{
public:
	virtual T calcFunc(T point) const {		
		return ::calcFunc(UnivarGradProblem30<T>(), std::vector<T>(1, point));
	}

	virtual Interval<T> calcInterval(const Interval<T>& interval) const {
		return ::calcInterval(UnivarGradProblem30<Interval<T>>(), std::vector<Interval<T>>(1, interval));					
	}

	virtual ValDer<T> calcGrad(T point) const {
		return ::calcGrad(UnivarGradProblem30<ValDer<T>>(), std::vector<T>(1, point));
	}

	virtual IntervalDer<T> calcIntervalGrad(const Interval<T>& interval) const {
		return ::calcIntervalGrad(UnivarGradProblem30<IntervalDer<T>>(), std::vector<Interval<T>>(1, interval));
	}

	UnivarGradProblem30Benchmark() : UnivarBenchmark<T>("UnivarGradProblem30 function",0, -0.718282,  {0.2, 7}, true) {
	}
};

template <class T>
class UnivarGradProblem32Benchmark : public UnivarBenchmark<T>
{
public:
	virtual T calcFunc(T point) const {		
		return ::calcFunc(UnivarGradProblem32<T>(), std::vector<T>(1, point));
	}

	virtual Interval<T> calcInterval(const Interval<T>& interval) const {
		return ::calcInterval(UnivarGradProblem32<Interval<T>>(), std::vector<Interval<T>>(1, interval));					
	}

	virtual ValDer<T> calcGrad(T point) const {
		return ::calcGrad(UnivarGradProblem32<ValDer<T>>(), std::vector<T>(1, point));
	}

	virtual IntervalDer<T> calcIntervalGrad(const Interval<T>& interval) const {
		return ::calcIntervalGrad(UnivarGradProblem32<IntervalDer<T>>(), std::vector<Interval<T>>(1, interval));
	}

	UnivarGradProblem32Benchmark() : UnivarBenchmark<T>("UnivarGradProblem32 function",0, -1,  {0.02, 1}, true) {
	}
};

template <class T>
class UnivarGradProblem34Benchmark : public UnivarBenchmark<T>
{
public:
	virtual T calcFunc(T point) const {		
		return ::calcFunc(UnivarGradProblem34<T>(), std::vector<T>(1, point));
	}

	virtual Interval<T> calcInterval(const Interval<T>& interval) const {
		return ::calcInterval(UnivarGradProblem34<Interval<T>>(), std::vector<Interval<T>>(1, interval));					
	}

	virtual ValDer<T> calcGrad(T point) const {
		return ::calcGrad(UnivarGradProblem34<ValDer<T>>(), std::vector<T>(1, point));
	}

	virtual IntervalDer<T> calcIntervalGrad(const Interval<T>& interval) const {
		return ::calcIntervalGrad(UnivarGradProblem34<IntervalDer<T>>(), std::vector<Interval<T>>(1, interval));
	}

	UnivarGradProblem34Benchmark() : UnivarBenchmark<T>("UnivarGradProblem34 function",0, -0.535534,  {0.2, 7}, true) {
	}
};

template <class T>
class UnivarGradProblem36Benchmark : public UnivarBenchmark<T>
{
public:
	virtual T calcFunc(T point) const {		
		return ::calcFunc(UnivarGradProblem36<T>(), std::vector<T>(1, point));
	}

	virtual Interval<T> calcInterval(const Interval<T>& interval) const {
		return ::calcInterval(UnivarGradProblem36<Interval<T>>(), std::vector<Interval<T>>(1, interval));					
	}

	virtual ValDer<T> calcGrad(T point) const {
		return ::calcGrad(UnivarGradProblem36<ValDer<T>>(), std::vector<T>(1, point));
	}

	virtual IntervalDer<T> calcIntervalGrad(const Interval<T>& interval) const {
		return ::calcIntervalGrad(UnivarGradProblem36<IntervalDer<T>>(), std::vector<Interval<T>>(1, interval));
	}

	UnivarGradProblem36Benchmark() : UnivarBenchmark<T>("UnivarGradProblem36 function",0, -0.35,  {0.2, 7}, true) {
	}
};

template <class T>
class UnivarGradProblem37Benchmark : public UnivarBenchmark<T>
{
public:
	virtual T calcFunc(T point) const {		
		return ::calcFunc(UnivarGradProblem37<T>(), std::vector<T>(1, point));
	}

	virtual Interval<T> calcInterval(const Interval<T>& interval) const {
		return ::calcInterval(UnivarGradProblem37<Interval<T>>(), std::vector<Interval<T>>(1, interval));					
	}

	virtual ValDer<T> calcGrad(T point) const {
		return ::calcGrad(UnivarGradProblem37<ValDer<T>>(), std::vector<T>(1, point));
	}

	virtual IntervalDer<T> calcIntervalGrad(const Interval<T>& interval) const {
		return ::calcIntervalGrad(UnivarGradProblem37<IntervalDer<T>>(), std::vector<Interval<T>>(1, interval));
	}

	UnivarGradProblem37Benchmark() : UnivarBenchmark<T>("UnivarGradProblem37 function",0, -32.781261,  {-1, 7}, true) {
	}
};

template <class T>
class UnivarGradProblem38Benchmark : public UnivarBenchmark<T>
{
public:
	virtual T calcFunc(T point) const {		
		return ::calcFunc(UnivarGradProblem38<T>(), std::vector<T>(1, point));
	}

	virtual Interval<T> calcInterval(const Interval<T>& interval) const {
		return ::calcInterval(UnivarGradProblem38<Interval<T>>(), std::vector<Interval<T>>(1, interval));					
	}

	virtual ValDer<T> calcGrad(T point) const {
		return ::calcGrad(UnivarGradProblem38<ValDer<T>>(), std::vector<T>(1, point));
	}

	virtual IntervalDer<T> calcIntervalGrad(const Interval<T>& interval) const {
		return ::calcIntervalGrad(UnivarGradProblem38<IntervalDer<T>>(), std::vector<Interval<T>>(1, interval));
	}

	UnivarGradProblem38Benchmark() : UnivarBenchmark<T>("UnivarGradProblem38 function",0, 7,  {-4, 4}, true) {
	}
};

template <class T>
class UnivarGradProblem39Benchmark : public UnivarBenchmark<T>
{
public:
	virtual T calcFunc(T point) const {		
		return ::calcFunc(UnivarGradProblem39<T>(), std::vector<T>(1, point));
	}

	virtual Interval<T> calcInterval(const Interval<T>& interval) const {
		return ::calcInterval(UnivarGradProblem39<Interval<T>>(), std::vector<Interval<T>>(1, interval));					
	}

	virtual ValDer<T> calcGrad(T point) const {
		return ::calcGrad(UnivarGradProblem39<ValDer<T>>(), std::vector<T>(1, point));
	}

	virtual IntervalDer<T> calcIntervalGrad(const Interval<T>& interval) const {
		return ::calcIntervalGrad(UnivarGradProblem39<IntervalDer<T>>(), std::vector<Interval<T>>(1, interval));
	}

	UnivarGradProblem39Benchmark() : UnivarBenchmark<T>("UnivarGradProblem39 function",0, -1,  {-10, 20}, true) {
	}
};

template <class T>
class UnivarGradProblem40Benchmark : public UnivarBenchmark<T>
{
public:
	virtual T calcFunc(T point) const {		
		return ::calcFunc(UnivarGradProblem40<T>(), std::vector<T>(1, point));
	}

	virtual Interval<T> calcInterval(const Interval<T>& interval) const {
		return ::calcInterval(UnivarGradProblem40<Interval<T>>(), std::vector<Interval<T>>(1, interval));					
	}

	virtual ValDer<T> calcGrad(T point) const {
		return ::calcGrad(UnivarGradProblem40<ValDer<T>>(), std::vector<T>(1, point));
	}

	virtual IntervalDer<T> calcIntervalGrad(const Interval<T>& interval) const {
		return ::calcIntervalGrad(UnivarGradProblem40<IntervalDer<T>>(), std::vector<Interval<T>>(1, interval));
	}

	UnivarGradProblem40Benchmark() : UnivarBenchmark<T>("UnivarGradProblem40 function",0, -1,  {0, 3}, true) {
	}
};

template <class T>
class UnivarNonDiffProblem1Benchmark : public UnivarBenchmark<T>
{
public:
	virtual T calcFunc(T point) const {		
		return ::calcFunc(UnivarNonDiffProblem1<T>(), std::vector<T>(1, point));
	}

	virtual Interval<T> calcInterval(const Interval<T>& interval) const {
		return ::calcInterval(UnivarNonDiffProblem1<Interval<T>>(), std::vector<Interval<T>>(1, interval));					
	}

	virtual ValDer<T> calcGrad(T point) const {
		return ::calcGrad(UnivarNonDiffProblem1<ValDer<T>>(), std::vector<T>(1, point));
	}

	virtual IntervalDer<T> calcIntervalGrad(const Interval<T>& interval) const {
		return ::calcIntervalGrad(UnivarNonDiffProblem1<IntervalDer<T>>(), std::vector<Interval<T>>(1, interval));
	}

	UnivarNonDiffProblem1Benchmark() : UnivarBenchmark<T>("UnivarNonDiffProblem1 function", 0.2, 0,  {0.2,7}, false) {
	}
};

template <class T>
class UnivarNonDiffProblem2Benchmark : public UnivarBenchmark<T>
{
public:
	virtual T calcFunc(T point) const {		
		return ::calcFunc(UnivarNonDiffProblem2<T>(), std::vector<T>(1, point));
	}

	virtual Interval<T> calcInterval(const Interval<T>& interval) const {
		return ::calcInterval(UnivarNonDiffProblem2<Interval<T>>(), std::vector<Interval<T>>(1, interval));					
	}

	virtual ValDer<T> calcGrad(T point) const {
		return ::calcGrad(UnivarNonDiffProblem2<ValDer<T>>(), std::vector<T>(1, point));
	}

	virtual IntervalDer<T> calcIntervalGrad(const Interval<T>& interval) const {
		return ::calcIntervalGrad(UnivarNonDiffProblem2<IntervalDer<T>>(), std::vector<Interval<T>>(1, interval));
	}

	UnivarNonDiffProblem2Benchmark() : UnivarBenchmark<T>("UnivarNonDiffProblem2 function",0.788, 0,  {0.1, 7}, false) {
	}
};

template <class T>
class UnivarNonDiffProblem3Benchmark : public UnivarBenchmark<T>
{
public:
	virtual T calcFunc(T point) const {		
		return ::calcFunc(UnivarNonDiffProblem3<T>(), std::vector<T>(1, point));
	}

	virtual Interval<T> calcInterval(const Interval<T>& interval) const {
		return ::calcInterval(UnivarNonDiffProblem3<Interval<T>>(), std::vector<Interval<T>>(1, interval));					
	}

	virtual ValDer<T> calcGrad(T point) const {
		return ::calcGrad(UnivarNonDiffProblem3<ValDer<T>>(), std::vector<T>(1, point));
	}

	virtual IntervalDer<T> calcIntervalGrad(const Interval<T>& interval) const {
		return ::calcIntervalGrad(UnivarNonDiffProblem3<IntervalDer<T>>(), std::vector<Interval<T>>(1, interval));
	}

	UnivarNonDiffProblem3Benchmark() : UnivarBenchmark<T>("UnivarNonDiffProblem3 function",0, 0,  {-10, 10}, false) {
	}
};

template <class T>
class UnivarNonDiffProblem4Benchmark : public UnivarBenchmark<T>
{
public:
	virtual T calcFunc(T point) const {		
		return ::calcFunc(UnivarNonDiffProblem4<T>(), std::vector<T>(1, point));
	}

	virtual Interval<T> calcInterval(const Interval<T>& interval) const {
		return ::calcInterval(UnivarNonDiffProblem4<Interval<T>>(), std::vector<Interval<T>>(1, interval));					
	}

	virtual ValDer<T> calcGrad(T point) const {
		return ::calcGrad(UnivarNonDiffProblem4<ValDer<T>>(), std::vector<T>(1, point));
	}

	virtual IntervalDer<T> calcIntervalGrad(const Interval<T>& interval) const {
		return ::calcIntervalGrad(UnivarNonDiffProblem4<IntervalDer<T>>(), std::vector<Interval<T>>(1, interval));
	}

	UnivarNonDiffProblem4Benchmark() : UnivarBenchmark<T>("UnivarNonDiffProblem4 function",0, 0,  {0, 18}, false) {
	}
};

template <class T>
class UnivarNonDiffProblem5Benchmark : public UnivarBenchmark<T>
{
public:
	virtual T calcFunc(T point) const {		
		return ::calcFunc(UnivarNonDiffProblem5<T>(), std::vector<T>(1, point));
	}

	virtual Interval<T> calcInterval(const Interval<T>& interval) const {
		return ::calcInterval(UnivarNonDiffProblem5<Interval<T>>(), std::vector<Interval<T>>(1, interval));					
	}

	virtual ValDer<T> calcGrad(T point) const {
		return ::calcGrad(UnivarNonDiffProblem5<ValDer<T>>(), std::vector<T>(1, point));
	}

	virtual IntervalDer<T> calcIntervalGrad(const Interval<T>& interval) const {
		return ::calcIntervalGrad(UnivarNonDiffProblem5<IntervalDer<T>>(), std::vector<Interval<T>>(1, interval));
	}

	UnivarNonDiffProblem5Benchmark() : UnivarBenchmark<T>("UnivarNonDiffProblem5 function",0, 0,  {0, 7}, false) {
	}
};

template <class T>
class UnivarNonDiffProblem6Benchmark : public UnivarBenchmark<T>
{
public:
	virtual T calcFunc(T point) const {		
		return ::calcFunc(UnivarNonDiffProblem6<T>(), std::vector<T>(1, point));
	}

	virtual Interval<T> calcInterval(const Interval<T>& interval) const {
		return ::calcInterval(UnivarNonDiffProblem6<Interval<T>>(), std::vector<Interval<T>>(1, interval));					
	}

	virtual ValDer<T> calcGrad(T point) const {
		return ::calcGrad(UnivarNonDiffProblem6<ValDer<T>>(), std::vector<T>(1, point));
	}

	virtual IntervalDer<T> calcIntervalGrad(const Interval<T>& interval) const {
		return ::calcIntervalGrad(UnivarNonDiffProblem6<IntervalDer<T>>(), std::vector<Interval<T>>(1, interval));
	}

	UnivarNonDiffProblem6Benchmark() : UnivarBenchmark<T>("UnivarNonDiffProblem6 function",0, 0,  {-10, 10}, false) {
	}
};

template <class T>
class UnivarNonDiffProblem7Benchmark : public UnivarBenchmark<T>
{
public:
	virtual T calcFunc(T point) const {		
		return ::calcFunc(UnivarNonDiffProblem7<T>(), std::vector<T>(1, point));
	}

	virtual Interval<T> calcInterval(const Interval<T>& interval) const {
		return ::calcInterval(UnivarNonDiffProblem7<Interval<T>>(), std::vector<Interval<T>>(1, interval));					
	}

	virtual ValDer<T> calcGrad(T point) const {
		return ::calcGrad(UnivarNonDiffProblem7<ValDer<T>>(), std::vector<T>(1, point));
	}

	virtual IntervalDer<T> calcIntervalGrad(const Interval<T>& interval) const {
		return ::calcIntervalGrad(UnivarNonDiffProblem7<IntervalDer<T>>(), std::vector<Interval<T>>(1, interval));
	}

	UnivarNonDiffProblem7Benchmark() : UnivarBenchmark<T>("UnivarNonDiffProblem7 function",0, 0,  {0.1, 7}, false) {
	}
};

template <class T>
class UnivarNonDiffProblem8Benchmark : public UnivarBenchmark<T>
{
public:
	virtual T calcFunc(T point) const {		
		return ::calcFunc(UnivarNonDiffProblem8<T>(), std::vector<T>(1, point));
	}

	virtual Interval<T> calcInterval(const Interval<T>& interval) const {
		return ::calcInterval(UnivarNonDiffProblem8<Interval<T>>(), std::vector<Interval<T>>(1, interval));					
	}

	virtual ValDer<T> calcGrad(T point) const {
		return ::calcGrad(UnivarNonDiffProblem8<ValDer<T>>(), std::vector<T>(1, point));
	}

	virtual IntervalDer<T> calcIntervalGrad(const Interval<T>& interval) const {
		return ::calcIntervalGrad(UnivarNonDiffProblem8<IntervalDer<T>>(), std::vector<Interval<T>>(1, interval));
	}

	UnivarNonDiffProblem8Benchmark() : UnivarBenchmark<T>("UnivarNonDiffProblem8 function",0, 0,  {-10, 10}, false) {
	}
};

template <class T>
class UnivarNonDiffProblem9Benchmark : public UnivarBenchmark<T>
{
public:
	virtual T calcFunc(T point) const {		
		return ::calcFunc(UnivarNonDiffProblem9<T>(), std::vector<T>(1, point));
	}

	virtual Interval<T> calcInterval(const Interval<T>& interval) const {
		return ::calcInterval(UnivarNonDiffProblem9<Interval<T>>(), std::vector<Interval<T>>(1, interval));					
	}

	virtual ValDer<T> calcGrad(T point) const {
		return ::calcGrad(UnivarNonDiffProblem9<ValDer<T>>(), std::vector<T>(1, point));
	}

	virtual IntervalDer<T> calcIntervalGrad(const Interval<T>& interval) const {
		return ::calcIntervalGrad(UnivarNonDiffProblem9<IntervalDer<T>>(), std::vector<Interval<T>>(1, interval));
	}

	UnivarNonDiffProblem9Benchmark() : UnivarBenchmark<T>("UnivarNonDiffProblem9 function",0, 0,  {0, 4 * M_PI}, false) {
	}
};

template <class T>
class UnivarNonDiffProblem10Benchmark : public UnivarBenchmark<T>
{
public:
	virtual T calcFunc(T point) const {		
		return ::calcFunc(UnivarNonDiffProblem10<T>(), std::vector<T>(1, point));
	}

	virtual Interval<T> calcInterval(const Interval<T>& interval) const {
		return ::calcInterval(UnivarNonDiffProblem10<Interval<T>>(), std::vector<Interval<T>>(1, interval));					
	}

	virtual ValDer<T> calcGrad(T point) const {
		return ::calcGrad(UnivarNonDiffProblem10<ValDer<T>>(), std::vector<T>(1, point));
	}

	virtual IntervalDer<T> calcIntervalGrad(const Interval<T>& interval) const {
		return ::calcIntervalGrad(UnivarNonDiffProblem10<IntervalDer<T>>(), std::vector<Interval<T>>(1, interval));
	}

	UnivarNonDiffProblem10Benchmark() : UnivarBenchmark<T>("UnivarNonDiffProblem10 function",0, 0,  {0, 10}, false) {
	}
};

template <class T>
class UnivarNonDiffProblem11Benchmark : public UnivarBenchmark<T>
{
public:
	virtual T calcFunc(T point) const {		
		return ::calcFunc(UnivarNonDiffProblem11<T>(), std::vector<T>(1, point));
	}

	virtual Interval<T> calcInterval(const Interval<T>& interval) const {
		return ::calcInterval(UnivarNonDiffProblem11<Interval<T>>(), std::vector<Interval<T>>(1, interval));					
	}

	virtual ValDer<T> calcGrad(T point) const {
		return ::calcGrad(UnivarNonDiffProblem11<ValDer<T>>(), std::vector<T>(1, point));
	}

	virtual IntervalDer<T> calcIntervalGrad(const Interval<T>& interval) const {
		return ::calcIntervalGrad(UnivarNonDiffProblem11<IntervalDer<T>>(), std::vector<Interval<T>>(1, interval));
	}

	UnivarNonDiffProblem11Benchmark() : UnivarBenchmark<T>("UnivarNonDiffProblem11 function",0, 0,  {0, 5}, false) {
	}
};

template <class T>
class UnivarNonDiffProblem12Benchmark : public UnivarBenchmark<T>
{
public:
	virtual T calcFunc(T point) const {		
		return ::calcFunc(UnivarNonDiffProblem12<T>(), std::vector<T>(1, point));
	}

	virtual Interval<T> calcInterval(const Interval<T>& interval) const {
		return ::calcInterval(UnivarNonDiffProblem12<Interval<T>>(), std::vector<Interval<T>>(1, interval));					
	}

	virtual ValDer<T> calcGrad(T point) const {
		return ::calcGrad(UnivarNonDiffProblem12<ValDer<T>>(), std::vector<T>(1, point));
	}

	virtual IntervalDer<T> calcIntervalGrad(const Interval<T>& interval) const {
		return ::calcIntervalGrad(UnivarNonDiffProblem12<IntervalDer<T>>(), std::vector<Interval<T>>(1, interval));
	}

	UnivarNonDiffProblem12Benchmark() : UnivarBenchmark<T>("UnivarNonDiffProblem12 function",2.356, 0,  {0, 2*M_PI}, false) {
	}
};

template <class T>
class UnivarNonDiffProblem13Benchmark : public UnivarBenchmark<T>
{
public:
	virtual T calcFunc(T point) const {		
		return ::calcFunc(UnivarNonDiffProblem13<T>(), std::vector<T>(1, point));
	}

	virtual Interval<T> calcInterval(const Interval<T>& interval) const {
		return ::calcInterval(UnivarNonDiffProblem13<Interval<T>>(), std::vector<Interval<T>>(1, interval));					
	}

	virtual ValDer<T> calcGrad(T point) const {
		return ::calcGrad(UnivarNonDiffProblem13<ValDer<T>>(), std::vector<T>(1, point));
	}

	virtual IntervalDer<T> calcIntervalGrad(const Interval<T>& interval) const {
		return ::calcIntervalGrad(UnivarNonDiffProblem13<IntervalDer<T>>(), std::vector<Interval<T>>(1, interval));
	}

	UnivarNonDiffProblem13Benchmark() : UnivarBenchmark<T>("UnivarNonDiffProblem13 function",0, 0,  {-6, 2}, false) {
	}
};

template <class T>
class UnivarNonDiffProblem14Benchmark : public UnivarBenchmark<T>
{
public:
	virtual T calcFunc(T point) const {		
		return ::calcFunc(UnivarNonDiffProblem14<T>(), std::vector<T>(1, point));
	}

	virtual Interval<T> calcInterval(const Interval<T>& interval) const {
		return ::calcInterval(UnivarNonDiffProblem14<Interval<T>>(), std::vector<Interval<T>>(1, interval));					
	}

	virtual ValDer<T> calcGrad(T point) const {
		return ::calcGrad(UnivarNonDiffProblem14<ValDer<T>>(), std::vector<T>(1, point));
	}

	virtual IntervalDer<T> calcIntervalGrad(const Interval<T>& interval) const {
		return ::calcIntervalGrad(UnivarNonDiffProblem14<IntervalDer<T>>(), std::vector<Interval<T>>(1, interval));
	}

	UnivarNonDiffProblem14Benchmark() : UnivarBenchmark<T>("UnivarNonDiffProblem14 function",0, 0,  {0, 4}, false) {
	}
};

template <class T>
class UnivarNonDiffProblem15Benchmark : public UnivarBenchmark<T>
{
public:
	virtual T calcFunc(T point) const {		
		return ::calcFunc(UnivarNonDiffProblem15<T>(), std::vector<T>(1, point));
	}

	virtual Interval<T> calcInterval(const Interval<T>& interval) const {
		return ::calcInterval(UnivarNonDiffProblem15<Interval<T>>(), std::vector<Interval<T>>(1, interval));					
	}

	virtual ValDer<T> calcGrad(T point) const {
		return ::calcGrad(UnivarNonDiffProblem15<ValDer<T>>(), std::vector<T>(1, point));
	}

	virtual IntervalDer<T> calcIntervalGrad(const Interval<T>& interval) const {
		return ::calcIntervalGrad(UnivarNonDiffProblem15<IntervalDer<T>>(), std::vector<Interval<T>>(1, interval));
	}

	UnivarNonDiffProblem15Benchmark() : UnivarBenchmark<T>("UnivarNonDiffProblem15 function",0, 0,  {-5, 5}, false) {
	}
};

template <class T>
class UnivarNonDiffProblem16Benchmark : public UnivarBenchmark<T>
{
public:
	virtual T calcFunc(T point) const {		
		return ::calcFunc(UnivarNonDiffProblem16<T>(), std::vector<T>(1, point));
	}

	virtual Interval<T> calcInterval(const Interval<T>& interval) const {
		return ::calcInterval(UnivarNonDiffProblem16<Interval<T>>(), std::vector<Interval<T>>(1, interval));					
	}

	virtual ValDer<T> calcGrad(T point) const {
		return ::calcGrad(UnivarNonDiffProblem16<ValDer<T>>(), std::vector<T>(1, point));
	}

	virtual IntervalDer<T> calcIntervalGrad(const Interval<T>& interval) const {
		return ::calcIntervalGrad(UnivarNonDiffProblem16<IntervalDer<T>>(), std::vector<Interval<T>>(1, interval));
	}

	UnivarNonDiffProblem16Benchmark() : UnivarBenchmark<T>("UnivarNonDiffProblem16 function",-8.659, 0,  {-10, 10}, false) {
	}
};

template <class T>
class UnivarNonDiffProblem17Benchmark : public UnivarBenchmark<T>
{
public:
	virtual T calcFunc(T point) const {		
		return ::calcFunc(UnivarNonDiffProblem17<T>(), std::vector<T>(1, point));
	}

	virtual Interval<T> calcInterval(const Interval<T>& interval) const {
		return ::calcInterval(UnivarNonDiffProblem17<Interval<T>>(), std::vector<Interval<T>>(1, interval));					
	}

	virtual ValDer<T> calcGrad(T point) const {
		return ::calcGrad(UnivarNonDiffProblem17<ValDer<T>>(), std::vector<T>(1, point));
	}

	virtual IntervalDer<T> calcIntervalGrad(const Interval<T>& interval) const {
		return ::calcIntervalGrad(UnivarNonDiffProblem17<IntervalDer<T>>(), std::vector<Interval<T>>(1, interval));
	}

	UnivarNonDiffProblem17Benchmark() : UnivarBenchmark<T>("UnivarNonDiffProblem17 function",0, 0,  {-10, 10}, false) {
	}
};

template <class T>
class UnivarNonDiffProblem18Benchmark : public UnivarBenchmark<T>
{
public:
	virtual T calcFunc(T point) const {		
		return ::calcFunc(UnivarNonDiffProblem18<T>(), std::vector<T>(1, point));
	}

	virtual Interval<T> calcInterval(const Interval<T>& interval) const {
		return ::calcInterval(UnivarNonDiffProblem18<Interval<T>>(), std::vector<Interval<T>>(1, interval));					
	}

	virtual ValDer<T> calcGrad(T point) const {
		return ::calcGrad(UnivarNonDiffProblem18<ValDer<T>>(), std::vector<T>(1, point));
	}

	virtual IntervalDer<T> calcIntervalGrad(const Interval<T>& interval) const {
		return ::calcIntervalGrad(UnivarNonDiffProblem18<IntervalDer<T>>(), std::vector<Interval<T>>(1, interval));
	}

	UnivarNonDiffProblem18Benchmark() : UnivarBenchmark<T>("UnivarNonDiffProblem18 function",0, 0,  {-3, 2}, false) {
	}
};

template <class T>
class UnivarNonDiffProblem19Benchmark : public UnivarBenchmark<T>
{
public:
	virtual T calcFunc(T point) const {		
		return ::calcFunc(UnivarNonDiffProblem19<T>(), std::vector<T>(1, point));
	}

	virtual Interval<T> calcInterval(const Interval<T>& interval) const {
		return ::calcInterval(UnivarNonDiffProblem19<Interval<T>>(), std::vector<Interval<T>>(1, interval));					
	}

	virtual ValDer<T> calcGrad(T point) const {
		return ::calcGrad(UnivarNonDiffProblem19<ValDer<T>>(), std::vector<T>(1, point));
	}

	virtual IntervalDer<T> calcIntervalGrad(const Interval<T>& interval) const {
		return ::calcIntervalGrad(UnivarNonDiffProblem19<IntervalDer<T>>(), std::vector<Interval<T>>(1, interval));
	}

	UnivarNonDiffProblem19Benchmark() : UnivarBenchmark<T>("UnivarNonDiffProblem19 function",0, 0,  {0, 6.5}, false) {
	}
};

template <class T>
class UnivarNonDiffProblem20Benchmark : public UnivarBenchmark<T>
{
public:
	virtual T calcFunc(T point) const {		
		return ::calcFunc(UnivarNonDiffProblem20<T>(), std::vector<T>(1, point));
	}

	virtual Interval<T> calcInterval(const Interval<T>& interval) const {
		return ::calcInterval(UnivarNonDiffProblem20<Interval<T>>(), std::vector<Interval<T>>(1, interval));					
	}

	virtual ValDer<T> calcGrad(T point) const {
		return ::calcGrad(UnivarNonDiffProblem20<ValDer<T>>(), std::vector<T>(1, point));
	}

	virtual IntervalDer<T> calcIntervalGrad(const Interval<T>& interval) const {
		return ::calcIntervalGrad(UnivarNonDiffProblem20<IntervalDer<T>>(), std::vector<Interval<T>>(1, interval));
	}

	UnivarNonDiffProblem20Benchmark() : UnivarBenchmark<T>("UnivarNonDiffProblem20 function",1.25 * M_PI, -0.7071067,  {-10, 10}, false) {
	}
};


template <class T>
using PtrBenchOneDim = std::shared_ptr<UnivarBenchmark<T>>;

template <class T>
class UnivarBenchmarks : public BenchmarksBase<PtrBenchOneDim<T>>
{
public:
	virtual void fill()
	{
		this->clear();
		add(std::make_shared<Holder1Benchmark<T>>());
		add(std::make_shared<Holder2Benchmark<T>>());
		add(std::make_shared<Holder3Benchmark<T>>());
		add(std::make_shared<Holder4Benchmark<T>>());
		add(std::make_shared<Holder5Benchmark<T>>());
		add(std::make_shared<Holder6Benchmark<T>>());
		add(std::make_shared<Holder7Benchmark<T>>());
		add(std::make_shared<Holder8Benchmark<T>>());
		add(std::make_shared<Univar1Benchmark<T>>());
		add(std::make_shared<Univar2Benchmark<T>>());
		add(std::make_shared<Univar4Benchmark<T>>());	
		add(std::make_shared<Univar5Benchmark<T>>());
		add(std::make_shared<Univar7Benchmark<T>>());
		add(std::make_shared<Univar9Benchmark<T>>());
		add(std::make_shared<Univar10Benchmark<T>>());
		add(std::make_shared<Univar11Benchmark<T>>());
		add(std::make_shared<Univar12Benchmark<T>>());
		add(std::make_shared<Univar13Benchmark<T>>());
		add(std::make_shared<Univar14Benchmark<T>>());
		add(std::make_shared<Univar15Benchmark<T>>());
		add(std::make_shared<Univar16Benchmark<T>>());
		add(std::make_shared<Univar19Benchmark<T>>());
		add(std::make_shared<Univar20Benchmark<T>>());	
		add(std::make_shared<Univar21Benchmark<T>>());
		add(std::make_shared<Lipschitz1Benchmark<T>>());
		add(std::make_shared<Lipschitz2Benchmark<T>>());
		add(std::make_shared<Lipschitz3Benchmark<T>>());
		add(std::make_shared<UnivarGradProblem1Benchmark<T>>());
		add(std::make_shared<UnivarGradProblem2Benchmark<T>>());
		add(std::make_shared<UnivarGradProblem3Benchmark<T>>());
		add(std::make_shared<UnivarGradProblem4Benchmark<T>>());
		add(std::make_shared<UnivarGradProblem5Benchmark<T>>());
		add(std::make_shared<UnivarGradProblem6Benchmark<T>>());
		add(std::make_shared<UnivarGradProblem7Benchmark<T>>());
		add(std::make_shared<UnivarGradProblem8Benchmark<T>>());
		add(std::make_shared<UnivarGradProblem9Benchmark<T>>());
		add(std::make_shared<UnivarGradProblem10Benchmark<T>>());
		add(std::make_shared<UnivarGradProblem11Benchmark<T>>());
		add(std::make_shared<UnivarGradProblem12Benchmark<T>>());
		add(std::make_shared<UnivarGradProblem13Benchmark<T>>());
		add(std::make_shared<UnivarGradProblem14Benchmark<T>>());
		add(std::make_shared<UnivarGradProblem15Benchmark<T>>());
		add(std::make_shared<UnivarGradProblem16Benchmark<T>>());
		add(std::make_shared<UnivarGradProblem17Benchmark<T>>());
		add(std::make_shared<UnivarGradProblem18Benchmark<T>>());
		add(std::make_shared<UnivarGradProblem19Benchmark<T>>());
		add(std::make_shared<UnivarGradProblem20Benchmark<T>>());
		add(std::make_shared<UnivarGradProblem21Benchmark<T>>());
		add(std::make_shared<UnivarGradProblem22Benchmark<T>>());
		add(std::make_shared<UnivarGradProblem23Benchmark<T>>());
		add(std::make_shared<UnivarGradProblem24Benchmark<T>>());
		add(std::make_shared<UnivarGradProblem25Benchmark<T>>());
		add(std::make_shared<UnivarGradProblem26Benchmark<T>>());
		add(std::make_shared<UnivarGradProblem27Benchmark<T>>());
		add(std::make_shared<UnivarGradProblem28Benchmark<T>>());
		add(std::make_shared<UnivarGradProblem29Benchmark<T>>());
		add(std::make_shared<UnivarGradProblem30Benchmark<T>>());
		add(std::make_shared<UnivarGradProblem32Benchmark<T>>());
		add(std::make_shared<UnivarGradProblem34Benchmark<T>>());
		add(std::make_shared<UnivarGradProblem36Benchmark<T>>());
		add(std::make_shared<UnivarGradProblem37Benchmark<T>>());
		add(std::make_shared<UnivarGradProblem38Benchmark<T>>());
		add(std::make_shared<UnivarGradProblem39Benchmark<T>>());
		add(std::make_shared<UnivarGradProblem40Benchmark<T>>());
		add(std::make_shared<UnivarNonDiffProblem1Benchmark<T>>());
		add(std::make_shared<UnivarNonDiffProblem2Benchmark<T>>());
		add(std::make_shared<UnivarNonDiffProblem3Benchmark<T>>());
		add(std::make_shared<UnivarNonDiffProblem4Benchmark<T>>());
		add(std::make_shared<UnivarNonDiffProblem5Benchmark<T>>());
		add(std::make_shared<UnivarNonDiffProblem6Benchmark<T>>());
		add(std::make_shared<UnivarNonDiffProblem7Benchmark<T>>());
		add(std::make_shared<UnivarNonDiffProblem8Benchmark<T>>());
		add(std::make_shared<UnivarNonDiffProblem9Benchmark<T>>());
		add(std::make_shared<UnivarNonDiffProblem10Benchmark<T>>());
		add(std::make_shared<UnivarNonDiffProblem11Benchmark<T>>());
		add(std::make_shared<UnivarNonDiffProblem12Benchmark<T>>());
		add(std::make_shared<UnivarNonDiffProblem13Benchmark<T>>());
		add(std::make_shared<UnivarNonDiffProblem14Benchmark<T>>());
		add(std::make_shared<UnivarNonDiffProblem15Benchmark<T>>());
		add(std::make_shared<UnivarNonDiffProblem16Benchmark<T>>());
		add(std::make_shared<UnivarNonDiffProblem17Benchmark<T>>());
		add(std::make_shared<UnivarNonDiffProblem18Benchmark<T>>());
		add(std::make_shared<UnivarNonDiffProblem19Benchmark<T>>());
		add(std::make_shared<UnivarNonDiffProblem20Benchmark<T>>());
	}
};



#endif


