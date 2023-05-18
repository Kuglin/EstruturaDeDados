#ifndef ARVORE_H
#define ARVORE_H

#include "NoArvore.h"
#include <iostream>
using namespace std;

class Arvore {

    private:
        
        NoArvore* raiz;
        string imprime(NoArvore* no);
        bool pertence(NoArvore* no, int info);
        int altura(NoArvore* no);
        int pares(NoArvore* no);
        int folhas(NoArvore* no);
        bool igual(NoArvore* no1, NoArvore* no2);

    public:

        Arvore();
        NoArvore* criaNo(int info);
        void insereFilho(NoArvore* no, NoArvore* sa);
        string toString();
        bool pertence(int info);
        int altura();
        int pares();
        int folhas();
        bool igual(Arvore* a);
        Arvore* copia();
        NoArvore* copia(NoArvore* no, NoArvore *noAnt);

};


#endif