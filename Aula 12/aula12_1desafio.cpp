//Desafio 1: Criar uma classe base Funcionario com uma função calcularSalario().
//Crie duas classes derivadas: Gerente e Vendedor, com cálculos diferentes.

#include <iostream>
using namespace std;

class Funcionario {
private:
    string nome;
    double salarioBase;
public:
    Funcionario() {
        nome = "";
        salarioBase = 0;
    }

    //setter
    void setNome(string n) {
        nome = n;
    }

    //getter
    string getNome() {
        return nome;
    }

    void setSalarioBase(double valor) {
        if(valor > 0) {
            salarioBase = valor;
            cout << "Salario atualizado!" << endl;
        } else {
            cout << "Valor de salario invalido!" << endl;
        }
    }

    double getSalarioBase() {
        return salarioBase;
    }

    virtual double calcularSalario() {
       return salarioBase;
    }
};

class Gerente : public Funcionario {
private:
    double bonus; // Atributo bonus do meu Gerente
public:
    // Meu constructor
    Gerente() {
        bonus = 0;
    }
    void registrarBonus(double valor) {
        if (valor > 100) {
            bonus = valor;
        } else {
            cout << "Valor de bonus inválido!" << endl;
        }
    }

    double calcularSalario() {
        return getSalarioBase() + bonus;
    }
};

class Vendedor : public Funcionario {
private:
    double comissao; // Atributo comissão do meu Vendedor
    double totalVendas; // Atributo total de vendas do meu Vendedor
public:
    // Meu constructor
    Vendedor() {
        comissao = 0;
        totalVendas = 0;
    }
    void registrarComissao(double valor) {
        if(valor > 0) { 
            comissao = valor;
            cout << "Comissao definida com sucesso!" << endl;
        } else {
            cout << "Valor de comissao invalido!" << endl;
        }
    }

    // 2. O void das vendas (Esse já estava PERFEITO no seu código!)
    void registrarVendas(double valor) {
        if(valor > 0) {
            totalVendas += valor;
            cout << "Vendas registradas!" << endl;
        } else {
            cout << "Valor de vendas invalido!" << endl;
        }
    }

    double calcularSalario() {
        return getSalarioBase() + (comissao * totalVendas);
    }
};

int main() {
    Gerente gerente;
    gerente.setNome("Carlos");
    gerente.setSalarioBase(5000);
    gerente.registrarBonus(2000);
    cout << "Salario do Gerente: " << gerente.calcularSalario() << endl;

    Vendedor vendedor;
    vendedor.setNome("Ana");
    vendedor.setSalarioBase(3000);
    vendedor.registrarComissao(0.1); // 10% de comissão
    vendedor.registrarVendas(20000); // Total de vendas
    cout << "Salario do Vendedor: " << vendedor.calcularSalario() << endl;

    return 0;
}
