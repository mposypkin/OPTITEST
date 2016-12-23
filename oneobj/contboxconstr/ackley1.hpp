/* 
 * File:   ackley1.hpp
 * Author: Usov Alexander
 *
 * Created on November 29, 2016, 5:12 PM
 */

#ifndef ACKLEY1_HPP
#define	ACKLEY1_HPP

#include <iostream>
#include <math.h>
#include <mpproblem.hpp>
#include <box/box.hpp>


namespace OPTITEST {

    class Ackley1Objective : public COMPI::Functor <double> {
    public:

        Ackley1Objective(int n) : mN(n) {
        }

        double func(const double* x) {
            double sumXSqr = 0.0;
            double sumCosX = 0.0;
            for (int i = 0; i < mN; i++) {
                sumXSqr += x[i] * x[i];
                sumCosX += ::cos(2*M_PI*x[i]);               
            }
            return -20*::exp(-0.2*::sqrt(sumXSqr/mN)) - ::exp(sumCosX/mN) + 20 + M_El;
        }
        
        void grad(const double* x, double* g) 
        {
            
            double sumXSqr = 0.0;
            double sumCosX = 0.0;
            for (int i = 0; i < mN; i++) {
                sumXSqr += x[i] * x[i];
                sumCosX += ::cos(2*M_PI*x[i]); 
            }
            for (int i = 0; i < mN; i++) {
                double firstPart = 0.4*::sqrt((double)1/mN)*::exp(-0.2*::sqrt(sumXSqr/mN))*x[i]/sumXSqr;
                double secondPart = 2*M_PI*::exp(sumCosX/mN)*::sin(2*M_PI*x[i])/mN;
                g[i]= firstPart + secondPart;               
            }
            
        }
    private:
        int mN;
    };

    /**
     * Factory to produce instances of Ackley1 optimization problem
     */
    class Ackley1ProblemFactory {
    public:

        /**
         * Constructor
         * @param n problem dimension
         * @param a left border for a box
         * @param b right border for a box
         */
        Ackley1ProblemFactory(int n, double a, double b) : mN(n), mA(a), mB(b) {
        }

        COMPI::MPProblem<double>* getProblem() const {
            COMPI::MPProblem<double>* prob = new COMPI::MPProblem<double>();
            for (int i = 0; i < mN; i++) {
                int v = COMPI::MPProblem<double>::VariableTypes::GENERIC;
                prob->mVarTypes.push_back(v);
            }
            prob->mObjectives.push_back(new Ackley1Objective(mN));
            prob->mBox = new snowgoose::Box<double>(mN);
            for(int i = 0; i < mN; i ++) {
                prob->mBox->mA[i] = mA;
                prob->mBox->mB[i] = mB;
            }
            return prob;
        }
        

    private:
        int mN;
        double mA;
        double mB;
    };
    
    /**
     * Factory to produce instances of Ackley1 optimization problem
     */
    class Ackley1ProblemFactory2 {
    public:

        /**
         * Constructor
         * @param n problem dimension
         * @param a left border for a box
         * @param b right border for a box
         */
        Ackley1ProblemFactory2(double a, double b, double c, double d) : mA(a), mB(b), mC(c), mD(d) {
        }

        COMPI::MPProblem<double>* getProblem() const {
            COMPI::MPProblem<double>* prob = new COMPI::MPProblem<double>();
            for (int i = 0; i < 2; i++) {
                int v = COMPI::MPProblem<double>::VariableTypes::GENERIC;
                prob->mVarTypes.push_back(v);
            }
            prob->mObjectives.push_back(new Ackley1Objective(2));
            prob->mBox = new snowgoose::Box<double>(2);
            prob->mBox->mA[0] = mA;
            prob->mBox->mB[0] = mB;
            prob->mBox->mA[1] = mC;
            prob->mBox->mB[1] = mD;
            return prob;
        }
        

    private:
        double mA;
        double mB;
        double mC;
        double mD;
    };

}

#endif	/* ACKLEY1_HPP */

