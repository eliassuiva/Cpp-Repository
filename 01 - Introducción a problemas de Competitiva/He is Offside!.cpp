/********************************************************************
SUIVA ELÍAS JOSÉ
C++ beecrowd | 1410
He is Offside!
********************************************************************/
/*
#include <iostream>
#include <algorithm>
#include <cmath>


int main() {

    int Atacantes, Defensores, distanciaMenorAtacante, distanciaMenorDefensor1 ,distanciaMenorDefensor2;
    int jugadoresAtacantes[11], jugadoresDefensores[11];
    bool offside;

    while (std::cin >> Atacantes >> Defensores) {

        if (Atacantes==0 && Defensores==0){ break;
        } else {
            for(int i=0;i<Atacantes;i++){
                std::cin >> jugadoresAtacantes[i];
            }
            for(int i=0;i<Defensores;i++){
                std::cin >> jugadoresDefensores[i];
            }

            int aux;
            for(int i=0;i<Atacantes;i++){
                for(int j=i+1;j<Atacantes;j++){
                    if(jugadoresAtacantes[j]<jugadoresAtacantes[i]){
                        aux=jugadoresAtacantes[i];
                        jugadoresAtacantes[i]=jugadoresAtacantes[j];
                        jugadoresAtacantes[j]=aux;
                    }
                }
            }
            for(int i=0;i<Defensores;i++){
                for(int j=i+1;j<Defensores;j++){
                    if(jugadoresDefensores[j]<jugadoresDefensores[i]){
                        aux=jugadoresDefensores[i];
                        jugadoresDefensores[i]=jugadoresDefensores[j];
                        jugadoresDefensores[j]=aux;
                    }
                }
            }

            distanciaMenorAtacante = jugadoresAtacantes[0];
            distanciaMenorDefensor1 = jugadoresDefensores[0];
            distanciaMenorDefensor2 = jugadoresDefensores[1];

            if (distanciaMenorAtacante>=distanciaMenorDefensor2){
                offside=false;
            } else  {
                offside= true;
            }
        }

        if(offside){
            std::cout << "Y" << std::endl;
        } else {
            std::cout << "N" << std::endl;
        }
    }
    return 0;
}
*/