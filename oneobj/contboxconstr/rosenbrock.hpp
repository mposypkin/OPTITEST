/* 
 * File:   dejong.hpp
 * Author: medved
 *
 * Created on February 22, 2016, 5:12 PM
 */

#ifndef ROSENBROCK_HPP
#define	ROSENBROCK_HPP

#include <mpproblem.hpp>
#include <box/box.hpp>
#include <common/utilmacro.hpp>

namespace OPTITEST {

    class RosenbrockObjective : public COMPI::Functor <double> {
    public:

        RosenbrockObjective(int n) : mN(n) {
        }

        double func(const double* x) {
            double v;
            v = 0.;            
            for (int i = 0; i < (mN - 1); i++) {
                v += 100. * SGSQR(x[i] * x[i] - x[i + 1]) + SGSQR(x[i] - 1);
            }
            return v;
        }

    private:

        int mN;
    };

    /**
     * Factory to produce instances of DeJong optimization problem
     */
    class RosenbrockProblemFactory {
    public:

        /**
         * Constructor
         * @param n problem dimension
         * @param a left border for a box
         * @param b right border for a box
         */
        RosenbrockProblemFactory(int n, double a, double b) : mN(n), mA(a), mB(b) {
        }

        COMPI::MPProblem<double>* getProblem() const {
            COMPI::MPProblem<double>* prob = new COMPI::MPProblem<double>();
            for (int i = 0; i < mN; i++) {
                int v = COMPI::MPProblem<double>::VariableTypes::GENERIC;
                prob->mVarTypes.push_back(v);
            }
            prob->mObjectives.push_back(new RosenbrockObjective(mN));
            prob->mBox = new snowgoose::Box<double>(mN);
            for (int i = 0; i < mN; i++) {
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

#endif	/* ROSENBROCK_HPP */

