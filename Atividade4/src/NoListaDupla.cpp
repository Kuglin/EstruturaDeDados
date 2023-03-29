#include "NoListaDupla.h"

NoListaDupla::NoListaDupla(int v) {

    ant = nullptr;
    prox = nullptr;
    info = v;
    
}

void NoListaDupla::setInfo(int info) {

    this->info = info;

}

int NoListaDupla::getInfo() {

    return info;

}

void NoListaDupla::setAnt(NoListaDupla* ant) {

    this->ant = ant;

}

NoListaDupla* NoListaDupla::getAnt() {

    return ant;

}

void NoListaDupla::setProx(NoListaDupla* prox) {

    this->prox = prox;

}

NoListaDupla* NoListaDupla::getProx() {

    return prox;

}