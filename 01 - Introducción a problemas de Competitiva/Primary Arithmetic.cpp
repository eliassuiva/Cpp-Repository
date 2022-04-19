
/********************************************************************
SUIVA ELÍAS JOSÉ
C++ beecrowd | 1212
Primary Arithmetic
********************************************************************/
/*
#include <iostream>

int main() {

    long long acarreo, numero1, numero2, cin1, cin2, cantidadAcarreos = 0;


    while(std::cin >> cin1 >> cin2) {

        numero1 = cin1;
        numero2 = cin2;

        if (cin1==0 && cin2==0){
            break;
        }
        cantidadAcarreos = 0;
        acarreo = 0;


        while (numero1 || numero2) {


            if (((numero1%10 + numero2%10)+acarreo)>9) {
                cantidadAcarreos++;
                acarreo = 1;
                numero1 =  numero1/10;
                numero2 = numero2/10;
            } else {
            acarreo = 0;
                numero1 =  numero1/10;
                numero2 = numero2/10;
            }
        }

        if (cantidadAcarreos==0) {
            std::cout << "No carry operation." << std::endl;
        } else {
            if (cantidadAcarreos==1) {
                std::cout << cantidadAcarreos << " carry operation." << std::endl;
            } else {
                std::cout << cantidadAcarreos << " carry operations." << std::endl;
            }
        }

    }

    return 0;
}
*/