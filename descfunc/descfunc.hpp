/*
* To change this license header, choose License Headers in Project Properties.
* To change this template file, choose Tools | Templates
* and open the template in the editor.
*/

/*
* File:   descfunc.cpp
* Author: alusov
*
* Created on February 23, 2017, 7:44 PM
*/

#ifndef DESCFUNC_HPP
#define DESCFUNC_HPP

#include <iostream>
#include <fstream>
#include <fstream>
#include "json.hpp"
#include "keys.hpp"

using namespace std;
using json = nlohmann::json;
using GlobMinX = std::vector<std::vector<double>>;
using Bounds = std::vector<std::pair<double, double>>;

struct  descfunc {
	std::string desciption;
	bool anyDim;
	int dim;
	double globMinY;
	GlobMinX globMinX;
	Bounds bounds;
};

class DescFuncReader
{
public:
	DescFuncReader(const char * filename)
	{
        std::ifstream fs(filename);
		if (!fs.good())
			throw std::invalid_argument("Invalid file path for funcdesc.json file. Please check it.");
		fs >> js;
	}
	descfunc getdesr(const std::string &key, int dimIfNotDefined = 1)
	{
		json fd = js[key];

		Bounds bounds;
		for (auto& bound : fd[K.bounds])
			bounds.push_back({ bound[K.lb], bound[K.rb] });

		GlobMinX globMinX;
		for (auto& globMin : fd[K.globMin]) {
			std::vector<double> v;
                        if(fd[K.anyDim])
				v.insert(v.begin(), dimIfNotDefined, globMin[K.x][0]);
			else
				for (double x : globMin[K.x])
					v.push_back(x);
			globMinX.push_back(v);
		}
        if(fd[K.anyDim])
            return{ fd[K.desc] , fd[K.anyDim], dimIfNotDefined, fd[K.globMinY], globMinX, Bounds(dimIfNotDefined, bounds[0]) };
        else
            return{ fd[K.desc] , fd[K.anyDim], fd[K.dim], fd[K.globMinY], globMinX, bounds };
	}

private:
	json js;
};

#endif
