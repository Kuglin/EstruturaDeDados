#ifndef FILA_H
#define FILA_H

class Fila
{
    public:

        virtual void enqueue(int v) = 0; // Adiciona valor no final da lista
        virtual int dequeue() = 0; // Remove e rotarna valor do inicio da lista
        virtual bool isEmpty() = 0; // Retorna 1 se vazio 0 caso não
        virtual void reset() = 0; // Limpa a fila

};

#endif