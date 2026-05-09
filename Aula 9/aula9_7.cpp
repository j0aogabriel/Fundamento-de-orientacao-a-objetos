#include <iostream>
#include <queue> // Biblioteca para Fila (FIFO)
#include <stack> // Biblioteca para Pilha (LIFO)
#include <string>

using namespace std;

int main() {
    queue<string> fila;
    stack<string> pilha;
    int op;
    string nome;

    do {
        cout << "\n1-Add Fila | 2-Atender | 3-Cancelar (Pilha) | 0-Sair: ";
        cin >> op;

        if (op == 1) {
            cout << "Nome: ";
            cin >> nome;
            fila.push(nome); // Insere no fim da fila
        } 
        else if (op == 2 && !fila.empty()) {
            cout << "Atendendo: " << fila.front() << endl; // Mostra o primeiro
            pilha.push(fila.front()); // Guarda na pilha para histórico
            fila.pop(); // Remove o primeiro da fila
        } 
        else if (op == 3 && !pilha.empty()) {
            cout << "Cancelando do topo: " << pilha.top() << endl; // Mostra o topo
            pilha.pop(); // Remove o ultimo que entrou na pilha
        }
    } while (op != 0);

    return 0;
}