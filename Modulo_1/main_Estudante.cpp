#include <iostream>
#include "Estudante.hpp"
                        //INCOMPLETO
using namespace std;

struct Dados{
    string name;
    int matricula;
    float notas[5];
    float rsg;
};

int main(){
    struct Dados d[10];
    int i = 0, j = 0;

    for(i = 0; i < 10; i++){
        cin >> d[i].matricula;
        cin >> d[i].name;
        for(j = 0; j < 5; j++){
            cin >> d[i].notas[j];
        }
        d[i].rsg = calcularRSG();
    }

    

    /*for(i = 0; i < 10; i++){
        cout << d[i].matricula << " ";
        cout << d[i].name << " ";
        for(j = 0; j < 5; j++){
            cout << d[i].notas[j] << " ";
        }
        cout << endl;
    }*/
    

    return 0;
}