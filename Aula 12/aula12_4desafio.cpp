#include <iostream>
using namespace std;

class Pessoa {
private:
    string nome;
    string sobrenome;
    int idade;
    string genero;
    
    // Variavel de estado para controle
    bool acordada;

public:
    // Construtor
    Pessoa() {
        nome = "";
        sobrenome = "";
        idade = 0;
        genero = "";
        acordada = true; // A pessoa comeca acordada
    }

    void setDados(string n, string s, int id, string g) {
        nome = n;
        sobrenome = s;
        genero = g;
        if(id >= 0) {
            idade = id;
        }
    }

    // Metodos de acao
    void comer() {
        if(acordada) {
            cout << nome << " esta comendo algo saboroso." << endl;
        } else {
            cout << nome << " nao pode comer dormindo!" << endl;
        }
    }

    void dormir() {
        if(acordada) {
            acordada = false;
            cout << nome << " foi dormir... Zzz" << endl;
        } else {
            cout << nome << " ja esta dormindo!" << endl;
        }
    }

    void pensar() {
        if(acordada) {
            cout << nome << " esta pensando sobre a vida e programacao..." << endl;
        } else {
            cout << nome << " esta sonhando, nao pensando ativamente." << endl;
        }
    }

    void trabalhar() {
        if(acordada) {
            cout << nome << " esta focado trabalhando agora." << endl;
        } else {
            cout << nome << " nao pode trabalhar! Acorde ele primeiro." << endl;
        }
    }
    
    void acordar() {
        if(!acordada) {
            acordada = true;
            cout << nome << " acordou!" << endl;
        }
    }
};

int main() {
    Pessoa p;
    p.setDados("Joao", "Silva", 20, "Masculino");

    cout << "--- Testando Acoes de Pessoa ---" << endl;
    p.pensar();
    p.trabalhar();
    p.dormir();
    p.comer(); // Vai acusar que esta dormindo
    p.acordar();

    return 0;
}