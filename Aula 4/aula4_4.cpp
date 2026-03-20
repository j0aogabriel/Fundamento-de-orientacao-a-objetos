//aula 4 exercicio 4
#include <iostream>
using namespace std;

int main() {
    int k = 10, j = 10;

    //pré fixado // incremento
    cout << "antes do pré fixado" << k << "\n";
    cout << "durante do pré fixado" << ++k << "\n";
    cout << "depois do pré fixado" << k << "\n";

    // pós fixado // incremento
    cout << "antes do pós fixado" << j << "\n";
    cout << "durante do pós fixado" << j++ <<
    " primeiro imprime o valor depois soma\n";
    cout << "depois do pós fixado" << j << "\n";
    return 0;
}