#ifndef SALESSCORE_H //Esse ifDefine � um costume em C++ para quando o compilador for ler o c�digo e a classe
#define SALESSCORE_H //ser chamada em varios lugares ele n�o compile varias vezes a mesma coisa

#include <iostream>
#include <string>
#include <iomanip>

using std::string;
using std::cout;
using std::endl;
using std::setprecision; //Usado para adicionar precisao a saida num�rica
using std::fixed;
using std::cin;
using namespace std;
using std::getline;

// Classe criada para implementar um score hipot�tico de vendas
class SalesScore
{
public:

    // Construtor
    SalesScore(string);

    void setStoreTitle(string); //Prototipo da fun��o
    string getStoreTitle();     //Prototipo da fun��o
    void bootSystem();    //Prototipo da fun��o
    void calcSalesAvarege();
    void enterProducts();
    void reportProducts();


private:
    // Nome da loja
    string storeTitle;
    int produtoA, produtoB, produtoC;
};

#endif // SALESSCORE_H
