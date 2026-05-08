#include <iostream>
#include <string>
using namespace std;

// Definifição de struct
struct Pessoa {
    string nome;
    int idade;
    float altura;
};

int main() { 
    char continuar = 's';

    while (continuar == 's' || continuar == 'S') {
        Pessoa p;

        //Limpar buffer antes do getline
        cin.ignore();

        //Coletando dados
        cout << "Digite o nome: ";
        getline(cin, p.nome);

        cout << "Digite a idade: ";
        cin >> p.idade;

        cout << "Digite a altura (em metros): ";
        cin >> p.altura;

        //Exibindo os dados
        cout << "\nDados da pessoa:\n";
        cout << "Nome: " << p.nome << endl;
        cout << "Idade: " << p.idade << endl;
        cout << "Altura: " << p.altura << endl;

        // Perguntar se deseja continuar
        cout << "\nDeseja cadastrar outra pessoa? (s/n): ";
        cin >> continuar;
    }
    
    cout << "\nPrograma encerrado.\n";

    return 0;
}