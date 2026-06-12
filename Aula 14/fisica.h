//CAMADA DE NEGOCIO - 3
#ifndef FISICA_H // Verifica se FISICA_H ainda não foi definido
#define FISICA_H // Define FISICA_H para evitar inclusões múltiplas

#include "Formula.h" // Inclui o arquivo de cabeçalho da classe base Formula

// Declaração da classe Física
// A classe Física herda publicamente da classe Formula
class Fisica : public Formula {
public:

    // Declaração do método calcular()
    // A palavra-chave override indica que este método sobrescreve um método virtual da classe Formula
    void calcular() override;
};

#endif // FISICA_H Fim da proteção contra múltiplas inclusões