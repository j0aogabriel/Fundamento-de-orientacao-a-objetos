#include <iostream> //aprendendo vetor e matriz
using namespace std;
int main(){
 #define NLIN 4
 #define NCOL 5

 int i, j;
 double Laboratorio[NLIN][NCOL];

 for(i=0; i<NLIN; i++){
   for(j=0; j<NCOL; j++) {
   cout << "Digite o peso do aluno sentado no computador "<< j << "fila "
   <<i<< endl;
   cin >> Laboratorio[i][j];}}

 for(i=0; i<NLIN; i++)
 for(j=0; j<NCOL; j++)
 cout << "o peso do aluno sentado no computador " << j << " fila " << i
<< " é " << Laboratorio[i][j];
    return 0;
    }