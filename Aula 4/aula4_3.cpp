//string com a biblioteca string e metodos - aula 4 programa 3
#include <iostream>
#include <string>
using namespace std;

int main() {

    string nome = "célia"; //variavel com um nome
    string letra = "a"; //variavel com uma letra
    string sobrenome = " kouth cabral"; //variavel com um sobrenome

    cout << "meu nome é : " << nome << endl;
    //metodo append para juntar strings
    cout << "nome completo " << (nome.append(sobrenome)) << endl; //concatenação, vai adicionar também junto do nome, o sobrenome (adicionar o que eu quero dentro da variavel)
    //metodo length para contar tamanho da string
    cout << "tamanho " << (nome.length()) << endl;
    //metodo size tambem da certo o nome.size()
    cout<<"\nPrimeira letra do nome: " <<nome[0];//mostrando a primeira letra do nome
    nome[0]='T'; //alterando a primeira letra do nome
    cout << "meu nome agora é : " << nome << endl;

    return 0;
}