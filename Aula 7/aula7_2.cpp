//aula 7 exercicio 2
#include <iostream>
#include <stdexcept> // Necessário para runtime_error

using namespace std;

double dividir(double numerador, double denominador) {
    if (denominador == 0) {
        // Lança uma exceção do tipo runtime_error se o denominador for zero
        throw runtime_error("Erro: Divisao por zero nao permitida!");
    }
    return numerador / denominador;
}

int main() {
    double n1, n2, resultado;

    // Bloco TRY: código que pode gerar erro
    try {
        cout << "--- Programa de Divisao Segura ---" << endl;
        cout << "Digite o numerador: ";
        cin >> n1;
        cout << "Digite o denominador: ";
        cin >> n2;


        cout << "Tentando dividir..." << endl;
        resultado = dividir(n1, n2);
        cout << "Resultado: " << resultado << endl;
    }
    // Bloco CATCH: trata o erro lançado
    catch (const runtime_error& xx) {
        cerr << "Erro capturado: " << xx.what() << endl;
    }
    // O C++ não tem 'finally', mas o código aqui sempre roda
    // após o try-catch
    cout << "Execucao do bloco de divisao finalizada." << endl;

    return 0;
}