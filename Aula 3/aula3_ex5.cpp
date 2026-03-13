// exercicio 5 aula 3
//programa digitando numeros e fazendo calculo matematicos simples
#include <iostream>
using namespace std;
int main()
{
    float num1, num2;
    //Recebendo os dados
    cout << "Primeiro numero: ";
    cin >> num1;

    cout << "Segundo numero: ";
    cin >> num2;

    //Exibindo as operações
    cout << "Soma         : " << num1 + num2 << endl;
    cout << "Subtracao         : " << num1 - num2 << endl;
    cout << "Multiplicacao         : " << num1 * num2 << endl;
    cout << "Divisao         : " << num1 / num2 << endl;
    cout << "Modulo         : " << (int)num1 % (int)num2 << endl;
    cout << "Porcentagem         : " << 100.0*(num1/num2) << endl;
    cout << "Media         : " << (num1 + num2)/2 << endl;

    return 0;

    
}