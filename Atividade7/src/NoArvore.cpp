#include "NoArvore.h"

NoArvore::NoArvore(int info) {

    this->info = info;
    prim = nullptr;
    prox = nullptr;

}

void NoArvore::setInfo(int info) {

    this->info = info;

}

int NoArvore::getInfo() {

    return info;

}

void NoArvore::setPrim(NoArvore* prim) {

    this->prim = prim;

}

NoArvore* NoArvore::getPrim() {

    return prim;

}

void NoArvore::setProx(NoArvore* prox) {

    this->prox = prox;

}

NoArvore* NoArvore::getProx() {

    return prox;

}

string NoArvore::toString() {
    
    string out = "<";

    out += to_string(info);
    
    if (prim)
        out += prim->toString();

    out += ">";
    
    if (prox)
        out += prox->toString();

    return out;

}