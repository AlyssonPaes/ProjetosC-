//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//    cout << "Hello world!" << endl;
//    return 0;
//}

#include <iostream>
#include <string> //lib de string do C++
using std::string;
using std::getline;

using std::cout;
using std::cin;
using std::endl;

//using namespace std;
//Primeira Classe


// ===================================================================================
// Desenvolvimento da classe
class SalesScore //criacao da classe SalesScore
{
    public:     //public é um especificador de acesso

        void bootSystem(string storeTitle)
        {
            cout << "Score de Vendas!\n" << storeTitle << endl;

        }//Fim do metodo bootSystem da classe SalesScore

};

// ===================================================================================
// Função principal
int main() //inicio da funcao principal
{
    string storeTitle; //string de caracteres para armazenar o nome da loja
    SalesScore mySales; //objeto mySales

    cout << "insira o nome da loja: " << endl;
    getline(cin, storeTitle); //lê o nome da loja com espaços em branco
    cout << endl;

    mySales.bootSystem(storeTitle);

    while(1);
    return 0;
}//fim da funcao principal
