#ifndef SALESSCORE_H
#define SALESSCORE_H

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
    SalesScore(string title)
    {
        setStoreTitle(title);
    }

    // M�todo para definir o nome da loja
    void setStoreTitle(string title)
    {
        storeTitle = title;
    }

    // M�todo para retornar o nome da loja
    string getStoreTitle()
    {
        return storeTitle;
    }

    // M�todo para inicializar o sistema de vendas
    void bootSystem(string storeTitle)
    {
        cout << "Score de Vendas!\n" << storeTitle << endl;
    }

private:
    // Nome da loja
    string storeTitle;
};

#endif // SALESSCORE_H
