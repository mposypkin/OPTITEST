/* 
 * File:   dejong.hpp
 * Author: medved
 *
 * Created on February 22, 2016, 5:12 PM
 */

#ifndef HYPER_HPP
#define HYPER_HPP

#include <mpproblem.hpp>
#include <box/box.hpp>
#include <common/utilmacro.hpp>

namespace OPTITEST {

    /**
     * Aluffi Pentini test function
     */
    class HyperObjective : public COMPI::Functor <double> {
    public:

        HyperObjective() : mN(2) {
        }

        double func(const double* x) {
            double v;
            v = x[0] * x[0] - x[1] * x[1];
            return v;
        }

        void grad(const double* x, double* g) {
            g[0] = 2 * x[0];
            g[1] = -2 * x[1];
        }

        void hess(const double* x, double* H) {
            H[0] = 2;
            H[1] = 0;
            H[2] = 0;
            H[3] = -2;
        }
    private:

        int mN;
    };


}

#endif /* HYPER_HPP */

