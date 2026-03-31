//aula 6 exercicio 2
#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Digite um numero para ver a tabuada: ";
    cin >> num;
    cout << "Tabuada de " << num << ":" << endl;

    // Loop for para gerar tabuada de 1 a 10
    for(int i = 1; i <= 10; i++) {
        cout << num << " x " << i << " = " << num * i << endl;
    }

    return 0;
}