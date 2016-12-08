/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: alusov
 *
 * Created on November 29, 2016, 11:20 AM
 */

#include <iostream>
#include <limits>
#include "ackley1.hpp"
#include "common/sgerrcheck.hpp"

#define EPSILON 0.001

using namespace std;
using namespace OPTITEST;
using namespace snowgoose;

int is_equal(double x, double y) 
{
    return std::fabs(x - y) < EPSILON ? 1 : 0;
}

int main(int argc, char** argv) 
{
    Ackley1Objective ackley1(2);
    double params1[2] = {0.0, 0.0};
    SG_ASSERT(is_equal(ackley1.func(params1), 0.0));

    double params2[2] = {1.0, 1.0};
    SG_ASSERT(is_equal(ackley1.func(params2), 0.396));
    
    double params3[2] = {0.0, 1.0};
    double params4[2];
    ackley1.grad(params3, params4);
    SG_ASSERT(is_equal(params4[0], 0.0));
    SG_ASSERT(is_equal(params4[1], 0.2788708639));
    return 0;
}

