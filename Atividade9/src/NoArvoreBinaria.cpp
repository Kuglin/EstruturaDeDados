#include "NoArvoreBinaria.hpp"

NoArvoreBinaria::NoArvoreBinaria(int info) {

    this->info = info;
    esq = nullptr;
    dir = nullptr;

}

NoArvoreBinaria::NoArvoreBinaria(int info, NoArvoreBinaria *esq, NoArvoreBinaria *dir) {

    this->info = info;
    this->esq = esq;
    this->dir = dir;

}

void NoArvoreBinaria::setInfo(int info) {

    this->info = info;

}

int NoArvoreBinaria::getInfo() {

    return info;

}

void NoArvoreBinaria::setEsq(NoArvoreBinaria *esq) {

    this->esq = esq;

}

NoArvoreBinaria* NoArvoreBinaria::getEsq() {

    return esq;

}

void NoArvoreBinaria::setDir(NoArvoreBinaria *dir) {

    this->dir = dir;

}

NoArvoreBinaria* NoArvoreBinaria::getDir() {

    return dir;

}

string NoArvoreBinaria::toString() {

    return to_string(info);

}

