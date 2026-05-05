#include <iostream>
#include <list> //lista
using namespace std;

int main() {
    list<int> numeros;

    // Inserir no final
    numeros.push_back(10);
    numeros.push_back(20);
    numeros.push_back(30);

    // Inserir no início
    numeros.push_front(5);

    // Imprimir a lista
    cout << "Elementos da lista: ";
    for (int n : numeros) {
        cout << n << " ";
    }
    cout << endl;

    // Remover um elemento (pelo valor)
    numeros.remove(20);

    cout << "Após remover 20: ";
    for (int n : numeros) {
        cout << n << " ";
    }
    cout << endl;

    return 0;
}