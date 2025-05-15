#ifndef EXPONENTIAL_H
#define EXPONENTIAL_H

#include <iostream>
#include <cmath>
#include <cstring>

#include "CFunction.h"

using namespace std;

class Exponential: public Function {

protected:
	double b_coeff;
	double k_coeff;
    double c_coeff;

public:
	Exponential();
	Exponential(double b_coeff, double k_coeff, double c_coeff);
    Exponential(const Exponential& E);
    ~Exponential();

    Exponential& operator=(const Exponential& E);
    bool operator==(const Exponential& E);

    void SetExponential(double b_coefficient, double k_coefficient, double c_coefficient);
    double GetValue(int coeff);
    void Dump();
}