#include "NoArvoreBinaria.h"

NoArvoreBinaria::NoArvoreBinaria(int info) {

    this->info = info;
    sae = nullptr;
    sad = nullptr;

}

NoArvoreBinaria::NoArvoreBinaria(int info, NoArvoreBinaria *esq, NoArvoreBinaria *dir) {

    this->info = info;
    sae = esq;
    sad = dir;

}

void NoArvoreBinaria::setInfo(int info) {

    this->info = info;

}

int NoArvoreBinaria::getInfo() {

    return info;

}

void NoArvoreBinaria::setSae(NoArvoreBinaria *esq) {

    sae = esq;

}

NoArvoreBinaria* NoArvoreBinaria::getSae() {

    return sae;

}

void NoArvoreBinaria::setSad(NoArvoreBinaria *dir) {

    sad = dir;

}

NoArvoreBinaria* NoArvoreBinaria::getSad() {

    return sad;

}

string NoArvoreBinaria::toString() {

    string s = "<";

    s += to_string(info);
    if (sae)
        s += sae->toString();
    if (sad)
        s += sad->toString();

    s += ">";

    return s;

}

