/************************************************************************
                            SUIVA ELÍAS JOSÉ
                            C++ beecrowd | 2697
                            Complete Naebbirac’s Sequence
************************************************************************/
/*
#include <iostream>
#include <algorithm>
#include <stdlib.h>
#include <cmath>
#include <vector>
using namespace std;

int main() {

    int K, N, temp, input;


    cin >> K;
    cin >> N;

    int kNumeros[K];
    int numeros[N];

    for (int i = 0; i < N; ++i) {
        cin >>  numeros[i];
    }

    for(int i=0;i<=K;i++){
        kNumeros[i]=0;
    }

    for (int i = 0; i < N; i++) {
        temp=numeros[i];
        kNumeros[temp]++;
    }
    int contadoMinimo;
    int contadoMaximo;
    int elMinimoi=0;
    int elMaximoi=0;
    int cantidadMaximos=0;
    int cantidadMinimos=0;

    for(int i=1;i<=K;i++){
        if (kNumeros[i]!=0){
            contadoMinimo=kNumeros[i];
            contadoMaximo=kNumeros[i];
            elMaximoi=i;
            elMinimoi=i;
            i=K;
        }
    }


    for(int i=1;i<=K;i++){
        if (kNumeros[i]<contadoMinimo){
            contadoMinimo=kNumeros[i];
            elMinimoi=i;
            cantidadMinimos++;
        }
        if (kNumeros[i]>contadoMaximo){
            contadoMaximo=kNumeros[i];
            elMaximoi=i;
            cantidadMaximos++;
        }
    }





    int diferencia = contadoMaximo-contadoMinimo;

    if (diferencia>2) {
        cout << "*" << endl;
    } else {
        if (diferencia==2) {
            cout << "-" << elMaximoi << " +" << elMinimoi << endl;
        } else {
            if (diferencia==1) {
                if (cantidadMinimos>cantidadMaximos) {
                    cout << "+" << elMinimoi << endl;
                } else {
                    cout << "-" << elMaximoi << endl;
                }
            } else {

            }
        }
    }

    return 0;
}
*/