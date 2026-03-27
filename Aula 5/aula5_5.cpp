//aula 5 exercicio 5
#include <iostream>
using namespace std;
int main(){
    int dia_semana;
    cout << "Digite o dia da semana: ";
    cin >> dia_semana;
    switch (dia_semana) {
    case 1:
      cout << "domingo";
      break;
    case 2:
      cout << "segunda";
      break;
      // desafio
    default:
      cout << "este dia nao existe";
    }
    return 0;
}     