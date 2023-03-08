#include "NoLista.h"

#include <iostream>
using namespace std;

NoLista::NoLista(int valor) {

    informacao = valor;

};

void NoLista::setInfo(int valor) {

    informacao = valor;

};

int NoLista::getInfo() {

    return informacao;

};

void NoLista::setProximo(NoLista* no) {

    proximo = no;

};

NoLista* NoLista::getProx() {

    return proximo;

};

std::ostream &operator<<( std::ostream &out, NoLista* no ) {

    out << no->getInfo();
    return out;

}
