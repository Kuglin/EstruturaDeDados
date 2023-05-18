#include "Arvore.h"
#include "NoArvore.h"

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    Arvore* a = new Arvore();
    NoArvore* n1 = a->criaNo(1);
    NoArvore* n2 = a->criaNo(2);
    NoArvore* n3 = a->criaNo(3);
    NoArvore* n4 = a->criaNo(4);
    NoArvore* n5 = a->criaNo(5);
    NoArvore* n6 = a->criaNo(6);
    NoArvore* n7 = a->criaNo(7);
    NoArvore* n8 = a->criaNo(8);
    NoArvore* n9 = a->criaNo(9);
    NoArvore* n10 = a->criaNo(10);
    NoArvore* n11 = a->criaNo(11);

    a->insereFilho(n4, n11);
    a->insereFilho(n3, n4);
    a->insereFilho(n2, n5);
    a->insereFilho(n2, n3);
    a->insereFilho(n9, n10);
    a->insereFilho(n7, n9);
    a->insereFilho(n7, n8);
    a->insereFilho(n1, n7);
    a->insereFilho(n1, n6);
    a->insereFilho(n1, n2);

    Arvore* b = new Arvore();
    NoArvore* bn1 = b->criaNo(1);
    NoArvore* bn2 = b->criaNo(2);
    NoArvore* bn3 = b->criaNo(3);
    NoArvore* bn4 = b->criaNo(4);
    NoArvore* bn5 = b->criaNo(5);
    NoArvore* bn6 = b->criaNo(6);
    NoArvore* bn7 = b->criaNo(7);
    NoArvore* bn8 = b->criaNo(8);
    NoArvore* bn9 = b->criaNo(9);
    NoArvore* bn10 = b->criaNo(10);
    NoArvore* bn11 = b->criaNo(11);

    b->insereFilho(bn4, bn11);
    b->insereFilho(bn3, bn4);
    b->insereFilho(bn2, bn5);
    b->insereFilho(bn2, bn3);
    b->insereFilho(bn9, bn10);
    b->insereFilho(bn7, bn9);
    b->insereFilho(bn7, bn8);
    b->insereFilho(bn1, bn7);
    b->insereFilho(bn1, bn6);
    b->insereFilho(bn1, bn2);

    Arvore* c = a->copia();

    cout << "String A: " << a->toString() << "\n";

    cout << "5 Pertence a Arvore: "<< a->pertence(5) << "\n";

    cout << "Altura da Arvore: " << a->altura() << "\n";
    
    cout << "Num de Pares: " << a->pares() << "\n";

    cout << "Num de Folhas: " << a->folhas() << "\n";

    cout << "a == b: " << a->igual(b) << "\n";

    cout << "String C: " << c->toString() << "\n";

    cout << "C == A: " << c->igual(a) << "\n";

    return 0;
}
