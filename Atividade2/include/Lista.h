/**
 * @author Guilherme Eduardo Kuglin
 * @date 2023, March 7
 * @version 2023, March 8
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

        friend std::ostream &operator<<( std::ostream &out, Lista* lista ); // Retorna uma String com os Valores da Lista

        bool vazia(); // Informa se a Lista está vazia

        NoLista* busca(int v); // Retorna o Endereço do no

        int comprimento(); // Calcula e Retorna o Comprimento da Lista

        NoLista* getPrimeiro(); // Retorna primeiro elemento

        NoLista* ultimo(); // Retorna o ultimo Elemento da Lista

        void retira(int v); // Retira primeiro nó que contiver o valor

        void libera(); //Destrói toda a lista

        void insereFim(int v); //Inserir valor no final da lista

        bool igual(Lista* l); //Verifica se as listas são iguais (mesmo elementos na mesma ordem)

        void imprimeRecursivo(); // Imprime todos os valores da lista usando recursividade

        void retiraRecursivo(int v); // Retira valor usando recursividade

        bool igualRecursivo(Lista* l); // Verifica se as Listas são iguais usando recursividade

    private:

        NoLista* primeiro; // Primeiro Elemento da Lista

        void imprimeRecursivoAux(NoLista* l); // Funcao auxiliar para imprimir recursivamente

        NoLista* retiraRecursivoAux(NoLista* l, int v); // Funcao auxiliar para retirar recursivamente

        bool igualRecursivoAux(NoLista* l1, NoLista* l2); // Funcao auxiliar para verificar se as Listas são iguais recursivamente

};


#endif