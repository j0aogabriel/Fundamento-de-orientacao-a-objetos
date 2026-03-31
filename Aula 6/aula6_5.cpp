//aula 6 exercicio 4
#include <iostream>
using namespace std;
int main(){
    char continua;
    continua = 's';

    do {
    // comandos a serem repetidos
       cout << "Repetindo....\n";
       cout << "Tecle 's' se deseja continuar ou outra tecla ";
       cout << "para parar\n";
       cin >> continua;    
    } while (continua == 's' || continua == 'S'); //enquanto for igual a 's' desafio2
    return 0;
}
