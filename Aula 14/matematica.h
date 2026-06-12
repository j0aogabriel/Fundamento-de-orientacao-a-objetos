//CAMADA DE NEGOCIO - 3
//SUBCLASSSE DE FORMULA

#ifndef MATEMATICA_H
#define MATEMATICA_H

#include "Formula.h"

class Matematica : public Formula {
public:
    void calcular() override;

private:
    double bhaskara(double a, double b, double c);
};

#endif