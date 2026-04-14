#include <iostream> //apredendo vetor e matriz
using namespace std;
int main(){
    int Vetor[5]; // declara um vetor de 5 posicoes
    int Matriz[5][3]; // declara uma matriz de 5 linhas e 3 colunas

    Vetor[0] = 9; // coloca 9 na primeira posicao do vetor
    Vetor[4] = 30; // coloca 30 na ultima posicao do vetor

    Matriz[0][1] = 15; // coloca 15 na célula que está na primeira linha
                        // e na segunda coluna da matriz

    cout << "o vetor na posicao 0 tem o valor: " << Vetor[0];
    return 0;
}