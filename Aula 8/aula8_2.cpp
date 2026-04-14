#include <iostream>
using namespace std;

void menu() {
    cout << "1-bermuda" << endl;
    cout << "2-chinelo" << endl; 
    cout << "Digite sua opção";
}

int valores(int op) {
    int valor;
    switch (op) {
        case 1:
            valor=20.00;
            break;
        case 2:
            valor=40.00;
            break;
        default :
            cout << "nao existe";
            break;
};
    return valor;
}

int main() {
    int op,qtd;
    int valor_individual, total;
    menu();
    cin >> op;
    cout << "digite quantidade ";
    cin >> qtd;
    valor_individual = valores(op);
    total = valor_individual * qtd;
    cout << "valor a pagar " << total << endl;

    return 0;
}