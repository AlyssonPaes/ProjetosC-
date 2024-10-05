#ifndef SALESSCORE_H //Esse ifDefine � um costume em C++ para quando o compilador for ler o c�digo e a classe
#define SALESSCORE_H //ser chamada em varios lugares ele n�o compile varias vezes a mesma coisa

#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

// Classe criada para implementar um score hipot�tico de vendas
class SalesScore
{
public:

    // Construtor
    SalesScore(string);

    void setStoreTitle(string); //Prototipo da fun��o
    string getStoreTitle();     //Prototipo da fun��o
    void bootSystem(string);    //Prototipo da fun��o

private:
    // Nome da loja
    string storeTitle;
};

#endif // SALESSCORE_H
