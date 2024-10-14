#include "SalesScore.h"
#include "numberCalc.h"
#include <stdio.h>

// ===================================================================================
// Função principal
//int main() //inicio da funcao principal
//{
////    SalesScore mySales("Alysson Programas! ");
////
////    mySales.bootSystem();
////    mySales.calcSalesAvarege();
//
//    NumberCalc myCalc;
//    myCalc.showMessage();
//    myCalc.userInput();
//
//    while(1);
//    return 0;
//}//fim da funcao principal
//int main()
//{
//    int altura = 0;
//
//    cout << "Insira a altura do triangulo retangulo! " << endl;
//    cin >> altura;
//
//    for( int i = 0; i <= altura; i++)
//    {
//        for(int j = 1; j <= 1; j++)
//        {
//            cout << "*";
//        }
//        cout << endl;
//
//    }
//
//    return 0;
//}
int main()
{
    int altura = 0;

    cout << "Insira a altura do triangulo retangulo: ";
    cin >> altura;

    // Laço externo para as linhas
    for( int i = 1; i <= altura; i++)  // Corrigido i para começar em 1
    {
        // Laço interno para os asteriscos em cada linha
        for(int j = 1; j <= i; j++)  // j vai até i, assim imprimindo i asteriscos
        {
            cout << "*";  // Imprime os asteriscos na mesma linha
        }
        cout << endl;  // Quebra de linha após imprimir todos os asteriscos da linha
    }

    for(int i = 3; i<= 15; i+=3)
    {
        cout << i << endl;
    }

    for(int i = 50; i>= 1; i--)
    {
        cout << i << endl;
    }

    return 0;
}
