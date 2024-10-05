#include "SalesScore.h"

#include <iostream>
#include <string> //lib de string do C++

using std::string;
//using std::getline;
using std::cout;
using std::cin;
using std::endl;
//using namespace std;

// ===================================================================================
// Função principal
int main() //inicio da funcao principal
{
//    string storeTitle; //string de caracteres para armazenar o nome da loja
//    SalesScore mySales; //objeto mySales
//
//    cout << "Titulo inicial da loja: " << mySales.getStoreTitle() << endl;
//
//    cout << "\nInsira o nome da loja " << endl;
//    getline(cin, storeTitle); //lê o nome da loja com espaços em branco
//    cout << endl;
//
//    mySales.bootSystem(storeTitle);

    //Cria dois objetos da classe SalesScore
    SalesScore myStore1("ALYSSON COTTA PAES");
    SalesScore myStore2("ACP OUTLET!!");

    cout <<   "Loja 1 criada com sucesso: " << myStore1.getStoreTitle()
         << "\nLoja 2 criada com sucesso: " << myStore2.getStoreTitle() << endl;

    int val = 5;
    cout << (val > 12 ? "Valor maior que doze\n" : "Valor menor que doze\n"); //Muito legal não sabia que o ponto de interrogação servia como if else

    //Testes de if else, pratica

//    int temperatura = 25;
//
//    if(temperatura > 40)
//    {
//        cout << "Hell de Janeiro! " << endl;
//    }
//    else if(temperatura > 30)
//    {
//        cout << "Calor da bahia! " << endl;
//    }
//    else if(temperatura > 20)
//    {
//        cout << "Noite paulista veinho " << endl;
//    }
//    else
//    {
//        cout << "Temperatura de sulista " << endl;
//    }
//
//    int nota;
//    int valor;
//
//    // Solicita que o usuário insira a nota
//    cout << "Insira uma nota entre 0 e 100: ";
//    cin >> nota;
//
//    // Verifica se a nota é válida
//    if (nota < 0 || nota > 100)
//    {
//        cout << "Entrada inválida!" << endl;
//    }
//    else
//    {
//        // Divide a nota por 10 para usar no switch
//      switch (nota / 10)
//      {
//        case 10: // Caso o valor seja 100
//        {
//            //Não faz nada
//        }
//        case 9:  // Caso o valor seja entre 90-99
//        {
//            cout << "Grau A" << endl;
//        }
//        break;
//        case 8:  // Caso o valor seja entre 80-89
//        {
//            cout << "Grau B" << endl;
//        }
//        break;
//        case 7:  // Caso o valor seja entre 70-79
//        {
//            cout << "Grau C" << endl;
//        }
//            break;
//        default: // Qualquer valor abaixo de 70
//        {
//            cout << "REPROVADO!" << endl;
//        }
//            break;
//        }
//    }
//
//    cout << "Insira um valor entre 0 e 100: ";
//    cin >> valor;
//    if(valor >= 100)
//    {
//        cout << "Valor invalido, alto de mais! " << endl;
//    }
//    else if(valor >= 90 && valor < 99)
//    {
//        cout << "Grau A" << endl;
//    }
//    else if(valor >= 80 && valor < 89)
//    {
//        cout << "Grau B" << endl;
//    }
//    else if(valor >= 70 && valor < 79)
//    {
//        cout << "Grau C" << endl;
//    }
//    else if(nota > 0 && valor < 70)
//    {
//        cout << "Valor invalido, baixo de mais! " << endl;
//    }
//    else
//    {
//
//    }
    int a = 0;

    while(a < 10)
    {
        cout << "ALYSSHOW PROGRAMACAO" << endl;
        cout << "a = " << a << endl;
        a = a + 1;
    }


    while(1);
    return 0;
}//fim da funcao principal
