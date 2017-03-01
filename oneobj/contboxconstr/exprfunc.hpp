/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   exprfunc.hpp
 * Author: alusov
 *
 * Created on February 27, 2017, 9:58 AM
 */

#ifndef EXPRFUNC_HPP
#define EXPRFUNC_HPP

#include <vector>
#include "expression/expr.hpp"
#include "expression/algorithm.hpp"

#include <mpproblem.hpp>
#include <box/box.hpp>

using namespace snowgoose::expression;

namespace OPTITEST {

    class ExprFunctor : public COMPI::Functor <double> {
    public:

        ExprFunctor(Expr<double> expr, int n) : expr(expr), mN(n) {
        }

        double func(const double* x) {
            std::vector<double> v(x, x+mN);
            return expr.calc(v, FuncAlg<double>());            
        }
                
    private:
        Expr<double> expr;
        int mN;
    };
    
    /**
     * Factory to produce instances of any expression optimization problem
     */
    class ExprProblemFactory {
    public:

        ExprProblemFactory(Expr<double> expr, const std::vector<std::pair<double,double>> &vPair) : expr(expr), mVPair(vPair) {
            mN = vPair.size();
        }

        COMPI::MPProblem<double>* getProblem() const {
            COMPI::MPProblem<double>* prob = new COMPI::MPProblem<double>();
            prob->mVarTypes.assign(mN, COMPI::MPProblem<double>::VariableTypes::GENERIC);
            prob->mObjectives.push_back(new ExprFunctor(expr, mN));
            prob->mBox = new snowgoose::Box<double>(mN);
            for (int i = 0; i < mN; i++) {
                prob->mBox->mA[i] = mVPair[i].first;
                prob->mBox->mB[i] = mVPair[i].second;
            }
            return prob;
        }

    private:
        int mN;
        Expr<double> expr;
        std::vector<std::pair<double,double>> mVPair;
    };
}

#endif /* EXPRFUNC_HPP */

