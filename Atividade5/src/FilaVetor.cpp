#include "FilaVetor.h"

#include <iostream>
#include <string>
using namespace std;

FilaVetor::FilaVetor(int tam) {

    vet = new int[tam];
    n = 0;
    ini = 0;
    this->tam = tam;

}

string FilaVetor::toString() {

    string saida = "";

    for (int i = ini; i < ini+n; i++) {
        
        saida += to_string(vet[i%tam]) + " ";
    }

    return saida;

}

void FilaVetor::enqueue(int v) {
    
    if (n == tam)
        return;

    vet[(ini+n)%tam] = v;
    n++;

}

int FilaVetor::dequeue() {

    int valor = vet[ini%tam];
    ini++;
    n--;

    return valor;

}

bool FilaVetor::isEmpty() {

    if (n==0)
        return 1;

    return 0;
}

void FilaVetor::reset() {

    n = 0;
    ini = 0;

}

FilaVetor* FilaVetor::concatena(FilaVetor *f2) {

    FilaVetor *f3 = new FilaVetor(tam + f2->tam);

    int i_f1 = ini;
    int i_f2 = f2->ini;

    while (i_f1 < ini + n) {
        f3->enqueue(vet[i_f1%tam]);
        i_f1++;
    }

    while (i_f2 < f2->ini + f2->n) {
        f3->enqueue(f2->vet[i_f2 % f2->tam]);
        i_f2++;
    }

    return f3;
}

FilaVetor* FilaVetor::merge(FilaVetor *f2) {

    FilaVetor *f3 = new FilaVetor(tam + f2->tam);

    int i_f1 = ini;
    int i_f2 = f2->ini;

    while ( (i_f1 < ini + n) && (i_f2 < f2->ini + f2->n) ) {
        f3->enqueue(vet[i_f1%tam]);
        f3->enqueue(f2->vet[i_f2 % f2->tam]);
        i_f2++;
        i_f1++;
    }

    while (i_f1 < ini + n) {
        f3->enqueue(vet[i_f1%tam]);
        i_f1++;
    }

    while (i_f2 < f2->ini + f2->n) {
        f3->enqueue(f2->vet[i_f2 % f2->tam]);
        i_f2++;
    }

    return f3;
}



