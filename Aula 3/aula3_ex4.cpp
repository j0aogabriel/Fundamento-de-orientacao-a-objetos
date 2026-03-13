// exercício 4 aula 3
#include <iostream>
using namespace std;

int main() 
{
    int var1,
    var2;

    // Recebendo os dados
    cout << "Primeiro numero: ";
    cin >> var1;

    // Recebendo os dados
    cout << "Segundo numero: ";
    cin >> var2;

    cout << var1+var2 << endl;
    cout << var1-var2;
    cout << '\n';
    cout << var1*var2;
    cout << '\n';
    cout << var1/var2;
    cout << '\n';

    cout << var1 << " + " << var2 << " = " << var1+var2 << "\n";
    cout << var1 << " + " << var2 << " = " << var1-var2 << "\n";
    cout << var1 << " + " << var2 << " = " << var1*var2 << "\n";
    cout << var1 << " + " << var2 << " = " << var1/var2 << "\n";

return 0;   
    
}