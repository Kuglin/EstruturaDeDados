#include "funcAux.hpp"
#include <stdlib.h>

int* criarVetor(int n) {

    int *v = new int[n];

    for (int i = 0; i<n; i++)
        v[i] = i;

    return v;
}   

int* criarVetorEmbaralhado(int n) {

    int r, aux;
    
    int *v = criarVetor(n);

    for (int i = 0; i<n; i++) {
        r = rand() % n;
        aux = v[r];
        v[r] = v[i];
        v[i] = aux;
    }

    return v;
};