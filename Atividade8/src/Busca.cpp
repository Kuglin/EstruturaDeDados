#include "Busca.hpp"

int Busca::buscaLinear(int* v, int tam, int valor) {

    for (int i = 0; i < tam; i++) {
        if (v[i] == valor)
            return i;
    }

    return -1;
}

int Busca::buscaBinaria(int* v, int tam, int valor) {

    int ini = 0;
    int fim = tam-1;
    int meio;

    while (ini <= fim) {
        
        meio = (ini+fim)/2;
        if (valor < v[meio])
            fim = meio - 1;
        
        else {
            if (valor > v[meio])
                ini = meio+1;

            else 
                return meio;
        }
    }
    
    return -1;
}