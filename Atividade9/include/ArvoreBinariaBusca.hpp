#ifndef ARVOREBINARIABUSCA_H
#define ARVOREBINARIABUSCA_H

#include "NoArvoreBinaria.hpp"
#include <iostream>
using namespace std;

class ArvoreBinariaBusca {

    private:
        
        NoArvoreBinaria* raiz;

        NoArvoreBinaria* busca(NoArvoreBinaria* a, int v);
        NoArvoreBinaria* insere(NoArvoreBinaria* a, int v);
        NoArvoreBinaria* retira(NoArvoreBinaria* a, int v);
        string toString(NoArvoreBinaria* a);
        int somarFolhas(NoArvoreBinaria* a);
        int maioresX(NoArvoreBinaria* a, int x);

    public:

        ArvoreBinariaBusca();
        NoArvoreBinaria* busca(int v);
        void insere(int v);
        void retira(int v);
        string toString();
        string toStringDecrescente();
        int somarFolhas();
        int maioresX(int x);

};

#endif