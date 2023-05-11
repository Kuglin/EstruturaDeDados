#ifndef ARVOREBINARIA_H
#define ARVOREBINARIA_H

#include "NoArvoreBinaria.h"
#include <string>

class ArvoreBinaria {

private:

    NoArvoreBinaria *raiz; // Referencia ao nó raiz principal da arvore

    // Funcoes Auxiliares

    int pares(NoArvoreBinaria *no);
    int folhas(NoArvoreBinaria *no);
    int numNos(NoArvoreBinaria *no);
    int altura(NoArvoreBinaria *no);
    bool igual(NoArvoreBinaria *no1, NoArvoreBinaria *no2);


public:

    ArvoreBinaria(); // Construtor Padrão
    
    NoArvoreBinaria* insere(int v, NoArvoreBinaria *esq, NoArvoreBinaria *dir);

    bool vazia();

    string toString();

    string toStringAux(NoArvoreBinaria *no);

    bool pertence(NoArvoreBinaria *no, int info);

    int pares();

    int folhas();
    
    string imprimePre();

    string imprimeSim();
    string imprimeSim(NoArvoreBinaria *no);

    string imprimePos();
    string imprimePos(NoArvoreBinaria *no);

    int numNos();

    int altura();

    bool igual(ArvoreBinaria *a);
    
};


#endif