#include <iostream>
using namespace std;

class Livro {
private:
    string titulo;
    string autor;
    string editora;
    int anoPublicacao;
    
    // Variaveis de estado para controle defensivo
    bool aberto;
    bool alugado;

public:
    // Construtor
    Livro() {
        titulo = "";
        autor = "";
        editora = "";
        anoPublicacao = 0;
        aborto = false; // Livro comeca fechado
        alugado = false; // Livro comeca disponivel
    }

    // Setters e Getters básicos
    void setDados(string t, string a, string e, int ano) {
        titulo = t;
        autor = a;
        editora = e;
        if(ano > 0) {
            anoPublicacao = ano;
        }
    }

    string getTitulo() {
        return titulo;
    }

    // Metodos de acao
    void abrir() {
        if(!aberto) {
            aberto = true;
            cout << "O livro '" << titulo << "' foi aberto." << endl;
        } else {
            cout << "O livro ja esta aberto!" << endl;
        }
    }

    void fechar() {
        if(aberto) {
            aberto = false;
            cout << "O livro '" << titulo << "' foi fechado." << endl;
        } else {
            cout << "O livro ja esta fechado!" << endl;
        }
    }

    void ler() {
        if(aberto) {
            cout << "Voce esta lendo o livro '" << titulo << "'..." << endl;
        } else {
            cout << "Nao e possivel ler. O livro esta fechado!" << endl;
        }
    }

    void alugar() {
        if(!alugado) {
            alugado = true;
            cout << "Livro alugado com sucesso!" << endl;
        } else {
            cout << "Este livro ja foi alugado por outra pessoa!" << endl;
        }
    }

    void guardar() {
        if(alugado) {
            alugado = false;
            cout << "Livro devolvido e guardado na estante!" << endl;
        } else {
            cout << "O livro ja esta na estante!" << endl;
        }
    }
};

int main() {
    Livro meuLivro;
    meuLivro.setDados("O Senhor dos Aneis", "J.R.R. Tolkien", " HarperCollins", 1954);

    cout << "--- Testando Livro: " << meuLivro.getTitulo() << " ---" << endl;
    meuLivro.ler(); // Vai dar erro porque esta fechado
    meuLivro.abrir();
    meuLivro.ler();
    meuLivro.fechar();
    meuLivro.alugar();
    meuLivro.guardar();

    return 0;
}