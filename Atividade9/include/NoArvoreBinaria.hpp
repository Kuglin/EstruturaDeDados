#ifndef NOARVOREBINARIA_H
#define NOARVOREBINARIA_H

#include <string>
using namespace std;

class NoArvoreBinaria {

private:
    
    int info; // Dado armazenado no nó
    NoArvoreBinaria *esq; // Referencia para nó raiz da sub arvore da esquerda
    NoArvoreBinaria *dir; // Referencia para nó raiz da sub arvore da direita


public:

    NoArvoreBinaria(int info); // Construtor Padrão

    NoArvoreBinaria(int info, NoArvoreBinaria *esq, NoArvoreBinaria *dir); // Construtor com 2 nós

    void setInfo(int info); // Seter para atributo info
    int getInfo(); // Geter para atributo info

    void setEsq(NoArvoreBinaria *esq); // Seter para atributo edq
    NoArvoreBinaria* getEsq(); // Geter para atributo esq

    void setDir(NoArvoreBinaria *dir); // Seter para atributo dir
    NoArvoreBinaria* getDir(); // Geter para atributo dir

    string toString(); // Retorna String da sub arvore

};

#endif