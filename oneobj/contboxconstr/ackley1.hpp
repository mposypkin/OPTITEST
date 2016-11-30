/* 
 * File:   ackley1.hpp
 * Author: Usov Alexander
 *
 * Created on November 29, 2016, 5:12 PM
 */

#ifndef ACKLEY1_HPP
#define	ACKLEY1_HPP

#include <math.h>
#include <mpproblem.hpp>
#include <box/box.hpp>

namespace OPTITEST {

    class Ackley1Objective : public COMPI::Functor <double> {
    public:

        Ackley1Objective(int n) : mN(n) {
        }

        double func(const double* x) {
            double sumXSqr = 0;
            double sumCosX = 0;
            for (int i = 0; i < mN; i++) {
                sumXSqr += x[i] * x[i];
                sumCosX += cos(2*PI*x[i]);               
            }
            return -20*exp(pow(sumXSqr/mN, -0.02)) - \
                    exp(sumCosX/mN) + 20 + exp(1);
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

}

#endif	/* ACKLEY1_HPP */

