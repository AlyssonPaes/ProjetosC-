#include "SalesScore.h"
#include <iostream>
#include <string> //lib de string do C++

using std::string;
//using std::getline;
using std::cout;
//using std::cin;
using std::endl;
//using namespace std;

// ===================================================================================
// Fun��o principal
int main() //inicio da funcao principal
{
//    string storeTitle; //string de caracteres para armazenar o nome da loja
//    SalesScore mySales; //objeto mySales
//
//    cout << "Titulo inicial da loja: " << mySales.getStoreTitle() << endl;
//
//    cout << "\nInsira o nome da loja " << endl;
//    getline(cin, storeTitle); //l� o nome da loja com espa�os em branco
//    cout << endl;
//
//    mySales.bootSystem(storeTitle);

    //Cria dois objetos da classe SalesScore
    SalesScore myStore1("ACP STORE!!!");
    SalesScore myStore2("ACP OUTLET!!");

    cout <<   "Loja 1 criada com sucesso: " << myStore1.getStoreTitle()
         << "\nLoja 2 criada com sucesso: " << myStore2.getStoreTitle() << endl;


    while(1);
    return 0;
}//fim da funcao principal
