#include <iostream>
using namespace std;
int main(){
    float n1=0, n2=0, media=0;
    int faltas=0;
    cout << "Digite qtd faltas: ";
    cin >> faltas;
    cout << "Digite a Nota 1: ";
    cin >> n1;
    cout << "Digite a Nota 2: "; 
    cin >> n2;
    media = (n1 + n2)/2;
    if (faltas > 180) {
        cout << "reprovado por falta"; }
    else {
        if (media >= 6) {
            cout << "Aluno Aprovado"; }
        else {
            cout << "Aluno Rprovado media";
            }
        }
    return 0;   
 }
    
    
