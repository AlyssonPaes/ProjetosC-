#include "numberCalc.h"

NumberCalc::NumberCalc()
{
    n = 0;
    valores[0] = 0;
    valores[1] = 0;
    valores[2] = 0;
    valores[3] = 0;
    valores[4] = 0;
    valores[5] = 0;
}
void NumberCalc::showMessage()
{
    cout << "Inicializando NumberCalc !" << endl;
}

void NumberCalc::userInput()
{
    while(n < 6)
    {
        cout << "Digite um valor por favor " << n+1 << ":";
        cin >> valores[n];
        n++;
    }
    if(n > 5)
    {
        cout << "\nCALCULOS EXECUTADOS:\n";

        cout << valores[0] << " + " << valores[1] << " = " << valores[0] + valores[1] << endl;
        cout << valores[2] << " - " << valores[3] << " = " << valores[2] - valores[3] << endl;
        cout << valores[4] << " x " << valores[5] << " = " << valores[4] * valores[5] << endl;
    }
}
