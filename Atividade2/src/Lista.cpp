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