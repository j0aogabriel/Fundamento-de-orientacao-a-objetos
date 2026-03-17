//programa com os tipos de variaveis - aula 4 programa 1
#include <iostream>
using namespace std;

int main() {
    int inteiro = 10;
    float pontoFlutuante = 3.14f;
    double pontoFlutuanteDuplo = 3.14159;
    char caractere = 'A';
    bool booleano = true;
    long num1 = 1234567890;
    long num2 = 9876543210; //vai gerar warning pois o numero
    // é maior que 

    // Realizando operações aritméticas
    long soma = num1 + num2;
    cout << "long" << soma << endl;
    cout << "int: " << inteiro << endl;
    cout << "float: " << pontoFlutuante << endl;
    cout << "double: " << pontoFlutuanteDuplo << endl;
    cout << "char: " << caractere;
    cout << "\nbool: " << booleano << endl;

    long int numero; //usando modificador de tipo
    short unsigned int numero2; //usando modificador de tipo

    return 0;
}