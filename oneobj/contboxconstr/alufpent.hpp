/* 
 * File:   dejong.hpp
 * Author: medved
 *
 * Created on February 22, 2016, 5:12 PM
 */

#ifndef ALUFPENT_HPP
#define ALUFPENT_HPP

#include <mpproblem.hpp>
#include <box/box.hpp>
#include <common/utilmacro.hpp>

namespace OPTITEST {

    class AluffiPentiniObjective : public COMPI::Functor <double> {
    public:

        AluffiPentiniObjective() : mN(2) {
        }

        double func(const double* x) {
            double v;
            v = 0.25 * x[0] * x[0] * x[0] * x[0] - 0.5 * x[0] * x[0] + 0.1 * x[0] + 0.5 * x[1];
            return v;
        }

        void grad(const double* x, double* g) {
            g[0] = x[0] * x[0] * x[0] - x[0] + 0.1;
            g[1] = 0.5;
        }

        void hess(const double* x, double* H) {
            H[0] = 3 * x[0] * x[0] - 1;
            H[1] = 0;
            H[2] = 0;
            H[3] = 0;
        }
    private:

        int mN;
    };


}

#endif /* ALUFPENT_HPP */

