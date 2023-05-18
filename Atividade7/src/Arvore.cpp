#include "Arvore.h"

Arvore::Arvore() {

    raiz = nullptr;

}

NoArvore* Arvore::criaNo(int info) {

    NoArvore* novo = new NoArvore(info);
    raiz = novo;
    return novo;

} 

void Arvore::insereFilho(NoArvore* no, NoArvore* sa) {

    sa->setProx(no->getPrim());
    no->setPrim(sa);
    raiz = no;

}

string Arvore::toString() {

    return raiz->toString();

}

bool Arvore::pertence(int info) {

    return pertence(raiz, info);

}

bool Arvore::pertence(NoArvore* no, int info) {

    if (no->getInfo() == info)
        return true;
    
    if (no->getPrim())
        if (pertence(no->getPrim(), info))
            return true;
    
    if (no->getProx())
        if (pertence(no->getProx(), info))
            return true;

    return false;

}

int Arvore::altura() {

    return altura(raiz);

}

int Arvore::altura(NoArvore* no) {

    int altura_max = 0;
    int altura_sa = 0;

    if (no->getPrim()) {
        altura_sa = altura(no->getPrim()) + 1;

        if (altura_max < altura_sa)
            altura_max = altura_sa;

    }

    altura_sa = 0;

    if (no->getProx()) {
        altura_sa = altura(no->getProx());

        if (altura_max < altura_sa)
            altura_max = altura_sa;
            
    }
        
    return altura_max;

}

int Arvore::pares() {

    return pares(raiz);

}

int Arvore::pares(NoArvore* no) {

    int num_pares = 0;

    if (!(no->getInfo() % 2))
        num_pares += 1;
    
    if (no->getPrim())
        num_pares += pares(no->getPrim());
    
    if (no->getProx())
        num_pares += pares(no->getProx());
    
    return num_pares;

}

int Arvore::folhas() {

    return folhas(raiz);

}

int Arvore::folhas(NoArvore* no) {

    int qtd_folhas = 0;

    if (no->getPrim())
        qtd_folhas += folhas(no->getPrim());

    if (no->getProx())
        qtd_folhas += folhas(no->getProx());

    if (no->getPrim()==nullptr && no->getProx()==nullptr)
        qtd_folhas = 1;

    return qtd_folhas;

}

bool Arvore::igual(Arvore* a) {

    return igual(raiz, a->raiz);

}

bool Arvore::igual(NoArvore* no1, NoArvore* no2) {

    bool res = 1;

    if (no1 == nullptr && no2 == nullptr)
        res = 1;

    else if (no1 == nullptr)
        res = 0;
    
    else if (no2 == nullptr)
        res = 0;

    else if (no1->getInfo() == no2->getInfo()) {

        res = res && igual(no1->getPrim(), no2->getPrim());

        res = res && igual(no1->getProx(), no2->getProx());
    }

    else
        res = 0;

    return res;

}

Arvore* Arvore::copia() {

    Arvore* nova_arvore = new Arvore();
    nova_arvore->copia(raiz, nullptr);
    return nova_arvore;

}

NoArvore* Arvore::copia(NoArvore* no, NoArvore* noAnt) {

    NoArvore* novo_no = criaNo(no->getInfo());

    if (no->getProx())
        insereFilho(noAnt, copia(no->getProx(), noAnt));

    if (no->getPrim()){
        noAnt = novo_no;
        insereFilho(novo_no, copia(no->getPrim(), novo_no));
    }

    return novo_no;
}


