#include <iostream>
#include <string>
using namespace std;

class Conta { //classe
private: //encapsulamento 
   int numeroConta;
   string titular;
   double saldo;

public:
    // metodo Construtor
    Conta(int numero, string nome, double saldoInicial) {
        numeroConta = numero;
        titular = nome;
        saldo = saldoInicial;
    }

    //aula 14/05
    // Depositar dinheiro metodo
    void depositar(double valor) {
        saldo += valor;
        cout << "Deposito realizado com sucesso!" << endl;
    }

    // Sacar dinheiro metodo
    void sacar(double valor) {
        if (valor <= saldo) {
            saldo -= valor;
            cout << "Saque realizado com sucesso!" << endl;
        } else {
            cout << "Saldo insuficiente!" << endl;
        }
    }

    // Exibir dados da conta
    void exibirDados() {
        cout << "\n=== DADOS DA CONTA ===" << endl;
        cout << "Titular: " << titular << endl;
        cout << "Conta: " << numeroConta << endl;
        cout << "Saldo: R$" << saldo << endl; 
    }
};