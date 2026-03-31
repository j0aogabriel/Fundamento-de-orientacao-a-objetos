#include <iostream>
using namespace std;
int main() {
    char continua;
    continua = 's';

    while (continua == 's' || continua == 'S') { //enquanto for igual 's' desafio1
        //comandos a serem repetidos
        cout << "Repetindo....\n";
        cout << "tecle 's' se deseja continuar ou outra tecla ";
        cout << "para parar\n";
        cin >> continua;
    }
    return 0;
}
