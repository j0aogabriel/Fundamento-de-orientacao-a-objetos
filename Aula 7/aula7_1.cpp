//programa usando um pouco de
//programação defensiva
#include <iostream>
using namespace std;

int main() {
    float lado, areaq, base, altura, arear;

    cout << "Digite o lado do quadrado: entre 1 e 50" << endl;
    cin >> lado;
    if ((lado < 1) || (lado > 50)) {
        cout << "digite entre 1 e 50";
    }

    areaq = lado * lado;
    cout << "A área do quadrado é : " << areaq << endl;
    cout << "--------------------------" << endl << endl;
    cout << "Digite a base do retangulo: entre 1 e 50";
    cin >> base;
    cout << "Digite a altura do retangulo: entre 1 e 50";
    cin >> altura;
    //desafio1 - coloque aqui os testes de programaçao defensiva
    arear = (base * altura);
    cout << "A área do retangulo é : " << arear << endl;
    cout << "-----------------------------------------" << endl << endl;
    //desafio2 - area do circulo a=pi(r2) a=3.14* (r*r)
    //desafio3 - conversao de fahrenheit para celsius c= (F - 32) x 5/9 
}