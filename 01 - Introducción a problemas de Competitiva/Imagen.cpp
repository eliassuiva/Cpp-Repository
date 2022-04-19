
/********************************************************************
SUIVA ELÍAS JOSÉ
C++ beecrowd | 1516
Imagen
********************************************************************/
/*
#include <iostream>
#include <algorithm>
#include <cmath>

int main() {
    int ALTO,ANCHO, ALTO2, ANCHO2;
    int ajusteAlto, ajusteAncho;

    while (std::cin >> ALTO >> ANCHO) {
        if (ALTO==0 && ANCHO==0){
            break;
        } else {
        char dibujo[ALTO][ANCHO];

            for(int i=0;i<ALTO;i++){
                for(int j=0;j<ANCHO;j++){
                    std::cin >> dibujo[i][j];
                };
            };

            std::cin >> ALTO2 >> ANCHO2;
            ajusteAlto = ALTO2/ALTO;
            ajusteAncho = ANCHO2/ANCHO;

            for(int i=0;i<ALTO;i++){
                for(int m=0;m<ajusteAlto;m++) {
                    for (int j = 0; j < ANCHO; j++) {
                        for (int k = 0; k < ajusteAncho; ++k) {
                            std::cout << dibujo[i][j];
                        }
                    }
                    std::cout << std::endl;
                }
            };
            std::cout << std::endl;
        }
    }
    return 0;
}
*/