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

    // --- MÉTODOS QUE FALTAVAM ---

    // Método para acelerar (aumenta a velocidade)
    void acelerar(int incremento) {
        this->velocidade += incremento;
        cout << this->modelo << " acelerou para " << this->velocidade << " km/h" << endl;
    }

    // Método para frear (diminui a velocidade sem deixar ficar negativa)
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
    Carro bike("caloi", "preta", 10);

    // Exibição das informações iniciais
    cout << "--- Informacoes Iniciais ---" << endl;
    carro1.exibirInformacoes();
    carro2.exibirInformacoes();
    carro3.exibirInformacoes();
    bike.exibirInformacoes();

    cout << "--- Executando Acoes ---" << endl;
    // acelerar carro1
    carro1.acelerar(10);
    carro1.acelerar(50);
    
    // Ações com a bike
    bike.acelerar(5);
    bike.frear(1);
    
    cout << endl << "--- Status Final da Bike ---" << endl;
    bike.exibirInformacoes(); // Corrigido de 'exibirInformacao' para 'exibirInformacoes'

    return 0;
}