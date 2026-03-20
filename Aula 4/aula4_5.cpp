// aula 4 exercicio 5
#include <iostream>
using namespace std;

int main(){
    int k = 10, j = 10;
    //para somar
    k = k + 1;
    cout << "O valor de k alterado para " << k << "\n";
    //para subtrair
    j = j - 1;
    cout << "O valor de j alterado para " << j << "\n";
    //mas tambem pode ser - incremento pós fixado
    k++;
    cout << "O valor de k alterado para " << k << "\n";
    //decremento pós fixado
    j--;
    cout << "O valor de j alterado para " << j << "\n";
    //e tambem pode ser - incremento pré fixado
    ++k;
    cout << "O valor de k alterado para " << k << "\n";
    //decremento pós fixado
    --j;
    cout << "O valor de j alterado para " << j << "\n";
    return 0;
}