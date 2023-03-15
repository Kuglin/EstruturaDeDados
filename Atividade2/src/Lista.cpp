#include "Lista.h"
#include "NoLista.h"

#include <iostream>
using namespace std;

Lista::Lista() {

    primeiro = nullptr;

};

void Lista::insere(int v) {

    if (!primeiro) {
        primeiro = new NoLista(v);
    }

    else {

        NoLista* novoNo = new NoLista(v);
        novoNo->setProximo(primeiro);
        primeiro = novoNo;

    };

};

void Lista::imprime() {

    NoLista *no = primeiro;

    while (no) {
        cout << no->getInfo() << " ";
        no = no->getProx();
    }

};

std::ostream &operator<<( std::ostream &out, Lista* lista ) {

    NoLista *no = lista->getPrimeiro();

    while (no) {
        out << no->getInfo() << " ";
        no = no->getProx();
    }

    return out;

}

bool Lista::vazia() {
    
    if (primeiro)
        return false;

    return true;

}

NoLista* Lista::busca(int v) {

    NoLista *no = primeiro;

    while (no) {
        
        if (no->getInfo() == v)
            return no;

        no = no->getProx();

    }

    return nullptr;

}

int Lista::comprimento() {

    if (vazia())
        return 0;

    int tam = 1;

    NoLista *no = primeiro;

    while (no->getProx()) {
        no = no->getProx();
        tam++;
    }

    return tam;
}

NoLista* Lista::getPrimeiro() {
    
    return primeiro;

}

NoLista* Lista::ultimo() {

    NoLista *no = primeiro;

    while (no->getProx()) {
        no = no->getProx();
    
    }

    return no;

}

void Lista::retira(int v) {

    if (comprimento() == 0)
        return;

    NoLista *no = primeiro->getProx();
    NoLista *noAnt = primeiro;

    while (no) {

        if (no->getInfo() == v) {
            noAnt->setProximo(no->getProx());
            delete no;
            return;
        }
        
        noAnt = no;
        no = no->getProx();

    }

    primeiro = nullptr;

}

void Lista::libera() {

    if (comprimento() == 0)
        return;

    NoLista *no = primeiro;
    
    while (no) {

        NoLista *noAnt = no;

        no = no->getProx();

        delete noAnt;

    }

    primeiro = nullptr;

}