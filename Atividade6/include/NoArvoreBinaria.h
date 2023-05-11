#ifndef NOARVOREBINARIA_H
#define NOARVOREBINARIA_H

#include <string>
using namespace std;

class NoArvoreBinaria {

private:
    
    int info; // Dado armazenado no nó
    NoArvoreBinaria *sae; // Referencia para nó raiz da sub arvore da esquerda
    NoArvoreBinaria *sad; // Referencia para nó raiz da sub arvore da direita


public:

    NoArvoreBinaria(int info); // Construtor Padrão

    NoArvoreBinaria(int info, NoArvoreBinaria *esq, NoArvoreBinaria *dir); // Construtor com 2 nós

    void setInfo(int info); // Seter para atributo info
    int getInfo(); // Geter para atributo info

    void setSae(NoArvoreBinaria *esq); // Seter para atributo sae
    NoArvoreBinaria* getSae(); // Geter para atributo sae

    void setSad(NoArvoreBinaria *dir); // Seter para atributo sad
    NoArvoreBinaria* getSad(); // Geter para atributo sad

    string toString(); // Retorna String da sub arvore

};

#endif