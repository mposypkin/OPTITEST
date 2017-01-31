/* 
 * File:   ackley1.hpp
 * Author: Usov Alexander
 *
 * Created on November 29, 2016, 5:12 PM
 */

#ifndef ACKLEY1_HPP
#define ACKLEY1_HPP

#include <iostream>
#include <vector>
#include <math.h>
#include <mpproblem.hpp>
#include <box/box.hpp>
#include <common/vec.hpp>
#include <common/sgerrcheck.hpp>


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
                sumCosX += ::cos(2 * M_PI * x[i]);
            }
            return -20 * ::exp(-0.2 * ::sqrt(sumXSqr / mN)) - ::exp(sumCosX / mN) + 20 + M_El;
        }

        void grad(const double* x, double* g) {

            double sumXSqr = 0.0;
            double sumCosX = 0.0;
            for (int i = 0; i < mN; i++) {
                sumXSqr += x[i] * x[i];
                sumCosX += ::cos(2 * M_PI * x[i]);
            }
            for (int i = 0; i < mN; i++) {
                double firstPart = 0.4 * ::sqrt((double) 1 / mN)*::exp(-0.2 * ::sqrt(sumXSqr / mN)) * x[i] / sumXSqr;
                double secondPart = 2 * M_PI*::exp(sumCosX / mN)*::sin(2 * M_PI * x[i]) / mN;
                g[i] = firstPart + secondPart;
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
        Ackley1ProblemFactory(const std::vector<double>& a, const std::vector<double>& b) : mA(a), mB(b) {
            SG_ASSERT(a.size() == b.size());
            mN = a.size();
        }

        COMPI::MPProblem<double>* getProblem() const {
            COMPI::MPProblem<double>* prob = new COMPI::MPProblem<double>();
            prob->mVarTypes.assign(mN, COMPI::MPProblem<double>::VariableTypes::GENERIC);
            prob->mObjectives.push_back(new Ackley1Objective(mN));
            prob->mBox = new snowgoose::Box<double>(mN);
            for (int i = 0; i < mN; i++) {
                prob->mBox->mA[i] = mA[i];
                prob->mBox->mB[i] = mB[i];
            }
            return prob;
        }


    private:
        int mN;
        std::vector<double> mA;
        std::vector<double> mB;
    };
}

#endif /* ACKLEY1_HPP */

