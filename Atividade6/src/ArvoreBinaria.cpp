#include "ArvoreBinaria.h"

ArvoreBinaria::ArvoreBinaria() {

    raiz = nullptr;

}

NoArvoreBinaria* ArvoreBinaria::insere(int v, NoArvoreBinaria *esq, NoArvoreBinaria *dir) {

    NoArvoreBinaria *no = new NoArvoreBinaria(v, esq, dir);
    raiz = no;
    
    return no;

}

bool ArvoreBinaria::vazia() {

    return (raiz == nullptr);

}

string ArvoreBinaria::toString() {

    return toStringAux(raiz);

}

string ArvoreBinaria::toStringAux(NoArvoreBinaria *no) {

    string s = "<";

    if (no) {

        s += to_string(no->getInfo());
        s += toStringAux(no->getSae());
        s += toStringAux(no->getSad());
    
    }

    s += ">";

    return s;

}

bool ArvoreBinaria::pertence(NoArvoreBinaria *no, int info) {

    if (!no)
        return 0;

    return ((no->getInfo() == info) || pertence(no->getSae(), info) || pertence(no->getSad(), info));

}

int ArvoreBinaria::pares() {

    return pares(raiz);

}

int ArvoreBinaria::pares(NoArvoreBinaria *no) {

    if (!no)
        return 0;

    if (no->getInfo() % 2 == 0)
        return 1 + pares(no->getSae()) + pares(no->getSad());
    
    return pares(no->getSae()) + pares(no->getSad());

}

int ArvoreBinaria::folhas() {

    return folhas(raiz);

}

int ArvoreBinaria::folhas(NoArvoreBinaria *no) {

    if (!no)
        return 0;

    if ( (no->getSad() == nullptr) && (no->getSae() == nullptr) )
        return 1;

    return folhas(no->getSae()) + folhas(no->getSad());

}

string ArvoreBinaria::imprimePre() {

    return toString();

}

string ArvoreBinaria::imprimeSim() {

    return imprimeSim(raiz);

}

string ArvoreBinaria::imprimeSim(NoArvoreBinaria *no) {

    string s = "<";

    if (no) {

        s += imprimeSim(no->getSae());
        s += to_string(no->getInfo());
        s += imprimeSim(no->getSad());
    
    }

    s += ">";

    return s;

}

string ArvoreBinaria::imprimePos() {

    return imprimePos(raiz);

}

string ArvoreBinaria::imprimePos(NoArvoreBinaria *no) {

    string s = "<";

    if (no) {

        s += imprimePos(no->getSae());
        s += imprimePos(no->getSad());
        s += to_string(no->getInfo());
    
    }

    s += ">";

    return s;

}

int ArvoreBinaria::numNos() {

    return numNos(raiz);

}

int ArvoreBinaria::numNos(NoArvoreBinaria *no) {

    if (!no)
        return 0;

    return numNos(no->getSae()) + numNos(no->getSad()) + 1;

}

int ArvoreBinaria::altura() {

    return altura(raiz);

}

int ArvoreBinaria::altura(NoArvoreBinaria *no) {

    int hmax = -1;
    int alt = -1;
    
    if (no->getSae() != nullptr) {

        alt = altura(no->getSae());
        if ( alt > hmax)
            hmax = alt;

    }
    
    if (no->getSad() != nullptr) {

        alt = altura(no->getSad());
        if ( alt > hmax)
            hmax = alt;

    }

    return hmax + 1;
}

bool ArvoreBinaria::igual(ArvoreBinaria *a) {

    return igual(raiz, a->raiz);

}

bool ArvoreBinaria::igual(NoArvoreBinaria *no1, NoArvoreBinaria *no2) {

    if (!no1 && !no2)
        return 1;

    else if (!no1)
        return 0;

    else if (!no2)
        return 0;

    else if (no1->getInfo() == no2->getInfo())
        return igual(no1->getSae(), no2->getSae()) && igual(no1->getSad(), no2->getSad());

    else
        return 0;

}