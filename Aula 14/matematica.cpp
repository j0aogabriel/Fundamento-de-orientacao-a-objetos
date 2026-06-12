//CAMADA DE  NEGOCIO - 3 
#include <iostream>
#include <cmath>
#include "Matematica.h"
using namespace std;

// Aqui está o código dos métodos que pertencem a classe Matematica
double Matematica::bhaskara(double a, double b, double c) {
    return (b * b) - (4 * a * c);
}

void Matematica::calcular() {
    double a, b, c;

    cout << "\n=== FORMULA DE BHASKARA ===\n";

    cout << "Digite A: ";
    cin >> a;

    cout << "Digite B: ";
    cin >> b;

    cout << "Digite C: ";
    cin >> c;

    double delta = bhaskara(a, b, c);

    if (delta < 0) {
        cout << "Delta negativo.\n";
        return;
    }

    double x1 = (-b + sqrt(delta)) / (2 * a);
    double x2 = (-b - sqrt(delta)) / (2 * a);

    cout << "Delta: " << delta << endl;
    cout << "X1: " << x1 << endl;
    cout << "X2: " << x2 << endl;
}