#ifndef TEST_FUNCS_ONE_DIM_HPP
#define TEST_FUNCS_ONE_DIM_HPP

#include <math.h>
#include <iostream>
#include "expression/expr.hpp"

namespace OPTITEST {

using namespace snowgoose::expression;

	template <class T>
	Expr<T> Holder1()
	{
		Expr<T> x;
		Expr<T> y = (x[0]^6) - 15 * (x[0]^4) + 27 * sqr(x[0]) + 250;
		return y;
	}

	template <class T>
	Expr<T> Holder2()
	{
		Expr<T> x;
		Expr<T> y = (sqr(x[0]) - 5 * x[0] + 6) * (sqr(x[0]) + 1);
		return y;
	}

	template <class T>
	Expr<T> Holder3()
	{
		Expr<T> x;
		Expr<T> a = sqr(x[0] - 2);
		Expr<T> b = 2 * ln(x[0] - 2) + 1;
		Expr<T> y = ifThen(x[0] <= 3, a, b);
		return y;
	}

	template <class T>
	Expr<T> Holder4()
	{
		Expr<T> x;
		Expr<T> a = -sqrt(2 * x[0] - sqr(x[0]));
		Expr<T> b = -sqrt(-sqr(x[0]) + 8 * x[0] - 12);
		Expr<T> y = ifThen(x[0] <=2, a, b);
		return y;
	}

	template <class T>
	Expr<T> Holder5()
	{
		Expr<T> x;
		Expr<T> y = (3 * x[0] - 1.4) * sin(18 * x[0]);
		return y;
	}

	template <class T>
	Expr<T> Holder6()
	{
		Expr<T> x;
		Expr<T> y = 2 * sqr(x[0] - 3) + exp(sqr(x[0])/2);
		return y;
	}

	template <class T>
	Expr<T> Holder7()
	{
		Expr<T> x;
		Iterator i(1, 5);
		Expr<T> k = (Expr<T>)i;
		Expr<T> y = -loopSum(k * sin((k + 1) * x[0] + k), i);
		return y;
	}

	template <class T>
	Expr<T> Holder8()
	{
		Expr<T> x;
		Iterator i(1, 5);
		Expr<T> k = (Expr<T>)i;
		Expr<T> y = -loopSum(k * cos((k + 1) * x[0] + k), i);
		return y;
	}

}
#endif
