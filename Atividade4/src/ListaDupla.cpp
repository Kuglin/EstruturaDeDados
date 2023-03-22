#include "ListaDupla.h"
#include "NoListaDupla.h"

#include <iostream>
using namespace std;

ListaDupla::ListaDupla() {

    prim = nullptr;

}

void ListaDupla::insere(int v) {

    NoListaDupla* novoNo = new NoListaDupla(v);

    if (!prim) {

        prim = novoNo;
        return;
    }
    
    novoNo->setProx(prim);
    prim->setAnt(novoNo);
    prim = novoNo;
}

void ListaDupla::imprime() {

    NoListaDupla* no = prim;

    if (!prim)
        return;

    while (no) {
        
        cout << no->getInfo() << " ";

        no = no->getProx();

    }

}

bool ListaDupla::vazia() {

    if (prim)
        return true;
    
    return false;

}

NoListaDupla* ListaDupla::busca(int v) {

    NoListaDupla *no = prim;

    while (no) {
        
        if (no->getInfo() == v)
            return no;

        no = no->getProx();

    }

    return nullptr;

}

int ListaDupla::comprimento() {

    if (!vazia())
        return 0;

    int tam = 1;

    NoListaDupla *no = prim;

    while (no->getProx()) {
        no = no->getProx();
        tam++;
    }

    return tam;
}

NoListaDupla* ListaDupla::ultimo() {

    NoListaDupla *no = prim;

    while (no->getProx())
        no = no->getProx();

    return no;

}

void ListaDupla::retira(int v) {

    if (comprimento() == 0)
        return;

    NoListaDupla *no = prim;

    while (no) {
        
        if (no->getInfo() == v) {

            no->getProx()->setAnt(no->getAnt());
            no->getAnt()->setProx(no->getProx());
            delete no;
            return;

        }
        
        no = no->getProx();

    }

    prim = nullptr;

}

void ListaDupla::libera() {

    if (comprimento() == 0)
        return;

    NoListaDupla *no = prim;
    
    while (no) {

        no = no->getProx();

        delete no->getAnt();

    }

    prim = nullptr;

}

void ListaDupla::insereFim(int v) {

    NoListaDupla *no = prim;

     while (no->getProx()) {
        no = no->getProx(); }

    NoListaDupla* novoNo = new NoListaDupla(v);

    novoNo->setProx(nullptr); // ????????????????????????????????????

    //novoNo->setAnt(no);
    no->setProx(novoNo);
}