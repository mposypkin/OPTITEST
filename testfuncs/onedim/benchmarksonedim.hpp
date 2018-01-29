#ifndef BENCHMARKS_ONE_DIM_HPP
#define BENCHMARKS_ONE_DIM_HPP

#include <iostream>
#include <vector>
#include <memory>

#include "benchmarkonedim.hpp"
#include "expression/expr.hpp"
#include "testfuncsonedim.hpp"


using namespace snowgoose::expression;
using namespace snowgoose::derivative;
using namespace OPTITEST;

template <class T>
class Holder1Benchmark : public BenchmarkOneDim<T>
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

	Holder1Benchmark() : BenchmarkOneDim<T>("Holder1 function", 3.0, 7, {-4, 4}, true) {
	}
};

template <class T>
class Holder2Benchmark : public BenchmarkOneDim<T>
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

	Holder2Benchmark() : BenchmarkOneDim<T>("Holder2 function", 2.414213, -1.71768,  {-5, 5}, true) {
	}
};

template <class T>
class Holder3Benchmark : public BenchmarkOneDim<T>
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

	Holder3Benchmark() : BenchmarkOneDim<T>("Holder3 function", 2.0,  0, {0, 6}, true) {
	}
};

template <class T>
class Holder4Benchmark : public BenchmarkOneDim<T>
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

	Holder4Benchmark() : BenchmarkOneDim<T>("Holder4 function", 4.0, -2, {0, 6}, true) {
	}
};

template <class T>
class Holder5Benchmark : public BenchmarkOneDim<T>
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

	Holder5Benchmark() : BenchmarkOneDim<T>("Holder5 function", 0.966085, -1.48907,  {0, 1}, true) {
	}
};

template <class T>
class Holder6Benchmark : public BenchmarkOneDim<T>
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

	Holder6Benchmark() : BenchmarkOneDim<T>("Holder6 function", 1.590717, 7.51592,  {-3, 3}, false) {
	}
};

template <class T>
class Holder7Benchmark : public BenchmarkOneDim<T>
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

	Holder7Benchmark() : BenchmarkOneDim<T>("Holder7 function", -0.49139, -12.0312, {-10, 10}, true) {
	}
};

template <class T>
class Holder8Benchmark : public BenchmarkOneDim<T>
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

	Holder8Benchmark() : BenchmarkOneDim<T>("Holder8 function", 0.8003, 3.71699,  {-10, 10}, true) {
	}
};


template <class T>
using PtrBenchOneDim = std::shared_ptr<BenchmarkOneDim<T>>;

template <class T>
class BenchmarksOneDim : public BenchmarksBase<PtrBenchOneDim<T>>
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
	}
};



#endif


