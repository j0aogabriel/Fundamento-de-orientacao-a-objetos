#include <iostream>
#include <queue> //obrigatorio pra fila FIFO First In, First Out
using namespace std;

int main() {
    queue<string> fila;

    // Adicionando elementos
    fila.push("Joao");
    fila.push("Maria");
    fila.push("Carlos");

    //Exibindo quem está na frente
    cout << "Primeiro da fila: " << fila.front() << endl;

    // Removendo o primeiro
    fila.pop();

    // Novo primeiro
    cout << "Agora o primeiro da fila: " << fila.front()
    << endl;

    return 0;
}