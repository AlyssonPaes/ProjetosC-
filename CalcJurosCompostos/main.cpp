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

int main()
{
    double a; //Valor final
    double p; //Aporte inicial
    double r; //Juros anuais
    int n; //Anos

    cout << "Insira o valor do aporte inicial: ";
    cin >> p;

    cout << "\nInsira o numero de anos: ";
    cin >> n;

    cout << "\nInsira a taxa de juros ao ano %: ";
    cin >> r;

    cout << "Ano" << setw(20) << "Valor do deposito" << endl;
    cout << fixed << setprecision(2);

    for(int ano = 1; ano <= n; ano++)
    {
        a = p * pow(1.0 + r/100, ano);
        cout << setw(3) << ano << setw(20) << a << endl;
    }

    while(1);
    return 0;
}
