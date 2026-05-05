#include <iostream> //aprendendo vetor e matriz
using namespace std;
int main(){
 #define NLIN 5
 #define NCOL 3

 int i, j, Matriz[NLIN][NCOL];
 for(i=0; i<NLIN; i++)
 for(j=0; j<NCOL; j++)
 Matriz[i][j] = i * j; //coloca o valor que vc quiser

 for(i=0; i<NLIN; i++)
 for(j=0; j<NCOL; j++)
 cout << "o valor guardado na linha " << i <<
 " coluna " << j << " é " << Matriz[i][j];

 return 0;
}