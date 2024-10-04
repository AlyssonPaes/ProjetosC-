#include <iostream>

using namespace std;

int main()
{
    /*
    float num1, num2, num3, num4;
    float soma;

    cout << "Codigo para soma de dois numeros \n";
    cout << "Por favor digite o primeiro numero: ";
    cin >> num1;
    cout << "Por favor digite o segundo numero: ";
    cin >> num2;
    cout << "A soma de " << num1 << " + " << num2 << " eh igual a " << num1+num2 << endl;

    cout << "Ou pode ser feita desse jeito \n";
    cout << "Digite dois numeros \n";
    cout << "Por favor digite o primeiro numero: ";
    cin >> num3;
    cout << "Por favor digite o segundo numero: ";
    cin >> num4;
    soma = num3+num4;
    cout << "O resultado da soma eh igual a: " << soma << endl;
    */

    //tipos de sinais na linguagem C++
    // "+" sinal de soma
    // "-" sinal de subtração
    // "/" sinal de divisão
    // "*" sinal de multiplicação
    // "%" sinal de resto da divisão

    //Ordem de precedencia na linguagem C++ SEMPRE LENDO DA ESQUERDA PARA A DIREITA
    // Primeiro vem o ()
    // Depois vem "*" e "/" da esquerda pra direita
    // Depois vem "%"
    // E por fim "+" e "-"

    //Operadores relacionais de de igualdade
    // < menor que
    // > maior que
    // <= menor igual a
    // >= maior igual a
    // == igual a (O IGUAL SEMPRE TEM DOIS CARACTERES)
    // != diferente de

//    //Exemplo usando o if
//    if(11 < 10)
//    {
//        cout << "Verdadeiro" << endl;
//    }
//    else
//    {
//        cout << "Falso" << endl;
//    }

    float n1, n2, soma, sub, multi, divi;

    cout << "Exercicio aula 1 modulo 2 \n";
    cout << "Primeiro numero: ";
    cin >> n1;
    cout << "Segundo numero: ";
    cin >> n2;
    soma = n1 + n2;
    sub = n1 - n2;
    multi = n1 * n2;
    divi = n1 / n2;
    cout << "Os resultados de soma, subtracao, multiplicacao e divisao sao: \n";
    cout << "A soma de " << n1 << " + " << n2 << " eh igual a " << soma << endl;
    cout << "A subtracao de " << n1 << " - " << n2 << " eh igual a " << sub << endl;
    cout << "A multiplicacao de " << n1 << " * " << n2 << " eh igual a " << multi << endl;
    cout << "A divisao de " << n1 << " / " << n2 << " eh igual a " << divi << endl;

    if(n1 > n2)
    {
        cout << "O primeiro numero: " << n1 << " eh maior que o segundo numero: " << n2 << endl;
    }
    else if(n1 < n2)
    {
       cout << "O primeiro numero: " << n1 << " eh menor que o segundo numero: " << n2 << endl;
    }
    else if(n1 = n2)
    {
       cout << "O primeiro numero: " << n1 << " eh igual que o segundo numero: " << n2 << endl;
    }

    while(1);
    return 0;
}
