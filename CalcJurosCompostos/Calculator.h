#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <iostream>
#include <iomanip>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;
using std::fixed;
using std::setw;
using std::setprecision;
using std::pow;

using namespace std;

class Calculator
{
public:

    Calculator(); // Construtor

    void menuCalc();

    void showMessage();

};

#endif // CALCULATOR_H
