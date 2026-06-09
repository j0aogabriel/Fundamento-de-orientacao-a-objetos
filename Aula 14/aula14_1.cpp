#include <iostream>
using namespace std;

class Energia {
public:
    void ligar() {
        cout << "Sistema de energia ligado." << endl;
    }
    void desligar() {
        cout << "Sistema de energia desligado." << endl;
    }
};

class Seguranca {
public:
    void monitorar() {
        cout << "Sistema de seguranca monitorando a residencia." << endl;
    }

    void status() {
        cout << "Status da seguranca: Ativa." << endl;
    }
};

class CasaInteligente : public Energia, public Seguranca {
public:
    void status() {
        cout << "Casa inteligente funcionando normalmente." << endl;
    }
};

int main() {
    CasaInteligente casa;
    
    casa.status();  // Método da CasaInteligente
    casa.Seguranca::status();  // Método da classe Seguranca
    casa.ligar(); // Método da classe Energia
    casa.monitorar();  // Método da classe Seguranca

    return 0;
}