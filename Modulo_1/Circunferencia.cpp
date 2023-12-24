#include "Circunferencia.hpp"

Circunferencia::Circunferencia(double xc_, double yc_, double raio_){
    this->xc = xc_;
    this->yc = yc_;
    this->raio = raio_;
}

double Circunferencia::calcularArea(){
    double area = 0;
    area = pi * pow(this->raio, 2);
    return area;
}

int Circunferencia::possuiIntersecao(Circunferencia *circun){
    if(this->raio + circun->raio >= sqrt(pow(this->xc - circun->xc, 2) + pow(this->yc - circun->yc, 2)) ){
        return 1;
    }else{
        return 0;
    }
}



