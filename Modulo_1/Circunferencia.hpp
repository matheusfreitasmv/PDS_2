#ifndef pi
#define pi 3.14
#include <cmath>
#endif

#ifndef CIRCUNFERENCIA_H
#define CIRCUNFERENCIA_H

struct Circunferencia{
    double xc, yc, raio;

    Circunferencia(double xc, double yc, double raio);
    double calcularArea();
    int possuiIntersecao(Circunferencia *circun);
};

#endif