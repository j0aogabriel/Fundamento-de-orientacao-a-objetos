#include <iostream> //aprendendo vetor e matriz
using namespace std;
int main(){
 int i;
 #define TAM_MAX 10 //criando constante com valor 10
 double VetReais[TAM_MAX]; //usando um vetor de double
 for(i=0; i<TAM_MAX; i++)
 VetReais[i] = TAM_MAX - i; // coloca 5,4,3,2,1 no vetor

 //cout ....
 return 0;
}
