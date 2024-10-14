#include "Calculator.h"


int main()
{
    Calculator calc;

    int opt = 0;

    calc.showMessage();

    do
    {
        calc.menuCalc();

        cout << "Continuar calculando? 1 - nao, outro - sim." << endl;
        cout << " >>> ";
        cin >> opt;

    }while(opt != 1);

    cout << "Calculadora encerrada! " << endl;

    while(1);
    return 0;
}
