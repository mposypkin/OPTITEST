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
		Expr<T> y = pow(x[0],6) - 15.0 * pow(x[0],4) + 27.0 * sqr(x[0]) + 250.0;
		return y;
	}

	template <class T>
	Expr<T> Holder2()
	{
		Expr<T> x;
		Expr<T> y = (sqr(x[0]) - 5.0 * x[0] + 6.0) * (sqr(x[0]) + 1.0);
		return y;
	}

	template <class T>
	Expr<T> Holder3()
	{
		Expr<T> x;
		Expr<T> a = sqr(x[0] - 2.0);
		Expr<T> b = 2.0 * ln(x[0] - 2.0) + 1.0;
		Expr<T> y = ifThen(x[0] <= 3.0, a, b);
		return y;
	}

	template <class T>
	Expr<T> Holder4()
	{
		Expr<T> x;
		Expr<T> a = -sqrt(2.0 * x[0] - sqr(x[0]));
		Expr<T> b = -sqrt(-sqr(x[0]) + 8.0 * x[0] - 12.0);
		Expr<T> y = ifThen(x[0] <=2.0, a, b);
		return y;
	}

	template <class T>
	Expr<T> Holder5()
	{
		Expr<T> x;
		Expr<T> y = (3.0 * x[0] - 1.4) * sin(18.0 * x[0]);
		return y;
	}

	template <class T>
	Expr<T> Holder6()
	{
		Expr<T> x;
		Expr<T> y = 2.0 * sqr(x[0] - 3.0) + exp(sqr(x[0])/2.0);
		return y;
	}


	template <class T>
	Expr<T> Holder7()
	{
		Expr<T> x;
		int k=1;
		Expr<T> y = k * sin((k + 1.0) * x[0] + k);
      for(k=2; k<=5; k++)
			y = y + k * sin((k + 1.0) * x[0] + k);
		return y;
	}

	template <class T>
	Expr<T> Holder8()
	{
		Expr<T> x;
		int k=1;
		Expr<T> y = k * cos((k + 1.0) * x[0] + k);
      for(k=2; k<=5; k++)
			y = y + k * cos((k + 1.0) * x[0] + k);
		return y;
	}

	template <class T>
	Expr<T> UnivarProblem1()
	{
		Expr<T> x;
		Expr<T> y = pow(x[0],6)/6.0 - pow(x[0],5)*52.0/25.0 + pow(x[0],4)*39.0/80.0 + pow(x[0],3)*71.0/10.0 - sqr(x[0])*79.0/20.0 + 1.0/10.0;
		return y;
	}

	template <class T>
	Expr<T> UnivarProblem2()
	{
		Expr<T> x;
		Expr<T> y = -sin(x[0]) - sin(10.0*x[0]/3.0);
		return y;
	}

	template <class T>
	Expr<T> UnivarProblem4()
	{
		Expr<T> x;
		Expr<T> y = (16.0*sqr(x[0]) - 24.0*x[0] + 5.0) * exp(-x[0]);
		return y;
	}

	template <class T>
	Expr<T> UnivarProblem5()
	{
		Expr<T> x;
		Expr<T> y = (-3.0*x[0] + 1.4)*sin(18.0*x[0]);
		return y;
	}

	template <class T>
	Expr<T> UnivarProblem7()
	{
		Expr<T> x;
		Expr<T> y = sin(x[0]) + sin(10.0*x[0]/3) + ln(x[0]) - 0.84*x[0] + 3.0;
		return y;
	}

	template <class T>
	Expr<T> UnivarProblem9()
	{
		Expr<T> x;
		Expr<T> y = -sin(x[0]) - sin(2.0*x[0]/3.0);
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
		Expr<T> y = -2.0*cos(x[0]) - cos(2.0*x[0]);
		return y;
	}

	template <class T>
	Expr<T> UnivarProblem12()
	{
		Expr<T> x;
		Expr<T> y = -pow(sin(x[0]),3) - pow(cos(x[0]),3);
		return y;
	}

	template <class T>
	Expr<T> UnivarProblem13()
	{
		Expr<T> x;
		Expr<T> y = pow(x[0], (2.0/3.0)) - pow(sqr(x[0]) - 1.0, 1.0/3.0);
		return y;
	}

	template <class T>
	Expr<T> UnivarProblem14()
	{
		Expr<T> x;
		Expr<T> y = exp(-x[0]) * sin(2.0 * M_PI * x[0]);
		return y;
	}

	template <class T>
	Expr<T> UnivarProblem15()
	{
		Expr<T> x;
		Expr<T> y = (-sqr(x[0]) + 5.0*x[0] - 6.0)/(sqr(x[0]) + 1.0);
		return y;
	}

	template <class T>
	Expr<T> UnivarProblem16()
	{
		Expr<T> x;
		Expr<T> y = -2.0*(sqr(x[0] - 3.0)) - exp(-0.5*sqr(x[0]));
		return y;
	}

	template <class T>
	Expr<T> UnivarProblem19()
	{
		Expr<T> x;
		Expr<T> y = x[0] - sin(3*x[0]) + 1.0;
		return y;
	}

	template <class T>
	Expr<T> UnivarProblem20()
	{
		Expr<T> x;
		Expr<T> y = exp(-sqr(x[0]))*(x[0] - sin(x[0]));
		return y;
	}

	template <class T>
	Expr<T> UnivarProblem21()
	{
		Expr<T> x, a = 0.0;
		Expr<T> y = ifThen(x[0] <= 0.5, 2.0 * x[0], \
		ifThen(x[0] <= 2.5, 2.0 - 2.0 * x[0],  \
		ifThen(x[0] <= 4.0, 2.0 * x[0] - 8.0,  \
		ifThen(x[0] <= 4.5, 8.0 - 2.0 * x[0], \
		ifThen(x[0] <= 5.0, 2.0 * x[0] - 10.0, \
		ifThen(x[0] <= 5.5, 10.0 - 2.0 * x[0], \
		ifThen(x[0] <= 6.0, 2.0 * x[0] - 12.0, \
		ifThen(x[0] <= 6.5, 12.0 - 2.0 * x[0], \
		ifThen(x[0] <= 7.5, 14.0 - 2.0 * x[0], \
		ifThen(x[0] <= 8.0, 2.0 * x[0] - 16.0, a ))))))))));		
		return y;
	}

	template <class T>
	Expr<T> LipschitzProblem1()
	{
		Expr<T> x;
		Expr<T> y = -pow(x[0],6)/6.0 + pow(x[0],5)*52.0/25.0 - pow(x[0],4)*39.0/80.0 - pow(x[0],3)*71.0/10.0 + sqr(x[0])*79.0/20.0 + x[0] - 1.0/10.0;
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
		Expr<T> y = -ln(x[0]) + 0.84*x[0] - 3.0;
		return y;
	}

	template <class T>
	Expr<T> UnivarGradProblem1()
	{
		Expr<T> x;
		Expr<T> y = exp(-3.0 * x[0]) - pow(sin(x[0]),3);
		return y;
	}

	template <class T>
	Expr<T> UnivarGradProblem2()
	{
		Expr<T> x;
		int k=1;
		Expr<T> y = -cos((k+1.0)*x[0]) + 4.0;
      for(k=2; k<=5; k++)
			y = y -cos((k+1.0)*x[0]) + 4.0;
		return y;
	}
	
	template <class T>
	Expr<T> UnivarGradProblem3()
	{
		Expr<T> x;
		Expr<T> y = sqr(x[0] - sqr(x[0])) + sqr(x[0]-1.0);
		return y;
	}

	template <class T>
	Expr<T> UnivarGradProblem4()
	{
		Expr<T> x;
		Expr<T> y = (3.0*x[0] - 1.4) * sin(18.0*x[0]) + 1.7;
		return y;
	}

	template <class T>
	Expr<T> UnivarGradProblem5()
	{
		Expr<T> x;
		Expr<T> y = 2.0*sqr(x[0]) - 3.0/100.0*exp(-sqr(200.0*(x[0] - 0.0675)));
		return y;
	}

	template <class T>
	Expr<T> UnivarGradProblem6()
	{
		Expr<T> x;
		Expr<T> y = cos(x[0])-sin(5.0*x[0])+1.0;
		return y;
	}

	template <class T>
	Expr<T> UnivarGradProblem7()
	{
		Expr<T> x;
		Expr<T> y = -x[0]-sin(3.0*x[0])+1.6;
		return y;
	}

	template <class T>
	Expr<T> UnivarGradProblem8()
	{
		Expr<T> x;
		Expr<T> y = x[0]+sin(5.0*x[0]);
		return y;
	}

	template <class T>
	Expr<T> UnivarGradProblem9()
	{
		Expr<T> x;
		Expr<T> y = -exp(-x[0])*sin(2.0*M_PI*x[0])+1.0;
		return y;
	}

	template <class T>
	Expr<T> UnivarGradProblem10()
	{
		Expr<T> x;
		Expr<T> y = -exp(-x[0])*sin(2.0*M_PI*x[0]);
		return y;
	}

	template <class T>
	Expr<T> UnivarGradProblem11()
	{
		Expr<T> x;
		Expr<T> y = -x[0]+sin(3.0*x[0])+1.0;
		return y;
	}

	template <class T>
	Expr<T> UnivarGradProblem12()
	{
		Expr<T> x;
		Expr<T> y = x[0]*sin(x[0])+sin(10*x[0]/3.0)+ln(x[0])-0.84*x[0]+1.3;
		return y;
	}

	template <class T>
	Expr<T> UnivarGradProblem13()
	{
		Expr<T> x;
		Expr<T> y = sin(x[0])+sin(10.0*x[0]/3.0)+ln(x[0])-0.84*x[0];
		return y;
	}

	template <class T>
	Expr<T> UnivarGradProblem14()
	{
		Expr<T> x;
		Expr<T> y = ln(3.0*x[0])*ln(2.0*x[0])-0.1;
		return y;
	}

	template <class T>
	Expr<T> UnivarGradProblem15()
	{
		Expr<T> x;
		int k = 1;
		Expr<T> y = k*cos((k+1.0)*x[0]+k) + 12.0;
      for(k=2; k<=5; k++)
			y = y + k*cos((k+1.0)*x[0]+k) + 12.0;
		return y;
	}

	template <class T>
	Expr<T> UnivarGradProblem16()
	{
		Expr<T> x;
		int k = 1;
		Expr<T> y = k*sin((k+1.0)*x[0]+k) + 3.0;
      for(k=2; k<=5; k++)
			y = y + k*sin((k+1.0)*x[0]+k) + 3.0;
		return y;
	}

	template <class T>
	Expr<T> UnivarGradProblem17()
	{
		Expr<T> x;
		Expr<T> y = sqr(sin(1.0+(x[0]-1.0)/4.0)) + sqr((x[0]-1.0)/4.0);
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
		Expr<T> y = sqr(x[0])/20.0-cos(x[0])+2.0;
		return y;
	}

	template <class T>
	Expr<T> UnivarGradProblem22()
	{
		Expr<T> x;
		Expr<T> y = cos(x[0])+2.0*cos(2.0*x[0])*exp(-x[0]);
		return y;
	}

	template <class T>
	Expr<T> UnivarGradProblem23()
	{
		Expr<T> x;
		Expr<T> y = (x[0]+sin(x[0]))*exp(-sqr(x[0]));
		return y;
	}

	template <class T>
	Expr<T> UnivarGradProblem24()
	{
		Expr<T> x;
		Expr<T> y = 2.0*sin(x[0])*exp(-x[0]);
		return y;
	}

	template <class T>
	Expr<T> UnivarGradProblem25()
	{
		Expr<T> x;
		Expr<T> y = 2.0*cos(x[0])+cos(2.0*x[0])+5.0;
		return y;
	}

	template <class T>
	Expr<T> UnivarGradProblem26()
	{
		Expr<T> x;
		Expr<T> y = exp(sin(3.0*x[0]));
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
		Expr<T> y = 2.0*sqr(x[0]-3.0)-exp(x[0]/2.0)+5.0;
		return y;
	}

	template <class T>
	Expr<T> UnivarGradProblem30()
	{
		Expr<T> x;
		Expr<T> y = -exp(sin(3.0*x[0]))+2.0;
		return y;
	}

	template <class T>
	Expr<T> UnivarGradProblem32()
	{
		Expr<T> x;
		Expr<T> y = sin(1.0/x[0]);
		return y;
	}

	template <class T>
	Expr<T> UnivarGradProblem34()
	{
		Expr<T> x;
		Expr<T> y = (sqr(x[0])-5.0*x[0]+6.0)/(sqr(x[0])+1.0)-0.5;
		return y;
	}

	template <class T>
	Expr<T> UnivarGradProblem36()
	{
		Expr<T> x;
		Expr<T> y = pow(x[0]+1.0,3)/(sqr(x[0])-7.1);
		return y;
	}

	template <class T>
	Expr<T> UnivarGradProblem37()
	{
		Expr<T> x;
		Expr<T> y = pow(x[0],4)-12.0*pow(x[0],3)+47.0*sqr(x[0])-60.0*x[0]-20.0*exp(-x[0]);
		return y;
	}

	template <class T>
	Expr<T> UnivarGradProblem38()
	{
		Expr<T> x;
		Expr<T> y = pow(x[0],6)-15.0*pow(x[0],4)+27.0*sqr(x[0])+250.0;
		return y;
	}

	template <class T>
	Expr<T> UnivarGradProblem39()
	{
		Expr<T> x;
		Expr<T> y = pow(x[0],4)-10.0*pow(x[0],3)+35.0*sqr(x[0])-50.0*x[0]+24.0;
		return y;
	}

	template <class T>
	Expr<T> UnivarGradProblem40()
	{
		Expr<T> x;
		Expr<T> y = 24.0*pow(x[0],4)-142.0*pow(x[0],3)+303.0*sqr(x[0])-276.0*x[0]+3.0;
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
		Expr<T> y = -abs(sin(x[0])+cos(x[0])) + 1.3;
		return y;
	}

	template <class T>
	Expr<T> UnivarNonDiffProblem3()
	{
		Expr<T> x;
		int k=1;
		Expr<T> y = k * sin((k + 1.0) * x[0] + k) + 3.0;
      for(k=2; k<=5; k++)
			y = y + k * sin((k + 1.0) * x[0] + k) + 3.0;
		return y;
	}

	template <class T>
	Expr<T> UnivarNonDiffProblem4()
	{
		Expr<T> x;
		Expr<T> y = ifThen(x[0] <= 3.0*M_PI/2.0, cos(5.0*x[0]), cos(x[0]));
		return y;
	}

	template <class T>
	Expr<T> UnivarNonDiffProblem5()
	{
		Expr<T> x;
		Expr<T> y = cos(x[0]) - sin(5.0*x[0]) + 1.0;
		return y;
	}


	template <class T>
	Expr<T> UnivarNonDiffProblem6()
	{
		Expr<T> x;
		Expr<T> y = ifThen(x[0] <= M_PI, sin(x[0]), sin(5.0*x[0]));
		return y;
	}

	template <class T>
	Expr<T> UnivarNonDiffProblem7()
	{
		Expr<T> x;
		Expr<T> y = ln(3.0*x[0]) * ln(2.0*x[0]) - 1.0;
		return y;
	}

	template <class T>
	Expr<T> UnivarNonDiffProblem8()
	{
		Expr<T> x;
		int k=1;
		Expr<T> y = cos((k + 1.0) * x[0]);
      for(k=2; k<=5; k++)
			y = y - cos((k + 1.0) * x[0]);
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
		Expr<T> y = ifThen(x[0] <= 0, sin(3*x[0]) + 5, 7.0 * sqr(x[0]) - 14.0 * x[0]+5);
		return y;
	}

	template <class T>
	Expr<T> UnivarNonDiffProblem14()
	{
		Expr<T> x;
		Expr<T> y = -exp(-x[0])*sin(2*M_PI*x[0]) + 0.5;
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
		Expr<T> y = x[0]*abs(sin(x[0])) + 6.0;
		return y;
	}

	template <class T>
	Expr<T> UnivarNonDiffProblem17()
	{
		Expr<T> x;
		Expr<T> y = abs(x[0]*sin(x[0])) - 1.5;
		return y;
	}


	template <class T>
	Expr<T> UnivarNonDiffProblem18()
	{
		Expr<T> x;
		Expr<T> y = -exp(-sin(3.0 * x[0])) + 1.0;
		return y;
	}

	template <class T>
	Expr<T> UnivarNonDiffProblem19()
	{
		Expr<T> x;
		Expr<T> y = -x[0] + sin(3.0 * x[0]) + 1.0;
		return y;
	}

	template <class T>
	Expr<T> UnivarNonDiffProblem20()
	{
		Expr<T> x;
		Expr<T> y = ifThen(sin(x[0]) > cos(x[0]), sin(x[0]), cos(x[0]));
		return y;
	}

	template <class T>
	Expr<T> UnivarSlopesProblem1()
	{
		Expr<T> x;
		Expr<T> y = (x[0] + sin(x[0])) * exp(-sqr(x[0]));
		return y;
	}

	template <class T>
	Expr<T> UnivarSlopesProblem2()
	{
		Expr<T> x;
		int k=1;
		Expr<T> y = k * sin((k + 1) * x[0] + k);
      for(k=2; k<=5; k++)
			y = y + k * sin((k + 1) * x[0] + k);
		return -y;
	}

	template <class T>
	Expr<T> UnivarSlopesProblem4()
	{
		Expr<T> x;
		Expr<T> y = exp(-3*x[0]) - pow(sin(x[0]), 3);
		return y;
	}

	template <class T>
	Expr<T> UnivarSlopesProblem5()
	{
		Expr<T> x;
		Expr<T> y = sin(1.0/x[0]);
		return y;
	}

	template <class T>
	Expr<T> UnivarSlopesProblem6()
	{
		Expr<T> x;
		Expr<T> y = pow(x[0], 4) - 10.0 * pow(x[0], 3) + 35.0 * sqr(x[0]) - 50.0 * x[0] + 24.0;
		return y;
	}

	template <class T>
	Expr<T> UnivarSlopesProblem7()
	{
		Expr<T> x;
		Expr<T> y = 24*pow(x[0],4) - 142*pow(x[0],3) + 303.0 * sqr(x[0]) - 276.0 * x[0] + 93.0;
		return y;
	}

	template <class T>
	Expr<T> UnivarSlopesProblem8()
	{
		Expr<T> x;
		Expr<T> y = sin(x[0]) + sin(10.0*x[0]/3.0) + ln(x[0]) - 0.84*x[0];
		return y;
	}

	template <class T>
	Expr<T> UnivarSlopesProblem9()
	{
		Expr<T> x;
      Expr<T> z = -sqr(200*(x[0] - 0.0675));
		Expr<T> y = 2*sqr(x[0]) - 0.03 * exp(z);
		return y;
	}

	template <class T>
	Expr<T> UnivarSlopesProblem10()
	{
		Expr<T> x;
		double a[] = { 3.040, 1.098, 0.674, 3.537, 6.173, 8.679, 4.503, 3.328, 6.937, 0.700 };
		double k[] = { 2.983, 2.378, 2.439, 1.168, 2.406, 1.236, 2.868, 1.378, 2.348, 2.268 };
		double c[] = { 0.192, 0.140, 0.127, 0.132, 0.125, 0.189, 0.187, 0.171, 0.188, 0.176 };
		Expr<T> y = 1.0/(sqr(k[0] * (x[0] - a[0])) + c[0]);
		for(int i = 1; i < 10; i++)
			y = y + 1.0/(sqr(k[i] * (x[0] - a[i])) + c[i]);
		return -y;
	}

	template <class T>
	Expr<T> UnivarSlopesProblem11()
	{
		Expr<T> x;
		double a[] = { 4.696, 4.885, 0.800, 4.986, 3.901, 2.395, 0.945, 8.371, 6.181, 5.713 };
		double k[] = { 2.871, 2.328, 1.111, 1.263, 2.399, 2.629, 2.853, 2.344, 2.592, 2.929 };
		double c[] = { 0.149, 0.166, 0.175, 0.183, 0.128, 0.117, 0.115, 0.148, 0.188, 0.198 };
		Expr<T> y = 1.0/(sqr(k[0] * (x[0] - a[0])) + c[0]);
		for(int i = 1; i < 10; i++)
			y = y + 1.0/(sqr(k[i] * (x[0] - a[i])) + c[i]);
		return -y;
	}

	template <class T>
	Expr<T> UnivarSlopesProblem12()
	{
		Expr<T> x;
		Expr<T> y = sqr(x[0])/20.0 - cos(x[0]) + 2.0;
		return y;
	}

	template <class T>
	Expr<T> UnivarSlopesProblem13()
	{
		Expr<T> x;
		Expr<T> y = -1.0/(sqr(x[0] - 2.0) + 3.0);
		return y;
	}

	template <class T>
	Expr<T> UnivarSlopesProblem14()
	{
		Expr<T> x;
		Expr<T> y = sqr(x[0]) - cos(18.0 * x[0]);
		return y;
	}

	template <class T>
	Expr<T> UnivarSlopesProblem15()
	{
		Expr<T> x;
		Expr<T> y = sqr(x[0] - 1.0) * (1.0 + 10.0 * sqr(sin(x[0] + 1.0))) + 1.0;
		return y;
	}

	template <class T>
	Expr<T> UnivarSlopesProblem16()
	{
		Expr<T> x;
		Expr<T> y = exp(sqr(x[0]));
		return y;
	}

	template <class T>
	Expr<T> UnivarSlopesProblem17()
	{
		Expr<T> x;
		Expr<T> y = pow(x[0], 4) - 12.0 * pow(x[0], 3) + 47.0 * sqr(x[0]) - 60.0 * x[0] - 20.0 * exp(-x[0]);
		return y;
	}

	template <class T>
	Expr<T> UnivarSlopesProblem18()
	{
		Expr<T> x;
		Expr<T> y = pow(x[0], 6) - 15.0 * pow(x[0], 4) + 27.0 * sqr(x[0]) + 250.0;
		return y;
	}

	
	template <class T>
	Expr<T> UnivarSlopesProblem19()
	{
		Expr<T> x;
		Expr<T> z = (x[0] - 1.0)/4.0;
		Expr<T> y = sqr(sin(1.0 + z)) + sqr(z);
		return y;
	}

	template <class T>
	Expr<T> UnivarSlopesProblem20()
	{
		Expr<T> x;
		Expr<T> y = sqr(x[0] - sqr(x[0])) + sqr(x[0] - 1.0);
		return y;
	}





}
#endif
