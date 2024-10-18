#ifndef SALESSCORE_H //Esse ifDefine é um costume em C++ para quando o compilador for ler o código e a classe
#define SALESSCORE_H //ser chamada em varios lugares ele não compile varias vezes a mesma coisa

#include <iostream>
#include <string>
#include <iomanip>

using std::string;
using std::cout;
using std::endl;
using std::setprecision; //Usado para adicionar precisao a saida numérica
using std::fixed;
using std::cin;
using namespace std;
using std::getline;

// Classe criada para implementar um score hipotético de vendas
class SalesScore
{
public:

    // Construtor
    SalesScore(string);

    void setStoreTitle(string); //Prototipo da função
    string getStoreTitle();     //Prototipo da função
    void bootSystem();    //Prototipo da função
    void calcSalesAvarege();
    void enterProducts();
    void reportProducts();


private:
    // Nome da loja
    string storeTitle;
    int produtoA, produtoB, produtoC;
};

#endif // SALESSCORE_H
