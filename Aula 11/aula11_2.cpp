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

    //acelerar
    //frear

    void acelerar(int incremento) {
        this->velocidade += incremento;
        cout << this->modelo << " acelerou para " << this->velocidade << " km/h" << endl;
    }

    void frear(int decremento) {
        this->velocidade -= decremento;
        if (this->velocidade < 0) {
            this->velocidade = 0;
        }
        cout << this->modelo << " freou para " << this->velocidade << " km/h" << endl;
    }
};

int main() {
    // Criação de um objeto Carro
    Carro carro1("Fusca", "Azul", 0);
    Carro carro2("Gol", "Vermelho", 10);
    Carro carro3("Civic", "Preto", 20); 

    // Exibição das informações iniciais
    cout << "--- ESTADO INICIAL ---" << endl;
    carro1.exibirInformacoes();
    carro2.exibirInformacoes();
    carro3.exibirInformacoes();

    cout << "--- MOVIMENTANDO OS 3 CARROS ---" << endl;
    
    carro1.acelerar(40); 
    
    carro2.acelerar(60); 
    carro2.frear(20);    
    
    carro3.frear(30);    
    
    cout << endl;

    // Exibição das informações finais para ver o resultado das ações
    cout << "--- ESTADO FINAL ---" << endl;
    carro1.exibirInformacoes();
    carro2.exibirInformacoes();
    carro3.exibirInformacoes();

    return 0;
}