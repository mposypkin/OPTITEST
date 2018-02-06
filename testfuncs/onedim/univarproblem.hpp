#ifndef UNIVAR_PROBLEM_HPP
#define UNIVAR_PROBLEM_HPP

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
		Expr<T> y = loopSum(k * sin((k + 1) * x[0] + k), i);
		return y;
	}

	template <class T>
	Expr<T> Holder8()
	{
		Expr<T> x;
		Iterator i(1, 5);
		Expr<T> k = (Expr<T>)i;
		Expr<T> y = loopSum(k * cos((k + 1) * x[0] + k), i);
		return y;
	}

	template <class T>
	Expr<T> UnivarProblem1()
	{
		Expr<T> x;
		Expr<T> y = (x[0]^6)/6 - (x[0]^5)*52/25 + (x[0]^4)*39/80 + (x[0]^3)*71/10 - sqr(x[0])*79/20 + 1/10;
		return y;
	}

	template <class T>
	Expr<T> UnivarProblem2()
	{
		Expr<T> x;
		Expr<T> y = -sin(x[0]) - sin(10*x[0]/3);
		return y;
	}

	template <class T>
	Expr<T> UnivarProblem4()
	{
		Expr<T> x;
		Expr<T> y = (16*sqr(x[0]) - 24*x[0] + 5) * exp(-x[0]);
		return y;
	}

	template <class T>
	Expr<T> UnivarProblem5()
	{
		Expr<T> x;
		Expr<T> y = (-3*x[0] + 1.4)*sin(18*x[0]);
		return y;
	}

	template <class T>
	Expr<T> UnivarProblem7()
	{
		Expr<T> x;
		Expr<T> y = sin(x[0]) + sin(10*x[0]/3) + ln(x[0]) - 0.84*x[0] + 3;
		return y;
	}

	template <class T>
	Expr<T> UnivarProblem9()
	{
		Expr<T> x;
		Expr<T> y = -sin(x[0]) - sin(2*x[0]/3);
		return y;
	}

	template <class T>
	Expr<T> UnivarProblem10()
	{
		Expr<T> x;
		Expr<T> y = x[0]*sin(x[0]);
		return y;
	}

	template <class T>
	Expr<T> UnivarProblem11()
	{
		Expr<T> x;
		Expr<T> y = -2*cos(x[0]) - cos(2*x[0]);
		return y;
	}

	template <class T>
	Expr<T> UnivarProblem12()
	{
		Expr<T> x;
		Expr<T> y = -sin(x[0])^3 - cos(x[0])^3;
		return y;
	}

	template <class T>
	Expr<T> UnivarProblem13()
	{
		Expr<T> x;
		Expr<T> y = (x[0]^(2/3)) - (sqr(x[0])-1)^(1/3);
		return y;
	}

	template <class T>
	Expr<T> UnivarProblem14()
	{
		Expr<T> x;
		Expr<T> y = exp(-x[0]) * sin(2 * M_PI * x[0]);
		return y;
	}

	template <class T>
	Expr<T> UnivarProblem15()
	{
		Expr<T> x;
		Expr<T> y = (-sqr(x[0]) + 5*x[0] - 6)/(sqr(x[0]) + 1);
		return y;
	}

	template <class T>
	Expr<T> UnivarProblem16()
	{
		Expr<T> x;
		Expr<T> y = -2*(sqr(x[0] - 3)) - eps(-0.5*sqr(x[0]));
		return y;
	}

	template <class T>
	Expr<T> UnivarProblem19()
	{
		Expr<T> x;
		Expr<T> y = x[0] - sin(3*x[0]) + 1;
		return y;
	}

	template <class T>
	Expr<T> UnivarProblem20()
	{
		Expr<T> x;
		Expr<T> y = eps(-sqr(x[0]))*(x[0] - sin(x[0]));
		return y;
	}

	template <class T>
	Expr<T> UnivarProblem21()
	{
		Expr<T> x, a;
		Expr<T> y = ifThen(x[0] <= 0.5, 2 * x[0], \
		ifThen(x[0] <= 2.5, 2 - 2 * x[0],  \
		ifThen(x[0] <= 4.0, 2 * x[0] - 8,  \
		ifThen(x[0] <= 4.5, 8 - 2 * x[0], \
		ifThen(x[0] <= 5.0, 2 * x[0] - 10, \
		ifThen(x[0] <= 5.5, 10 - 2 * x[0], \
		ifThen(x[0] <= 6.0, 2 * x[0] - 12, \
		ifThen(x[0] <= 6.5, 12 - 2 * x[0], \
		ifThen(x[0] <= 7.5, 14 - 2 * x[0], \
		ifThen(x[0] <= 8.0, 2 * x[0] - 16, a ))))))))));		
		return y;
	}

	template <class T>
	Expr<T> LipschitzProblem1()
	{
		Expr<T> x;
		Expr<T> y = -(x[0]^6)/6 + (x[0]^5)*52/25 - (x[0]^4)*39/80 - (x[0]^3)*71/10 + sqr(x[0])*79/20 + x[0] - 1/10;
		return y;
	}

	template <class T>
	Expr<T> LipschitzProblem2()
	{
		Expr<T> x;
		Expr<T> y = (x[0]+sin(x[0])) * exp(-sqr(x[0]));
		return y;
	}

	template <class T>
	Expr<T> LipschitzProblem3()
	{
		Expr<T> x;
		Expr<T> y = -ln(x[0]) + 0.84*x[0] - 3;
		return y;
	}

	template <class T>
	Expr<T> UnivarGradProblem1()
	{
		Expr<T> x;
		Expr<T> y = exp(-3 * x[0]) - (sin(x[0])^3);
		return y;
	}

	template <class T>
	Expr<T> UnivarGradProblem2()
	{
		Expr<T> x;
		Iterator i(1, 5);
		Expr<T> k = (Expr<T>)i;
		Expr<T> y = loopSum(-cos((k+1)*x[0]) + 4, i);
		return y;
	}
	
	template <class T>
	Expr<T> UnivarGradProblem3()
	{
		Expr<T> x;
		Expr<T> y = sqr(x[0] - sqr(x[0])) + sqr(x[0]-1);
		return y;
	}

	template <class T>
	Expr<T> UnivarGradProblem4()
	{
		Expr<T> x;
		Expr<T> y = (3*x[0] - 1.4) * sin(18*x[0]) + 1.7;
		return y;
	}

	template <class T>
	Expr<T> UnivarGradProblem5()
	{
		Expr<T> x;
		Expr<T> y = 2*sqr(x[0]) - 3/100*exp(-sqr(200*(x[0] - 0.0675)));
		return y;
	}

	template <class T>
	Expr<T> UnivarGradProblem6()
	{
		Expr<T> x;
		Expr<T> y = cos(x[0])-sin(5*x[0])+1;
		return y;
	}

	template <class T>
	Expr<T> UnivarGradProblem7()
	{
		Expr<T> x;
		Expr<T> y = -x[0]-sin(3*x[0])+1.6;
		return y;
	}

	template <class T>
	Expr<T> UnivarGradProblem8()
	{
		Expr<T> x;
		Expr<T> y = x[0]+sin(5*x[0]);
		return y;
	}

	template <class T>
	Expr<T> UnivarGradProblem9()
	{
		Expr<T> x;
		Expr<T> y = -eps(-x[0])*sin(2*M_PI*x[0])+1;
		return y;
	}

	template <class T>
	Expr<T> UnivarGradProblem10()
	{
		Expr<T> x;
		Expr<T> y = -eps(-x[0])*sin(2*M_PI*x[0]);
		return y;
	}

	template <class T>
	Expr<T> UnivarGradProblem11()
	{
		Expr<T> x;
		Expr<T> y = -x[0]+sin(3*x[0])+1;
		return y;
	}

	template <class T>
	Expr<T> UnivarGradProblem12()
	{
		Expr<T> x;
		Expr<T> y = x[0]*sin(x[0])+sin(10*x[0]/3)+ln(x[0])-0.84*x[0]+1.3;
		return y;
	}

	template <class T>
	Expr<T> UnivarGradProblem13()
	{
		Expr<T> x;
		Expr<T> y = sin(x[0])+sin(10*x[0]/3)+ln(x[0])-0.84*x[0];
		return y;
	}

	template <class T>
	Expr<T> UnivarGradProblem14()
	{
		Expr<T> x;
		Expr<T> y = ln(3*x[0])*ln(2*x[0])-0.1;
		return y;
	}

	template <class T>
	Expr<T> UnivarGradProblem15()
	{
		Expr<T> x;
		Iterator i(0, 5);
		Expr<T> k = (Expr<T>)i;
		Expr<T> y = loopSum(k*cos((k+1)*x[0]+k) + 12, i);
		return y;
	}

	template <class T>
	Expr<T> UnivarGradProblem16()
	{
		Expr<T> x;
		Iterator i(1, 5);
		Expr<T> k = (Expr<T>)i;
		Expr<T> y = -loopSum(k*sin((k+1)*x[0]+k) + 3, i);
		return y;
	}

	template <class T>
	Expr<T> UnivarGradProblem17()
	{
		Expr<T> x;
		Expr<T> y = sqr(sin(1+(x[0]-1)/4)) + sqr((x-1)/4);
		return y;
	}

	template <class T>
	Expr<T> UnivarGradProblem18()
	{
		Expr<T> x;
		Expr<T> y = sqrt(x[0])*sqr(sin(x[0]));
		return y;
	}

	template <class T>
	Expr<T> UnivarGradProblem19()
	{
		Expr<T> x;
		Expr<T> y = sqr(x[0]) - cos(18*x[0]);
		return y;
	}

	template <class T>
	Expr<T> UnivarGradProblem20()
	{
		Expr<T> x;
		Expr<T> y = exp(sqr(x[0]));
		return y;
	}

	template <class T>
	Expr<T> UnivarGradProblem21()
	{
		Expr<T> x;
		Expr<T> y = sqr(x[0])/20-cos(x[0])+2;
		return y;
	}

	template <class T>
	Expr<T> UnivarGradProblem22()
	{
		Expr<T> x;
		Expr<T> y = cos(x[0])+2*cos(2*x[0])*exp(-x[0]);
		return y;
	}

	template <class T>
	Expr<T> UnivarGradProblem23()
	{
		Expr<T> x;
		Expr<T> y = (x[0]+sin(x[0]))*exp(-sqr(x));
		return y;
	}

	template <class T>
	Expr<T> UnivarGradProblem24()
	{
		Expr<T> x;
		Expr<T> y = 2*sin(x[0])*exp(-x[0]);
		return y;
	}

	template <class T>
	Expr<T> UnivarGradProblem25()
	{
		Expr<T> x;
		Expr<T> y = 2*cos(x[0])+cos(2*x[0])+5;
		return y;
	}

	template <class T>
	Expr<T> UnivarGradProblem26()
	{
		Expr<T> x;
		Expr<T> y = exp(sin(3*x[0]));
		return y;
	}

	template <class T>
	Expr<T> UnivarGradProblem27()
	{
		Expr<T> x;
		Expr<T> y = sin(x[0])*cos(x[0])-1.5*sqr(sin(x[0]))+1.2;
		return y;
	}

	template <class T>
	Expr<T> UnivarGradProblem28()
	{
		Expr<T> x;
		Expr<T> y = sin(x[0]);
		return y;
	}

	template <class T>
	Expr<T> UnivarGradProblem29()
	{
		Expr<T> x;
		Expr<T> y = 2*sqr(x[0]-3)-exp(x[0]/2)+5;
		return y;
	}

	template <class T>
	Expr<T> UnivarGradProblem30()
	{
		Expr<T> x;
		Expr<T> y = -exp(sin(3*x[0]))+2;
		return y;
	}

	template <class T>
	Expr<T> UnivarGradProblem32()
	{
		Expr<T> x;
		Expr<T> y = sin(1/x[0]);
		return y;
	}

	template <class T>
	Expr<T> UnivarGradProblem34()
	{
		Expr<T> x;
		Expr<T> y = (sqr(x[0])-5*x[0]+6)/(sqr(x[0])+1)-0.5;
		return y;
	}

	template <class T>
	Expr<T> UnivarGradProblem36()
	{
		Expr<T> x;
		Expr<T> y = ((x[0]+1)^3)/(sqr(x[0])-7.1);
		return y;
	}

	template <class T>
	Expr<T> UnivarGradProblem37()
	{
		Expr<T> x;
		Expr<T> y = (x[0]^4)-12*(x[0]^3)+47*sqr(x[0])-60*x[0]-20*exp(-x[0]);
		return y;
	}

	template <class T>
	Expr<T> UnivarGradProblem38()
	{
		Expr<T> x;
		Expr<T> y = (x[0]^6)-15*(x[0]^4)+27*sqr(x[0])+250;
		return y;
	}

	template <class T>
	Expr<T> UnivarGradProblem39()
	{
		Expr<T> x;
		Expr<T> y = (x[0]^4)-10*(x[0]^3)+35*sqr(x[0])-50*x[0]+24;
		return y;
	}

	template <class T>
	Expr<T> UnivarGradProblem40()
	{
		Expr<T> x;
		Expr<T> y = 24*(x[0]^4)-142*(x[0]^3)+303*sqr(x[0])-276*x[0]+3;
		return y;
	}

	template <class T>
	Expr<T> UnivarNonDiffProblem1()
	{
		Expr<T> x;
		Expr<T> y = x[0]+abs(sin(x[0])+cos(x[0]));
		return y;
	}

	template <class T>
	Expr<T> UnivarNonDiffProblem2()
	{
		Expr<T> x;
		Expr<T> y = -abs(sin(x[0])+cos(x[0])) +1.3;
		return y;
	}

	template <class T>
	Expr<T> UnivarNonDiffProblem3()
	{
		Expr<T> x;
		Iterator i(1, 5);
		Expr<T> k = (Expr<T>)i;
		Expr<T> y = -loopSum(k * sin((k + 1) * x[0] + k) + 3, i);
		return y;
	}

	template <class T>
	Expr<T> UnivarNonDiffProblem4()
	{
		Expr<T> x;
		Expr<T> y = ifThen(x[0] <= 3*M_PI/2, cos(5*x[0]), cos(x[0]));
		return y;
	}

	template <class T>
	Expr<T> UnivarNonDiffProblem5()
	{
		Expr<T> x;
		Expr<T> y = cos(x[0]) - sin(5*x[0]) + 1;
		return y;
	}


	template <class T>
	Expr<T> UnivarNonDiffProblem6()
	{
		Expr<T> x;
		Expr<T> y = ifThen(x[0] <= M_PI, sin(x[0]), sin(5*x[0]));
		return y;
	}

	template <class T>
	Expr<T> UnivarNonDiffProblem7()
	{
		Expr<T> x;
		Expr<T> y = ln(3*x[0]) * ln(2*x[0]) - 1;
		return y;
	}

	template <class T>
	Expr<T> UnivarNonDiffProblem8()
	{
		Expr<T> x;
		Iterator i(1, 5);
		Expr<T> k = (Expr<T>)i;
		Expr<T> y = loopSum(-cos((k + 1) * x[0]), i);
		return y;
	}

	template <class T>
	Expr<T> UnivarNonDiffProblem9()
	{
		Expr<T> x;
		Expr<T> y = ifThen(x[0] < 3*M_PI/2, cos(x[0]), \
                            ifThen(x[0] <= 5*M_PI/2, cos(5*x[0]), cos(x[0])) \
                            );
		return y;
	}

	template <class T>
	Expr<T> UnivarNonDiffProblem10()
	{
		Expr<T> x;
		Expr<T> a = -x[0] + 3;
		Expr<T> b = -8*sqr(x[0])/9 + 8*x[0] - 16;
		Expr<T> c = x[0] - 6;

		Expr<T> y = ifThen(x[0] <= 3, a , \
                            ifThen(x[0] <= 6, b, c) \
                            );
		return y;
	}

	template <class T>
	Expr<T> UnivarNonDiffProblem11()
	{
		Expr<T> x;
		Expr<T> a = sqr(x[0]) + 0.5;
		Expr<T> b = 5*sin(2*x[0]*M_PI) + 1.5;
		Expr<T> c = sqr(x[0]) - 8*x[0] + 16;

		Expr<T> y = ifThen(x[0] <= 1, a , \
                            ifThen(x[0] <= 3, b, c) \
                            );
		return y;
	}

	template <class T>
	Expr<T> UnivarNonDiffProblem12()
	{
		Expr<T> x;
		Expr<T> y = abs(sin(x[0]) * sin(x[0]) * sin(x[0]) + cos(x[0]) * cos(x[0]) * cos(x[0])) + 0.1;
		return y;
	}

	template <class T>
	Expr<T> UnivarNonDiffProblem13()
	{
		Expr<T> x;
		Expr<T> y = ifThen(x[0] <= 0, sin(3*x[0]) + 5, 7*sqr(x[0])-14*x[0]+5);
		return y;
	}

	template <class T>
	Expr<T> UnivarNonDiffProblem14()
	{
		Expr<T> x;
		Expr<T> y = -exp(-x[0])*sin(2*M_PI*x[0])+0.5;
		return y;
	}

	template <class T>
	Expr<T> UnivarNonDiffProblem15()
	{
		Expr<T> x;
		Expr<T> a = sqr(x[0])-5*x[0]+6;
		Expr<T> b = sqr(x[0]) + 1;
		Expr<T> y = a/b  - 0.5;
		return y;
	}

	template <class T>
	Expr<T> UnivarNonDiffProblem16()
	{
		Expr<T> x;
		Expr<T> y = x[0]*abs(sin(x[0]))+6;
		return y;
	}

	template <class T>
	Expr<T> UnivarNonDiffProblem17()
	{
		Expr<T> x;
		Expr<T> y = abs(x[0]*sin(x[0]))-1.5;
		return y;
	}


	template <class T>
	Expr<T> UnivarNonDiffProblem18()
	{
		Expr<T> x;
		Expr<T> y = -exp(-sin(3*x[0]))+1;
		return y;
	}

	template <class T>
	Expr<T> UnivarNonDiffProblem19()
	{
		Expr<T> x;
		Expr<T> y = -x[0] + sin(3*x[0])+1;
		return y;
	}

	template <class T>
	Expr<T> UnivarNonDiffProblem20()
	{
		Expr<T> x;
		Expr<T> y = ifThen(sin(x[0]) > cos(x[0]), sin(x[0]), cos(x[0]));
		return y;
	}


}
#endif
