#ifndef SALESSCORE_H //Esse ifDefine é um costume em C++ para quando o compilador for ler o código e a classe
#define SALESSCORE_H //ser chamada em varios lugares ele não compile varias vezes a mesma coisa

#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

// Classe criada para implementar um score hipotético de vendas
class SalesScore
{
public:

    // Construtor
    SalesScore(string);

    void setStoreTitle(string); //Prototipo da função
    string getStoreTitle();     //Prototipo da função
    void bootSystem(string);    //Prototipo da função

private:
    // Nome da loja
    string storeTitle;
};

#endif // SALESSCORE_H
