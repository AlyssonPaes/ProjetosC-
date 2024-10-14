#ifndef NUMBERCALC_H
#define NUMBERCALC_H

#include <iostream>
#include <string>
#include <iomanip>

using std::string;
using std::cout;
using std::endl;
using std::setprecision; //Usado para adicionar precisao a saida numérica
using std::fixed;
using std::cin;
using namespace std;
using std::getline;

class NumberCalc
{
    public:

        // Construtor
        NumberCalc();
        void showMessage();
        void userInput();

    private:

        int valores[6];
        int n;
};

#endif // NUMBERCALC_H
