/* 
 * File:   dejong.hpp
 * Author: medved
 *
 * Created on February 22, 2016, 5:12 PM
 */

#ifndef COSMIXTURE_HPP
#define	COSMIXTURE_HPP

#include <math.h>
#include <mpproblem.hpp>
#include <box/box.hpp>

namespace OPTITEST {

    class CosmixtureObjective : public COMPI::Functor <double> {
    public:

        CosmixtureObjective(int n) : mN(n) {
        }

        double func(const double* x) {
            double v = 0;
            for (int i = 0; i < mN; i++) {
            v += x[i] * x[i] - 0.1 * cos(3 * M_PI * x[i]);
        }
            return v;
        }

    private:

        int mN;
    };

    /**
     * Factory to produce instances of DeJong optimization problem
     */
    class CosmixtureProblemFactory {
    public:

        /**
         * Constructor
         * @param n problem dimension
         * @param a left border for a box
         * @param b right border for a box
         */
        CosmixtureProblemFactory(int n, double a, double b) : mN(n), mA(a), mB(b) {
        }

        COMPI::MPProblem<double>* getProblem() const {
            COMPI::MPProblem<double>* prob = new COMPI::MPProblem<double>();
            for (int i = 0; i < mN; i++) {
                int v = COMPI::MPProblem<double>::VariableTypes::GENERIC;
                prob->mVarTypes.push_back(v);
            }
            prob->mObjectives.push_back(new CosmixtureObjective(mN));
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

#endif	/* COSMIXTURE_HPP */

