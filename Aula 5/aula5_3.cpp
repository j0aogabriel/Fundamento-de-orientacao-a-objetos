// aula 5 exercicio 3
#include <iostream>
using namespace std;
int main() 
{
    bool porta;
    cout << "digite se a porta esta aberta (1 sim 0 nao)";
    cin >> porta;
    if(porta)
    {
        cout << "a porta esta aberta favor fechar e ligar o ar - condicionado"; }
             else
    {
        cout << "ligar ar condicionado"; 
    }
    return 0;
} 