/**
 * @author Guilherme Eduardo Kuglin
 * @date 2023, March 7
 * @version 2023, March 7
**/

#ifndef LISTA_H
#define LISTA_H

#include <string>
#include "NoLista.h"

class Lista {

    public:

        Lista(); //Construtor Padrão, cria a lista vazia

        void insere(int v); // Insere um novo nó no inicio da lista.

        void imprime(); // Imprime os Valores da Lista

        // string toString(); // Retorna uma String com os Valores da Lista

        bool vazia(); // Informa se a Lista está vazia

        NoLista* busca(int v); // Retorna o Endereço do no

        int comprimento(); // Calcula e Retorna o Comprimento da Lista

    private:

        NoLista* primeiro; // Primeiro Elemento da Lista

};


#endif