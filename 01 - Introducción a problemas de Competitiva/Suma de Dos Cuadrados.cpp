
/********************************************************************
SUIVA ELÍAS JOSÉ
C++ beecrowd | 1558
Suma de Dos Cuadrados
********************************************************************/
/*
#include <iostream>
#include <cmath>

int main() {
    long long numeroI, suma,aux1=0,aux2=0,c1=0,c2=0,raiz;
    bool esSumaC;
    while (std::cin >> numeroI) {
        esSumaC = false;
        suma = 0;
        aux1 = 0;
        aux2 = 0;
        c1 = 0;
        c2 = 0;
        raiz = sqrt(numeroI);

        while(c2<=raiz&&!esSumaC) {
            while(c1<=raiz&&!esSumaC) {
                aux1 = pow(c1,2);
                aux2 =  pow(c2,2);
                suma = aux1+aux2;
                if(suma==numeroI) {
                    esSumaC = true;
                };
            c1++;
            }
            aux1 = 0;
            aux2 = 0;
            c1=c2+1;
            c2++;
        }
        if (esSumaC) {
            std::cout << "YES" << std::endl;
        } else {
            std::cout << "NO" << std::endl;
        }
    };
    return 0;
}
*/