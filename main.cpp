
#include <iostream>

#include "Polynomial.h"
#include "Power.h"
#include "Exponential.h"  

using namespace std;

int main() {
    
    cout << "===== TEST INTERFACE CLASS (Function) =====" << endl;

    double coeffsFunc[] = {2.0, -1.0, 1.0}; // f(x) = x^2 + x - 2
    Function* A = new Polynomial(coeffsFunc, 3); // Puntatore a base, istanza derivata
    A->Dump();
    cout << "A->GetValue(2.0) = " << A->GetValue(2.0) << endl; // Output atteso: 2 - 2 + 4 = 4
    delete A; // Liberazione memoria
    
    cout << "==============================================================================" << endl;
    cout << "===== TEST POLYNOMIAL DERIVED CLASS =====" << endl;

    cout << "===== TEST DEFAULT CONSTRUCTOR =====" << endl;
    Polynomial p1;
    p1.Dump();  // Deve dire "Uninitialized polynomial"

    cout << "\n===== TEST PARAMETRIC CONSTRUCTOR =====" << endl;
    double coeffs1[] = {1.0, -2.0, 3.0}; // 1 - 2x + 3x^2
    Polynomial p2(coeffs1, 3);
    p2.Dump();

    cout << "\n===== TEST COPY CONSTRUCTOR =====" << endl;
    Polynomial p3(p2); // copia di p2
    p3.Dump();

    cout << "\n===== TEST ASSIGNMENT OPERATOR =====" << endl;
    Polynomial p4;
    p4 = p2;  // Assegna p2 a p4
    p4.Dump();

    cout << "\n===== TEST EQUALITY OPERATOR =====" << endl;
    cout << "p2 == p3 ? " << (p2 == p3 ? "True" : "False") << endl;
    cout << "p2 == p1 ? " << (p2 == p1 ? "True" : "False") << endl;

    cout << "\n===== TEST GetValue() =====" << endl;
    double x = 2.0;
    cout << "Value of p2 at x = " << x << ": " << p2.GetValue(x) << endl; // Deve calcolare 1 - 4 + 12 = 9

    cout << "\n===== TEST SetPolynomial() =====" << endl;
    double coeffs2[] = {0.0, 5.0}; // 5x
    p1.SetPolynomial(coeffs2, 2);
    p1.Dump();

    cout << "\n===== TEST Reset() =====" << endl;
    p1.Reset();
    p1.Dump(); // Deve dire "Uninitialized polynomial"

    
    cout << "\n===== TEST Error Handling =====" << endl;
    Polynomial p5;
    // Provoca errore con SetPolynomial (size < 1)
    //p5.SetPolynomial(coeffs2, 0); // Scommentare per testare errore (termina il programma)

    cout << "\n===== TEST Manual ErrorMessage() and WarningMessage() =====" << endl;
    p5.ErrorMessage("This is a test error.");
    p5.WarningMessage("This is a test warning.");
    

    cout << "==============================================================================" << endl;
    cout << "===== TEST EXPONENTIAL CLASS =====" << endl;

    cout << "===== TEST DEFAULT CONSTRUCTOR =====" << endl;
    Exponential e1;
    e1.Dump();

    cout << "===== TEST PARAMETRIC CONSTRUCTOR =====" << endl;
    Exponential e2(2, 3, 4);
    e2.Dump();

    cout << "===== TEST COPY CONSTRUCTOR =====" << endl;
    Exponential e3(e2);
    e3.Dump();

    cout << "===== TEST ASSIGNMENT OPERATOR =====" << endl;
    Exponential e4;
    e4 = e2;
    e4.Dump();

    cout << "===== TEST EQUALITY OPERATOR =====" << endl;
    cout << "e2 == e3 ? " << (e2 == e3 ? "True" : "False") << endl;
    cout << "e2 == e1 ? " << (e2 == e1 ? "True" : "False") << endl;

    cout << "===== TEST GetValue() =====" << endl;
    double y = 2.0;
    cout << "Value of e2 at x = " << y << ": " << e2.GetValue(y) << endl;

    cout << "===== TEST SetExponential() =====" << endl;
    e1.SetExponential(5, 6, 7);
    e1.Dump();

    cout << "===== TEST Reset() =====" << endl;
    e1.Reset();
    e1.Dump();

    cout << "\n===== TEST Manual ErrorMessage() and WarningMessage() =====" << endl;
    e1.ErrorMessage("This is a test error.");
    e1.WarningMessage("This is a test warning.");

    cout << "==============================================================================" << endl;

    cout << "===== TEST POWER CLASS =====" << endl;

    cout << "===== TEST DEFAULT CONSTRUCTOR =====" << endl;
    Power pow1;
    pow1.Dump();

    cout << "===== TEST PARAMETRIC CONSTRUCTOR =====" << endl;
    Power pow2(2, 3);
    pow2.Dump();

    cout << "===== TEST COPY CONSTRUCTOR =====" << endl;
    Power pow3(pow2);
    pow3.Dump();

    cout << "===== TEST ASSIGNMENT OPERATOR =====" << endl;
    Power pow4;
    pow4 = pow2;
    pow4.Dump();

    cout << "===== TEST EQUALITY OPERATOR =====" << endl;
    
    cout << "pow2 == pow3 ? " << (pow2 == pow3 ? "True" : "False") << endl;
    cout << "pow2 == pow1 ? " << (pow2 == pow1 ? "True" : "False") << endl;

    cout << "===== TEST GetValue() =====" << endl;
    double z = 2.0;
    cout << "Value of pow2 at x = " << z << ": " << pow2.GetValue(z) << endl;

    cout << "===== TEST SetPower() =====" << endl;
    pow1.SetPower(5, 6);
    pow1.Dump();

    cout << "===== TEST Reset() =====" << endl;
    pow1.Dump();

    cout << "\n===== TEST Manual ErrorMessage() and WarningMessage() =====" << endl;
    pow1.ErrorMessage("This is a test error.");
    pow1.WarningMessage("This is a test warning.");

    return 0;
}

