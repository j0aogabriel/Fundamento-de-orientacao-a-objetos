//CAMADA DE NEGOCIO - 3

#include <iostream> // Biblioteca para entrada e saída de dados (cin e cout e endl)
#include "Fisica.h" // Inclui o cabeçalho da classe Fisica
using namespace std; // Evita escrever std:: antes de cin, cout e endl

// Implementação do método calcular() da classe Fisica
void Fisica::calcular() {

    // Declaração das variáveis do tipo double
    // utilizadas para armazenar valores decimais
    double forca, massa, aceleracao;
    
    // Exibe o título da operação
    cout << "\n=== SEGUNDA LEI DE NEWTON ===\n";

    // Solicita ao usuário o valor da massa
    cout << "Digite a massa: ";
 
    // Le o valor informado pelo usuário
    cin >> massa;

    // Solicita ao usuário o valor da aceleração
    cout << "Digite a aceleração: ";

    // Le o valor informado pelo usuario
    cin >> aceleracao;

    //Calcula a força resultante utilizando a formula:
    // Força = Massa x Aceleração
    forca = massa * aceleracao;

    // Exibe o resultado do cálculo
    cout << "Forca Resultante: " << forca << " N" << endl;
}