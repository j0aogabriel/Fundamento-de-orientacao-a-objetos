#include <iostream>
#include <string>
using namespace std;

// Definição da classe Carro
class Carro {
private: //propriedades
    string modelo;
    string cor;
    int velocidade;
public:
    // Construtor
    Carro(string modelo, string cor, int velocidadeInicial) {
        this->modelo = modelo;
        this->cor = cor;
        this->velocidade = velocidadeInicial;
    }

    void exibirInformacoes() {
        cout << "Modelo: " << this->modelo << endl;
        cout << "Cor: " << this->cor << endl;
        cout << "Velocidade: " << this->velocidade << " km/h" << endl;
        cout << endl;
    }
};

int main() {
    // Criação de um objeto Carro
    Carro carro1("Fusca", "Azul", 0);
    Carro carro2("Gol", "Vermelho", 10);
    Carro carro3("Civic", "Preto", 20);

    // Exibição das informações iniciais
    carro1.exibirInformacoes();
    carro2.exibirInformacoes();
    carro3.exibirInformacoes();

    return 0;
}