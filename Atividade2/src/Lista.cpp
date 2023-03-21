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

void Lista::insereFim(int v) {

    NoLista *no = primeiro;

     while (no->getProx()) {
        no = no->getProx();
    
    }

    no->setProximo(new NoLista(v));


}

bool Lista::igual(Lista* l) {

    NoLista *no1 = primeiro;
    NoLista *no2 = l->getPrimeiro();

    while (no1 && no2) {

        if (!( no1->getInfo() == no2->getInfo() ))
            return false;
        
        no1 = no1->getProx();
        no2 = no2->getProx();

        if ( ( !no1 && no2 ) || ( no1 && !no2 ) )
            return false;
    }

    return true;

}

void Lista::imprimeRecursivo() {

    imprimeRecursivoAux(primeiro);
}

void Lista::imprimeRecursivoAux(NoLista* l) {

    if (!l)
        return;

    cout << l->getInfo() << " ";

    imprimeRecursivoAux(l->getProx());
}

void Lista::retiraRecursivo(int v) {

    NoLista* no = retiraRecursivoAux(primeiro, v);

}

NoLista* Lista::retiraRecursivoAux(NoLista* l, int v) {

    if (!l)
        return nullptr;

    if (l->getInfo() == v)
        return l;
    
    NoLista* no = retiraRecursivoAux(l->getProx(), v);

    if (l->getProx() == no) {

        l->setProximo(no->getProx());
        delete no;
        return nullptr;
    }

    return no;
}

bool Lista::igualRecursivo(Lista* l) {

    return igualRecursivoAux(primeiro, l->getPrimeiro());

}

bool Lista::igualRecursivoAux(NoLista* l1, NoLista* l2) {
    
    if ( ( !l1 && l2 ) || ( l1 && !l2 ) )
        return false;

    if ( l1==nullptr && l2==nullptr)
        return true;

    if ((l1->getInfo() == l2->getInfo()))
        return igualRecursivoAux(l1->getProx(), l2->getProx());

    return false;

}
