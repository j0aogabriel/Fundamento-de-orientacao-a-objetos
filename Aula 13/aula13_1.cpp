#include <iostream>
#include <string>
using namespace std;

// Classe base
class Veiculo {
protected: //encapsulamento
    string modelo;
    string cor;
    int velocidade;

public: //encapsulamento
    Veiculo(string modelo, string cor, int velocidadeInicial)
        : modelo(modelo), cor(cor), velocidade(velocidadeInicial) 
    {} //construtor

    void acelerar(int incremento) { //metodo
        velocidade += incremento;
    }

    void frear(int decremento) { //metodo
        velocidade = (velocidade - decremento > 0) ? velocidade - decremento : 0; //evita velocidade negativa
    }

    void exibirInformacoes() const {
        cout << "Modelo: " << modelo << endl;
        cout << "Cor: " << cor << endl;
        cout << "Velocidade: " << velocidade << " km/h" << endl;
    }
};

// Classe derivada - herdada herança
class Carro : public Veiculo {
private:
    int portas;

public:
    Carro(string modelo, string cor, int velocidadeInicial, int portas)
        : Veiculo(modelo, cor, velocidadeInicial), portas(portas) 
    {}

    void exibirInformacoesCarro() const {
        exibirInformacoes(); //chama o metodo da classe base
        cout << "Portas: " << portas << endl;
    }
};

// Classe derivada - herdada herança
class Moto : public Veiculo {
private:
    int pezinho;

public:
    Moto(string modelo, string cor, int velocidadeInicial, int pezinho)
        : Veiculo(modelo, cor, velocidadeInicial), pezinho(pezinho) 
    {}

    void exibirInformacoesMoto() const {
        exibirInformacoes(); //Chama metodo da classe base
        cout << "Pezinho: " << pezinho << endl;
    }
};


int main() {
    Carro meuCarro("Fusca", "Azul", 0, 2);
    Moto minhaMoto("Yamaha", "Azul", 0, 1);

    meuCarro.acelerar(30);
    meuCarro.frear(10);

    meuCarro.exibirInformacoesCarro();

    minhaMoto.acelerar(30);
    minhaMoto.frear(10);

    minhaMoto.exibirInformacoesMoto();

    return 0;
}