#include "Exponential.h"
#include <iostream>

using namespace std;

Exponential::Exponential() {

	SetExponential(0, 0, 0);
}

Exponential::Exponential(double b_coeff, double k_coeff, double c_coeff) {

	SetExponential(b_coeff, k_coeff, c_coeff);

Exponential::~Exponential() {

    Exponential();
}

Exponential::Exponential(const Exponential& E) {

	Exponential();
	SetExponential(E.b_coeff, E.k_coeff, E.c_coeff);
}

Exponential& Exponential::operator=(const Exponential& E) {
	
	if (this != &E) {
		b_coeff = E.b_coeff;
		k_coeff = E.k_coeff;
		c_coeff = E.c_coeff;
    }
    return *this;
}

bool Exponential::operator==(const Exponential& E) {
	
	int i;
	
	if (b_coeff != E.b_coeff) {
		return false;
	}
	if (c_coeff != E.c_coeff) {
		return false
	}
	if (k_coeff != E.k_coeff) {
		return false
	}

	return true;
}

void Exponential::SetExponential(double b_coefficient, double k_coefficient, double c_coefficient) {

	b_coeff = b_coefficient;
	k_coeff = k_coefficient;
	c_coeff = c_coefficient;
}

double Exponential::GetValue(int coeff){
	
	switch(coeff)
	{
		case<0>:
			return b_coeff;
		break;
		case<1>:
			return k_coeff;
		break;
		case<2>:
			return c_coeff;
		break;
		default:
			cout << "Input value not associated to coefficient" << endl
		break;
	}
	return b_coeff
}

void Exponential::Dump(){

	cout << "Exponential Structure: k*b^(cx)"
	cout << "Base(b):" << b_coeff << endl;
	cout << "Base Coefficient(k):" << k_coeff<< endl;
	cout << "Exponent Coefficient(c):" << c_coeff << endl;
}