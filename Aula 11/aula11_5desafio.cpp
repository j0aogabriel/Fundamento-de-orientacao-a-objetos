#include <iostream>
#include <string>

using namespace std;

// Classe base (Interface)
class Veiculo {
protected:
    string modelo;
    string cor;
    int velocidade;

public:
    Veiculo(string modelo, string cor, int velocidadeInicial) {
        this->modelo = modelo;
        this->cor = cor;
        this->velocidade = velocidadeInicial;
    }

    virtual ~Veiculo() {}

    // Métodos obrigatórios para as classes filhas
    virtual void acelerar(int incremento) = 0;
    virtual void frear(int decremento) = 0;
    virtual void exibirInformacoes() const = 0;
};

// Classe Carro
class Carro : public Veiculo {
public:
    Carro(string modelo, string cor, int velocidadeInicial) 
        : Veiculo(modelo, cor, velocidadeInicial) {}

    void acelerar(int incremento) override {
        this->velocidade += incremento;
        cout << "[Carro] " << this->modelo << " acelerou para " << this->velocidade << " km/h." << endl;
    }

    void frear(int decremento) override {
        this->velocidade -= decremento;
        if (this->velocidade < 0) this->velocidade = 0;
        cout << "[Carro] " << this->modelo << " freou para " << this->velocidade << " km/h." << endl;
    }

    void exibirInformacoes() const override {
        cout << "Carro: " << this->modelo << " | Cor: " << this->cor << " | Velocidade: " << this->velocidade << " km/h" << endl;
    }
};

// Classe Moto
class Moto : public Veiculo {
private:
    int cilindradas;

public:
    Moto(string modelo, string cor, int velocidadeInicial, int cilindradas) 
        : Veiculo(modelo, cor, velocidadeInicial) {
        this->cilindradas = cilindradas;
    }

    void acelerar(int incremento) override {
        this->velocidade += (incremento + 5); // Moto ganha um bônus de aceleração
        cout << "[Moto] " << this->modelo << " acelerou para " << this->velocidade << " km/h." << endl;
    }

    void frear(int decremento) override {
        this->velocidade -= decremento;
        if (this->velocidade < 0) this->velocidade = 0;
        cout << "[Moto] " << this->modelo << " freou para " << this->velocidade << " km/h." << endl;
    }

    void exibirInformacoes() const override {
        cout << "Moto: " << this->modelo << " (" << this->cilindradas << "cc) | Cor: " << this->cor << " | Velocidade: " << this->velocidade << " km/h" << endl;
    }
};

int main() {
    // Criação dos objetos usando polimorfismo
    Veiculo* v1 = new Carro("Civic", "Preto", 20);
    Veiculo* v2 = new Moto("CG 160", "Preta", 10, 160);
    Veiculo* v3 = new Carro("Fusca", "Azul", 0);

    cout << "--- Estado Inicial ---" << endl;
    v1->exibirInformacoes();
    v2->exibirInformacoes();
    v3->exibirInformacoes();
    cout << endl;

    cout << "--- Simulando Acoes ---" << endl;
    v1->acelerar(40);
    v2->acelerar(40);
    v3->acelerar(20);
    
    v1->frear(15);
    v2->frear(100);
    cout << endl;

    cout << "--- Estado Final ---" << endl;
    v1->exibirInformacoes();
    v2->exibirInformacoes();
    v3->exibirInformacoes();

    // Liberação de memória
    delete v1;
    delete v2;
    delete v3;

    return 0;
}