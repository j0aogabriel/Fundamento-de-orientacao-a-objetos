#include <iostream> //aprendendo vetor e matriz
using namespace std;
int main(){
 int i;
 #define TAM_MAX 10 //constante sempre em maiuscula
 double VetReais[TAM_MAX], VetCopia[TAM_MAX];
 for(i=0; i<TAM_MAX; i++)
 VetReais[i] = i; // preenche primeiro vetor
 
 for(i=0; i<TAM_MAX; i++)
 VetCopia[i] = VetReais[i]; // Copia os dados de um vetor
 // para outro
 //fazer cout do vetcopia
 return 0;
}
