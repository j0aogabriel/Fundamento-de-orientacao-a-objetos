//aula 5 exercicio 7
#include <iostream>
using namespace std;
int main()
{
    char tamanho;
    float imc;
    cout << "Digite seu IMC";
    cin >> imc;
    cout << "Digite o tamanho:(P/M/G)";
    cin >> tamanho;
    switch (tamanho)
    {
    case 'P':
        cout << "pequeno";
        if ((imc >= 18) && (imc <= 24))
        {
            cout << "para este imc sugiro tamanho M";
        }
        break;
    case 'M':
        cout << "medio";
        break;
    case 'm':
        cout << "medio";
        break;
    default:
        cout << "nao atendemos este publico";        
    }
    return 0;
}