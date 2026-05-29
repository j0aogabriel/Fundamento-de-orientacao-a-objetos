#include <iostream>
using namespace std;

// Classe abstrata mae
class Forma {
public:
    // Funcao virtual pura (obriga as filhas a terem o metodo area)
    virtual double area() = 0;
};

// Classe derivada do Retangulo
class Retangulo : public Forma {
private:
    double largura;
    double altura;
public:
    Retangulo() {
        largura = 0;
        altura = 0;
    }

    // Validacao defensiva para as dimensoes
    void setDimensoes(double l, double a) {
        if(l > 0 && a > 0) {
            largura = l;
            altura = a;
        } else {
            cout << "Valores invalidos para o retangulo!" << endl;
        }
    }

    // Calculo da area do retangulo
    double area() {
        return largura * altura;
    }
};

// Classe derivada do Circulo
class Circulo : public Forma {
private:
    double raio;
public:
    Circulo() {
        raio = 0;
    }

    // Validacao defensiva para o raio
    void setRaio(double r) {
        if(r > 0) {
            raio = r;
        } else {
            cout << "Valor invalido para o raio!" << endl;
        }
    }

    // Calculo da area do circulo (Pi * r^2)
    double area() {
        return 3.14159 * raio * raio;
    }
};

int main() {
    // Testando o Retangulo
    Retangulo ret;
    ret.setDimensoes(5, 10);
    cout << "Area do Retangulo: " << ret.area() << endl;

    // Testando o Circulo
    Circulo circ;
    circ.setRaio(3);
    cout << "Area do Circulo: " << circ.area() << endl;

    return 0;
}