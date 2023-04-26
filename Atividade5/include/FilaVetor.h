#ifndef FILAVETOR_H
#define FILAVETOR_H

#include "Fila.h"
#include <string>
using namespace std;

class FilaVetor: public Fila{

    public:
        
        FilaVetor(int tam); // Construtor Padrão
        string toString(); // Converte Fila em String

        void enqueue(int v); // Adiciona valor no final da lista
        int dequeue(); // Remove e rotarna valor do inicio da lista
        bool isEmpty(); // Retorna 1 se vazio 0 caso não
        void reset(); // Limpa a fila

        FilaVetor *concatena(FilaVetor *f2); // Cria uma nova Fila apartir da concatenação de duas filas
        FilaVetor *merge(FilaVetor *f2); // Cria uma nova Fila apartir da concatenação intercalada de duas filas

    private:

        int n; // Quantidade de Atual de Elementos na Fila
        int ini; // Indice de Inicio da Lista
        int tam; // Quantidade Maxima de Elementos 
        int *vet; // Array de Inteiros






};



#endif
