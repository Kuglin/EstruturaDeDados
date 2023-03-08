/**
 * @author Guilherme Eduardo Kuglin
 * @date 2023, March 7
 * @version 2023, March 8
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

        friend std::ostream &operator<<( std::ostream &out, NoLista* no ); // Retorna uma String com os Valores do No

    private:

        int informacao;

        NoLista* proximo;

        

};


#endif