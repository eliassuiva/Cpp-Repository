/************************************************************************
                            SUIVA ELÍAS JOSÉ
                            C++ beecrowd | 2037
                            Fixture Extraviado
************************************************************************/
/*
#include <iostream>
#include <algorithm>
#include <stdlib.h>
#include <cmath>
#include <vector>


using namespace std;

int main() {

    int N;
    bool TERMINAR = false;

    while (!TERMINAR) {

        cin >> N;

        if (N == -1) {
            TERMINAR = true;
        } else {
            string cadena[N];
            vector<int> fixture;
            int length;
            int maximoLength = 1;

            for (int i = 0; i < N - 1; ++i) {
                cin >> cadena[i];
            }
            cout << endl;

            for (int i = 0; i < N; ++i) {
                length = cadena[i].length();
                if (length > maximoLength) {
                    maximoLength = length;
                }
            }

            int k=0;
            bool seguir= true;
            while (seguir) {
                if (k==maximoLength) {
                    seguir=false;
                } else {
                        for (int i = 0; i <= N; i++) {

                            if (k>cadena[i].length()) {

                            } else {
                                if (cadena[i][k]=='1'){
                                    fixture.push_back(i+2);
                                };
                            }
                        }
                    }
            k++;
            }
            int tamF = fixture.size();
            for (int i = 0; i < tamF; ++i) {
                cout << fixture[i];
            }



        }
    }

    return 0;
}
*/