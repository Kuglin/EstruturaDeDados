/**
 * @author Guilherme Eduardo Kuglin
 * @date 2023, March 22
 * @version 2023, March 29
**/

#ifndef LISTADUPLA_H
#define LISTADUPLA_H

#include "NoListaDupla.h"

class ListaDupla {

    private:

        NoListaDupla* prim;


    public:

        ListaDupla(); // Construtor Padrão

        void insere(int v); // Insere um elemento no Inicio da Lista

        void imprime(); // Imprime a Lista

        bool vazia(); // Retorna True se vazia ou False se tem elementos

        NoListaDupla* busca(int v); // Retorna Nó buscado na lista

        int comprimento(); // Retorna comprimento da lista

        NoListaDupla* ultimo(); // Retorna ultimo elemento da lista

        void retira(int v); // Retira elemento da Lista

        void libera(); // Limpa a lista

        void insereFim(int v); // Insere elemento no final da lista

        bool igual(ListaDupla* l); // Verifica se as listas são iguais
        
        NoListaDupla* getPrim(); // Retorna primeiro elemento da Lista

        void merge(ListaDupla* l); // Junta duas listas

};

#endif