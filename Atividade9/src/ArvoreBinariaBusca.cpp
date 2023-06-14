#include "ArvoreBinariaBusca.hpp"

ArvoreBinariaBusca::ArvoreBinariaBusca() {

    raiz = nullptr;

}

NoArvoreBinaria* ArvoreBinariaBusca::busca(int v) {

    if (raiz)
        return busca(raiz, v);

    return nullptr;

}

NoArvoreBinaria* ArvoreBinariaBusca::busca(NoArvoreBinaria* a, int v) {

    if (v == a->getInfo())
        return a;

    else if (v < a->getInfo()) {
        if (a->getEsq())
            return busca(a->getEsq(), v);
        else
            return nullptr;
    }

    else {
        if (a->getDir())
            return busca(a->getDir(), v);
        else
            return nullptr;
    }
    
}

void ArvoreBinariaBusca::insere(int v) {

    raiz = insere(raiz, v);
}

NoArvoreBinaria* ArvoreBinariaBusca::insere(NoArvoreBinaria* a, int v) {

    if (a == nullptr)
        a = new NoArvoreBinaria(v);

    else {
        if (v < a->getInfo())
            a->setEsq(insere(a->getEsq(), v));
        else
            a->setDir(insere(a->getDir(), v));
    }

    return a;
}

void ArvoreBinariaBusca::retira(int v) {

    raiz = retira(raiz, v);

}

NoArvoreBinaria* ArvoreBinariaBusca::retira(NoArvoreBinaria* a, int v) {

    if (a == nullptr)
        return nullptr;

    else {

        if (v < a->getInfo())
            a->setEsq(retira(a->getEsq(), v));

        else if (v > a->getInfo())
            a->setDir(retira(a->getDir(), v));

        else if (a->getDir() == nullptr && a->getEsq() == nullptr)
            a = nullptr;

        else if (a->getEsq() == nullptr)
            a = a->getDir();

        else if (a->getDir() == nullptr)
            a = a->getEsq();

        else {
            NoArvoreBinaria *p = a->getEsq();
            while (p->getDir() != nullptr)
                p  = p->getDir();
            a->setInfo(p->getInfo());
            p->setInfo(v);
            a->setEsq(retira(a->getEsq(), v));
        }

    return a;
    }


}

string ArvoreBinariaBusca::toString() {

    return toString(raiz);

}

string ArvoreBinariaBusca::toString(NoArvoreBinaria* a){

    string s = "";

    if (a){
        
        s += toString(a->getEsq());
        s += " ";
        s += to_string(a->getInfo());
        s += " ";
        s += toString(a->getDir());
        
    }

    return s;
}

int ArvoreBinariaBusca::somarFolhas() {

    return somarFolhas(raiz);

}

int ArvoreBinariaBusca::somarFolhas(NoArvoreBinaria* a) {

    int total = 0;

    if (a->getEsq())
        total += somarFolhas(a->getEsq());

    if (a->getDir())
        total += somarFolhas(a->getDir());

    if (a->getEsq() == nullptr && a->getDir() == nullptr)
        total = 1;

    return total;
}

int ArvoreBinariaBusca::maioresX(int x){

    return maioresX(raiz, x);

}

int ArvoreBinariaBusca::maioresX(NoArvoreBinaria* a, int x){

    int total = 0;
    
    if (a) {
        total += maioresX(a->getEsq(), x);
        total += maioresX(a->getDir(), x);
        
        if (a->getInfo() > x)
            total += 1;
    }

    return total;


}