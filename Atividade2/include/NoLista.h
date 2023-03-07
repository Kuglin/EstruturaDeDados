/**
 * @author Guilherme Eduardo Kuglin
 * @date 2023, March 7
 * @version 2023, March 7
**/

#ifndef NOLISTA_H
#define NOLISTA_H

#include <string>

class NoLista {

    public:

        NoLista(int valor); // Construtor Padrão

        void setInfo(int valor); // Altera valor do Nó
        
        int getInfo(); // Retorna Valor do No

        void setProximo(NoLista* no); // Altera o proximo no

        NoLista* getProx(); // Retorna o proximo no

        //toString

    private:

        int informacao;

        NoLista* proximo;

        

};


#endif