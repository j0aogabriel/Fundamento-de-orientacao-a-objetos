
#include <iostream>
#include <string>
using namespace std;

// Definição de struct
struct Pessoa {
    string nome;
    int idade;
    float altura;
};

int main() {
    Pessoa p;

    // Coletando dados
    cout << "Digite o nome: ";
    getline(cin, p.nome);

    cout << "Digite a idade: ";
    cin >> p.idade;

    cout << "Digite a altura (em metros): ";
    cin >> p.altura;

    // Exibindo os dados
    cout << "\nDados da Pessoa:";
    cout << "Nome: " << p.nome << endl;
    cout << "Idade: " << p.idade << " anos" << endl;
    cout << "Altura: " << p.altura << " m" << endl;

    return 0;
}