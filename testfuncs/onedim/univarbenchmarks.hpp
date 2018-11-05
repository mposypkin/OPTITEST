#ifndef UNIVAR_BENCHMARKS_HPP
#define UNIVAR_BENCHMARKS_HPP

#include <iostream>
#include <vector>
#include <memory>
#include <math.h>

#include "univarbenchmark.hpp"
#include "expression/expr.hpp"
#include "univarproblem.hpp"
#include "pwl/pwlbound.hpp"


using namespace snowgoose::expression;
using namespace snowgoose::derivative;
using namespace snowgoose::derhighorder;
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

	virtual Series<T> calcDerHighOrder(T point, int order) const {
		return ::calcDerHighOrder(Holder1<Series<T>>(), point, order);
	}

	virtual IntervalSeries<T> calcIntervalDerHighOrder(const Interval<T>& interval, int order) const {
		return ::calcIntervalDerHighOrder(Holder1<IntervalSeries<T>>(), interval, order);
	} 

    virtual bool isDerExist(T point) const
    {
    	return UnivarBenchmark<T>::isDerExist(Holder1<Series<T>>(), point);
    }

	virtual T calcSymDiff(T point, int order) const
        {
		return ::calcSymDiff(Holder1<T>(), point, order);
	}

	virtual Interval<T> calcIntervalSymDiff(const Interval<T> &interval, int order) const
    {
		return ::calcIntervalSymDiff(Holder1<Interval<T>>(), interval, order);
    }

	virtual PwlBound<T> calcPwlBound(T a, T b, int steps) const {
		return ::calcPwlBound(Holder1<PwlBound<T>>(), a, b, steps);
	}

	virtual Expr<T> getExpr() const
	{
		return Holder1<T>();
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

	virtual Series<T> calcDerHighOrder(T point, int order) const {
		return ::calcDerHighOrder(Holder2<Series<T>>(), point, order);
	}

	virtual IntervalSeries<T> calcIntervalDerHighOrder(const Interval<T>& interval, int order) const {
		return ::calcIntervalDerHighOrder(Holder2<IntervalSeries<T>>(), interval, order);
	} 

    virtual bool isDerExist(T point) const
    {
    	return UnivarBenchmark<T>::isDerExist(Holder2<Series<T>>(), point);
    }

	virtual T calcSymDiff(T point, int order) const
	{
		return ::calcSymDiff(Holder2<T>(), point, order);
	}

	virtual Interval<T> calcIntervalSymDiff(const Interval<T> &interval, int order) const
    {
		return ::calcIntervalSymDiff(Holder2<Interval<T>>(), interval, order);
    }
	
	virtual PwlBound<T> calcPwlBound(T a, T b, int steps) const {
		return ::calcPwlBound(Holder2<PwlBound<T>>(), a, b, steps);
	}

	virtual Expr<T> getExpr() const
	{
		return Holder2<T>();
	}

	Holder2Benchmark() : UnivarBenchmark<T>("Holder2 function", 2.58194, -1.86513,  {-5, 5}, true) {
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

	virtual Series<T> calcDerHighOrder(T point, int order) const {
		return ::calcDerHighOrder(Holder3<Series<T>>(), point, order);
	}

	virtual IntervalSeries<T> calcIntervalDerHighOrder(const Interval<T>& interval, int order) const {
		return ::calcIntervalDerHighOrder(Holder3<IntervalSeries<T>>(), interval, order);
	} 

    virtual bool isDerExist(T point) const
    {
    	return UnivarBenchmark<T>::isDerExist(Holder3<Series<T>>(), point);
    }

	virtual T calcSymDiff(T point, int order) const
    {
		return ::calcSymDiff(Holder3<T>(), point, order);
	}

	virtual Interval<T> calcIntervalSymDiff(const Interval<T> &interval, int order) const
    {
		return ::calcIntervalSymDiff(Holder3<Interval<T>>(), interval, order);
    }

	virtual PwlBound<T> calcPwlBound(T a, T b, int steps) const {
		return ::calcPwlBound(Holder3<PwlBound<T>>(), a, b, steps);
	}

	virtual Expr<T> getExpr() const
	{
		return Holder3<T>();
	}

	Holder3Benchmark() : UnivarBenchmark<T>("Holder3 function", 1.99219,  0, {0, 6}, true) {
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

	virtual Series<T> calcDerHighOrder(T point, int order) const {
		return ::calcDerHighOrder(Holder4<Series<T>>(), point, order);
	}

	virtual IntervalSeries<T> calcIntervalDerHighOrder(const Interval<T>& interval, int order) const {
		return ::calcIntervalDerHighOrder(Holder4<IntervalSeries<T>>(), interval, order);
	} 

    virtual bool isDerExist(T point) const
    {
    	return UnivarBenchmark<T>::isDerExist(Holder4<Series<T>>(), point);
    }

	virtual T calcSymDiff(T point, int order) const
    {
		return ::calcSymDiff(Holder4<T>(), point, order);
	}

	virtual Interval<T> calcIntervalSymDiff(const Interval<T> &interval, int order) const
    {
		return ::calcIntervalSymDiff(Holder4<Interval<T>>(), interval, order);
    }

	virtual PwlBound<T> calcPwlBound(T a, T b, int steps) const {
		return ::calcPwlBound(Holder4<PwlBound<T>>(), a, b, steps);
	}

	virtual Expr<T> getExpr() const
	{
		return Holder4<T>();
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

	virtual Series<T> calcDerHighOrder(T point, int order) const {
		return ::calcDerHighOrder(Holder5<Series<T>>(), point, order);
	}

	virtual IntervalSeries<T> calcIntervalDerHighOrder(const Interval<T>& interval, int order) const {
		return ::calcIntervalDerHighOrder(Holder5<IntervalSeries<T>>(), interval, order);
	} 

    virtual bool isDerExist(T point) const
    {
    	return UnivarBenchmark<T>::isDerExist(Holder5<Series<T>>(), point);
    }

	virtual T calcSymDiff(T point, int order) const
    {
		return ::calcSymDiff(Holder5<T>(), point, order);
	}

	virtual Interval<T> calcIntervalSymDiff(const Interval<T> &interval, int order) const
    {
		return ::calcIntervalSymDiff(Holder5<Interval<T>>(), interval, order);
    }

	virtual PwlBound<T> calcPwlBound(T a, T b, int steps) const {
		return ::calcPwlBound(Holder5<PwlBound<T>>(), a, b, steps);
	}

	virtual Expr<T> getExpr() const
	{
		return Holder5<T>();
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

	virtual Series<T> calcDerHighOrder(T point, int order) const {
		return ::calcDerHighOrder(Holder6<Series<T>>(), point, order);
	}

	virtual IntervalSeries<T> calcIntervalDerHighOrder(const Interval<T>& interval, int order) const {
		return ::calcIntervalDerHighOrder(Holder6<IntervalSeries<T>>(), interval, order);
	} 

    virtual bool isDerExist(T point) const
    {
    	return UnivarBenchmark<T>::isDerExist(Holder6<Series<T>>(), point);
    }

	virtual T calcSymDiff(T point, int order) const
    {
		return ::calcSymDiff(Holder6<T>(), point, order);
	}

	virtual Interval<T> calcIntervalSymDiff(const Interval<T> &interval, int order) const
    {
		return ::calcIntervalSymDiff(Holder6<Interval<T>>(), interval, order);
    }

	virtual PwlBound<T> calcPwlBound(T a, T b, int steps) const {
		return ::calcPwlBound(Holder6<PwlBound<T>>(), a, b, steps);
	}

	virtual Expr<T> getExpr() const
	{
		return Holder6<T>();
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

	virtual Series<T> calcDerHighOrder(T point, int order) const {
		return ::calcDerHighOrder(Holder7<Series<T>>(), point, order);
	}

	virtual IntervalSeries<T> calcIntervalDerHighOrder(const Interval<T>& interval, int order) const {
		return ::calcIntervalDerHighOrder(Holder7<IntervalSeries<T>>(), interval, order);
	} 

    virtual bool isDerExist(T point) const
    {
    	return UnivarBenchmark<T>::isDerExist(Holder7<Series<T>>(), point);
    }

	virtual T calcSymDiff(T point, int order) const
    {
		return ::calcSymDiff(Holder7<T>(), point, order);
	}

	virtual Interval<T> calcIntervalSymDiff(const Interval<T> &interval, int order) const
    {
		return ::calcIntervalSymDiff(Holder7<Interval<T>>(), interval, order);
    }

	virtual PwlBound<T> calcPwlBound(T a, T b, int steps) const {
		return ::calcPwlBound(Holder7<PwlBound<T>>(), a, b, steps);
	}

	virtual Expr<T> getExpr() const
	{
		return Holder7<T>();
	}

	Holder7Benchmark() : UnivarBenchmark<T>("Holder7 function", 5.16909, -14.838, {-10, 10}, true) {
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

	virtual Series<T> calcDerHighOrder(T point, int order) const {
		return ::calcDerHighOrder(Holder8<Series<T>>(), point, order);
	}

	virtual IntervalSeries<T> calcIntervalDerHighOrder(const Interval<T>& interval, int order) const {
		return ::calcIntervalDerHighOrder(Holder8<IntervalSeries<T>>(), interval, order);
	} 

    virtual bool isDerExist(T point) const
    {
    	return UnivarBenchmark<T>::isDerExist(Holder8<Series<T>>(), point);
    }

	virtual T calcSymDiff(T point, int order) const
    {
		return ::calcSymDiff(Holder8<T>(), point, order);
	}

	virtual Interval<T> calcIntervalSymDiff(const Interval<T> &interval, int order) const
    {
		return ::calcIntervalSymDiff(Holder8<Interval<T>>(), interval, order);
    }

	virtual PwlBound<T> calcPwlBound(T a, T b, int steps) const {
		return ::calcPwlBound(Holder8<PwlBound<T>>(), a, b, steps);
	}

	virtual Expr<T> getExpr() const
	{
		return Holder8<T>();
	}

	Holder8Benchmark() : UnivarBenchmark<T>("Holder8 function", -7.70831, -12.8709, {-10, 10}, true) {
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

	virtual Series<T> calcDerHighOrder(T point, int order) const {
		return ::calcDerHighOrder(UnivarProblem1<Series<T>>(), point, order);
	}

	virtual IntervalSeries<T> calcIntervalDerHighOrder(const Interval<T>& interval, int order) const {
		return ::calcIntervalDerHighOrder(UnivarProblem1<IntervalSeries<T>>(), interval, order);
	} 

    virtual bool isDerExist(T point) const
    {
    	return UnivarBenchmark<T>::isDerExist(UnivarProblem1<Series<T>>(), point);
    }

	virtual T calcSymDiff(T point, int order) const
    {
		return ::calcSymDiff(UnivarProblem1<T>(), point, order);
	}

	virtual Interval<T> calcIntervalSymDiff(const Interval<T> &interval, int order) const
    {
		return ::calcIntervalSymDiff(UnivarProblem1<Interval<T>>(), interval, order);
    }

	virtual PwlBound<T> calcPwlBound(T a, T b, int steps) const {
		return ::calcPwlBound(UnivarProblem1<PwlBound<T>>(), a, b, steps);
	}

	virtual Expr<T> getExpr() const
	{
		return UnivarProblem1<T>();
	}

	Univar1Benchmark() : UnivarBenchmark<T>("Univariate 1 function", 9.99989, -29753.3,  {-1.5, 11}, false) {
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

	virtual Series<T> calcDerHighOrder(T point, int order) const {
		return ::calcDerHighOrder(UnivarProblem2<Series<T>>(), point, order);
	}

	virtual IntervalSeries<T> calcIntervalDerHighOrder(const Interval<T>& interval, int order) const {
		return ::calcIntervalDerHighOrder(UnivarProblem2<IntervalSeries<T>>(), interval, order);
	} 

    virtual bool isDerExist(T point) const
    {
    	return UnivarBenchmark<T>::isDerExist(UnivarProblem2<Series<T>>(), point);
    }

	virtual T calcSymDiff(T point, int order) const
    {
		return ::calcSymDiff(UnivarProblem2<T>(), point, order);
	}

	virtual Interval<T> calcIntervalSymDiff(const Interval<T> &interval, int order) const
    {
		return ::calcIntervalSymDiff(UnivarProblem2<Interval<T>>(), interval, order);
    }

	virtual PwlBound<T> calcPwlBound(T a, T b, int steps) const {
		return ::calcPwlBound(UnivarProblem2<PwlBound<T>>(), a, b, steps);
	}

	virtual Expr<T> getExpr() const
	{
		return UnivarProblem2<T>();
	}

	Univar2Benchmark() : UnivarBenchmark<T>("Univariate 2 function", 6.21713, -0.888315, {2.7, 7.5}, true) {
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

	virtual Series<T> calcDerHighOrder(T point, int order) const {
		return ::calcDerHighOrder(UnivarProblem4<Series<T>>(), point, order);
	}

	virtual IntervalSeries<T> calcIntervalDerHighOrder(const Interval<T>& interval, int order) const {
		return ::calcIntervalDerHighOrder(UnivarProblem4<IntervalSeries<T>>(), interval, order);
	} 

    virtual bool isDerExist(T point) const
    {
    	return UnivarBenchmark<T>::isDerExist(UnivarProblem4<Series<T>>(), point);
    }

	virtual T calcSymDiff(T point, int order) const
    {
		return ::calcSymDiff(UnivarProblem4<T>(), point, order);
	}

	virtual Interval<T> calcIntervalSymDiff(const Interval<T> &interval, int order) const
    {
		return ::calcIntervalSymDiff(UnivarProblem4<Interval<T>>(), interval, order);
    }

	virtual PwlBound<T> calcPwlBound(T a, T b, int steps) const {
		return ::calcPwlBound(UnivarProblem4<PwlBound<T>>(), a, b, steps);
	}

	virtual Expr<T> getExpr() const
	{
		return UnivarProblem4<T>();
	}

	Univar4Benchmark() : UnivarBenchmark<T>("Univariate 4 function", 1.9, 2.56661, {1.9, 3.9}, false) {
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

	virtual Series<T> calcDerHighOrder(T point, int order) const {
		return ::calcDerHighOrder(UnivarProblem5<Series<T>>(), point, order);
	}

	virtual IntervalSeries<T> calcIntervalDerHighOrder(const Interval<T>& interval, int order) const {
		return ::calcIntervalDerHighOrder(UnivarProblem5<IntervalSeries<T>>(), interval, order);
	} 

    virtual bool isDerExist(T point) const
    {
    	return UnivarBenchmark<T>::isDerExist(UnivarProblem5<Series<T>>(), point);
    }

	virtual T calcSymDiff(T point, int order) const
    {
		return ::calcSymDiff(UnivarProblem5<T>(), point, order);
	}

	virtual Interval<T> calcIntervalSymDiff(const Interval<T> &interval, int order) const
    {
		return ::calcIntervalSymDiff(UnivarProblem5<Interval<T>>(), interval, order);
    }

	virtual PwlBound<T> calcPwlBound(T a, T b, int steps) const {
		return ::calcPwlBound(UnivarProblem5<PwlBound<T>>(), a, b, steps);
	}

	virtual Expr<T> getExpr() const
	{
		return UnivarProblem5<T>();
	}

	Univar5Benchmark() : UnivarBenchmark<T>("Univariate 5 function", 1.13904, -2.01028,  {0, 1.2}, false) {
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

	virtual Series<T> calcDerHighOrder(T point, int order) const {
		return ::calcDerHighOrder(UnivarProblem7<Series<T>>(), point, order);
	}

	virtual IntervalSeries<T> calcIntervalDerHighOrder(const Interval<T>& interval, int order) const {
		return ::calcIntervalDerHighOrder(UnivarProblem7<IntervalSeries<T>>(), interval, order);
	} 

    virtual bool isDerExist(T point) const
    {
    	return UnivarBenchmark<T>::isDerExist(UnivarProblem7<Series<T>>(), point);
    }

	virtual T calcSymDiff(T point, int order) const
    {
		return ::calcSymDiff(UnivarProblem7<T>(), point, order);
	}

	virtual Interval<T> calcIntervalSymDiff(const Interval<T> &interval, int order) const
    {
		return ::calcIntervalSymDiff(UnivarProblem7<Interval<T>>(), interval, order);
    }
	
	virtual PwlBound<T> calcPwlBound(T a, T b, int steps) const {
		return ::calcPwlBound(UnivarProblem7<PwlBound<T>>(), a, b, steps);
	}

	virtual Expr<T> getExpr() const
	{
		return UnivarProblem7<T>();
	}

	Univar7Benchmark() : UnivarBenchmark<T>("Univariate 7 function", 5.19979, -1.60131,  {2.7, 7.5}, false) {
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

	virtual Series<T> calcDerHighOrder(T point, int order) const {
		return ::calcDerHighOrder(UnivarProblem9<Series<T>>(), point, order);
	}

	virtual IntervalSeries<T> calcIntervalDerHighOrder(const Interval<T>& interval, int order) const {
		return ::calcIntervalDerHighOrder(UnivarProblem9<IntervalSeries<T>>(), interval, order);
	} 

    virtual bool isDerExist(T point) const
    {
    	return UnivarBenchmark<T>::isDerExist(UnivarProblem9<Series<T>>(), point);
    }

	virtual T calcSymDiff(T point, int order) const
    {
		return ::calcSymDiff(UnivarProblem9<T>(), point, order);
	}

	virtual Interval<T> calcIntervalSymDiff(const Interval<T> &interval, int order) const
    {
		return ::calcIntervalSymDiff(UnivarProblem9<Interval<T>>(), interval, order);
    }

	virtual PwlBound<T> calcPwlBound(T a, T b, int steps) const {
		return ::calcPwlBound(UnivarProblem9<PwlBound<T>>(), a, b, steps);
	}

	virtual Expr<T> getExpr() const
	{
		return UnivarProblem9<T>();
	}

	Univar9Benchmark() : UnivarBenchmark<T>("Univariate 9 function", 20.3997, -1.85886,  {3.1, 20.4}, false) {
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

	virtual Series<T> calcDerHighOrder(T point, int order) const {
		return ::calcDerHighOrder(UnivarProblem10<Series<T>>(), point, order);
	}

	virtual IntervalSeries<T> calcIntervalDerHighOrder(const Interval<T>& interval, int order) const {
		return ::calcIntervalDerHighOrder(UnivarProblem10<IntervalSeries<T>>(), interval, order);
	} 

    virtual bool isDerExist(T point) const
    {
    	return UnivarBenchmark<T>::isDerExist(UnivarProblem10<Series<T>>(), point);
    }

	virtual T calcSymDiff(T point, int order) const
    {
		return ::calcSymDiff(UnivarProblem10<T>(), point, order);
	}

	virtual Interval<T> calcIntervalSymDiff(const Interval<T> &interval, int order) const
    {
		return ::calcIntervalSymDiff(UnivarProblem10<Interval<T>>(), interval, order);
    }

	virtual PwlBound<T> calcPwlBound(T a, T b, int steps) const {
		return ::calcPwlBound(UnivarProblem10<PwlBound<T>>(), a, b, steps);
	}

	virtual Expr<T> getExpr() const
	{
		return UnivarProblem10<T>();
	}

	Univar10Benchmark() : UnivarBenchmark<T>("Univariate 10 function", 9.99999, -5.44013,  {0, 10}, false) {
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

	virtual Series<T> calcDerHighOrder(T point, int order) const {
		return ::calcDerHighOrder(UnivarProblem11<Series<T>>(), point, order);
	}

	virtual IntervalSeries<T> calcIntervalDerHighOrder(const Interval<T>& interval, int order) const {
		return ::calcIntervalDerHighOrder(UnivarProblem11<IntervalSeries<T>>(), interval, order);
	} 

    virtual bool isDerExist(T point) const
    {
    	return UnivarBenchmark<T>::isDerExist(UnivarProblem11<Series<T>>(), point);
    }

	virtual T calcSymDiff(T point, int order) const
    {
		return ::calcSymDiff(UnivarProblem11<T>(), point, order);
	}

	virtual Interval<T> calcIntervalSymDiff(const Interval<T> &interval, int order) const
    {
		return ::calcIntervalSymDiff(UnivarProblem11<Interval<T>>(), interval, order);
    }

	virtual PwlBound<T> calcPwlBound(T a, T b, int steps) const {
		return ::calcPwlBound(UnivarProblem11<PwlBound<T>>(), a, b, steps);
	}

	virtual Expr<T> getExpr() const
	{
		return UnivarProblem11<T>();
	}

	Univar11Benchmark() : UnivarBenchmark<T>("Univariate 11 function", 6.27808, -2.99992,  {-1.57, 6.28}, false) {
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

	virtual Series<T> calcDerHighOrder(T point, int order) const {
		return ::calcDerHighOrder(UnivarProblem12<Series<T>>(), point, order);
	}

	virtual IntervalSeries<T> calcIntervalDerHighOrder(const Interval<T>& interval, int order) const {
		return ::calcIntervalDerHighOrder(UnivarProblem12<IntervalSeries<T>>(), interval, order);
	} 

    virtual bool isDerExist(T point) const
    {
    	return UnivarBenchmark<T>::isDerExist(UnivarProblem12<Series<T>>(), point);
    }

	virtual T calcSymDiff(T point, int order) const
    {
		return ::calcSymDiff(UnivarProblem12<T>(), point, order);
	}

	virtual Interval<T> calcIntervalSymDiff(const Interval<T> &interval, int order) const
    {
		return ::calcIntervalSymDiff(UnivarProblem12<Interval<T>>(), interval, order);
    }

	virtual PwlBound<T> calcPwlBound(T a, T b, int steps) const {
		return ::calcPwlBound(UnivarProblem12<PwlBound<T>>(), a, b, steps);
	}

	virtual Expr<T> getExpr() const
	{
		return UnivarProblem12<T>();
	}

	Univar12Benchmark() : UnivarBenchmark<T>("Univariate 12 function", 1.57, -0.999999,  {0, 6.28}, false) {
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

	virtual Series<T> calcDerHighOrder(T point, int order) const {
		return ::calcDerHighOrder(UnivarProblem13<Series<T>>(), point, order);
	}

	virtual IntervalSeries<T> calcIntervalDerHighOrder(const Interval<T>& interval, int order) const {
		return ::calcIntervalDerHighOrder(UnivarProblem13<IntervalSeries<T>>(), interval, order);
	} 

    virtual bool isDerExist(T point) const
    {
    	return UnivarBenchmark<T>::isDerExist(UnivarProblem13<Series<T>>(), point);
    }

	virtual T calcSymDiff(T point, int order) const
    {
		return ::calcSymDiff(UnivarProblem13<T>(), point, order);
	}

	virtual Interval<T> calcIntervalSymDiff(const Interval<T> &interval, int order) const
    {
		return ::calcIntervalSymDiff(UnivarProblem13<Interval<T>>(), interval, order);
    }

	virtual PwlBound<T> calcPwlBound(T a, T b, int steps) const {
		return ::calcPwlBound(UnivarProblem13<PwlBound<T>>(), a, b, steps);
	}

	virtual Expr<T> getExpr() const
	{
		return UnivarProblem13<T>();
	}

	Univar13Benchmark() : UnivarBenchmark<T>("Univariate 13 function", 0.00103018, 1.00339,  {0.001, 0.99}, false) {
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

	virtual Series<T> calcDerHighOrder(T point, int order) const {
		return ::calcDerHighOrder(UnivarProblem14<Series<T>>(), point, order);
	}

	virtual IntervalSeries<T> calcIntervalDerHighOrder(const Interval<T>& interval, int order) const {
		return ::calcIntervalDerHighOrder(UnivarProblem14<IntervalSeries<T>>(), interval, order);
	} 

    virtual bool isDerExist(T point) const
    {
    	return UnivarBenchmark<T>::isDerExist(UnivarProblem14<Series<T>>(), point);
    }

	virtual T calcSymDiff(T point, int order) const
    {
		return ::calcSymDiff(UnivarProblem14<T>(), point, order);
	}

	virtual Interval<T> calcIntervalSymDiff(const Interval<T> &interval, int order) const
    {
		return ::calcIntervalSymDiff(UnivarProblem14<Interval<T>>(), interval, order);
    }

	virtual PwlBound<T> calcPwlBound(T a, T b, int steps) const {
		return ::calcPwlBound(UnivarProblem14<PwlBound<T>>(), a, b, steps);
	}

	virtual Expr<T> getExpr() const
	{
		return UnivarProblem14<T>();
	}

	Univar14Benchmark() : UnivarBenchmark<T>("Univariate 14 function", 0.724854, -0.478362,  {0, 4}, false) {
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

	virtual Series<T> calcDerHighOrder(T point, int order) const {
		return ::calcDerHighOrder(UnivarProblem15<Series<T>>(), point, order);
	}

	virtual IntervalSeries<T> calcIntervalDerHighOrder(const Interval<T>& interval, int order) const {
		return ::calcIntervalDerHighOrder(UnivarProblem15<IntervalSeries<T>>(), interval, order);
	} 

    virtual bool isDerExist(T point) const
    {
    	return UnivarBenchmark<T>::isDerExist(UnivarProblem15<Series<T>>(), point);
    }

	virtual T calcSymDiff(T point, int order) const
    {
		return ::calcSymDiff(UnivarProblem15<T>(), point, order);
	}

	virtual Interval<T> calcIntervalSymDiff(const Interval<T> &interval, int order) const
    {
		return ::calcIntervalSymDiff(UnivarProblem15<Interval<T>>(), interval, order);
    }

	virtual PwlBound<T> calcPwlBound(T a, T b, int steps) const {
		return ::calcPwlBound(UnivarProblem15<PwlBound<T>>(), a, b, steps);
	}

	virtual Expr<T> getExpr() const
	{
		return UnivarProblem15<T>();
	}

	Univar15Benchmark() : UnivarBenchmark<T>("Univariate 15 function", -0.414209, -7.03553,  {-5, 5}, false) {
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

	virtual Series<T> calcDerHighOrder(T point, int order) const {
		return ::calcDerHighOrder(UnivarProblem16<Series<T>>(), point, order);
	}

	virtual IntervalSeries<T> calcIntervalDerHighOrder(const Interval<T>& interval, int order) const {
		return ::calcIntervalDerHighOrder(UnivarProblem16<IntervalSeries<T>>(), interval, order);
	} 

    virtual bool isDerExist(T point) const
    {
    	return UnivarBenchmark<T>::isDerExist(UnivarProblem16<Series<T>>(), point);
    }

	virtual T calcSymDiff(T point, int order) const
    {
		return ::calcSymDiff(UnivarProblem16<T>(), point, order);
	}

	virtual Interval<T> calcIntervalSymDiff(const Interval<T> &interval, int order) const
    {
		return ::calcIntervalSymDiff(UnivarProblem16<Interval<T>>(), interval, order);
    }

	virtual PwlBound<T> calcPwlBound(T a, T b, int steps) const {
		return ::calcPwlBound(UnivarProblem16<PwlBound<T>>(), a, b, steps);
	}

	virtual Expr<T> getExpr() const
	{
		return UnivarProblem16<T>();
	}

	Univar16Benchmark() : UnivarBenchmark<T>("Univariate 16 function", -3, -72.011,  {-3, 3}, false) {
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

	virtual Series<T> calcDerHighOrder(T point, int order) const {
		return ::calcDerHighOrder(UnivarProblem19<Series<T>>(), point, order);
	}

	virtual IntervalSeries<T> calcIntervalDerHighOrder(const Interval<T>& interval, int order) const {
		return ::calcIntervalDerHighOrder(UnivarProblem19<IntervalSeries<T>>(), interval, order);
	} 

    virtual bool isDerExist(T point) const
    {
    	return UnivarBenchmark<T>::isDerExist(UnivarProblem19<Series<T>>(), point);
    }

	virtual T calcSymDiff(T point, int order) const
    {
		return ::calcSymDiff(UnivarProblem19<T>(), point, order);
	}

	virtual Interval<T> calcIntervalSymDiff(const Interval<T> &interval, int order) const
    {
		return ::calcIntervalSymDiff(UnivarProblem19<Interval<T>>(), interval, order);
    }

	virtual PwlBound<T> calcPwlBound(T a, T b, int steps) const {
		return ::calcPwlBound(UnivarProblem19<PwlBound<T>>(), a, b, steps);
	}

	virtual Expr<T> getExpr() const
	{
		return UnivarProblem19<T>();
	}

	Univar19Benchmark() : UnivarBenchmark<T>("Univariate 19 function", 0.410316, 0.467511,  {0, 6.5}, false) {
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

	virtual Series<T> calcDerHighOrder(T point, int order) const {
		return ::calcDerHighOrder(UnivarProblem20<Series<T>>(), point, order);
	}

	virtual IntervalSeries<T> calcIntervalDerHighOrder(const Interval<T>& interval, int order) const {
		return ::calcIntervalDerHighOrder(UnivarProblem20<IntervalSeries<T>>(), interval, order);
	} 

    virtual bool isDerExist(T point) const
    {
    	return UnivarBenchmark<T>::isDerExist(UnivarProblem20<Series<T>>(), point);
    }

	virtual T calcSymDiff(T point, int order) const
    {
		return ::calcSymDiff(UnivarProblem20<T>(), point, order);
	}

	virtual Interval<T> calcIntervalSymDiff(const Interval<T> &interval, int order) const
    {
		return ::calcIntervalSymDiff(UnivarProblem20<Interval<T>>(), interval, order);
    }

	virtual PwlBound<T> calcPwlBound(T a, T b, int steps) const {
		return ::calcPwlBound(UnivarProblem20<PwlBound<T>>(), a, b, steps);
	}

	virtual Expr<T> getExpr() const
	{
		return UnivarProblem20<T>();
	}

	Univar20Benchmark() : UnivarBenchmark<T>("Univariate 20 function", -1.19507, -0.0634905,  {-10, 10}, false) {
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

	virtual Series<T> calcDerHighOrder(T point, int order) const {
		return ::calcDerHighOrder(UnivarProblem21<Series<T>>(), point, order);
	}

	virtual IntervalSeries<T> calcIntervalDerHighOrder(const Interval<T>& interval, int order) const {
		return ::calcIntervalDerHighOrder(UnivarProblem21<IntervalSeries<T>>(), interval, order);
	} 

    virtual bool isDerExist(T point) const
    {
    	return UnivarBenchmark<T>::isDerExist(UnivarProblem21<Series<T>>(), point);
    }

	virtual T calcSymDiff(T point, int order) const
    {
		return ::calcSymDiff(UnivarProblem21<T>(), point, order);
	}

	virtual Interval<T> calcIntervalSymDiff(const Interval<T> &interval, int order) const
    {
		return ::calcIntervalSymDiff(UnivarProblem21<Interval<T>>(), interval, order);
    }

	virtual PwlBound<T> calcPwlBound(T a, T b, int steps) const {
		return ::calcPwlBound(UnivarProblem21<PwlBound<T>>(), a, b, steps);
	}

	virtual Expr<T> getExpr() const
	{
		return UnivarProblem21<T>();
	}

	Univar21Benchmark() : UnivarBenchmark<T>("Univariate 21 function", 2.5, -3.0,  {0, 8}, true) {
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

	virtual Series<T> calcDerHighOrder(T point, int order) const {
		return ::calcDerHighOrder(LipschitzProblem1<Series<T>>(), point, order);
	}

	virtual IntervalSeries<T> calcIntervalDerHighOrder(const Interval<T>& interval, int order) const {
		return ::calcIntervalDerHighOrder(LipschitzProblem1<IntervalSeries<T>>(), interval, order);
	} 

    virtual bool isDerExist(T point) const
    {
    	return UnivarBenchmark<T>::isDerExist(LipschitzProblem1<Series<T>>(), point);
    }

	virtual T calcSymDiff(T point, int order) const
    {
		return ::calcSymDiff(LipschitzProblem1<T>(), point, order);
	}

	virtual Interval<T> calcIntervalSymDiff(const Interval<T> &interval, int order) const
    {
		return ::calcIntervalSymDiff(LipschitzProblem1<Interval<T>>(), interval, order);
    }

	virtual PwlBound<T> calcPwlBound(T a, T b, int steps) const {
		return ::calcPwlBound(LipschitzProblem1<PwlBound<T>>(), a, b, steps);
	}

	virtual Expr<T> getExpr() const
	{
		return LipschitzProblem1<T>();
	}

	Lipschitz1Benchmark() : UnivarBenchmark<T>("LipschitzProblem 1 function", 1.41421, -2.3847,  {0, 8}, true) {
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

	virtual Series<T> calcDerHighOrder(T point, int order) const {
		return ::calcDerHighOrder(LipschitzProblem2<Series<T>>(), point, order);
	}

	virtual IntervalSeries<T> calcIntervalDerHighOrder(const Interval<T>& interval, int order) const {
		return ::calcIntervalDerHighOrder(LipschitzProblem2<IntervalSeries<T>>(), interval, order);
	} 

    virtual bool isDerExist(T point) const
    {
    	return UnivarBenchmark<T>::isDerExist(LipschitzProblem2<Series<T>>(), point);
    }

	virtual T calcSymDiff(T point, int order) const
    {
		return ::calcSymDiff(LipschitzProblem2<T>(), point, order);
	}

	virtual Interval<T> calcIntervalSymDiff(const Interval<T> &interval, int order) const
    {
		return ::calcIntervalSymDiff(LipschitzProblem2<Interval<T>>(), interval, order);
    }

	virtual PwlBound<T> calcPwlBound(T a, T b, int steps) const {
		return ::calcPwlBound(LipschitzProblem2<PwlBound<T>>(), a, b, steps);
	}

	virtual Expr<T> getExpr() const
	{
		return LipschitzProblem2<T>();
	}

	Lipschitz2Benchmark() : UnivarBenchmark<T>("LipschitzProblem 2 function", -0.679588, -0.824239,  {-10, 10}, true) {
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

	virtual Series<T> calcDerHighOrder(T point, int order) const {
		return ::calcDerHighOrder(LipschitzProblem3<Series<T>>(), point, order);
	}

	virtual IntervalSeries<T> calcIntervalDerHighOrder(const Interval<T>& interval, int order) const {
		return ::calcIntervalDerHighOrder(LipschitzProblem3<IntervalSeries<T>>(), interval, order);
	} 

    virtual bool isDerExist(T point) const
    {
    	return UnivarBenchmark<T>::isDerExist(LipschitzProblem3<Series<T>>(), point);
    }

	virtual T calcSymDiff(T point, int order) const
    {
		return ::calcSymDiff(LipschitzProblem3<T>(), point, order);
	}

	virtual Interval<T> calcIntervalSymDiff(const Interval<T> &interval, int order) const
    {
		return ::calcIntervalSymDiff(LipschitzProblem3<Interval<T>>(), interval, order);
    }

	virtual PwlBound<T> calcPwlBound(T a, T b, int steps) const {
		return ::calcPwlBound(LipschitzProblem3<PwlBound<T>>(), a, b, steps);
	}

	virtual Expr<T> getExpr() const
	{
		return LipschitzProblem3<T>();
	}

	Lipschitz3Benchmark() : UnivarBenchmark<T>("LipschitzProblem 3 function", 2.70007, -1.72522,  {2.7, 7.5}, true) {
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

	virtual Series<T> calcDerHighOrder(T point, int order) const {
		return ::calcDerHighOrder(UnivarGradProblem1<Series<T>>(), point, order);
	}

	virtual IntervalSeries<T> calcIntervalDerHighOrder(const Interval<T>& interval, int order) const {
		return ::calcIntervalDerHighOrder(UnivarGradProblem1<IntervalSeries<T>>(), interval, order);
	} 

    virtual bool isDerExist(T point) const
    {
    	return UnivarBenchmark<T>::isDerExist(UnivarGradProblem1<Series<T>>(), point);
    }

	virtual T calcSymDiff(T point, int order) const
    {
		return ::calcSymDiff(UnivarGradProblem1<T>(), point, order);
	}

	virtual Interval<T> calcIntervalSymDiff(const Interval<T> &interval, int order) const
    {
		return ::calcIntervalSymDiff(UnivarGradProblem1<Interval<T>>(), interval, order);
    }

	virtual PwlBound<T> calcPwlBound(T a, T b, int steps) const {
		return ::calcPwlBound(UnivarGradProblem1<PwlBound<T>>(), a, b, steps);
	}

	virtual Expr<T> getExpr() const
	{
		return UnivarGradProblem1<T>();
	}

	UnivarGradProblem1Benchmark() : UnivarBenchmark<T>("UnivarGradProblem1 function",14.1406, -0.999982,  {0, 20}, true) {
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

	virtual Series<T> calcDerHighOrder(T point, int order) const {
		return ::calcDerHighOrder(UnivarGradProblem2<Series<T>>(), point, order);
	}

	virtual IntervalSeries<T> calcIntervalDerHighOrder(const Interval<T>& interval, int order) const {
		return ::calcIntervalDerHighOrder(UnivarGradProblem2<IntervalSeries<T>>(), interval, order);
	} 

    virtual bool isDerExist(T point) const
    {
    	return UnivarBenchmark<T>::isDerExist(UnivarGradProblem2<Series<T>>(), point);
    }

	virtual T calcSymDiff(T point, int order) const
    {
		return ::calcSymDiff(UnivarGradProblem2<T>(), point, order);
	}

	virtual Interval<T> calcIntervalSymDiff(const Interval<T> &interval, int order) const
    {
		return ::calcIntervalSymDiff(UnivarGradProblem2<Interval<T>>(), interval, order);
    }

	virtual PwlBound<T> calcPwlBound(T a, T b, int steps) const {
		return ::calcPwlBound(UnivarGradProblem2<PwlBound<T>>(), a, b, steps);
	}

	virtual Expr<T> getExpr() const
	{
		return UnivarGradProblem2<T>();
	}

	UnivarGradProblem2Benchmark() : UnivarBenchmark<T>("UnivarGradProblem2 function",6.28281, 15,  {0.2, 7}, true) {
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

	virtual Series<T> calcDerHighOrder(T point, int order) const {
		return ::calcDerHighOrder(UnivarGradProblem3<Series<T>>(), point, order);
	}

	virtual IntervalSeries<T> calcIntervalDerHighOrder(const Interval<T>& interval, int order) const {
		return ::calcIntervalDerHighOrder(UnivarGradProblem3<IntervalSeries<T>>(), interval, order);
	} 

    virtual bool isDerExist(T point) const
    {
    	return UnivarBenchmark<T>::isDerExist(UnivarGradProblem3<Series<T>>(), point);
    }

	virtual T calcSymDiff(T point, int order) const
    {
		return ::calcSymDiff(UnivarGradProblem3<T>(), point, order);
	}

	virtual Interval<T> calcIntervalSymDiff(const Interval<T> &interval, int order) const
    {
		return ::calcIntervalSymDiff(UnivarGradProblem3<Interval<T>>(), interval, order);
    }

	virtual PwlBound<T> calcPwlBound(T a, T b, int steps) const {
		return ::calcPwlBound(UnivarGradProblem3<PwlBound<T>>(), a, b, steps);
	}

	virtual Expr<T> getExpr() const
	{
		return UnivarGradProblem3<T>();
	}

	UnivarGradProblem3Benchmark() : UnivarBenchmark<T>("UnivarGradProblem3 function",0.996094, 0,  {-10, 10}, true) {
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

	virtual Series<T> calcDerHighOrder(T point, int order) const {
		return ::calcDerHighOrder(UnivarGradProblem4<Series<T>>(), point, order);
	}

	virtual IntervalSeries<T> calcIntervalDerHighOrder(const Interval<T>& interval, int order) const {
		return ::calcIntervalDerHighOrder(UnivarGradProblem4<IntervalSeries<T>>(), interval, order);
	} 

    virtual bool isDerExist(T point) const
    {
    	return UnivarBenchmark<T>::isDerExist(UnivarGradProblem4<Series<T>>(), point);
    }

	virtual T calcSymDiff(T point, int order) const
    {
		return ::calcSymDiff(UnivarGradProblem4<T>(), point, order);
	}

	virtual Interval<T> calcIntervalSymDiff(const Interval<T> &interval, int order) const
    {
		return ::calcIntervalSymDiff(UnivarGradProblem4<Interval<T>>(), interval, order);
    }

	virtual PwlBound<T> calcPwlBound(T a, T b, int steps) const {
		return ::calcPwlBound(UnivarGradProblem4<PwlBound<T>>(), a, b, steps);
	}

	virtual Expr<T> getExpr() const
	{
		return UnivarGradProblem4<T>();
	}

	UnivarGradProblem4Benchmark() : UnivarBenchmark<T>("UnivarGradProblem4 function",6.89453, -17.5829,  {0.2, 7}, true) {
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

	virtual Series<T> calcDerHighOrder(T point, int order) const {
		return ::calcDerHighOrder(UnivarGradProblem5<Series<T>>(), point, order);
	}

	virtual IntervalSeries<T> calcIntervalDerHighOrder(const Interval<T>& interval, int order) const {
		return ::calcIntervalDerHighOrder(UnivarGradProblem5<IntervalSeries<T>>(), interval, order);
	} 

    virtual bool isDerExist(T point) const
    {
    	return UnivarBenchmark<T>::isDerExist(UnivarGradProblem5<Series<T>>(), point);
    }

	virtual T calcSymDiff(T point, int order) const
    {
		return ::calcSymDiff(UnivarGradProblem5<T>(), point, order);
	}

	virtual Interval<T> calcIntervalSymDiff(const Interval<T> &interval, int order) const
    {
		return ::calcIntervalSymDiff(UnivarGradProblem5<Interval<T>>(), interval, order);
    }

	virtual PwlBound<T> calcPwlBound(T a, T b, int steps) const {
		return ::calcPwlBound(UnivarGradProblem5<PwlBound<T>>(), a, b, steps);
	}

	virtual Expr<T> getExpr() const
	{
		return UnivarGradProblem5<T>();
	}

	UnivarGradProblem5Benchmark() : UnivarBenchmark<T>("UnivarGradProblem5 function",0, 0,  {-10, 10}, true) {
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

	virtual Series<T> calcDerHighOrder(T point, int order) const {
		return ::calcDerHighOrder(UnivarGradProblem6<Series<T>>(), point, order);
	}

	virtual IntervalSeries<T> calcIntervalDerHighOrder(const Interval<T>& interval, int order) const {
		return ::calcIntervalDerHighOrder(UnivarGradProblem6<IntervalSeries<T>>(), interval, order);
	} 

    virtual bool isDerExist(T point) const
    {
    	return UnivarBenchmark<T>::isDerExist(UnivarGradProblem6<Series<T>>(), point);
    }

	virtual T calcSymDiff(T point, int order) const
    {
		return ::calcSymDiff(UnivarGradProblem6<T>(), point, order);
	}

	virtual Interval<T> calcIntervalSymDiff(const Interval<T> &interval, int order) const
    {
		return ::calcIntervalSymDiff(UnivarGradProblem6<Interval<T>>(), interval, order);
    }

	virtual PwlBound<T> calcPwlBound(T a, T b, int steps) const {
		return ::calcPwlBound(UnivarGradProblem6<PwlBound<T>>(), a, b, steps);
	}

	virtual Expr<T> getExpr() const
	{
		return UnivarGradProblem6<T>();
	}

	UnivarGradProblem6Benchmark() : UnivarBenchmark<T>("UnivarGradProblem6 function",2.83934, -0.952897,  {0.2, 7}, true) {
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

	virtual Series<T> calcDerHighOrder(T point, int order) const {
		return ::calcDerHighOrder(UnivarGradProblem7<Series<T>>(), point, order);
	}

	virtual IntervalSeries<T> calcIntervalDerHighOrder(const Interval<T>& interval, int order) const {
		return ::calcIntervalDerHighOrder(UnivarGradProblem7<IntervalSeries<T>>(), interval, order);
	} 

    virtual bool isDerExist(T point) const
    {
    	return UnivarBenchmark<T>::isDerExist(UnivarGradProblem7<Series<T>>(), point);
    }

	virtual T calcSymDiff(T point, int order) const
    {
		return ::calcSymDiff(UnivarGradProblem7<T>(), point, order);
	}

	virtual Interval<T> calcIntervalSymDiff(const Interval<T> &interval, int order) const
    {
		return ::calcIntervalSymDiff(UnivarGradProblem7<Interval<T>>(), interval, order);
    }

	virtual PwlBound<T> calcPwlBound(T a, T b, int steps) const {
		return ::calcPwlBound(UnivarGradProblem7<PwlBound<T>>(), a, b, steps);
	}

	virtual Expr<T> getExpr() const
	{
		return UnivarGradProblem7<T>();
	}

	UnivarGradProblem7Benchmark() : UnivarBenchmark<T>("UnivarGradProblem7 function",6.92005, -6.262872,  {0.2, 7}, true) {
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

	virtual Series<T> calcDerHighOrder(T point, int order) const {
		return ::calcDerHighOrder(UnivarGradProblem8<Series<T>>(), point, order);
	}

	virtual IntervalSeries<T> calcIntervalDerHighOrder(const Interval<T>& interval, int order) const {
		return ::calcIntervalDerHighOrder(UnivarGradProblem8<IntervalSeries<T>>(), interval, order);
	} 

    virtual bool isDerExist(T point) const
    {
    	return UnivarBenchmark<T>::isDerExist(UnivarGradProblem8<Series<T>>(), point);
    }

	virtual T calcSymDiff(T point, int order) const
    {
		return ::calcSymDiff(UnivarGradProblem8<T>(), point, order);
	}

	virtual Interval<T> calcIntervalSymDiff(const Interval<T> &interval, int order) const
    {
		return ::calcIntervalSymDiff(UnivarGradProblem8<Interval<T>>(), interval, order);
    }

	virtual PwlBound<T> calcPwlBound(T a, T b, int steps) const {
		return ::calcPwlBound(UnivarGradProblem8<PwlBound<T>>(), a, b, steps);
	}

	virtual Expr<T> getExpr() const
	{
		return UnivarGradProblem8<T>();
	}

	UnivarGradProblem8Benchmark() : UnivarBenchmark<T>("UnivarGradProblem8 function",0.902194, -0.0775897,  {0.2, 7}, true) {
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

	virtual Series<T> calcDerHighOrder(T point, int order) const {
		return ::calcDerHighOrder(UnivarGradProblem9<Series<T>>(), point, order);
	}

	virtual IntervalSeries<T> calcIntervalDerHighOrder(const Interval<T>& interval, int order) const {
		return ::calcIntervalDerHighOrder(UnivarGradProblem9<IntervalSeries<T>>(), interval, order);
	} 

    virtual bool isDerExist(T point) const
    {
    	return UnivarBenchmark<T>::isDerExist(UnivarGradProblem9<Series<T>>(), point);
    }

	virtual T calcSymDiff(T point, int order) const
    {
		return ::calcSymDiff(UnivarGradProblem9<T>(), point, order);
	}

	virtual Interval<T> calcIntervalSymDiff(const Interval<T> &interval, int order) const
    {
		return ::calcIntervalSymDiff(UnivarGradProblem9<Interval<T>>(), interval, order);
    }

	virtual PwlBound<T> calcPwlBound(T a, T b, int steps) const {
		return ::calcPwlBound(UnivarGradProblem9<PwlBound<T>>(), a, b, steps);
	}

	virtual Expr<T> getExpr() const
	{
		return UnivarGradProblem9<T>();
	}

	UnivarGradProblem9Benchmark() : UnivarBenchmark<T>("UnivarGradProblem9 function",0.224902, 0.211315,  {0.2, 7}, true) {
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

	virtual Series<T> calcDerHighOrder(T point, int order) const {
		return ::calcDerHighOrder(UnivarGradProblem10<Series<T>>(), point, order);
	}

	virtual IntervalSeries<T> calcIntervalDerHighOrder(const Interval<T>& interval, int order) const {
		return ::calcIntervalDerHighOrder(UnivarGradProblem10<IntervalSeries<T>>(), interval, order);
	} 

    virtual bool isDerExist(T point) const
    {
    	return UnivarBenchmark<T>::isDerExist(UnivarGradProblem10<Series<T>>(), point);
    }

	virtual T calcSymDiff(T point, int order) const
    {
		return ::calcSymDiff(UnivarGradProblem10<T>(), point, order);
	}

	virtual Interval<T> calcIntervalSymDiff(const Interval<T> &interval, int order) const
    {
		return ::calcIntervalSymDiff(UnivarGradProblem10<Interval<T>>(), interval, order);
    }

	virtual PwlBound<T> calcPwlBound(T a, T b, int steps) const {
		return ::calcPwlBound(UnivarGradProblem10<PwlBound<T>>(), a, b, steps);
	}

	virtual Expr<T> getExpr() const
	{
		return UnivarGradProblem10<T>();
	}

	UnivarGradProblem10Benchmark() : UnivarBenchmark<T>("UnivarGradProblem10 function",0.224902, -0.788685,  {0.2, 7}, true) {
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

	virtual Series<T> calcDerHighOrder(T point, int order) const {
		return ::calcDerHighOrder(UnivarGradProblem11<Series<T>>(), point, order);
	}

	virtual IntervalSeries<T> calcIntervalDerHighOrder(const Interval<T>& interval, int order) const {
		return ::calcIntervalDerHighOrder(UnivarGradProblem11<IntervalSeries<T>>(), interval, order);
	} 

    virtual bool isDerExist(T point) const
    {
    	return UnivarBenchmark<T>::isDerExist(UnivarGradProblem11<Series<T>>(), point);
    }

	virtual T calcSymDiff(T point, int order) const
    {
		return ::calcSymDiff(UnivarGradProblem11<T>(), point, order);
	}

	virtual Interval<T> calcIntervalSymDiff(const Interval<T> &interval, int order) const
    {
		return ::calcIntervalSymDiff(UnivarGradProblem11<Interval<T>>(), interval, order);
    }

	virtual PwlBound<T> calcPwlBound(T a, T b, int steps) const {
		return ::calcPwlBound(UnivarGradProblem11<PwlBound<T>>(), a, b, steps);
	}

	virtual Expr<T> getExpr() const
	{
		return UnivarGradProblem11<T>();
	}

	UnivarGradProblem11Benchmark() : UnivarBenchmark<T>("UnivarGradProblem11 function",5.87286, -5.815675,  {0.2, 7}, true) {
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

	virtual Series<T> calcDerHighOrder(T point, int order) const {
		return ::calcDerHighOrder(UnivarGradProblem12<Series<T>>(), point, order);
	}

	virtual IntervalSeries<T> calcIntervalDerHighOrder(const Interval<T>& interval, int order) const {
		return ::calcIntervalDerHighOrder(UnivarGradProblem12<IntervalSeries<T>>(), interval, order);
	} 

    virtual bool isDerExist(T point) const
    {
    	return UnivarBenchmark<T>::isDerExist(UnivarGradProblem12<Series<T>>(), point);
    }

	virtual T calcSymDiff(T point, int order) const
    {
		return ::calcSymDiff(UnivarGradProblem12<T>(), point, order);
	}

	virtual Interval<T> calcIntervalSymDiff(const Interval<T> &interval, int order) const
    {
		return ::calcIntervalSymDiff(UnivarGradProblem12<Interval<T>>(), interval, order);
    }

	virtual PwlBound<T> calcPwlBound(T a, T b, int steps) const {
		return ::calcPwlBound(UnivarGradProblem12<PwlBound<T>>(), a, b, steps);
	}

	virtual Expr<T> getExpr() const
	{
		return UnivarGradProblem12<T>();
	}

	UnivarGradProblem12Benchmark() : UnivarBenchmark<T>("UnivarGradProblem12 function",5.13433, -7.047444,  {0.2, 7}, true) {
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

	virtual Series<T> calcDerHighOrder(T point, int order) const {
		return ::calcDerHighOrder(UnivarGradProblem13<Series<T>>(), point, order);
	}

	virtual IntervalSeries<T> calcIntervalDerHighOrder(const Interval<T>& interval, int order) const {
		return ::calcIntervalDerHighOrder(UnivarGradProblem13<IntervalSeries<T>>(), interval, order);
	} 

    virtual bool isDerExist(T point) const
    {
    	return UnivarBenchmark<T>::isDerExist(UnivarGradProblem13<Series<T>>(), point);
    }

	virtual T calcSymDiff(T point, int order) const
    {
		return ::calcSymDiff(UnivarGradProblem13<T>(), point, order);
	}

	virtual Interval<T> calcIntervalSymDiff(const Interval<T> &interval, int order) const
    {
		return ::calcIntervalSymDiff(UnivarGradProblem13<Interval<T>>(), interval, order);
    }

	virtual PwlBound<T> calcPwlBound(T a, T b, int steps) const {
		return ::calcPwlBound(UnivarGradProblem13<PwlBound<T>>(), a, b, steps);
	}

	virtual Expr<T> getExpr() const
	{
		return UnivarGradProblem13<T>();
	}

	UnivarGradProblem13Benchmark() : UnivarBenchmark<T>("UnivarGradProblem13 function",5.19979, -4.60131,  {2.7, 7.5}, true) {
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

	virtual Series<T> calcDerHighOrder(T point, int order) const {
		return ::calcDerHighOrder(UnivarGradProblem14<Series<T>>(), point, order);
	}

	virtual IntervalSeries<T> calcIntervalDerHighOrder(const Interval<T>& interval, int order) const {
		return ::calcIntervalDerHighOrder(UnivarGradProblem14<IntervalSeries<T>>(), interval, order);
	} 

    virtual bool isDerExist(T point) const
    {
    	return UnivarBenchmark<T>::isDerExist(UnivarGradProblem14<Series<T>>(), point);
    }

	virtual T calcSymDiff(T point, int order) const
    {
		return ::calcSymDiff(UnivarGradProblem14<T>(), point, order);
	}

	virtual Interval<T> calcIntervalSymDiff(const Interval<T> &interval, int order) const
    {
		return ::calcIntervalSymDiff(UnivarGradProblem14<Interval<T>>(), interval, order);
    }

	virtual PwlBound<T> calcPwlBound(T a, T b, int steps) const {
		return ::calcPwlBound(UnivarGradProblem14<PwlBound<T>>(), a, b, steps);
	}

	virtual Expr<T> getExpr() const
	{
		return UnivarGradProblem14<T>();
	}

	UnivarGradProblem14Benchmark() : UnivarBenchmark<T>("UnivarGradProblem14 function",0.408246, -0.141100,  {0.2, 7}, true) {
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

	virtual Series<T> calcDerHighOrder(T point, int order) const {
		return ::calcDerHighOrder(UnivarGradProblem15<Series<T>>(), point, order);
	}

	virtual IntervalSeries<T> calcIntervalDerHighOrder(const Interval<T>& interval, int order) const {
		return ::calcIntervalDerHighOrder(UnivarGradProblem15<IntervalSeries<T>>(), interval, order);
	} 

    virtual bool isDerExist(T point) const
    {
    	return UnivarBenchmark<T>::isDerExist(UnivarGradProblem15<Series<T>>(), point);
    }

	virtual T calcSymDiff(T point, int order) const
    {
		return ::calcSymDiff(UnivarGradProblem15<T>(), point, order);
	}

	virtual Interval<T> calcIntervalSymDiff(const Interval<T> &interval, int order) const
    {
		return ::calcIntervalSymDiff(UnivarGradProblem15<Interval<T>>(), interval, order);
    }

	virtual PwlBound<T> calcPwlBound(T a, T b, int steps) const {
		return ::calcPwlBound(UnivarGradProblem15<PwlBound<T>>(), a, b, steps);
	}

	virtual Expr<T> getExpr() const
	{
		return UnivarGradProblem15<T>();
	}

	UnivarGradProblem15Benchmark() : UnivarBenchmark<T>("UnivarGradProblem15 function",4.85806, 47.1291,  {0.2, 7}, true) {
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

	virtual Series<T> calcDerHighOrder(T point, int order) const {
		return ::calcDerHighOrder(UnivarGradProblem16<Series<T>>(), point, order);
	}

	virtual IntervalSeries<T> calcIntervalDerHighOrder(const Interval<T>& interval, int order) const {
		return ::calcIntervalDerHighOrder(UnivarGradProblem16<IntervalSeries<T>>(), interval, order);
	} 

    virtual bool isDerExist(T point) const
    {
    	return UnivarBenchmark<T>::isDerExist(UnivarGradProblem16<Series<T>>(), point);
    }

	virtual T calcSymDiff(T point, int order) const
    {
		return ::calcSymDiff(UnivarGradProblem16<T>(), point, order);
	}

	virtual Interval<T> calcIntervalSymDiff(const Interval<T> &interval, int order) const
    {
		return ::calcIntervalSymDiff(UnivarGradProblem16<Interval<T>>(), interval, order);
    }

	virtual PwlBound<T> calcPwlBound(T a, T b, int steps) const {
		return ::calcPwlBound(UnivarGradProblem16<PwlBound<T>>(), a, b, steps);
	}

	virtual Expr<T> getExpr() const
	{
		return UnivarGradProblem16<T>();
	}

	UnivarGradProblem16Benchmark() : UnivarBenchmark<T>("UnivarGradProblem16 function",5.16908, 0.16205,  {0.2, 7}, true) {
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

	virtual Series<T> calcDerHighOrder(T point, int order) const {
		return ::calcDerHighOrder(UnivarGradProblem17<Series<T>>(), point, order);
	}

	virtual IntervalSeries<T> calcIntervalDerHighOrder(const Interval<T>& interval, int order) const {
		return ::calcIntervalDerHighOrder(UnivarGradProblem17<IntervalSeries<T>>(), interval, order);
	} 

    virtual bool isDerExist(T point) const
    {
    	return UnivarBenchmark<T>::isDerExist(UnivarGradProblem17<Series<T>>(), point);
    }

	virtual T calcSymDiff(T point, int order) const
    {
		return ::calcSymDiff(UnivarGradProblem17<T>(), point, order);
	}

	virtual Interval<T> calcIntervalSymDiff(const Interval<T> &interval, int order) const
    {
		return ::calcIntervalSymDiff(UnivarGradProblem17<Interval<T>>(), interval, order);
    }

	virtual PwlBound<T> calcPwlBound(T a, T b, int steps) const {
		return ::calcPwlBound(UnivarGradProblem17<PwlBound<T>>(), a, b, steps);
	}

	virtual Expr<T> getExpr() const
	{
		return UnivarGradProblem17<T>();
	}

	UnivarGradProblem17Benchmark() : UnivarBenchmark<T>("UnivarGradProblem17 function",-0.787811, 0.475689,  {-10, 10}, true) {
	}
};

template <class T>
class UnivarGradProblem18Benchmark : public UnivarBenchmark<T>
{
public:
	virtual T calcFunc(T point) const {		
		return ::calcFunc(UnivarGradProblem18<T>(), std::vector<T>(1, point));
	}

	virtual Interval<T> calcInterval(const Interval<T>& interval) const {
		return ::calcInterval(UnivarGradProblem18<Interval<T>>(), std::vector<Interval<T>>(1, interval));					
	}

	virtual ValDer<T> calcGrad(T point) const {
		return ::calcGrad(UnivarGradProblem18<ValDer<T>>(), std::vector<T>(1, point));
	}

	virtual IntervalDer<T> calcIntervalGrad(const Interval<T>& interval) const {
		return ::calcIntervalGrad(UnivarGradProblem18<IntervalDer<T>>(), std::vector<Interval<T>>(1, interval));
	}

	virtual Series<T> calcDerHighOrder(T point, int order) const {
		return ::calcDerHighOrder(UnivarGradProblem18<Series<T>>(), point, order);
	}

	virtual IntervalSeries<T> calcIntervalDerHighOrder(const Interval<T>& interval, int order) const {
		return ::calcIntervalDerHighOrder(UnivarGradProblem18<IntervalSeries<T>>(), interval, order);
	} 

    virtual bool isDerExist(T point) const
    {
    	return UnivarBenchmark<T>::isDerExist(UnivarGradProblem18<Series<T>>(), point);
    }

	virtual T calcSymDiff(T point, int order) const
    {
		return ::calcSymDiff(UnivarGradProblem18<T>(), point, order);
	}

	virtual Interval<T> calcIntervalSymDiff(const Interval<T> &interval, int order) const
    {
		return ::calcIntervalSymDiff(UnivarGradProblem18<Interval<T>>(), interval, order);
    }

	virtual PwlBound<T> calcPwlBound(T a, T b, int steps) const {
		return ::calcPwlBound(UnivarGradProblem18<PwlBound<T>>(), a, b, steps);
	}

	virtual Expr<T> getExpr() const
	{
		return UnivarGradProblem18<T>();
	}

	UnivarGradProblem18Benchmark() : UnivarBenchmark<T>("UnivarGradProblem 18 function",6.28281, 0,  {0.2, 7}, true) {
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

	virtual Series<T> calcDerHighOrder(T point, int order) const {
		return ::calcDerHighOrder(UnivarGradProblem19<Series<T>>(), point, order);
	}

	virtual IntervalSeries<T> calcIntervalDerHighOrder(const Interval<T>& interval, int order) const {
		return ::calcIntervalDerHighOrder(UnivarGradProblem19<IntervalSeries<T>>(), interval, order);
	} 

    virtual bool isDerExist(T point) const
    {
    	return UnivarBenchmark<T>::isDerExist(UnivarGradProblem19<Series<T>>(), point);
    }

	virtual T calcSymDiff(T point, int order) const
    {
		return ::calcSymDiff(UnivarGradProblem19<T>(), point, order);
	}

	virtual Interval<T> calcIntervalSymDiff(const Interval<T> &interval, int order) const
    {
		return ::calcIntervalSymDiff(UnivarGradProblem19<Interval<T>>(), interval, order);
    }

	virtual PwlBound<T> calcPwlBound(T a, T b, int steps) const {
		return ::calcPwlBound(UnivarGradProblem19<PwlBound<T>>(), a, b, steps);
	}

	virtual Expr<T> getExpr() const
	{
		return UnivarGradProblem19<T>();
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

	virtual Series<T> calcDerHighOrder(T point, int order) const {
		return ::calcDerHighOrder(UnivarGradProblem20<Series<T>>(), point, order);
	}

	virtual IntervalSeries<T> calcIntervalDerHighOrder(const Interval<T>& interval, int order) const {
		return ::calcIntervalDerHighOrder(UnivarGradProblem20<IntervalSeries<T>>(), interval, order);
	} 

    virtual bool isDerExist(T point) const
	{
    	return UnivarBenchmark<T>::isDerExist(UnivarGradProblem20<Series<T>>(), point);
    }

	virtual T calcSymDiff(T point, int order) const
    {
		return ::calcSymDiff(UnivarGradProblem20<T>(), point, order);
	}

	virtual Interval<T> calcIntervalSymDiff(const Interval<T> &interval, int order) const
    {
		return ::calcIntervalSymDiff(UnivarGradProblem20<Interval<T>>(), interval, order);
    }

	virtual PwlBound<T> calcPwlBound(T a, T b, int steps) const {
		return ::calcPwlBound(UnivarGradProblem20<PwlBound<T>>(), a, b, steps);
	}

	virtual Expr<T> getExpr() const
	{
		return UnivarGradProblem20<T>();
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

	virtual Series<T> calcDerHighOrder(T point, int order) const {
		return ::calcDerHighOrder(UnivarGradProblem21<Series<T>>(), point, order);
	}

	virtual IntervalSeries<T> calcIntervalDerHighOrder(const Interval<T>& interval, int order) const {
		return ::calcIntervalDerHighOrder(UnivarGradProblem21<IntervalSeries<T>>(), interval, order);
	} 

    virtual bool isDerExist(T point) const
    {
    	return UnivarBenchmark<T>::isDerExist(UnivarGradProblem21<Series<T>>(), point);
    }

	virtual T calcSymDiff(T point, int order) const
    {
		return ::calcSymDiff(UnivarGradProblem21<T>(), point, order);
	}

	virtual Interval<T> calcIntervalSymDiff(const Interval<T> &interval, int order) const
    {
		return ::calcIntervalSymDiff(UnivarGradProblem21<Interval<T>>(), interval, order);
    }

	virtual PwlBound<T> calcPwlBound(T a, T b, int steps) const {
		return ::calcPwlBound(UnivarGradProblem21<PwlBound<T>>(), a, b, steps);
	}

	virtual Expr<T> getExpr() const
	{
		return UnivarGradProblem21<T>();
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

	virtual Series<T> calcDerHighOrder(T point, int order) const {
		return ::calcDerHighOrder(UnivarGradProblem22<Series<T>>(), point, order);
	}

	virtual IntervalSeries<T> calcIntervalDerHighOrder(const Interval<T>& interval, int order) const {
		return ::calcIntervalDerHighOrder(UnivarGradProblem22<IntervalSeries<T>>(), interval, order);
	} 

    virtual bool isDerExist(T point) const
    {
    	return UnivarBenchmark<T>::isDerExist(UnivarGradProblem22<Series<T>>(), point);
    }

	virtual T calcSymDiff(T point, int order) const
    {
		return ::calcSymDiff(UnivarGradProblem22<T>(), point, order);
	}

	virtual Interval<T> calcIntervalSymDiff(const Interval<T> &interval, int order) const
    {
		return ::calcIntervalSymDiff(UnivarGradProblem22<Interval<T>>(), interval, order);
    }

	virtual PwlBound<T> calcPwlBound(T a, T b, int steps) const {
		return ::calcPwlBound(UnivarGradProblem22<PwlBound<T>>(), a, b, steps);
	}

	virtual Expr<T> getExpr() const
	{
		return UnivarGradProblem22<T>();
	}

	UnivarGradProblem22Benchmark() : UnivarBenchmark<T>("UnivarGradProblem22 function",3.25095, -0.918397,  {0.2, 7}, true) {
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

	virtual Series<T> calcDerHighOrder(T point, int order) const {
		return ::calcDerHighOrder(UnivarGradProblem23<Series<T>>(), point, order);
	}

	virtual IntervalSeries<T> calcIntervalDerHighOrder(const Interval<T>& interval, int order) const {
		return ::calcIntervalDerHighOrder(UnivarGradProblem23<IntervalSeries<T>>(), interval, order);
	} 

    virtual bool isDerExist(T point) const
    {
    	return UnivarBenchmark<T>::isDerExist(UnivarGradProblem23<Series<T>>(), point);
    }

	virtual T calcSymDiff(T point, int order) const
    {
		return ::calcSymDiff(UnivarGradProblem23<T>(), point, order);
	}

	virtual Interval<T> calcIntervalSymDiff(const Interval<T> &interval, int order) const
    {
		return ::calcIntervalSymDiff(UnivarGradProblem23<Interval<T>>(), interval, order);
    }

	virtual PwlBound<T> calcPwlBound(T a, T b, int steps) const {
		return ::calcPwlBound(UnivarGradProblem23<PwlBound<T>>(), a, b, steps);
	}

	virtual Expr<T> getExpr() const
	{
		return UnivarGradProblem23<T>();
	}

	UnivarGradProblem23Benchmark() : UnivarBenchmark<T>("UnivarGradProblem23 function",-0.679588, -0.824239,  {-10, 10}, true) {
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

	virtual Series<T> calcDerHighOrder(T point, int order) const {
		return ::calcDerHighOrder(UnivarGradProblem24<Series<T>>(), point, order);
	}

	virtual IntervalSeries<T> calcIntervalDerHighOrder(const Interval<T>& interval, int order) const {
		return ::calcIntervalDerHighOrder(UnivarGradProblem24<IntervalSeries<T>>(), interval, order);
	} 

    virtual bool isDerExist(T point) const
    {
    	return UnivarBenchmark<T>::isDerExist(UnivarGradProblem24<Series<T>>(), point);
    }

	virtual T calcSymDiff(T point, int order) const
    {
		return ::calcSymDiff(UnivarGradProblem24<T>(), point, order);
	}

	virtual Interval<T> calcIntervalSymDiff(const Interval<T> &interval, int order) const
    {
		return ::calcIntervalSymDiff(UnivarGradProblem24<Interval<T>>(), interval, order);
    }

	virtual PwlBound<T> calcPwlBound(T a, T b, int steps) const {
		return ::calcPwlBound(UnivarGradProblem24<PwlBound<T>>(), a, b, steps);
	}

	virtual Expr<T> getExpr() const
	{
		return UnivarGradProblem24<T>();
	}

	UnivarGradProblem24Benchmark() : UnivarBenchmark<T>("UnivarGradProblem24 function",3.92705, -0.0278641,  {0.2, 7}, true) {
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

	virtual Series<T> calcDerHighOrder(T point, int order) const {
		return ::calcDerHighOrder(UnivarGradProblem25<Series<T>>(), point, order);
	}

	virtual IntervalSeries<T> calcIntervalDerHighOrder(const Interval<T>& interval, int order) const {
		return ::calcIntervalDerHighOrder(UnivarGradProblem25<IntervalSeries<T>>(), interval, order);
	} 

    virtual bool isDerExist(T point) const
    {
    	return UnivarBenchmark<T>::isDerExist(UnivarGradProblem25<Series<T>>(), point);
    }

	virtual T calcSymDiff(T point, int order) const
    {
		return ::calcSymDiff(UnivarGradProblem25<T>(), point, order);
	}

	virtual Interval<T> calcIntervalSymDiff(const Interval<T> &interval, int order) const
    {
		return ::calcIntervalSymDiff(UnivarGradProblem25<Interval<T>>(), interval, order);
    }

	virtual PwlBound<T> calcPwlBound(T a, T b, int steps) const {
		return ::calcPwlBound(UnivarGradProblem25<PwlBound<T>>(), a, b, steps);
	}

	virtual Expr<T> getExpr() const
	{
		return UnivarGradProblem25<T>();
	}

	UnivarGradProblem25Benchmark() : UnivarBenchmark<T>("UnivarGradProblem25 function",2.09439, 3.5,  {0.2, 7}, true) {
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

	virtual Series<T> calcDerHighOrder(T point, int order) const {
		return ::calcDerHighOrder(UnivarGradProblem26<Series<T>>(), point, order);
	}

	virtual IntervalSeries<T> calcIntervalDerHighOrder(const Interval<T>& interval, int order) const {
		return ::calcIntervalDerHighOrder(UnivarGradProblem26<IntervalSeries<T>>(), interval, order);
	} 

    virtual bool isDerExist(T point) const
    {
    	return UnivarBenchmark<T>::isDerExist(UnivarGradProblem26<Series<T>>(), point);
    }

	virtual T calcSymDiff(T point, int order) const
    {
		return ::calcSymDiff(UnivarGradProblem26<T>(), point, order);
	}

	virtual Interval<T> calcIntervalSymDiff(const Interval<T> &interval, int order) const
    {
		return ::calcIntervalSymDiff(UnivarGradProblem26<Interval<T>>(), interval, order);
    }

	virtual PwlBound<T> calcPwlBound(T a, T b, int steps) const {
		return ::calcPwlBound(UnivarGradProblem26<PwlBound<T>>(), a, b, steps);
	}

	virtual Expr<T> getExpr() const
	{
		return UnivarGradProblem26<T>();
	}

	UnivarGradProblem26Benchmark() : UnivarBenchmark<T>("UnivarGradProblem26 function",5.76484, 0.367925,  {0.2, 7}, true) {
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

	virtual Series<T> calcDerHighOrder(T point, int order) const {
		return ::calcDerHighOrder(UnivarGradProblem27<Series<T>>(), point, order);
	}

	UnivarGradProblem27Benchmark() : UnivarBenchmark<T>("UnivarGradProblem27 function",5.00641, -0.451388,  {0.2, 7}, true) {
	}

	virtual IntervalSeries<T> calcIntervalDerHighOrder(const Interval<T>& interval, int order) const {
		return ::calcIntervalDerHighOrder(UnivarGradProblem27<IntervalSeries<T>>(), interval, order);
	} 

	virtual T calcSymDiff(T point, int order) const
    {
		return ::calcSymDiff(UnivarGradProblem27<T>(), point, order);
	}

	virtual Interval<T> calcIntervalSymDiff(const Interval<T> &interval, int order) const
    {
		return ::calcIntervalSymDiff(UnivarGradProblem27<Interval<T>>(), interval, order);
    }
    virtual bool isDerExist(T point) const
	{
    	return UnivarBenchmark<T>::isDerExist(UnivarGradProblem27<Series<T>>(), point);
    }

	virtual PwlBound<T> calcPwlBound(T a, T b, int steps) const {
		return ::calcPwlBound(UnivarGradProblem27<PwlBound<T>>(), a, b, steps);
	}

	virtual Expr<T> getExpr() const
	{
		return UnivarGradProblem27<T>();
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

	virtual Series<T> calcDerHighOrder(T point, int order) const {
		return ::calcDerHighOrder(UnivarGradProblem28<Series<T>>(), point, order);
	}

	virtual IntervalSeries<T> calcIntervalDerHighOrder(const Interval<T>& interval, int order) const {
		return ::calcIntervalDerHighOrder(UnivarGradProblem28<IntervalSeries<T>>(), interval, order);
	} 

    virtual bool isDerExist(T point) const
    {
    	return UnivarBenchmark<T>::isDerExist(UnivarGradProblem28<Series<T>>(), point);
    }

	virtual T calcSymDiff(T point, int order) const
    {
		return ::calcSymDiff(UnivarGradProblem28<T>(), point, order);
	}

	virtual Interval<T> calcIntervalSymDiff(const Interval<T> &interval, int order) const
    {
		return ::calcIntervalSymDiff(UnivarGradProblem28<Interval<T>>(), interval, order);
    }

	virtual PwlBound<T> calcPwlBound(T a, T b, int steps) const {
		return ::calcPwlBound(UnivarGradProblem28<PwlBound<T>>(), a, b, steps);
	}

	virtual Expr<T> getExpr() const
	{
		return UnivarGradProblem28<T>();
	}

	UnivarGradProblem28Benchmark() : UnivarBenchmark<T>("UnivarGradProblem28 function",17.2656, -0.999914,  {0, 20}, true) {
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

	virtual Series<T> calcDerHighOrder(T point, int order) const {
		return ::calcDerHighOrder(UnivarGradProblem29<Series<T>>(), point, order);
	}

	virtual IntervalSeries<T> calcIntervalDerHighOrder(const Interval<T>& interval, int order) const {
		return ::calcIntervalDerHighOrder(UnivarGradProblem29<IntervalSeries<T>>(), interval, order);
	} 

    virtual bool isDerExist(T point) const
    {
    	return UnivarBenchmark<T>::isDerExist(UnivarGradProblem29<Series<T>>(), point);
    }

	virtual T calcSymDiff(T point, int order) const
    {
		return ::calcSymDiff(UnivarGradProblem29<T>(), point, order);
	}

	virtual Interval<T> calcIntervalSymDiff(const Interval<T> &interval, int order) const
    {
		return ::calcIntervalSymDiff(UnivarGradProblem29<Interval<T>>(), interval, order);
    }

	virtual PwlBound<T> calcPwlBound(T a, T b, int steps) const {
		return ::calcPwlBound(UnivarGradProblem29<PwlBound<T>>(), a, b, steps);
	}

	virtual Expr<T> getExpr() const
	{
		return UnivarGradProblem29<T>();
	}

	UnivarGradProblem29Benchmark() : UnivarBenchmark<T>("UnivarGradProblem29 function",3.86208, -0.410315,  {0.2, 7}, true) {
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

	virtual Series<T> calcDerHighOrder(T point, int order) const {
		return ::calcDerHighOrder(UnivarGradProblem30<Series<T>>(), point, order);
	}

	virtual IntervalSeries<T> calcIntervalDerHighOrder(const Interval<T>& interval, int order) const {
		return ::calcIntervalDerHighOrder(UnivarGradProblem30<IntervalSeries<T>>(), interval, order);
	} 

    virtual bool isDerExist(T point) const
    {
    	return UnivarBenchmark<T>::isDerExist(UnivarGradProblem30<Series<T>>(), point);
    }

	virtual T calcSymDiff(T point, int order) const
    {
		return ::calcSymDiff(UnivarGradProblem30<T>(), point, order);
	}

	virtual Interval<T> calcIntervalSymDiff(const Interval<T> &interval, int order) const
    {
		return ::calcIntervalSymDiff(UnivarGradProblem30<Interval<T>>(), interval, order);
    }

	virtual PwlBound<T> calcPwlBound(T a, T b, int steps) const {
		return ::calcPwlBound(UnivarGradProblem30<PwlBound<T>>(), a, b, steps);
	}

	virtual Expr<T> getExpr() const
	{
		return UnivarGradProblem30<T>();
	}

	UnivarGradProblem30Benchmark() : UnivarBenchmark<T>("UnivarGradProblem30 function",6.80742, -0.718277,  {0.2, 7}, true) {
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

	virtual Series<T> calcDerHighOrder(T point, int order) const {
		return ::calcDerHighOrder(UnivarGradProblem32<Series<T>>(), point, order);
	}

	virtual IntervalSeries<T> calcIntervalDerHighOrder(const Interval<T>& interval, int order) const {
		return ::calcIntervalDerHighOrder(UnivarGradProblem32<IntervalSeries<T>>(), interval, order);
	} 

    virtual bool isDerExist(T point) const
    {
    	return UnivarBenchmark<T>::isDerExist(UnivarGradProblem32<Series<T>>(), point);
    }

	virtual T calcSymDiff(T point, int order) const
    {
		return ::calcSymDiff(UnivarGradProblem32<T>(), point, order);
	}

	virtual Interval<T> calcIntervalSymDiff(const Interval<T> &interval, int order) const
    {
		return ::calcIntervalSymDiff(UnivarGradProblem32<Interval<T>>(), interval, order);
    }

	virtual PwlBound<T> calcPwlBound(T a, T b, int steps) const {
		return ::calcPwlBound(UnivarGradProblem32<PwlBound<T>>(), a, b, steps);
	}

	virtual Expr<T> getExpr() const
	{
		return UnivarGradProblem32<T>();
	}

	UnivarGradProblem32Benchmark() : UnivarBenchmark<T>("UnivarGradProblem32 function",0.212363, -1,  {0.02, 1}, true) {
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

	virtual Series<T> calcDerHighOrder(T point, int order) const {
		return ::calcDerHighOrder(UnivarGradProblem34<Series<T>>(), point, order);
	}

	virtual IntervalSeries<T> calcIntervalDerHighOrder(const Interval<T>& interval, int order) const {
		return ::calcIntervalDerHighOrder(UnivarGradProblem34<IntervalSeries<T>>(), interval, order);
	} 

    virtual bool isDerExist(T point) const
    {
    	return UnivarBenchmark<T>::isDerExist(UnivarGradProblem34<Series<T>>(), point);
    }

	virtual T calcSymDiff(T point, int order) const
    {
		return ::calcSymDiff(UnivarGradProblem34<T>(), point, order);
	}

	virtual Interval<T> calcIntervalSymDiff(const Interval<T> &interval, int order) const
    {
		return ::calcIntervalSymDiff(UnivarGradProblem34<Interval<T>>(), interval, order);
    }

	virtual PwlBound<T> calcPwlBound(T a, T b, int steps) const {
		return ::calcPwlBound(UnivarGradProblem34<PwlBound<T>>(), a, b, steps);
	}

	virtual Expr<T> getExpr() const
	{
		return UnivarGradProblem34<T>();
	}

	UnivarGradProblem34Benchmark() : UnivarBenchmark<T>("UnivarGradProblem34 function",2.414230, -0.535534,  {0.2, 7}, true) {
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

	virtual Series<T> calcDerHighOrder(T point, int order) const {
		return ::calcDerHighOrder(UnivarGradProblem36<Series<T>>(), point, order);
	}

	virtual IntervalSeries<T> calcIntervalDerHighOrder(const Interval<T>& interval, int order) const {
		return ::calcIntervalDerHighOrder(UnivarGradProblem36<IntervalSeries<T>>(), interval, order);
	} 

    virtual bool isDerExist(T point) const
    {
    	return UnivarBenchmark<T>::isDerExist(UnivarGradProblem36<Series<T>>(), point);
    }

	virtual T calcSymDiff(T point, int order) const
    {
		return ::calcSymDiff(UnivarGradProblem36<T>(), point, order);
	}

	virtual Interval<T> calcIntervalSymDiff(const Interval<T> &interval, int order) const
    {
		return ::calcIntervalSymDiff(UnivarGradProblem36<Interval<T>>(), interval, order);
    }

	virtual PwlBound<T> calcPwlBound(T a, T b, int steps) const {
		return ::calcPwlBound(UnivarGradProblem36<PwlBound<T>>(), a, b, steps);
	}

	virtual Expr<T> getExpr() const
	{
		return UnivarGradProblem36<T>();
	}

	UnivarGradProblem36Benchmark() : UnivarBenchmark<T>("UnivarGradProblem36 function",3.60, 16.6102,  {0.2, 7}, true) {
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

	virtual Series<T> calcDerHighOrder(T point, int order) const {
		return ::calcDerHighOrder(UnivarGradProblem37<Series<T>>(), point, order);
	}

	virtual IntervalSeries<T> calcIntervalDerHighOrder(const Interval<T>& interval, int order) const {
		return ::calcIntervalDerHighOrder(UnivarGradProblem37<IntervalSeries<T>>(), interval, order);
	} 

    virtual bool isDerExist(T point) const
    {
    	return UnivarBenchmark<T>::isDerExist(UnivarGradProblem37<Series<T>>(), point);
    }
	
	virtual T calcSymDiff(T point, int order) const
    {
		return ::calcSymDiff(UnivarGradProblem37<T>(), point, order);
	}

	virtual Interval<T> calcIntervalSymDiff(const Interval<T> &interval, int order) const
    {
		return ::calcIntervalSymDiff(UnivarGradProblem37<Interval<T>>(), interval, order);
    }

	virtual PwlBound<T> calcPwlBound(T a, T b, int steps) const {
		return ::calcPwlBound(UnivarGradProblem37<PwlBound<T>>(), a, b, steps);
	}

	virtual Expr<T> getExpr() const
	{
		return UnivarGradProblem37<T>();
	}

	UnivarGradProblem37Benchmark() : UnivarBenchmark<T>("UnivarGradProblem37 function",0.713667, -32.7813,  {-1, 7}, true) {
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

	virtual Series<T> calcDerHighOrder(T point, int order) const {
		return ::calcDerHighOrder(UnivarGradProblem38<Series<T>>(), point, order);
	}

	virtual IntervalSeries<T> calcIntervalDerHighOrder(const Interval<T>& interval, int order) const {
		return ::calcIntervalDerHighOrder(UnivarGradProblem38<IntervalSeries<T>>(), interval, order);
	} 

    virtual bool isDerExist(T point) const
    {
    	return UnivarBenchmark<T>::isDerExist(UnivarGradProblem38<Series<T>>(), point);
    }

	virtual T calcSymDiff(T point, int order) const
    {
		return ::calcSymDiff(UnivarGradProblem38<T>(), point, order);
	}

	virtual Interval<T> calcIntervalSymDiff(const Interval<T> &interval, int order) const
    {
		return ::calcIntervalSymDiff(UnivarGradProblem38<Interval<T>>(), interval, order);
    }

	virtual PwlBound<T> calcPwlBound(T a, T b, int steps) const {
		return ::calcPwlBound(UnivarGradProblem38<PwlBound<T>>(), a, b, steps);
	}

	virtual Expr<T> getExpr() const
	{
		return UnivarGradProblem38<T>();
	}

	UnivarGradProblem38Benchmark() : UnivarBenchmark<T>("UnivarGradProblem38 function",3, 7,  {-4, 4}, true) {
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

	virtual Series<T> calcDerHighOrder(T point, int order) const {
		return ::calcDerHighOrder(UnivarGradProblem39<Series<T>>(), point, order);
	}

	virtual IntervalSeries<T> calcIntervalDerHighOrder(const Interval<T>& interval, int order) const {
		return ::calcIntervalDerHighOrder(UnivarGradProblem39<IntervalSeries<T>>(), interval, order);
	} 

    virtual bool isDerExist(T point) const
    {
    	return UnivarBenchmark<T>::isDerExist(UnivarGradProblem39<Series<T>>(), point);
    }

	virtual T calcSymDiff(T point, int order) const
    {
		return ::calcSymDiff(UnivarGradProblem39<T>(), point, order);
	}

	virtual Interval<T> calcIntervalSymDiff(const Interval<T> &interval, int order) const
    {
		return ::calcIntervalSymDiff(UnivarGradProblem39<Interval<T>>(), interval, order);
    }

	virtual PwlBound<T> calcPwlBound(T a, T b, int steps) const {
		return ::calcPwlBound(UnivarGradProblem39<PwlBound<T>>(), a, b, steps);
	}

	virtual Expr<T> getExpr() const
	{
		return UnivarGradProblem39<T>();
	}

	UnivarGradProblem39Benchmark() : UnivarBenchmark<T>("UnivarGradProblem39 function",3.618030, -1,  {-10, 20}, true) {
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

	virtual Series<T> calcDerHighOrder(T point, int order) const {
		return ::calcDerHighOrder(UnivarGradProblem40<Series<T>>(), point, order);
	}

	virtual IntervalSeries<T> calcIntervalDerHighOrder(const Interval<T>& interval, int order) const {
		return ::calcIntervalDerHighOrder(UnivarGradProblem40<IntervalSeries<T>>(), interval, order);
	} 

    virtual bool isDerExist(T point) const
    {
    	return UnivarBenchmark<T>::isDerExist(UnivarGradProblem40<Series<T>>(), point);
    }

	virtual T calcSymDiff(T point, int order) const
    {
		return ::calcSymDiff(UnivarGradProblem40<T>(), point, order);
	}

	virtual Interval<T> calcIntervalSymDiff(const Interval<T> &interval, int order) const
    {
		return ::calcIntervalSymDiff(UnivarGradProblem40<Interval<T>>(), interval, order);
    }

	virtual PwlBound<T> calcPwlBound(T a, T b, int steps) const {
		return ::calcPwlBound(UnivarGradProblem40<PwlBound<T>>(), a, b, steps);
	}

	virtual Expr<T> getExpr() const
	{
		return UnivarGradProblem40<T>();
	}

	UnivarGradProblem40Benchmark() : UnivarBenchmark<T>("UnivarGradProblem40 function",2, -89,  {0, 3}, true) {
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

	virtual Series<T> calcDerHighOrder(T point, int order) const {
		return ::calcDerHighOrder(UnivarNonDiffProblem1<Series<T>>(), point, order);
	}

	virtual IntervalSeries<T> calcIntervalDerHighOrder(const Interval<T>& interval, int order) const {
		return ::calcIntervalDerHighOrder(UnivarNonDiffProblem1<IntervalSeries<T>>(), interval, order);
	} 

    virtual bool isDerExist(T point) const
    {
    	return UnivarBenchmark<T>::isDerExist(UnivarNonDiffProblem1<Series<T>>(), point);
    }

	virtual T calcSymDiff(T point, int order) const
    {
		return ::calcSymDiff(UnivarNonDiffProblem1<T>(), point, order);
	}

	virtual Interval<T> calcIntervalSymDiff(const Interval<T> &interval, int order) const
    {
		return ::calcIntervalSymDiff(UnivarNonDiffProblem1<Interval<T>>(), interval, order);
    }

	virtual PwlBound<T> calcPwlBound(T a, T b, int steps) const {
		return ::calcPwlBound(UnivarNonDiffProblem1<PwlBound<T>>(), a, b, steps);
	}

	virtual Expr<T> getExpr() const
	{
		return UnivarNonDiffProblem1<T>();
	}

	UnivarNonDiffProblem1Benchmark() : UnivarBenchmark<T>("UnivarNonDiffProblem1 function", 0.2, 1.37878,  {0.2,7}, false) {
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

	virtual Series<T> calcDerHighOrder(T point, int order) const {
		return ::calcDerHighOrder(UnivarNonDiffProblem2<Series<T>>(), point, order);
	}

	virtual IntervalSeries<T> calcIntervalDerHighOrder(const Interval<T>& interval, int order) const {
		return ::calcIntervalDerHighOrder(UnivarNonDiffProblem2<IntervalSeries<T>>(), interval, order);
	} 

    virtual bool isDerExist(T point) const
    {
    	return UnivarBenchmark<T>::isDerExist(UnivarNonDiffProblem2<Series<T>>(), point);
    }

	virtual T calcSymDiff(T point, int order) const
    {
		return ::calcSymDiff(UnivarNonDiffProblem2<T>(), point, order);
	}

	virtual Interval<T> calcIntervalSymDiff(const Interval<T> &interval, int order) const
    {
		return ::calcIntervalSymDiff(UnivarNonDiffProblem2<Interval<T>>(), interval, order);
    }

	virtual PwlBound<T> calcPwlBound(T a, T b, int steps) const {
		return ::calcPwlBound(UnivarNonDiffProblem2<PwlBound<T>>(), a, b, steps);
	}

	virtual Expr<T> getExpr() const
	{
		return UnivarNonDiffProblem2<T>();
	}

	UnivarNonDiffProblem2Benchmark() : UnivarBenchmark<T>("UnivarNonDiffProblem2 function",0.78541, -0.114214,  {0.1, 7}, false) {
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

	virtual Series<T> calcDerHighOrder(T point, int order) const {
		return ::calcDerHighOrder(UnivarNonDiffProblem3<Series<T>>(), point, order);
	}

	virtual IntervalSeries<T> calcIntervalDerHighOrder(const Interval<T>& interval, int order) const {
		return ::calcIntervalDerHighOrder(UnivarNonDiffProblem3<IntervalSeries<T>>(), interval, order);
	} 

    virtual bool isDerExist(T point) const
    {
    	return UnivarBenchmark<T>::isDerExist(UnivarNonDiffProblem3<Series<T>>(), point);
    }

	virtual T calcSymDiff(T point, int order) const
    {
		return ::calcSymDiff(UnivarNonDiffProblem3<T>(), point, order);
	}

	virtual Interval<T> calcIntervalSymDiff(const Interval<T> &interval, int order) const
    {
		return ::calcIntervalSymDiff(UnivarNonDiffProblem3<Interval<T>>(), interval, order);
    }

	virtual PwlBound<T> calcPwlBound(T a, T b, int steps) const {
		return ::calcPwlBound(UnivarNonDiffProblem3<PwlBound<T>>(), a, b, steps);
	}

	virtual Expr<T> getExpr() const
	{
		return UnivarNonDiffProblem3<T>();
	}

	UnivarNonDiffProblem3Benchmark() : UnivarBenchmark<T>("UnivarNonDiffProblem3 function",5.16909, 0.16205,  {-10, 10}, false) {
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

	virtual Series<T> calcDerHighOrder(T point, int order) const {
		return ::calcDerHighOrder(UnivarNonDiffProblem4<Series<T>>(), point, order);
	}

	virtual IntervalSeries<T> calcIntervalDerHighOrder(const Interval<T>& interval, int order) const {
		return ::calcIntervalDerHighOrder(UnivarNonDiffProblem4<IntervalSeries<T>>(), interval, order);
	} 

    virtual bool isDerExist(T point) const
    {
    	return UnivarBenchmark<T>::isDerExist(UnivarNonDiffProblem4<Series<T>>(), point);
    }

	virtual T calcSymDiff(T point, int order) const
    {
		return ::calcSymDiff(UnivarNonDiffProblem4<T>(), point, order);
	}

	virtual Interval<T> calcIntervalSymDiff(const Interval<T> &interval, int order) const
    {
		return ::calcIntervalSymDiff(UnivarNonDiffProblem4<Interval<T>>(), interval, order);
    }

	virtual PwlBound<T> calcPwlBound(T a, T b, int steps) const {
		return ::calcPwlBound(UnivarNonDiffProblem4<PwlBound<T>>(), a, b, steps);
	}

	virtual Expr<T> getExpr() const
	{
		return UnivarNonDiffProblem4<T>();
	}

	UnivarNonDiffProblem4Benchmark() : UnivarBenchmark<T>("UnivarNonDiffProblem4 function",15.7148, -0.999976,  {0, 18}, false) {
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

	virtual Series<T> calcDerHighOrder(T point, int order) const {
		return ::calcDerHighOrder(UnivarNonDiffProblem5<Series<T>>(), point, order);
	}

	virtual IntervalSeries<T> calcIntervalDerHighOrder(const Interval<T>& interval, int order) const {
		return ::calcIntervalDerHighOrder(UnivarNonDiffProblem5<IntervalSeries<T>>(), interval, order);
	} 

    virtual bool isDerExist(T point) const
    {
    	return UnivarBenchmark<T>::isDerExist(UnivarNonDiffProblem5<Series<T>>(), point);
    }

	virtual T calcSymDiff(T point, int order) const
    {
		return ::calcSymDiff(UnivarNonDiffProblem5<T>(), point, order);
	}

	virtual Interval<T> calcIntervalSymDiff(const Interval<T> &interval, int order) const
    {
		return ::calcIntervalSymDiff(UnivarNonDiffProblem5<Interval<T>>(), interval, order);
    }
	virtual PwlBound<T> calcPwlBound(T a, T b, int steps) const {
		return ::calcPwlBound(UnivarNonDiffProblem5<PwlBound<T>>(), a, b, steps);
	}

	virtual Expr<T> getExpr() const
	{
		return UnivarNonDiffProblem5<T>();
	}

	UnivarNonDiffProblem5Benchmark() : UnivarBenchmark<T>("UnivarNonDiffProblem5 function",2.83937, -0.952897,  {0, 7}, false) {
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

	virtual Series<T> calcDerHighOrder(T point, int order) const {
		return ::calcDerHighOrder(UnivarNonDiffProblem6<Series<T>>(), point, order);
	}

	virtual IntervalSeries<T> calcIntervalDerHighOrder(const Interval<T>& interval, int order) const {
		return ::calcIntervalDerHighOrder(UnivarNonDiffProblem6<IntervalSeries<T>>(), interval, order);
	} 

    virtual bool isDerExist(T point) const
    {
    	return UnivarBenchmark<T>::isDerExist(UnivarNonDiffProblem6<Series<T>>(), point);
    }

	virtual T calcSymDiff(T point, int order) const
    {
		return ::calcSymDiff(UnivarNonDiffProblem6<T>(), point, order);
	}

	virtual Interval<T> calcIntervalSymDiff(const Interval<T> &interval, int order) const
    {
		return ::calcIntervalSymDiff(UnivarNonDiffProblem6<Interval<T>>(), interval, order);
    }

	virtual PwlBound<T> calcPwlBound(T a, T b, int steps) const {
		return ::calcPwlBound(UnivarNonDiffProblem6<PwlBound<T>>(), a, b, steps);
	}

	virtual Expr<T> getExpr() const
	{
		return UnivarNonDiffProblem6<T>();
	}

	UnivarNonDiffProblem6Benchmark() : UnivarBenchmark<T>("UnivarNonDiffProblem6 function",9.73633, -0.999915,  {-10, 10}, false) {
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

	virtual Series<T> calcDerHighOrder(T point, int order) const {
		return ::calcDerHighOrder(UnivarNonDiffProblem7<Series<T>>(), point, order);
	}

	virtual IntervalSeries<T> calcIntervalDerHighOrder(const Interval<T>& interval, int order) const {
		return ::calcIntervalDerHighOrder(UnivarNonDiffProblem7<IntervalSeries<T>>(), interval, order);
	} 

    virtual bool isDerExist(T point) const
    {
    	return UnivarBenchmark<T>::isDerExist(UnivarNonDiffProblem7<Series<T>>(), point);
    }

	virtual T calcSymDiff(T point, int order) const
    {
		return ::calcSymDiff(UnivarNonDiffProblem7<T>(), point, order);
	}

	virtual Interval<T> calcIntervalSymDiff(const Interval<T> &interval, int order) const
    {
		return ::calcIntervalSymDiff(UnivarNonDiffProblem7<Interval<T>>(), interval, order);
    }

	virtual PwlBound<T> calcPwlBound(T a, T b, int steps) const {
		return ::calcPwlBound(UnivarNonDiffProblem7<PwlBound<T>>(), a, b, steps);
	}

	virtual Expr<T> getExpr() const
	{
		return UnivarNonDiffProblem7<T>();
	}

	UnivarNonDiffProblem7Benchmark() : UnivarBenchmark<T>("UnivarNonDiffProblem7 function",0.408224, -1.0411,  {0.1, 7}, false) {
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

	virtual Series<T> calcDerHighOrder(T point, int order) const {
		return ::calcDerHighOrder(UnivarNonDiffProblem8<Series<T>>(), point, order);
	}

	virtual IntervalSeries<T> calcIntervalDerHighOrder(const Interval<T>& interval, int order) const {
		return ::calcIntervalDerHighOrder(UnivarNonDiffProblem8<IntervalSeries<T>>(), interval, order);
	} 

    virtual bool isDerExist(T point) const
    {
    	return UnivarBenchmark<T>::isDerExist(UnivarNonDiffProblem8<Series<T>>(), point);
    }

	virtual T calcSymDiff(T point, int order) const
    {
		return ::calcSymDiff(UnivarNonDiffProblem8<T>(), point, order);
	}

	virtual Interval<T> calcIntervalSymDiff(const Interval<T> &interval, int order) const
    {
		return ::calcIntervalSymDiff(UnivarNonDiffProblem8<Interval<T>>(), interval, order);
    }

	virtual PwlBound<T> calcPwlBound(T a, T b, int steps) const {
		return ::calcPwlBound(UnivarNonDiffProblem8<PwlBound<T>>(), a, b, steps);
	}

	virtual Expr<T> getExpr() const
	{
		return UnivarNonDiffProblem8<T>();
	}

	UnivarNonDiffProblem8Benchmark() : UnivarBenchmark<T>("UnivarNonDiffProblem8 function",0, -5.0,  {-10, 10}, false) {
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

	virtual Series<T> calcDerHighOrder(T point, int order) const {
		return ::calcDerHighOrder(UnivarNonDiffProblem9<Series<T>>(), point, order);
	}

	virtual IntervalSeries<T> calcIntervalDerHighOrder(const Interval<T>& interval, int order) const {
		return ::calcIntervalDerHighOrder(UnivarNonDiffProblem9<IntervalSeries<T>>(), interval, order);
	} 

    virtual bool isDerExist(T point) const
    {
    	return UnivarBenchmark<T>::isDerExist(UnivarNonDiffProblem9<Series<T>>(), point);
    }

	virtual T calcSymDiff(T point, int order) const
    {
		return ::calcSymDiff(UnivarNonDiffProblem9<T>(), point, order);
	}

	virtual Interval<T> calcIntervalSymDiff(const Interval<T> &interval, int order) const
    {
		return ::calcIntervalSymDiff(UnivarNonDiffProblem9<Interval<T>>(), interval, order);
    }

	virtual PwlBound<T> calcPwlBound(T a, T b, int steps) const {
		return ::calcPwlBound(UnivarNonDiffProblem9<PwlBound<T>>(), a, b, steps);
	}

	virtual Expr<T> getExpr() const
	{
		return UnivarNonDiffProblem9<T>();
	}

	UnivarNonDiffProblem9Benchmark() : UnivarBenchmark<T>("UnivarNonDiffProblem9 function",9.42478, -1.0,  {0, 4 * M_PI}, false) {
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

	virtual Series<T> calcDerHighOrder(T point, int order) const {
		return ::calcDerHighOrder(UnivarNonDiffProblem10<Series<T>>(), point, order);
	}

	virtual IntervalSeries<T> calcIntervalDerHighOrder(const Interval<T>& interval, int order) const {
		return ::calcIntervalDerHighOrder(UnivarNonDiffProblem10<IntervalSeries<T>>(), interval, order);
	} 

    virtual bool isDerExist(T point) const
    {
    	return UnivarBenchmark<T>::isDerExist(UnivarNonDiffProblem10<Series<T>>(), point);
    }

	virtual T calcSymDiff(T point, int order) const
    {
		return ::calcSymDiff(UnivarNonDiffProblem10<T>(), point, order);
	}

	virtual Interval<T> calcIntervalSymDiff(const Interval<T> &interval, int order) const
    {
		return ::calcIntervalSymDiff(UnivarNonDiffProblem10<Interval<T>>(), interval, order);
    }

	virtual PwlBound<T> calcPwlBound(T a, T b, int steps) const {
		return ::calcPwlBound(UnivarNonDiffProblem10<PwlBound<T>>(), a, b, steps);
	}

	virtual Expr<T> getExpr() const
	{
		return UnivarNonDiffProblem10<T>();
	}

	UnivarNonDiffProblem10Benchmark() : UnivarBenchmark<T>("UnivarNonDiffProblem10 function",6, 0.0,  {0, 10}, false) {
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

	virtual Series<T> calcDerHighOrder(T point, int order) const {
		return ::calcDerHighOrder(UnivarNonDiffProblem11<Series<T>>(), point, order);
	}

	virtual IntervalSeries<T> calcIntervalDerHighOrder(const Interval<T>& interval, int order) const {
		return ::calcIntervalDerHighOrder(UnivarNonDiffProblem11<IntervalSeries<T>>(), interval, order);
	} 

    virtual bool isDerExist(T point) const
    {
    	return UnivarBenchmark<T>::isDerExist(UnivarNonDiffProblem11<Series<T>>(), point);
    }

	virtual T calcSymDiff(T point, int order) const
    {
		return ::calcSymDiff(UnivarNonDiffProblem11<T>(), point, order);
	}

	virtual Interval<T> calcIntervalSymDiff(const Interval<T> &interval, int order) const
    {
		return ::calcIntervalSymDiff(UnivarNonDiffProblem11<Interval<T>>(), interval, order);
    }

	virtual Expr<T> getExpr() const
	{
		return UnivarNonDiffProblem11<T>();
	}

	virtual PwlBound<T> calcPwlBound(T a, T b, int steps) const {
		return ::calcPwlBound(UnivarNonDiffProblem11<PwlBound<T>>(), a, b, steps);
	}

	UnivarNonDiffProblem11Benchmark() : UnivarBenchmark<T>("UnivarNonDiffProblem11 function",2.74902, -3.49991,  {0, 5}, false) {
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

	virtual Series<T> calcDerHighOrder(T point, int order) const {
		return ::calcDerHighOrder(UnivarNonDiffProblem12<Series<T>>(), point, order);
	}

	virtual IntervalSeries<T> calcIntervalDerHighOrder(const Interval<T>& interval, int order) const {
		return ::calcIntervalDerHighOrder(UnivarNonDiffProblem12<IntervalSeries<T>>(), interval, order);
	} 

    virtual bool isDerExist(T point) const
    {
    	return UnivarBenchmark<T>::isDerExist(UnivarNonDiffProblem12<Series<T>>(), point);
    }

	virtual T calcSymDiff(T point, int order) const
    {
		return ::calcSymDiff(UnivarNonDiffProblem12<T>(), point, order);
	}

	virtual Interval<T> calcIntervalSymDiff(const Interval<T> &interval, int order) const
    {
		return ::calcIntervalSymDiff(UnivarNonDiffProblem12<Interval<T>>(), interval, order);
    }

	virtual PwlBound<T> calcPwlBound(T a, T b, int steps) const {
		return ::calcPwlBound(UnivarNonDiffProblem12<PwlBound<T>>(), a, b, steps);
	}

	virtual Expr<T> getExpr() const
	{
		return UnivarNonDiffProblem12<T>();
	}

	UnivarNonDiffProblem12Benchmark() : UnivarBenchmark<T>("UnivarNonDiffProblem12 function",5.49779, 0.1,  {0, 2*M_PI}, false) {
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

	virtual Series<T> calcDerHighOrder(T point, int order) const {
		return ::calcDerHighOrder(UnivarNonDiffProblem13<Series<T>>(), point, order);
	}

	virtual IntervalSeries<T> calcIntervalDerHighOrder(const Interval<T>& interval, int order) const {
		return ::calcIntervalDerHighOrder(UnivarNonDiffProblem13<IntervalSeries<T>>(), interval, order);
	} 

    virtual bool isDerExist(T point) const
    {
    	return UnivarBenchmark<T>::isDerExist(UnivarNonDiffProblem13<Series<T>>(), point);
    }

	virtual T calcSymDiff(T point, int order) const
    {
		return ::calcSymDiff(UnivarNonDiffProblem13<T>(), point, order);
	}

	virtual Interval<T> calcIntervalSymDiff(const Interval<T> &interval, int order) const
    {
		return ::calcIntervalSymDiff(UnivarNonDiffProblem13<Interval<T>>(), interval, order);
    }

	virtual PwlBound<T> calcPwlBound(T a, T b, int steps) const {
		return ::calcPwlBound(UnivarNonDiffProblem13<PwlBound<T>>(), a, b, steps);
	}

	virtual Expr<T> getExpr() const
	{
		return UnivarNonDiffProblem13<T>();
	}

	UnivarNonDiffProblem13Benchmark() : UnivarBenchmark<T>("UnivarNonDiffProblem13 function",1, -2,  {-6, 2}, false) {
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

	virtual Series<T> calcDerHighOrder(T point, int order) const {
		return ::calcDerHighOrder(UnivarNonDiffProblem14<Series<T>>(), point, order);
	}

	virtual IntervalSeries<T> calcIntervalDerHighOrder(const Interval<T>& interval, int order) const {
		return ::calcIntervalDerHighOrder(UnivarNonDiffProblem14<IntervalSeries<T>>(), interval, order);
	} 

    virtual bool isDerExist(T point) const
    {
    	return UnivarBenchmark<T>::isDerExist(UnivarNonDiffProblem14<Series<T>>(), point);
    }

	virtual T calcSymDiff(T point, int order) const
    {
		return ::calcSymDiff(UnivarNonDiffProblem14<T>(), point, order);
	}

	virtual Interval<T> calcIntervalSymDiff(const Interval<T> &interval, int order) const
    {
		return ::calcIntervalSymDiff(UnivarNonDiffProblem14<Interval<T>>(), interval, order);
    }

	virtual PwlBound<T> calcPwlBound(T a, T b, int steps) const {
		return ::calcPwlBound(UnivarNonDiffProblem14<PwlBound<T>>(), a, b, steps);
	}

	virtual Expr<T> getExpr() const
	{
		return UnivarNonDiffProblem14<T>();
	}

	UnivarNonDiffProblem14Benchmark() : UnivarBenchmark<T>("UnivarNonDiffProblem14 function",0.224854, -0.288685,  {0, 4}, false) {
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

	virtual Series<T> calcDerHighOrder(T point, int order) const {
		return ::calcDerHighOrder(UnivarNonDiffProblem15<Series<T>>(), point, order);
	}

	virtual IntervalSeries<T> calcIntervalDerHighOrder(const Interval<T>& interval, int order) const {
		return ::calcIntervalDerHighOrder(UnivarNonDiffProblem15<IntervalSeries<T>>(), interval, order);
	} 

    virtual bool isDerExist(T point) const
    {
    	return UnivarBenchmark<T>::isDerExist(UnivarNonDiffProblem15<Series<T>>(), point);
    }

	virtual T calcSymDiff(T point, int order) const
    {
		return ::calcSymDiff(UnivarNonDiffProblem15<T>(), point, order);
	}

	virtual Interval<T> calcIntervalSymDiff(const Interval<T> &interval, int order) const
    {
		return ::calcIntervalSymDiff(UnivarNonDiffProblem15<Interval<T>>(), interval, order);
    }

	virtual PwlBound<T> calcPwlBound(T a, T b, int steps) const {
		return ::calcPwlBound(UnivarNonDiffProblem15<PwlBound<T>>(), a, b, steps);
	}

	virtual Expr<T> getExpr() const
	{
		return UnivarNonDiffProblem15<T>();
	}

	UnivarNonDiffProblem15Benchmark() : UnivarBenchmark<T>("UnivarNonDiffProblem15 function",2.414210, -0.535534,  {-5, 5}, false) {
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

	virtual Series<T> calcDerHighOrder(T point, int order) const {
		return ::calcDerHighOrder(UnivarNonDiffProblem16<Series<T>>(), point, order);
	}

	virtual IntervalSeries<T> calcIntervalDerHighOrder(const Interval<T>& interval, int order) const {
		return ::calcIntervalDerHighOrder(UnivarNonDiffProblem16<IntervalSeries<T>>(), interval, order);
	} 

    virtual bool isDerExist(T point) const
    {
    	return UnivarBenchmark<T>::isDerExist(UnivarNonDiffProblem16<Series<T>>(), point);
    }

	virtual T calcSymDiff(T point, int order) const
    {
		return ::calcSymDiff(UnivarNonDiffProblem16<T>(), point, order);
	}

	virtual Interval<T> calcIntervalSymDiff(const Interval<T> &interval, int order) const
    {
		return ::calcIntervalSymDiff(UnivarNonDiffProblem16<Interval<T>>(), interval, order);
    }

	virtual PwlBound<T> calcPwlBound(T a, T b, int steps) const {
		return ::calcPwlBound(UnivarNonDiffProblem16<PwlBound<T>>(), a, b, steps);
	}

	virtual Expr<T> getExpr() const
	{
		return UnivarNonDiffProblem16<T>();
	}

	UnivarNonDiffProblem16Benchmark() : UnivarBenchmark<T>("UnivarNonDiffProblem16 function",-7.97867, -1.91673,  {-10, 10}, false) {
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

	virtual Series<T> calcDerHighOrder(T point, int order) const {
		return ::calcDerHighOrder(UnivarNonDiffProblem17<Series<T>>(), point, order);
	}

	virtual IntervalSeries<T> calcIntervalDerHighOrder(const Interval<T>& interval, int order) const {
		return ::calcIntervalDerHighOrder(UnivarNonDiffProblem17<IntervalSeries<T>>(), interval, order);
	} 

    virtual bool isDerExist(T point) const
    {
    	return UnivarBenchmark<T>::isDerExist(UnivarNonDiffProblem17<Series<T>>(), point);
    }

	virtual T calcSymDiff(T point, int order) const
    {
		return ::calcSymDiff(UnivarNonDiffProblem17<T>(), point, order);
	}

	virtual Interval<T> calcIntervalSymDiff(const Interval<T> &interval, int order) const
    {
		return ::calcIntervalSymDiff(UnivarNonDiffProblem17<Interval<T>>(), interval, order);
    }

	virtual PwlBound<T> calcPwlBound(T a, T b, int steps) const {
		return ::calcPwlBound(UnivarNonDiffProblem17<PwlBound<T>>(), a, b, steps);
	}

	virtual Expr<T> getExpr() const
	{
		return UnivarNonDiffProblem17<T>();
	}

	UnivarNonDiffProblem17Benchmark() : UnivarBenchmark<T>("UnivarNonDiffProblem17 function",0, -1.5,  {-10, 10}, false) {
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

	virtual Series<T> calcDerHighOrder(T point, int order) const {
		return ::calcDerHighOrder(UnivarNonDiffProblem18<Series<T>>(), point, order);
	}

	virtual IntervalSeries<T> calcIntervalDerHighOrder(const Interval<T>& interval, int order) const {
		return ::calcIntervalDerHighOrder(UnivarNonDiffProblem18<IntervalSeries<T>>(), interval, order);
	} 

    virtual bool isDerExist(T point) const
    {
    	return UnivarBenchmark<T>::isDerExist(UnivarNonDiffProblem18<Series<T>>(), point);
    }

	virtual T calcSymDiff(T point, int order) const
    {
		return ::calcSymDiff(UnivarNonDiffProblem18<T>(), point, order);
	}

	virtual Interval<T> calcIntervalSymDiff(const Interval<T> &interval, int order) const
    {
		return ::calcIntervalSymDiff(UnivarNonDiffProblem18<Interval<T>>(), interval, order);
    }

	virtual PwlBound<T> calcPwlBound(T a, T b, int steps) const {
		return ::calcPwlBound(UnivarNonDiffProblem18<PwlBound<T>>(), a, b, steps);
	}

	virtual Expr<T> getExpr() const
	{
		return UnivarNonDiffProblem18<T>();
	}

	UnivarNonDiffProblem18Benchmark() : UnivarBenchmark<T>("UnivarNonDiffProblem18 function",1.57031, -1.71828,  {-3, 2}, false) {
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

	virtual Series<T> calcDerHighOrder(T point, int order) const {
		return ::calcDerHighOrder(UnivarNonDiffProblem19<Series<T>>(), point, order);
	}

	virtual IntervalSeries<T> calcIntervalDerHighOrder(const Interval<T>& interval, int order) const {
		return ::calcIntervalDerHighOrder(UnivarNonDiffProblem19<IntervalSeries<T>>(), interval, order);
	} 

    virtual bool isDerExist(T point) const
    {
    	return UnivarBenchmark<T>::isDerExist(UnivarNonDiffProblem19<Series<T>>(), point);
    }

	virtual T calcSymDiff(T point, int order) const
    {
		return ::calcSymDiff(UnivarNonDiffProblem19<T>(), point, order);
	}

	virtual Interval<T> calcIntervalSymDiff(const Interval<T> &interval, int order) const
    {
		return ::calcIntervalSymDiff(UnivarNonDiffProblem19<Interval<T>>(), interval, order);
    }

	virtual PwlBound<T> calcPwlBound(T a, T b, int steps) const {
		return ::calcPwlBound(UnivarNonDiffProblem19<PwlBound<T>>(), a, b, steps);
	}

	virtual Expr<T> getExpr() const
	{
		return UnivarNonDiffProblem19<T>();
	}

	UnivarNonDiffProblem19Benchmark() : UnivarBenchmark<T>("UnivarNonDiffProblem19 function",5.87287, -5.811567,  {0, 6.5}, false) {
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

	virtual Series<T> calcDerHighOrder(T point, int order) const {
		return ::calcDerHighOrder(UnivarNonDiffProblem20<Series<T>>(), point, order);
	}

	virtual IntervalSeries<T> calcIntervalDerHighOrder(const Interval<T>& interval, int order) const {
		return ::calcIntervalDerHighOrder(UnivarNonDiffProblem20<IntervalSeries<T>>(), interval, order);
	} 

	virtual bool isDerExist(T point) const
	{
		return UnivarBenchmark<T>::isDerExist(UnivarNonDiffProblem20<Series<T>>(), point);
	}

	virtual T calcSymDiff(T point, int order) const
   	{
		return ::calcSymDiff(UnivarNonDiffProblem20<T>(), point, order);
	}

	virtual Interval<T> calcIntervalSymDiff(const Interval<T> &interval, int order) const
   	{
		return ::calcIntervalSymDiff(UnivarNonDiffProblem20<Interval<T>>(), interval, order);
   	}

	virtual PwlBound<T> calcPwlBound(T a, T b, int steps) const {
		return ::calcPwlBound(UnivarNonDiffProblem20<PwlBound<T>>(), a, b, steps);
	}

	virtual Expr<T> getExpr() const
	{
		return UnivarNonDiffProblem20<T>();
	}

	UnivarNonDiffProblem20Benchmark() : UnivarBenchmark<T>("UnivarNonDiffProblem 20 function",-8.63937, -0.707103,  {-10, 10}, false) {
	}
};

template <class T>
class UnivarSlopesProblem1Benchmark : public UnivarBenchmark<T>
{
public:
	virtual T calcFunc(T point) const {		
		return ::calcFunc(UnivarSlopesProblem1<T>(), std::vector<T>(1, point));
	}

	virtual Interval<T> calcInterval(const Interval<T>& interval) const {
		return ::calcInterval(UnivarSlopesProblem1<Interval<T>>(), std::vector<Interval<T>>(1, interval));					
	}

	virtual ValDer<T> calcGrad(T point) const {
		return ::calcGrad(UnivarSlopesProblem1<ValDer<T>>(), std::vector<T>(1, point));
	}

	virtual IntervalDer<T> calcIntervalGrad(const Interval<T>& interval) const {
		return ::calcIntervalGrad(UnivarSlopesProblem1<IntervalDer<T>>(), std::vector<Interval<T>>(1, interval));
	}

	virtual Series<T> calcDerHighOrder(T point, int order) const {
		return ::calcDerHighOrder(UnivarSlopesProblem1<Series<T>>(), point, order);
	}

	virtual IntervalSeries<T> calcIntervalDerHighOrder(const Interval<T>& interval, int order) const {
		return ::calcIntervalDerHighOrder(UnivarSlopesProblem1<IntervalSeries<T>>(), interval, order);
	} 

   virtual bool isDerExist(T point) const {
  		return UnivarBenchmark<T>::isDerExist(UnivarSlopesProblem1<Series<T>>(), point);
   	}

	virtual T calcSymDiff(T point, int order) const {
		return ::calcSymDiff(UnivarSlopesProblem1<T>(), point, order);
	}

	virtual Interval<T> calcIntervalSymDiff(const Interval<T> &interval, int order) const {
		return ::calcIntervalSymDiff(UnivarSlopesProblem1<Interval<T>>(), interval, order);
   	}

	virtual PwlBound<T> calcPwlBound(T a, T b, int steps) const {
		return ::calcPwlBound(UnivarSlopesProblem1<PwlBound<T>>(), a, b, steps);
	}

	virtual Expr<T> getExpr() const {
		return UnivarSlopesProblem1<T>();
	}

	UnivarSlopesProblem1Benchmark() : UnivarBenchmark<T>("UnivarSlopesProblem1 function",-0.6795, -0.8242,  {-10, 10}, false) {
	}
};

template <class T>
class UnivarSlopesProblem2Benchmark : public UnivarBenchmark<T>
{
public:
	virtual T calcFunc(T point) const {		
		return ::calcFunc(UnivarSlopesProblem2<T>(), std::vector<T>(1, point));
	}

	virtual Interval<T> calcInterval(const Interval<T>& interval) const {
		return ::calcInterval(UnivarSlopesProblem2<Interval<T>>(), std::vector<Interval<T>>(1, interval));					
	}

	virtual ValDer<T> calcGrad(T point) const {
		return ::calcGrad(UnivarSlopesProblem2<ValDer<T>>(), std::vector<T>(1, point));
	}

	virtual IntervalDer<T> calcIntervalGrad(const Interval<T>& interval) const {
		return ::calcIntervalGrad(UnivarSlopesProblem2<IntervalDer<T>>(), std::vector<Interval<T>>(1, interval));
	}

	virtual Series<T> calcDerHighOrder(T point, int order) const {
		return ::calcDerHighOrder(UnivarSlopesProblem2<Series<T>>(), point, order);
	}

	virtual IntervalSeries<T> calcIntervalDerHighOrder(const Interval<T>& interval, int order) const {
		return ::calcIntervalDerHighOrder(UnivarSlopesProblem2<IntervalSeries<T>>(), interval, order);
	} 

	virtual bool isDerExist(T point) const {
		return UnivarBenchmark<T>::isDerExist(UnivarSlopesProblem2<Series<T>>(), point);
	}

	virtual T calcSymDiff(T point, int order) const {
		return ::calcSymDiff(UnivarSlopesProblem2<T>(), point, order);
	}

	virtual Interval<T> calcIntervalSymDiff(const Interval<T> &interval, int order) const {
		return ::calcIntervalSymDiff(UnivarSlopesProblem2<Interval<T>>(), interval, order);
   	}

	virtual PwlBound<T> calcPwlBound(T a, T b, int steps) const {
		return ::calcPwlBound(UnivarSlopesProblem2<PwlBound<T>>(), a, b, steps);
	}

	virtual Expr<T> getExpr() const {
		return UnivarSlopesProblem2<T>();
	}

	UnivarSlopesProblem2Benchmark() : UnivarBenchmark<T>("UnivarSlopesProblem2 function",-6.774, -12.03,  {-10, 10}, false) {
	}
};


template <class T>
class UnivarSlopesProblem4Benchmark : public UnivarBenchmark<T>
{
public:
	virtual T calcFunc(T point) const {		
		return ::calcFunc(UnivarSlopesProblem4<T>(), std::vector<T>(1, point));
	}

	virtual Interval<T> calcInterval(const Interval<T>& interval) const {
		return ::calcInterval(UnivarSlopesProblem4<Interval<T>>(), std::vector<Interval<T>>(1, interval));					
	}

	virtual ValDer<T> calcGrad(T point) const {
		return ::calcGrad(UnivarSlopesProblem4<ValDer<T>>(), std::vector<T>(1, point));
	}

	virtual IntervalDer<T> calcIntervalGrad(const Interval<T>& interval) const {
		return ::calcIntervalGrad(UnivarSlopesProblem4<IntervalDer<T>>(), std::vector<Interval<T>>(1, interval));
	}

	virtual Series<T> calcDerHighOrder(T point, int order) const {
		return ::calcDerHighOrder(UnivarSlopesProblem4<Series<T>>(), point, order);
	}

	virtual IntervalSeries<T> calcIntervalDerHighOrder(const Interval<T>& interval, int order) const {
		return ::calcIntervalDerHighOrder(UnivarSlopesProblem4<IntervalSeries<T>>(), interval, order);
	} 

   	virtual bool isDerExist(T point) const {
  		return UnivarBenchmark<T>::isDerExist(UnivarSlopesProblem4<Series<T>>(), point);
   	}

	virtual T calcSymDiff(T point, int order) const {
		return ::calcSymDiff(UnivarSlopesProblem4<T>(), point, order);
	}

	virtual Interval<T> calcIntervalSymDiff(const Interval<T> &interval, int order) const {
		return ::calcIntervalSymDiff(UnivarSlopesProblem4<Interval<T>>(), interval, order);
   	}

	virtual PwlBound<T> calcPwlBound(T a, T b, int steps) const {
		return ::calcPwlBound(UnivarSlopesProblem4<PwlBound<T>>(), a, b, steps);
	}

	virtual Expr<T> getExpr() const {
		return UnivarSlopesProblem4<T>();
	}

	UnivarSlopesProblem4Benchmark() : UnivarBenchmark<T>("UnivarSlopesProblem4 function",9*M_PI/2, -1.0,  {0, 20}, false) {
	}
};

template <class T>
class UnivarSlopesProblem5Benchmark : public UnivarBenchmark<T>
{
public:
	virtual T calcFunc(T point) const {		
		return ::calcFunc(UnivarSlopesProblem5<T>(), std::vector<T>(1, point));
	}

	virtual Interval<T> calcInterval(const Interval<T>& interval) const {
		return ::calcInterval(UnivarSlopesProblem5<Interval<T>>(), std::vector<Interval<T>>(1, interval));					
	}

	virtual ValDer<T> calcGrad(T point) const {
		return ::calcGrad(UnivarSlopesProblem5<ValDer<T>>(), std::vector<T>(1, point));
	}

	virtual IntervalDer<T> calcIntervalGrad(const Interval<T>& interval) const {
		return ::calcIntervalGrad(UnivarSlopesProblem5<IntervalDer<T>>(), std::vector<Interval<T>>(1, interval));
	}

	virtual Series<T> calcDerHighOrder(T point, int order) const {
		return ::calcDerHighOrder(UnivarSlopesProblem5<Series<T>>(), point, order);
	}

	virtual IntervalSeries<T> calcIntervalDerHighOrder(const Interval<T>& interval, int order) const {
		return ::calcIntervalDerHighOrder(UnivarSlopesProblem5<IntervalSeries<T>>(), interval, order);
	} 

	virtual bool isDerExist(T point) const {
		return UnivarBenchmark<T>::isDerExist(UnivarSlopesProblem5<Series<T>>(), point);
	}

	virtual T calcSymDiff(T point, int order) const {
		return ::calcSymDiff(UnivarSlopesProblem5<T>(), point, order);
	}

	virtual Interval<T> calcIntervalSymDiff(const Interval<T> &interval, int order) const {
		return ::calcIntervalSymDiff(UnivarSlopesProblem5<Interval<T>>(), interval, order);
   	}

	virtual PwlBound<T> calcPwlBound(T a, T b, int steps) const {
		return ::calcPwlBound(UnivarSlopesProblem5<PwlBound<T>>(), a, b, steps);
	}

	virtual Expr<T> getExpr() const {
		return UnivarSlopesProblem5<T>();
	}

	UnivarSlopesProblem5Benchmark() : UnivarBenchmark<T>("UnivarSlopesProblem5 function",2/(3*M_PI), -1.0,  {0.02, 1}, false) {
	}
};

template <class T>
class UnivarSlopesProblem6Benchmark : public UnivarBenchmark<T>
{
public:
	virtual T calcFunc(T point) const {		
		return ::calcFunc(UnivarSlopesProblem6<T>(), std::vector<T>(1, point));
	}

	virtual Interval<T> calcInterval(const Interval<T>& interval) const {
		return ::calcInterval(UnivarSlopesProblem6<Interval<T>>(), std::vector<Interval<T>>(1, interval));					
	}

	virtual ValDer<T> calcGrad(T point) const {
		return ::calcGrad(UnivarSlopesProblem6<ValDer<T>>(), std::vector<T>(1, point));
	}

	virtual IntervalDer<T> calcIntervalGrad(const Interval<T>& interval) const {
		return ::calcIntervalGrad(UnivarSlopesProblem6<IntervalDer<T>>(), std::vector<Interval<T>>(1, interval));
	}

	virtual Series<T> calcDerHighOrder(T point, int order) const {
		return ::calcDerHighOrder(UnivarSlopesProblem6<Series<T>>(), point, order);
	}

	virtual IntervalSeries<T> calcIntervalDerHighOrder(const Interval<T>& interval, int order) const {
		return ::calcIntervalDerHighOrder(UnivarSlopesProblem6<IntervalSeries<T>>(), interval, order);
	} 

   	virtual bool isDerExist(T point) const {
  		return UnivarBenchmark<T>::isDerExist(UnivarSlopesProblem6<Series<T>>(), point);
   	}

	virtual T calcSymDiff(T point, int order) const {
		return ::calcSymDiff(UnivarSlopesProblem6<T>(), point, order);
	}

	virtual Interval<T> calcIntervalSymDiff(const Interval<T> &interval, int order) const {
		return ::calcIntervalSymDiff(UnivarSlopesProblem6<Interval<T>>(), interval, order);
   	}

	virtual PwlBound<T> calcPwlBound(T a, T b, int steps) const {
		return ::calcPwlBound(UnivarSlopesProblem6<PwlBound<T>>(), a, b, steps);
	}

	virtual Expr<T> getExpr() const {
		return UnivarSlopesProblem6<T>();
	}

	UnivarSlopesProblem6Benchmark() : UnivarBenchmark<T>("UnivarSlopesProblem6 function",0, (5-sqrt(5))/2.0,  {-10, 20}, false) {
	}
};

template <class T>
class UnivarSlopesProblem7Benchmark : public UnivarBenchmark<T>
{
public:
	virtual T calcFunc(T point) const {		
		return ::calcFunc(UnivarSlopesProblem7<T>(), std::vector<T>(1, point));
	}

	virtual Interval<T> calcInterval(const Interval<T>& interval) const {
		return ::calcInterval(UnivarSlopesProblem7<Interval<T>>(), std::vector<Interval<T>>(1, interval));					
	}

	virtual ValDer<T> calcGrad(T point) const {
		return ::calcGrad(UnivarSlopesProblem7<ValDer<T>>(), std::vector<T>(1, point));
	}

	virtual IntervalDer<T> calcIntervalGrad(const Interval<T>& interval) const {
		return ::calcIntervalGrad(UnivarSlopesProblem7<IntervalDer<T>>(), std::vector<Interval<T>>(1, interval));
	}

	virtual Series<T> calcDerHighOrder(T point, int order) const {
		return ::calcDerHighOrder(UnivarSlopesProblem7<Series<T>>(), point, order);
	}

	virtual IntervalSeries<T> calcIntervalDerHighOrder(const Interval<T>& interval, int order) const {
		return ::calcIntervalDerHighOrder(UnivarSlopesProblem7<IntervalSeries<T>>(), interval, order);
	} 

   	virtual bool isDerExist(T point) const {
  		return UnivarBenchmark<T>::isDerExist(UnivarSlopesProblem7<Series<T>>(), point);
   	}

	virtual T calcSymDiff(T point, int order) const {
		return ::calcSymDiff(UnivarSlopesProblem7<T>(), point, order);
	}

	virtual Interval<T> calcIntervalSymDiff(const Interval<T> &interval, int order) const {
		return ::calcIntervalSymDiff(UnivarSlopesProblem7<Interval<T>>(), interval, order);
   	}

	virtual PwlBound<T> calcPwlBound(T a, T b, int steps) const {
		return ::calcPwlBound(UnivarSlopesProblem7<PwlBound<T>>(), a, b, steps);
	}

	virtual Expr<T> getExpr() const {
		return UnivarSlopesProblem7<T>();
	}

	UnivarSlopesProblem7Benchmark() : UnivarBenchmark<T>("UnivarSlopesProblem7 function",2, 1,  {0, 3}, false) {
	}
};

template <class T>
class UnivarSlopesProblem8Benchmark : public UnivarBenchmark<T>
{
public:
	virtual T calcFunc(T point) const {		
		return ::calcFunc(UnivarSlopesProblem8<T>(), std::vector<T>(1, point));
	}

	virtual Interval<T> calcInterval(const Interval<T>& interval) const {
		return ::calcInterval(UnivarSlopesProblem8<Interval<T>>(), std::vector<Interval<T>>(1, interval));					
	}

	virtual ValDer<T> calcGrad(T point) const {
		return ::calcGrad(UnivarSlopesProblem8<ValDer<T>>(), std::vector<T>(1, point));
	}

	virtual IntervalDer<T> calcIntervalGrad(const Interval<T>& interval) const {
		return ::calcIntervalGrad(UnivarSlopesProblem8<IntervalDer<T>>(), std::vector<Interval<T>>(1, interval));
	}

	virtual Series<T> calcDerHighOrder(T point, int order) const {
		return ::calcDerHighOrder(UnivarSlopesProblem8<Series<T>>(), point, order);
	}

	virtual IntervalSeries<T> calcIntervalDerHighOrder(const Interval<T>& interval, int order) const {
		return ::calcIntervalDerHighOrder(UnivarSlopesProblem8<IntervalSeries<T>>(), interval, order);
	} 

   virtual bool isDerExist(T point) const {
  		return UnivarBenchmark<T>::isDerExist(UnivarSlopesProblem8<Series<T>>(), point);
   	}

	virtual T calcSymDiff(T point, int order) const {
		return ::calcSymDiff(UnivarSlopesProblem8<T>(), point, order);
	}

	virtual Interval<T> calcIntervalSymDiff(const Interval<T> &interval, int order) const {
		return ::calcIntervalSymDiff(UnivarSlopesProblem8<Interval<T>>(), interval, order);
   	}

	virtual PwlBound<T> calcPwlBound(T a, T b, int steps) const {
		return ::calcPwlBound(UnivarSlopesProblem8<PwlBound<T>>(), a, b, steps);
	}

	virtual Expr<T> getExpr() const {
		return UnivarSlopesProblem8<T>();
	}

	UnivarSlopesProblem8Benchmark() : UnivarBenchmark<T>("UnivarSlopesProblem8 function",5.1997, -4.601,  {2.7, 7.5}, false) {
	}
};

template <class T>
class UnivarSlopesProblem9Benchmark : public UnivarBenchmark<T>
{
public:
	virtual T calcFunc(T point) const {		
		return ::calcFunc(UnivarSlopesProblem9<T>(), std::vector<T>(1, point));
	}

	virtual Interval<T> calcInterval(const Interval<T>& interval) const {
		return ::calcInterval(UnivarSlopesProblem9<Interval<T>>(), std::vector<Interval<T>>(1, interval));					
	}

	virtual ValDer<T> calcGrad(T point) const {
		return ::calcGrad(UnivarSlopesProblem9<ValDer<T>>(), std::vector<T>(1, point));
	}

	virtual IntervalDer<T> calcIntervalGrad(const Interval<T>& interval) const {
		return ::calcIntervalGrad(UnivarSlopesProblem9<IntervalDer<T>>(), std::vector<Interval<T>>(1, interval));
	}

	virtual Series<T> calcDerHighOrder(T point, int order) const {
		return ::calcDerHighOrder(UnivarSlopesProblem9<Series<T>>(), point, order);
	}

	virtual IntervalSeries<T> calcIntervalDerHighOrder(const Interval<T>& interval, int order) const {
		return ::calcIntervalDerHighOrder(UnivarSlopesProblem9<IntervalSeries<T>>(), interval, order);
	} 

   virtual bool isDerExist(T point) const {
  		return UnivarBenchmark<T>::isDerExist(UnivarSlopesProblem9<Series<T>>(), point);
   	}

	virtual T calcSymDiff(T point, int order) const {
		return ::calcSymDiff(UnivarSlopesProblem9<T>(), point, order);
	}

	virtual Interval<T> calcIntervalSymDiff(const Interval<T> &interval, int order) const {
		return ::calcIntervalSymDiff(UnivarSlopesProblem9<Interval<T>>(), interval, order);
   	}

	virtual PwlBound<T> calcPwlBound(T a, T b, int steps) const {
		return ::calcPwlBound(UnivarSlopesProblem9<PwlBound<T>>(), a, b, steps);
	}

	virtual Expr<T> getExpr() const {
		return UnivarSlopesProblem9<T>();
	}

	UnivarSlopesProblem9Benchmark() : UnivarBenchmark<T>("UnivarSlopesProblem9 function",0.06738, -0.02090,  {-10, 10}, false) {
	}
};

template <class T>
class UnivarSlopesProblem10Benchmark : public UnivarBenchmark<T>
{
public:
	virtual T calcFunc(T point) const {		
		return ::calcFunc(UnivarSlopesProblem10<T>(), std::vector<T>(1, point));
	}

	virtual Interval<T> calcInterval(const Interval<T>& interval) const {
		return ::calcInterval(UnivarSlopesProblem10<Interval<T>>(), std::vector<Interval<T>>(1, interval));					
	}

	virtual ValDer<T> calcGrad(T point) const {
		return ::calcGrad(UnivarSlopesProblem10<ValDer<T>>(), std::vector<T>(1, point));
	}

	virtual IntervalDer<T> calcIntervalGrad(const Interval<T>& interval) const {
		return ::calcIntervalGrad(UnivarSlopesProblem10<IntervalDer<T>>(), std::vector<Interval<T>>(1, interval));
	}

	virtual Series<T> calcDerHighOrder(T point, int order) const {
		return ::calcDerHighOrder(UnivarSlopesProblem10<Series<T>>(), point, order);
	}

	virtual IntervalSeries<T> calcIntervalDerHighOrder(const Interval<T>& interval, int order) const {
		return ::calcIntervalDerHighOrder(UnivarSlopesProblem10<IntervalSeries<T>>(), interval, order);
	} 

   	virtual bool isDerExist(T point) const {
  		return UnivarBenchmark<T>::isDerExist(UnivarSlopesProblem10<Series<T>>(), point);
   	}

	virtual T calcSymDiff(T point, int order) const {
		return ::calcSymDiff(UnivarSlopesProblem10<T>(), point, order);
	}

	virtual Interval<T> calcIntervalSymDiff(const Interval<T> &interval, int order) const {
		return ::calcIntervalSymDiff(UnivarSlopesProblem10<Interval<T>>(), interval, order);
   	}

	virtual PwlBound<T> calcPwlBound(T a, T b, int steps) const {
		return ::calcPwlBound(UnivarSlopesProblem10<PwlBound<T>>(), a, b, steps);
	}

	virtual Expr<T> getExpr() const {
		return UnivarSlopesProblem10<T>();
	}

	UnivarSlopesProblem10Benchmark() : UnivarBenchmark<T>("UnivarSlopesProblem10 function",0.6858, -14.59,  {0, 10}, false) {
	}
};

template <class T>
class UnivarSlopesProblem11Benchmark : public UnivarBenchmark<T>
{
public:
	virtual T calcFunc(T point) const {		
		return ::calcFunc(UnivarSlopesProblem11<T>(), std::vector<T>(1, point));
	}

	virtual Interval<T> calcInterval(const Interval<T>& interval) const {
		return ::calcInterval(UnivarSlopesProblem11<Interval<T>>(), std::vector<Interval<T>>(1, interval));					
	}

	virtual ValDer<T> calcGrad(T point) const {
		return ::calcGrad(UnivarSlopesProblem11<ValDer<T>>(), std::vector<T>(1, point));
	}

	virtual IntervalDer<T> calcIntervalGrad(const Interval<T>& interval) const {
		return ::calcIntervalGrad(UnivarSlopesProblem11<IntervalDer<T>>(), std::vector<Interval<T>>(1, interval));
	}

	virtual Series<T> calcDerHighOrder(T point, int order) const {
		return ::calcDerHighOrder(UnivarSlopesProblem11<Series<T>>(), point, order);
	}

	virtual IntervalSeries<T> calcIntervalDerHighOrder(const Interval<T>& interval, int order) const {
		return ::calcIntervalDerHighOrder(UnivarSlopesProblem11<IntervalSeries<T>>(), interval, order);
	} 

   virtual bool isDerExist(T point) const {
  		return UnivarBenchmark<T>::isDerExist(UnivarSlopesProblem11<Series<T>>(), point);
   	}

	virtual T calcSymDiff(T point, int order) const {
		return ::calcSymDiff(UnivarSlopesProblem11<T>(), point, order);
	}

	virtual Interval<T> calcIntervalSymDiff(const Interval<T> &interval, int order) const {
		return ::calcIntervalSymDiff(UnivarSlopesProblem11<Interval<T>>(), interval, order);
   	}

	virtual PwlBound<T> calcPwlBound(T a, T b, int steps) const {
		return ::calcPwlBound(UnivarSlopesProblem11<PwlBound<T>>(), a, b, steps);
	}

	virtual Expr<T> getExpr() const {
		return UnivarSlopesProblem11<T>();
	}

	UnivarSlopesProblem11Benchmark() : UnivarBenchmark<T>("UnivarSlopesProblem11 function",4.855, -13.92,  {0, 10}, false) {
	}
};

template <class T>
class UnivarSlopesProblem12Benchmark : public UnivarBenchmark<T>
{
public:
	virtual T calcFunc(T point) const {		
		return ::calcFunc(UnivarSlopesProblem12<T>(), std::vector<T>(1, point));
	}

	virtual Interval<T> calcInterval(const Interval<T>& interval) const {
		return ::calcInterval(UnivarSlopesProblem12<Interval<T>>(), std::vector<Interval<T>>(1, interval));					
	}

	virtual ValDer<T> calcGrad(T point) const {
		return ::calcGrad(UnivarSlopesProblem12<ValDer<T>>(), std::vector<T>(1, point));
	}

	virtual IntervalDer<T> calcIntervalGrad(const Interval<T>& interval) const {
		return ::calcIntervalGrad(UnivarSlopesProblem12<IntervalDer<T>>(), std::vector<Interval<T>>(1, interval));
	}

	virtual Series<T> calcDerHighOrder(T point, int order) const {
		return ::calcDerHighOrder(UnivarSlopesProblem12<Series<T>>(), point, order);
	}

	virtual IntervalSeries<T> calcIntervalDerHighOrder(const Interval<T>& interval, int order) const {
		return ::calcIntervalDerHighOrder(UnivarSlopesProblem12<IntervalSeries<T>>(), interval, order);
	} 

   	virtual bool isDerExist(T point) const {
  		return UnivarBenchmark<T>::isDerExist(UnivarSlopesProblem12<Series<T>>(), point);
   	}

	virtual T calcSymDiff(T point, int order) const {
		return ::calcSymDiff(UnivarSlopesProblem12<T>(), point, order);
	}

	virtual Interval<T> calcIntervalSymDiff(const Interval<T> &interval, int order) const {
		return ::calcIntervalSymDiff(UnivarSlopesProblem12<Interval<T>>(), interval, order);
   	}

	virtual PwlBound<T> calcPwlBound(T a, T b, int steps) const {
		return ::calcPwlBound(UnivarSlopesProblem12<PwlBound<T>>(), a, b, steps);
	}

	virtual Expr<T> getExpr() const {
		return UnivarSlopesProblem12<T>();
	}

	UnivarSlopesProblem12Benchmark() : UnivarBenchmark<T>("UnivarSlopesProblem12 function",0.0, 1.0,  {-20, 20}, false) {
	}
};

template <class T>
class UnivarSlopesProblem13Benchmark : public UnivarBenchmark<T>
{
public:
	virtual T calcFunc(T point) const {		
		return ::calcFunc(UnivarSlopesProblem13<T>(), std::vector<T>(1, point));
	}

	virtual Interval<T> calcInterval(const Interval<T>& interval) const {
		return ::calcInterval(UnivarSlopesProblem13<Interval<T>>(), std::vector<Interval<T>>(1, interval));					
	}

	virtual ValDer<T> calcGrad(T point) const {
		return ::calcGrad(UnivarSlopesProblem13<ValDer<T>>(), std::vector<T>(1, point));
	}

	virtual IntervalDer<T> calcIntervalGrad(const Interval<T>& interval) const {
		return ::calcIntervalGrad(UnivarSlopesProblem13<IntervalDer<T>>(), std::vector<Interval<T>>(1, interval));
	}

	virtual Series<T> calcDerHighOrder(T point, int order) const {
		return ::calcDerHighOrder(UnivarSlopesProblem13<Series<T>>(), point, order);
	}

	virtual IntervalSeries<T> calcIntervalDerHighOrder(const Interval<T>& interval, int order) const {
		return ::calcIntervalDerHighOrder(UnivarSlopesProblem13<IntervalSeries<T>>(), interval, order);
	} 

   virtual bool isDerExist(T point) const {
  		return UnivarBenchmark<T>::isDerExist(UnivarSlopesProblem13<Series<T>>(), point);
   	}

	virtual T calcSymDiff(T point, int order) const {
		return ::calcSymDiff(UnivarSlopesProblem13<T>(), point, order);
	}

	virtual Interval<T> calcIntervalSymDiff(const Interval<T> &interval, int order) const {
		return ::calcIntervalSymDiff(UnivarSlopesProblem13<Interval<T>>(), interval, order);
   	}

	virtual PwlBound<T> calcPwlBound(T a, T b, int steps) const {
		return ::calcPwlBound(UnivarSlopesProblem13<PwlBound<T>>(), a, b, steps);
	}

	virtual Expr<T> getExpr() const {
		return UnivarSlopesProblem13<T>();
	}

	UnivarSlopesProblem13Benchmark() : UnivarBenchmark<T>("UnivarSlopesProblem13 function",2.0, -1.0/3.0,  {0, 10}, false) {
	}
};

template <class T>
class UnivarSlopesProblem14Benchmark : public UnivarBenchmark<T>
{
public:
	virtual T calcFunc(T point) const {		
		return ::calcFunc(UnivarSlopesProblem14<T>(), std::vector<T>(1, point));
	}

	virtual Interval<T> calcInterval(const Interval<T>& interval) const {
		return ::calcInterval(UnivarSlopesProblem14<Interval<T>>(), std::vector<Interval<T>>(1, interval));					
	}

	virtual ValDer<T> calcGrad(T point) const {
		return ::calcGrad(UnivarSlopesProblem14<ValDer<T>>(), std::vector<T>(1, point));
	}

	virtual IntervalDer<T> calcIntervalGrad(const Interval<T>& interval) const {
		return ::calcIntervalGrad(UnivarSlopesProblem14<IntervalDer<T>>(), std::vector<Interval<T>>(1, interval));
	}

	virtual Series<T> calcDerHighOrder(T point, int order) const {
		return ::calcDerHighOrder(UnivarSlopesProblem14<Series<T>>(), point, order);
	}

	virtual IntervalSeries<T> calcIntervalDerHighOrder(const Interval<T>& interval, int order) const {
		return ::calcIntervalDerHighOrder(UnivarSlopesProblem14<IntervalSeries<T>>(), interval, order);
	} 

   virtual bool isDerExist(T point) const {
  		return UnivarBenchmark<T>::isDerExist(UnivarSlopesProblem14<Series<T>>(), point);
   	}

	virtual T calcSymDiff(T point, int order) const {
		return ::calcSymDiff(UnivarSlopesProblem14<T>(), point, order);
	}

	virtual Interval<T> calcIntervalSymDiff(const Interval<T> &interval, int order) const {
		return ::calcIntervalSymDiff(UnivarSlopesProblem14<Interval<T>>(), interval, order);
   	}

	virtual PwlBound<T> calcPwlBound(T a, T b, int steps) const {
		return ::calcPwlBound(UnivarSlopesProblem14<PwlBound<T>>(), a, b, steps);
	}

	virtual Expr<T> getExpr() const {
		return UnivarSlopesProblem14<T>();
	}

	UnivarSlopesProblem14Benchmark() : UnivarBenchmark<T>("UnivarSlopesProblem14 function",0, -1.0,  {-5, 5}, false) {
	}
};

template <class T>
class UnivarSlopesProblem15Benchmark : public UnivarBenchmark<T>
{
public:
	virtual T calcFunc(T point) const {		
		return ::calcFunc(UnivarSlopesProblem15<T>(), std::vector<T>(1, point));
	}

	virtual Interval<T> calcInterval(const Interval<T>& interval) const {
		return ::calcInterval(UnivarSlopesProblem15<Interval<T>>(), std::vector<Interval<T>>(1, interval));					
	}

	virtual ValDer<T> calcGrad(T point) const {
		return ::calcGrad(UnivarSlopesProblem15<ValDer<T>>(), std::vector<T>(1, point));
	}

	virtual IntervalDer<T> calcIntervalGrad(const Interval<T>& interval) const {
		return ::calcIntervalGrad(UnivarSlopesProblem15<IntervalDer<T>>(), std::vector<Interval<T>>(1, interval));
	}

	virtual Series<T> calcDerHighOrder(T point, int order) const {
		return ::calcDerHighOrder(UnivarSlopesProblem15<Series<T>>(), point, order);
	}

	virtual IntervalSeries<T> calcIntervalDerHighOrder(const Interval<T>& interval, int order) const {
		return ::calcIntervalDerHighOrder(UnivarSlopesProblem15<IntervalSeries<T>>(), interval, order);
	} 

   virtual bool isDerExist(T point) const {
  		return UnivarBenchmark<T>::isDerExist(UnivarSlopesProblem15<Series<T>>(), point);
   	}

	virtual T calcSymDiff(T point, int order) const {
		return ::calcSymDiff(UnivarSlopesProblem15<T>(), point, order);
	}

	virtual Interval<T> calcIntervalSymDiff(const Interval<T> &interval, int order) const {
		return ::calcIntervalSymDiff(UnivarSlopesProblem15<Interval<T>>(), interval, order);
   	}

	virtual PwlBound<T> calcPwlBound(T a, T b, int steps) const {
		return ::calcPwlBound(UnivarSlopesProblem15<PwlBound<T>>(), a, b, steps);
	}

	virtual Expr<T> getExpr() const {
		return UnivarSlopesProblem15<T>();
	}

	UnivarSlopesProblem15Benchmark() : UnivarBenchmark<T>("UnivarSlopesProblem15 function",1.0, 1.0,  {-10, 10}, false) {
	}
};


template <class T>
class UnivarSlopesProblem16Benchmark : public UnivarBenchmark<T>
{
public:
	virtual T calcFunc(T point) const {		
		return ::calcFunc(UnivarSlopesProblem16<T>(), std::vector<T>(1, point));
	}

	virtual Interval<T> calcInterval(const Interval<T>& interval) const {
		return ::calcInterval(UnivarSlopesProblem16<Interval<T>>(), std::vector<Interval<T>>(1, interval));					
	}

	virtual ValDer<T> calcGrad(T point) const {
		return ::calcGrad(UnivarSlopesProblem16<ValDer<T>>(), std::vector<T>(1, point));
	}

	virtual IntervalDer<T> calcIntervalGrad(const Interval<T>& interval) const {
		return ::calcIntervalGrad(UnivarSlopesProblem16<IntervalDer<T>>(), std::vector<Interval<T>>(1, interval));
	}

	virtual Series<T> calcDerHighOrder(T point, int order) const {
		return ::calcDerHighOrder(UnivarSlopesProblem16<Series<T>>(), point, order);
	}

	virtual IntervalSeries<T> calcIntervalDerHighOrder(const Interval<T>& interval, int order) const {
		return ::calcIntervalDerHighOrder(UnivarSlopesProblem16<IntervalSeries<T>>(), interval, order);
	} 

   	virtual bool isDerExist(T point) const {
  		return UnivarBenchmark<T>::isDerExist(UnivarSlopesProblem16<Series<T>>(), point);
   	}

	virtual T calcSymDiff(T point, int order) const {
		return ::calcSymDiff(UnivarSlopesProblem16<T>(), point, order);
	}

	virtual Interval<T> calcIntervalSymDiff(const Interval<T> &interval, int order) const {
		return ::calcIntervalSymDiff(UnivarSlopesProblem16<Interval<T>>(), interval, order);
   	}

	virtual PwlBound<T> calcPwlBound(T a, T b, int steps) const {
		return ::calcPwlBound(UnivarSlopesProblem16<PwlBound<T>>(), a, b, steps);
	}

	virtual Expr<T> getExpr() const {
		return UnivarSlopesProblem16<T>();
	}

	UnivarSlopesProblem16Benchmark() : UnivarBenchmark<T>("UnivarSlopesProblem16 function",0, 1.0,  {-10, 10}, false) {
	}
};

template <class T>
class UnivarSlopesProblem17Benchmark : public UnivarBenchmark<T>
{
public:
	virtual T calcFunc(T point) const {		
		return ::calcFunc(UnivarSlopesProblem17<T>(), std::vector<T>(1, point));
	}

	virtual Interval<T> calcInterval(const Interval<T>& interval) const {
		return ::calcInterval(UnivarSlopesProblem17<Interval<T>>(), std::vector<Interval<T>>(1, interval));					
	}

	virtual ValDer<T> calcGrad(T point) const {
		return ::calcGrad(UnivarSlopesProblem17<ValDer<T>>(), std::vector<T>(1, point));
	}

	virtual IntervalDer<T> calcIntervalGrad(const Interval<T>& interval) const {
		return ::calcIntervalGrad(UnivarSlopesProblem17<IntervalDer<T>>(), std::vector<Interval<T>>(1, interval));
	}

	virtual Series<T> calcDerHighOrder(T point, int order) const {
		return ::calcDerHighOrder(UnivarSlopesProblem17<Series<T>>(), point, order);
	}

	virtual IntervalSeries<T> calcIntervalDerHighOrder(const Interval<T>& interval, int order) const {
		return ::calcIntervalDerHighOrder(UnivarSlopesProblem17<IntervalSeries<T>>(), interval, order);
	} 

   virtual bool isDerExist(T point) const {
  		return UnivarBenchmark<T>::isDerExist(UnivarSlopesProblem17<Series<T>>(), point);
   	}

	virtual T calcSymDiff(T point, int order) const {
		return ::calcSymDiff(UnivarSlopesProblem17<T>(), point, order);
	}

	virtual Interval<T> calcIntervalSymDiff(const Interval<T> &interval, int order) const {
		return ::calcIntervalSymDiff(UnivarSlopesProblem17<Interval<T>>(), interval, order);
   	}

	virtual PwlBound<T> calcPwlBound(T a, T b, int steps) const {
		return ::calcPwlBound(UnivarSlopesProblem17<PwlBound<T>>(), a, b, steps);
	}

	virtual Expr<T> getExpr() const {
		return UnivarSlopesProblem17<T>();
	}

	UnivarSlopesProblem17Benchmark() : UnivarBenchmark<T>("UnivarSlopesProblem17 function",0.7136, -32.78,  {-1, 7}, false) {
	}
};

template <class T>
class UnivarSlopesProblem18Benchmark : public UnivarBenchmark<T>
{
public:
	virtual T calcFunc(T point) const {		
		return ::calcFunc(UnivarSlopesProblem18<T>(), std::vector<T>(1, point));
	}

	virtual Interval<T> calcInterval(const Interval<T>& interval) const {
		return ::calcInterval(UnivarSlopesProblem18<Interval<T>>(), std::vector<Interval<T>>(1, interval));					
	}

	virtual ValDer<T> calcGrad(T point) const {
		return ::calcGrad(UnivarSlopesProblem18<ValDer<T>>(), std::vector<T>(1, point));
	}

	virtual IntervalDer<T> calcIntervalGrad(const Interval<T>& interval) const {
		return ::calcIntervalGrad(UnivarSlopesProblem18<IntervalDer<T>>(), std::vector<Interval<T>>(1, interval));
	}

	virtual Series<T> calcDerHighOrder(T point, int order) const {
		return ::calcDerHighOrder(UnivarSlopesProblem18<Series<T>>(), point, order);
	}

	virtual IntervalSeries<T> calcIntervalDerHighOrder(const Interval<T>& interval, int order) const {
		return ::calcIntervalDerHighOrder(UnivarSlopesProblem18<IntervalSeries<T>>(), interval, order);
	} 

   virtual bool isDerExist(T point) const {
  		return UnivarBenchmark<T>::isDerExist(UnivarSlopesProblem18<Series<T>>(), point);
   	}

	virtual T calcSymDiff(T point, int order) const {
		return ::calcSymDiff(UnivarSlopesProblem18<T>(), point, order);
	}

	virtual Interval<T> calcIntervalSymDiff(const Interval<T> &interval, int order) const {
		return ::calcIntervalSymDiff(UnivarSlopesProblem18<Interval<T>>(), interval, order);
   	}

	virtual PwlBound<T> calcPwlBound(T a, T b, int steps) const {
		return ::calcPwlBound(UnivarSlopesProblem18<PwlBound<T>>(), a, b, steps);
	}

	virtual Expr<T> getExpr() const {
		return UnivarSlopesProblem18<T>();
	}

	UnivarSlopesProblem18Benchmark() : UnivarBenchmark<T>("UnivarSlopesProblem18 function",-3, 7,  {-4, 4}, false) {
	}
};

template <class T>
class UnivarSlopesProblem19Benchmark : public UnivarBenchmark<T>
{
public:
	virtual T calcFunc(T point) const {		
		return ::calcFunc(UnivarSlopesProblem19<T>(), std::vector<T>(1, point));
	}

	virtual Interval<T> calcInterval(const Interval<T>& interval) const {
		return ::calcInterval(UnivarSlopesProblem19<Interval<T>>(), std::vector<Interval<T>>(1, interval));					
	}

	virtual ValDer<T> calcGrad(T point) const {
		return ::calcGrad(UnivarSlopesProblem19<ValDer<T>>(), std::vector<T>(1, point));
	}

	virtual IntervalDer<T> calcIntervalGrad(const Interval<T>& interval) const {
		return ::calcIntervalGrad(UnivarSlopesProblem19<IntervalDer<T>>(), std::vector<Interval<T>>(1, interval));
	}

	virtual Series<T> calcDerHighOrder(T point, int order) const {
		return ::calcDerHighOrder(UnivarSlopesProblem19<Series<T>>(), point, order);
	}

	virtual IntervalSeries<T> calcIntervalDerHighOrder(const Interval<T>& interval, int order) const {
		return ::calcIntervalDerHighOrder(UnivarSlopesProblem19<IntervalSeries<T>>(), interval, order);
	} 

   virtual bool isDerExist(T point) const {
  		return UnivarBenchmark<T>::isDerExist(UnivarSlopesProblem19<Series<T>>(), point);
   	}

	virtual T calcSymDiff(T point, int order) const {
		return ::calcSymDiff(UnivarSlopesProblem19<T>(), point, order);
	}

	virtual Interval<T> calcIntervalSymDiff(const Interval<T> &interval, int order) const {
		return ::calcIntervalSymDiff(UnivarSlopesProblem19<Interval<T>>(), interval, order);
   	}

	virtual PwlBound<T> calcPwlBound(T a, T b, int steps) const {
		return ::calcPwlBound(UnivarSlopesProblem19<PwlBound<T>>(), a, b, steps);
	}

	virtual Expr<T> getExpr() const {
		return UnivarSlopesProblem19<T>();
	}

	UnivarSlopesProblem19Benchmark() : UnivarBenchmark<T>("UnivarSlopesProblem19 function",-0.7878, 0.4756,  {-10, 10}, false) {
	}
};

template <class T>
class UnivarSlopesProblem20Benchmark : public UnivarBenchmark<T>
{
public:
	virtual T calcFunc(T point) const {		
		return ::calcFunc(UnivarSlopesProblem20<T>(), std::vector<T>(1, point));
	}

	virtual Interval<T> calcInterval(const Interval<T>& interval) const {
		return ::calcInterval(UnivarSlopesProblem20<Interval<T>>(), std::vector<Interval<T>>(1, interval));					
	}

	virtual ValDer<T> calcGrad(T point) const {
		return ::calcGrad(UnivarSlopesProblem20<ValDer<T>>(), std::vector<T>(1, point));
	}

	virtual IntervalDer<T> calcIntervalGrad(const Interval<T>& interval) const {
		return ::calcIntervalGrad(UnivarSlopesProblem20<IntervalDer<T>>(), std::vector<Interval<T>>(1, interval));
	}

	virtual Series<T> calcDerHighOrder(T point, int order) const {
		return ::calcDerHighOrder(UnivarSlopesProblem20<Series<T>>(), point, order);
	}

	virtual IntervalSeries<T> calcIntervalDerHighOrder(const Interval<T>& interval, int order) const {
		return ::calcIntervalDerHighOrder(UnivarSlopesProblem20<IntervalSeries<T>>(), interval, order);
	} 

   virtual bool isDerExist(T point) const {
  		return UnivarBenchmark<T>::isDerExist(UnivarSlopesProblem20<Series<T>>(), point);
   	}

	virtual T calcSymDiff(T point, int order) const {
		return ::calcSymDiff(UnivarSlopesProblem20<T>(), point, order);
	}

	virtual Interval<T> calcIntervalSymDiff(const Interval<T> &interval, int order) const {
		return ::calcIntervalSymDiff(UnivarSlopesProblem20<Interval<T>>(), interval, order);
   	}

	virtual PwlBound<T> calcPwlBound(T a, T b, int steps) const {
		return ::calcPwlBound(UnivarSlopesProblem20<PwlBound<T>>(), a, b, steps);
	}

	virtual Expr<T> getExpr() const {
		return UnivarSlopesProblem20<T>();
	}

	UnivarSlopesProblem20Benchmark() : UnivarBenchmark<T>("UnivarSlopesProblem20 function",1.0, 0.0,  {-10, 10}, false) {
	}
};






template <class T>
using PtrBenchOneDim = std::shared_ptr<UnivarBenchmark<T>>;

template <class T>
class UnivarBenchmarks : public BenchmarksBase<PtrBenchOneDim<T>>
{
public:
	UnivarBenchmarks() { fill(); }


	virtual void fill()
	{
		this->clear();
		this->add(std::make_shared<Holder1Benchmark<T>>());
		this->add(std::make_shared<Holder2Benchmark<T>>());
		this->add(std::make_shared<Holder3Benchmark<T>>());
		this->add(std::make_shared<Holder4Benchmark<T>>());
		this->add(std::make_shared<Holder5Benchmark<T>>());
		this->add(std::make_shared<Holder6Benchmark<T>>());
		this->add(std::make_shared<Holder7Benchmark<T>>());
		this->add(std::make_shared<Holder8Benchmark<T>>());
		this->add(std::make_shared<Univar1Benchmark<T>>());
		this->add(std::make_shared<Univar2Benchmark<T>>());
		this->add(std::make_shared<Univar4Benchmark<T>>());	
		this->add(std::make_shared<Univar5Benchmark<T>>());
		this->add(std::make_shared<Univar7Benchmark<T>>());
		this->add(std::make_shared<Univar9Benchmark<T>>());
		this->add(std::make_shared<Univar10Benchmark<T>>());
		this->add(std::make_shared<Univar11Benchmark<T>>());
		this->add(std::make_shared<Univar12Benchmark<T>>());
		this->add(std::make_shared<Univar13Benchmark<T>>());
		this->add(std::make_shared<Univar14Benchmark<T>>());
		this->add(std::make_shared<Univar15Benchmark<T>>());
		this->add(std::make_shared<Univar16Benchmark<T>>());
		this->add(std::make_shared<Univar19Benchmark<T>>());
		this->add(std::make_shared<Univar20Benchmark<T>>());	
		this->add(std::make_shared<Univar21Benchmark<T>>());
		this->add(std::make_shared<Lipschitz1Benchmark<T>>());
		this->add(std::make_shared<Lipschitz2Benchmark<T>>());
		this->add(std::make_shared<Lipschitz3Benchmark<T>>());
		this->add(std::make_shared<UnivarGradProblem1Benchmark<T>>());
		this->add(std::make_shared<UnivarGradProblem2Benchmark<T>>());
		this->add(std::make_shared<UnivarGradProblem3Benchmark<T>>());
		this->add(std::make_shared<UnivarGradProblem4Benchmark<T>>());
		this->add(std::make_shared<UnivarGradProblem5Benchmark<T>>());
		this->add(std::make_shared<UnivarGradProblem6Benchmark<T>>());
		this->add(std::make_shared<UnivarGradProblem7Benchmark<T>>());
		this->add(std::make_shared<UnivarGradProblem8Benchmark<T>>());
		this->add(std::make_shared<UnivarGradProblem9Benchmark<T>>());
		this->add(std::make_shared<UnivarGradProblem10Benchmark<T>>());
		this->add(std::make_shared<UnivarGradProblem11Benchmark<T>>());
		this->add(std::make_shared<UnivarGradProblem12Benchmark<T>>());
		this->add(std::make_shared<UnivarGradProblem13Benchmark<T>>());
		this->add(std::make_shared<UnivarGradProblem14Benchmark<T>>());
		this->add(std::make_shared<UnivarGradProblem15Benchmark<T>>());
		this->add(std::make_shared<UnivarGradProblem16Benchmark<T>>());
		this->add(std::make_shared<UnivarGradProblem17Benchmark<T>>());
		this->add(std::make_shared<UnivarGradProblem18Benchmark<T>>());
		this->add(std::make_shared<UnivarGradProblem19Benchmark<T>>());
		this->add(std::make_shared<UnivarGradProblem20Benchmark<T>>());
		this->add(std::make_shared<UnivarGradProblem21Benchmark<T>>());
		this->add(std::make_shared<UnivarGradProblem22Benchmark<T>>());
		this->add(std::make_shared<UnivarGradProblem23Benchmark<T>>());
		this->add(std::make_shared<UnivarGradProblem24Benchmark<T>>());
		this->add(std::make_shared<UnivarGradProblem25Benchmark<T>>());
		this->add(std::make_shared<UnivarGradProblem26Benchmark<T>>());
		this->add(std::make_shared<UnivarGradProblem27Benchmark<T>>());
		this->add(std::make_shared<UnivarGradProblem28Benchmark<T>>());
		this->add(std::make_shared<UnivarGradProblem29Benchmark<T>>());
		this->add(std::make_shared<UnivarGradProblem30Benchmark<T>>());
		this->add(std::make_shared<UnivarGradProblem32Benchmark<T>>());
		this->add(std::make_shared<UnivarGradProblem34Benchmark<T>>());
		this->add(std::make_shared<UnivarGradProblem36Benchmark<T>>());
		this->add(std::make_shared<UnivarGradProblem37Benchmark<T>>());
		this->add(std::make_shared<UnivarGradProblem38Benchmark<T>>());
		this->add(std::make_shared<UnivarGradProblem39Benchmark<T>>());
		this->add(std::make_shared<UnivarGradProblem40Benchmark<T>>());
		this->add(std::make_shared<UnivarNonDiffProblem1Benchmark<T>>());
		this->add(std::make_shared<UnivarNonDiffProblem2Benchmark<T>>());
		this->add(std::make_shared<UnivarNonDiffProblem3Benchmark<T>>());
		this->add(std::make_shared<UnivarNonDiffProblem4Benchmark<T>>());
		this->add(std::make_shared<UnivarNonDiffProblem5Benchmark<T>>());
		this->add(std::make_shared<UnivarNonDiffProblem6Benchmark<T>>());
		this->add(std::make_shared<UnivarNonDiffProblem7Benchmark<T>>());
		this->add(std::make_shared<UnivarNonDiffProblem8Benchmark<T>>());
		this->add(std::make_shared<UnivarNonDiffProblem9Benchmark<T>>());
		this->add(std::make_shared<UnivarNonDiffProblem10Benchmark<T>>());
		this->add(std::make_shared<UnivarNonDiffProblem11Benchmark<T>>());
		this->add(std::make_shared<UnivarNonDiffProblem12Benchmark<T>>());
		this->add(std::make_shared<UnivarNonDiffProblem13Benchmark<T>>());
		this->add(std::make_shared<UnivarNonDiffProblem14Benchmark<T>>());
		this->add(std::make_shared<UnivarNonDiffProblem15Benchmark<T>>());
		this->add(std::make_shared<UnivarNonDiffProblem16Benchmark<T>>());
		this->add(std::make_shared<UnivarNonDiffProblem17Benchmark<T>>());
		this->add(std::make_shared<UnivarNonDiffProblem18Benchmark<T>>());
		this->add(std::make_shared<UnivarNonDiffProblem19Benchmark<T>>());
		this->add(std::make_shared<UnivarNonDiffProblem20Benchmark<T>>());

		this->add(std::make_shared<UnivarSlopesProblem1Benchmark<T>>());
		this->add(std::make_shared<UnivarSlopesProblem2Benchmark<T>>());
		this->add(std::make_shared<UnivarSlopesProblem4Benchmark<T>>());
		this->add(std::make_shared<UnivarSlopesProblem5Benchmark<T>>());
		this->add(std::make_shared<UnivarSlopesProblem6Benchmark<T>>());
		this->add(std::make_shared<UnivarSlopesProblem7Benchmark<T>>());
		this->add(std::make_shared<UnivarSlopesProblem8Benchmark<T>>());
		this->add(std::make_shared<UnivarSlopesProblem9Benchmark<T>>());
		this->add(std::make_shared<UnivarSlopesProblem10Benchmark<T>>());
		this->add(std::make_shared<UnivarSlopesProblem11Benchmark<T>>());
		this->add(std::make_shared<UnivarSlopesProblem12Benchmark<T>>());
		this->add(std::make_shared<UnivarSlopesProblem13Benchmark<T>>());
		this->add(std::make_shared<UnivarSlopesProblem14Benchmark<T>>());
		this->add(std::make_shared<UnivarSlopesProblem15Benchmark<T>>());
		this->add(std::make_shared<UnivarSlopesProblem16Benchmark<T>>());
		this->add(std::make_shared<UnivarSlopesProblem17Benchmark<T>>());
		this->add(std::make_shared<UnivarSlopesProblem18Benchmark<T>>());
		this->add(std::make_shared<UnivarSlopesProblem19Benchmark<T>>());
		this->add(std::make_shared<UnivarSlopesProblem20Benchmark<T>>());
	}
};



#endif


