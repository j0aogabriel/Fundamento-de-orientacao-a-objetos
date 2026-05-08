#include <iostream>
#include <stack> //obrigatorio para pilha LIFO (Last In, First Out)
using namespace std;

int main() {
    stack<int> pilha;

    pilha.push(10);
    pilha.push(20);
    pilha.push(30);

    cout << "Topo da pilha: " << pilha.top() << endl; // 30

    pilha.pop(); // Remove 30

    cout << "Agora o topo da pilha: " << pilha.top() << endl; // 20

    return 0;
}