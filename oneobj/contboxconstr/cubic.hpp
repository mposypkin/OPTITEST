/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   сubic.hpp
 * Author: Mikhail Posypkin <mposypkin at gmail.com>
 *
 * Created on 14 апреля 2016 г., 11:52
 */

#ifndef CUBIC_HPP
#define CUBIC_HPP

#include <mpproblem.hpp>

namespace OPTITEST {

    class CubicObjective : public COMPI::Functor <double> {
    public:

        CubicObjective(int n) : mN(n) {
        }

        double func(const double* x) {
            double v = 0;
            for (int i = 0; i < mN; i++) {
                v += x[i] * x[i] * x[i];
            }
            return v;
        }

        void grad(const double* x, double* g) {
            for (int i = 0; i < mN; i++) {
                g[i] = 3 * x[i] * x[i];
            }
        }

        void hess(const double* x, double* H) {
            for (int i = 0; i < mN; i++) {
                for (int j = 0; j < mN; j++) {
                    H[i * mN + j] = (i == j) ? 6 * x[i] : 0;
                }
            }
        }


    private:

        int mN;
    };
}

#endif /* CUBIC_HPP */

