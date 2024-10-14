#include "Calculator.h"

Calculator::Calculator()
{

}

void Calculator::showMessage()
{
    cout << "Calculadora Simples em C++ " << endl;
}
void Calculator::menuCalc()
{
    int i = 0;
    int n1, n2 = 0;

    cout << "Escolha uma das opcoes abaixo." << endl;
    cout << " 1 para soma " << endl;
    cout << " 2 para subtracao " << endl;
    cout << " 3 para multiplicacao " << endl;
    cout << " 4 para divisao " << endl;
    cout << " >>> ";

    cin >> i;

    switch(i)
    {
        case 1:
        {
            float soma;

            cout << "Insira dois numeros para somar. " << endl;
            cout << "Primeiro numero: ";
            cin >> n1;
            cout << "Segundo numero: ";
            cin >> n2;
            soma = n1 + n2;
            cout << "Resultado de " << n1 << " + " << n2 << " = " << soma << endl;
            break;
        }
        case 2:
        {
            float sub;

            cout << "Insira dois numeros para subtrair. " << endl;
            cout << "Primeiro numero: ";
            cin >> n1;
            cout << "Segundo numero: ";
            cin >> n2;
            sub = n1 - n2;
            cout << "Resultado de " << n1 << " - " << n2 << " = " << sub << endl;
            break;
        }
        case 3:
        {
            float mult;

            cout << "Insira dois numeros para multiplicar. " << endl;
            cout << "Primeiro numero: ";
            cin >> n1;
            cout << "Segundo numero: ";
            cin >> n2;
            mult = n1 * n2;
            cout << "Resultado de " << n1 << " * " << n2 << " = " << mult << endl;
            break;
        }
        case 4:
        {
            float div;

            cout << "Insira dois numeros para dividir. " << endl;
            cout << "Primeiro numero: ";
            cin >> n1;
            cout << "Segundo numero: ";
            cin >> n2;
            div = n1 / n2;
            cout << "Resultado de " << n1 << " / " << n2 << " = " << div << endl;
            break;
        }
        default:
        {
            cout << "Opcao invalida! " << endl;
        }
    }
}
