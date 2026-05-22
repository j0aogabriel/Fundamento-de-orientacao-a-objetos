#include <iostream>
#include <string>
using namespace std;

// Classe abstrata - interface
class Veiculo {
public:
    // Método virtual puro
    virtual void exibirInformacoes() const = 0;
    // método obrigatório para filhos

    virtual ~Veiculo() {} 
    // destrutor virtual (boa prática em classes com herança)
};

// Classe derivada - concreto: Carro
class Carro : public Veiculo {
public:
    void exibirInformacoes() const override {
        cout << "Carro: Fusca Azul" << endl;
    }
};

// Classe derivada: Moto
class Moto : public Veiculo {
public:
    void exibirInformacoes() const override {
        //override para sobrepor o const = 0
        cout << "Moto: CG 160 preta" << endl;
    }
};

int main() {
    //classe virtual - Veiculo* e Carro classe concreta
    //Veiculo* = ponteiro para um objeto do tipo Veiculo
    //Crie um Carro e guarde ele em um ponteiro do tipo Veiculo
    Veiculo* v1 = new Carro();
    Veiculo* v2 = new Moto();

    v1->exibirInformacoes(); // Carro: Fusca Azul
    v2->exibirInformacoes(); // Motor: CG 160 preta
    
    delete v1;
    delete v2;
    return 0;
}