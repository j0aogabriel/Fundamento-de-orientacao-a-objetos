#include <iostream>
using namespace std;

class Presenca {
public:
    void registrarPresenca() {
        cout << "Presenca registrada." << endl;
    }

    void status() {
        cout << "Aluno presente." << endl;
    }
};

class Avaliacao {
public:
    void lancarNota() {
        cout << "Nota lancada." << endl;
    }

    void status() {
        cout << "Nota disponivel." << endl;
    }
};

class Aluno : public Presenca, public Avaliacao {
public:
    void status() {
        cout << "Dados academicos do aluno atualizados." << endl;
    }
};

int main() {
    Aluno aluno;

    aluno.status();  // Método da classe Aluno
    aluno.Presenca::status();  // Método da classe Presenca
    aluno.Avaliacao::status();  // Método da classe Avaliacao

    aluno.registrarPresenca();
    aluno.lancarNota(); 

    return 0;
}