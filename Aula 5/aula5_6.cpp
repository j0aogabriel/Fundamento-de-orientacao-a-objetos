//aula 5 exercicio 6    
#include <iostream>
using namespace std;
int main(){
  char tamanho;
    cout << "Digite o tamanho:(P/M/G)";
    cin >> tamanho;
    switch (tamanho) {
      case 'P':
        cout << "Pequeno";
      break;
      case 'M':
        cout << "Medio";
      break;
     default:
        cout << "nao atendemos" << "este publico";
    }
    return 0;
}