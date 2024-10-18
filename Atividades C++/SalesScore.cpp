//Arquivo .cpp da classe SalesScor

#include "SalesScore.h" //include do arquivo header

//Desenvolvimento das funções membros
SalesScore::SalesScore(string title) //Aqui é o metodo propriamente dito, antes do nome dele tem que passar de qual classe ele herda, nesse caso SalesScore::"Nome do metodo"
{
    setStoreTitle(title);
    produtoA = 0;
    produtoB = 0;
    produtoC = 0;
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
void SalesScore::bootSystem()
{
    cout << "Score de Vendas!\n" << getStoreTitle() << endl;
}

void SalesScore::calcSalesAvarege()
{
    int acc = 0; //Variavel responsavel para acumular os valores inseridos pelo usuário
    int counter = 0;
    int value = 0;
    double avg = 0;

    cout << "Insira o valor da venda ou -1 para sair: ";
    cin >> value;

    while(value != -1)
    {
        acc += value; //Variavel para pegar o valor de value e inserir no acc
        counter++; //Incrementa o valor de counter

        cout << "Insira outro valor de venda ou -1 para sair: ";
        cin >> value;
    }
    if(counter != 0) //Se counter for diferente de zero
    {
        avg = static_cast<double>(acc)/counter; // Calcula a média
        //static_cast é a mesma coisa que fazer um casting só que faz parte das ferramentas do C++

        cout << "\nNumero de vendas feitas hoje: " << counter;
        cout << " Valor em Vendas $: " << acc << endl;
        cout << "\nMedia em vendas $: " << setprecision(2) << fixed << avg << endl;
    }
    else
    {
        cout << "Nenhum valor de venda foi inserido! " << endl;
    }
}
void SalesScore::enterProducts()
{
    int product;

    cout << "Insira o produto Vendido: " << endl
         << "ou tecle crtl+C para finalizar " << endl;

     while((product = cin.get())!= EOF)
     {
        switch(product)
        {
            case 'a':
            case 'A':
            {
                produtoA++;
            }
            break;

            case 'b':
            case 'B':
            {
                produtoB++;
            }
            break;

            case 'c':
            case 'C':
            {
                produtoC++;
            }
            break;
            case '\n':
            {
            }
            case '\t':
            {
            }
            case ' ':
            {
            }
            break;

            default:
            {
                cout << "Produto nao cadastrado, insira um produto valido: " << endl;
            }
            break;

        }
     }
}

void SalesScore::reportProducts()
{
    cout << "\n-----------------------------"
         << "\n Resumo dos produtos vendidos"
         << "\n Produto A: " << produtoA
         << "\n Produto B: " << produtoB
         << "\n Produto C: " << produtoC << endl;
}


