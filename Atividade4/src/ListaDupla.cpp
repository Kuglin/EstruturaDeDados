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

    if (!prim) {

        cout << "\n";
        return;
        
    }
        

    while (no) {
        
        cout << no->getInfo() << " ";

        no = no->getProx();

    }

    cout << "\n";

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
    

    while (no->getProx()) {
        
        no = no->getProx();

        delete no->getAnt();

    }

    delete no;

    prim = nullptr;

}

void ListaDupla::insereFim(int v) {

    NoListaDupla *no = prim;

     while (no->getProx()) {
        no = no->getProx(); }

    NoListaDupla* novoNo = new NoListaDupla(v);

    //novoNo->setAnt(no);
    no->setProx(novoNo);
}

NoListaDupla* ListaDupla::getPrim() {

    return prim;

}

bool ListaDupla::igual(ListaDupla* l) {

    NoListaDupla *no1 = prim;
    NoListaDupla *no2 = l->getPrim();

    while (no1 && no2) {

        if ( !( no1->getInfo() == no2->getInfo()) )
            return false;
        
        no1 = no1->getProx();
        no2 = no2->getProx();

        if ( ( !no1 && no2 ) || ( no1 && !no2 ) )
            return false;
    }

    return true;

}

void ListaDupla::merge(ListaDupla *l) {

    NoListaDupla *no1 = prim;
    NoListaDupla *no2 = l->getPrim();

    while (no1) {

        if (!no2)
            return;

        NoListaDupla* novoNo = new NoListaDupla(no2->getInfo());

        novoNo->setAnt(no1);

        if (no1->getProx()) {

            novoNo->setProx(no1->getProx());
            no1->getProx()->setAnt(novoNo);
            no1->setProx(novoNo);
            no1 = novoNo;

        }
        
        else 
            no1->setProx(novoNo);
            
        no1 = no1->getProx();
        no2 = no2->getProx();


    }
}
