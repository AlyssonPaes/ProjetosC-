//Arquivo .cpp da classe SalesScore

#include "SalesScore.h"
#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;


//Desenvolvimento das funções membros
SalesScore::SalesScore(string title) //Aqui é o metodo propriamente dito, antes do nome dele tem que passar de qual classe ele herda, nesse caso SalesScore::"Nome do metodo"
{
    setStoreTitle(title);
}

// Método para definir o nome da loja
void SalesScore::setStoreTitle(string title)
{
    if(title.length() <= 20) //Verificando se a mensagem tem até 20 caracteres
    {
        storeTitle = title;
    }
    else if(title.length() > 20)
    {
        storeTitle = title.substr(0,20);
        cout << "Titulo da loja " << title << " excedeu o comprimento maximo da mensagem " << endl;
    }
}

// Método para retornar o nome da loja
string SalesScore::getStoreTitle()
{
    return storeTitle;
}

// Método para inicializar o sistema de vendas
void SalesScore::bootSystem(string storeTitle)
{
    cout << "Score de Vendas!\n" << storeTitle << endl;
}


