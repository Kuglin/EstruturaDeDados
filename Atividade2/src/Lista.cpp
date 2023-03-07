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
        NoLista *no = primeiro;
        while (no->getProx()) {
            no = no->getProx();
        }
        
        NoLista* novoNo = new NoLista(v);

        no->setProximo(novoNo);

    };

};

void Lista::imprime() {

    NoLista *no = primeiro;

    while (no) {
        cout << no->getInfo() << " ";
        no = no->getProx();
    }

};

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