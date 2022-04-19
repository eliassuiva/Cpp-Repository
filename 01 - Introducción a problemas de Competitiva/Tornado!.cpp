
/********************************************************************
SUIVA ELÍAS JOSÉ
01 - 003 - Introducción a problemas de Competitiva
C++ beecrowd | 1266
Tornado!
********************************************************************/
/*
#include <iostream>
#define tam 5000

int main() {


    int cerca[tam];
    int cercaAux[tam];
    int cantPostes, contador, postesMadera, primero;
    bool todos0;

    while (std::cin >> cantPostes) {

        if (cantPostes==0) {break;}
        if (cantPostes<5 || cantPostes>5000) {break;}

        postesMadera=0;
        contador=0;
        todos0 = true;

        for (int i=0; i<5000;i++) {
            cerca[i]=0;
            cercaAux[i]=0;
        }


        for (int i=0; i<cantPostes;i++) {
            std::cin >> cerca[i];
        }

        int i = 0;
        while(cerca[i]!=1){
            i++;
        };
        primero = i;

        int j=0;
        for (int i = primero; i<cantPostes;i++) {
             cercaAux[j] = cerca[i];
             j++;
        };

        for (int i=0; i<cantPostes;i++) {


                 if (cercaAux[i]==0 && contador==1) {
                    postesMadera++;
                    contador=0;
                 } else {
                     if(cercaAux[i]==0) {
                         contador++;
                     }
                 }
                 if (cercaAux[i]==1) {
                     contador=0;
                     todos0 = false;
                 }
        }
        if (todos0 && cantPostes%2==1) {
            postesMadera++;
        }

        std::cout <<  postesMadera << std::endl;

    }



 return 0;
}
*/