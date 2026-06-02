#include <iostream>
using namespace std;

class Pessoa {
protected:
    string nome;
    int idade;

public:
    void cadastrar() {
        cout << "Nome: ";
        cin >> nome;

        cout << "Idade: ";
        cin >> idade;
    }

    void exibir() {
        cout << "\nNome: " << nome;
        cout << "\nIdade: " << idade;
    }
};

class Aluno : public Pessoa {
private:
    string matricula;
    string curso;

public:
    void cadastrarAluno() {
        cadastrar();

        cout << "Matricula: ";
        cin >> matricula;

        cout << "Curso: ";
        cin >> curso;
    }

    void exibirAluno() {
        exibir();

        cout << "\nMatricula: " << matricula;
        cout << "\nCurso: " << curso;
    }
};

int main() {
    Aluno aluno;
    aluno.cadastrarAluno();
    aluno.exibirAluno();

    return 0;
}


