#ifndef UNIVARBENCHMARK_BENCHMARK_HPP
#define UNIVARBENCHMARK_BENCHMARK_HPP

#include <iostream>

#include "interval/interval_air.hpp"
#include "derivatives/valder.hpp"
#include "derhighorder/series.hpp"
#include "derivatives/intervalder.hpp"
#include "expression/expr.hpp"
#include "testfuncs/manydim/benchmarks.hpp"

using namespace snowgoose::expression;
using namespace snowgoose::derivative;
using namespace snowgoose::derhighorder;

/**
* Benchmark to describe global optimization problem
*/
template <class T>
class UnivarBenchmark
{
protected:
	const std::string mDesciption;
	const T mGlobMinY;
	const bool mMultiModal;
	T mGlobMinX;
	Bound<T> mBounds;

public:
	/**
	* description of global optimization problem
	* @return string
	*/
	std::string getDesc() const { return mDesciption; }
	/**
	* get multimodal
 	* @return multimodal true/false
	*/
	bool getMulMod() const { return mMultiModal; }	
	/**
	* get expected global minimum
 	* @return expected global minimum
	*/
	T getGlobMinY() const { return mGlobMinY; }
	/**
	* get where is global minimum
 	* @return where is expected global minimum
	*/
	const T getGlobMinX() const { return mGlobMinX; }	
	/**
	* get bounds of box
 	* @return bounds of box
	*/
	const Bound<T> getBounds() const { return mBounds; }
	/**
	* calculate value of function
	* @param point coordinate where value of function will be calculated
 	* @return value of function
	*/
	virtual T calcFunc(T point) const = 0;
	/**
	* calculate interval estimation of function
	* @param interval interval where interval estimation of function will be calculated
 	* @return interval estimation of function
	*/
        virtual Interval<T> calcInterval(const Interval<T>& interval) const = 0;
	/**
	* calculate gradient of function
	* @param point coordinate where derivative of function will be calculated
 	* @return gradient of function
	*/
	virtual ValDer<T> calcGrad(T point) const = 0; 
	/**
	* calculate interval estimation of function gradient
	* @param interval interval where interval estimation of derivative of function will be calculated
 	* @return interval estimation of derivative of function
	*/
	virtual IntervalDer<T> calcIntervalGrad(const Interval<T>& interval) const = 0;
	/**
	* calculate gradient of function
	* @param point coordinate where derivative of function will be calculated
 	* @return gradient of function
	*/
	virtual Series<T> calcDerHighOrder(T point, int order) const = 0; 
        /**
         * Constructor
         * @param desc description of global optimization problem
         * @param globmin expected global minimum
         * @param mMultiModal is multimodal function
         */
	UnivarBenchmark(const std::string& desc, T globMinY, T globMinX, Bound<T> bound, bool mMultiModal = true);

	/**
	* print benchmark
	* @param out out stream
	* @param bm benchmark
 	* @return out stream
	*/
        template <class T2> friend std::ostream& operator<<(std::ostream &out, const UnivarBenchmark<T2> &bm);
};

template <class T> UnivarBenchmark<T>::UnivarBenchmark(const std::string& desc, T globMinX, T globMinY, Bound<T> bound, bool mMultiModal) : 
mDesciption(desc), mGlobMinX(globMinX), mGlobMinY(globMinY) , mBounds(bound), mMultiModal(mMultiModal) {}

template <class T2> std::ostream& operator<<(std::ostream &out, const UnivarBenchmark<T2> &bm)
{
	const char* boollut[2] = {"true", "false"};
	out << "desciption: " << bm.mDesciption << std::endl;
	out << "dimension: " << "1" << std::endl;
	out << "globMinX: " << bm.mGlobMinX << std::endl;
	out << "globMinY: " << bm.mGlobMinY << std::endl;	
	out << "bounds: " << "[ " << bm.mBounds.first << " , " << bm.mBounds.second << " ]" << std::endl;
	out << "multiModal: " << boollut[bm.mMultiModal] << std::endl;
	return out;	
};

#endif


