/**
 * @author Guilherme Eduardo Kuglin
 * @date 2023, March 22
 * @version 2023, March 29
**/

#ifndef NO_LISTADUPLA_H
#define NO_LISTADUPLA_H

class NoListaDupla {

    private:

        int info; // Informação do nó

        NoListaDupla* ant; // Guarda nó anterior

        NoListaDupla* prox; // Guarda proximo nó

    public:

        NoListaDupla(int v); // Construtor Padrão

        void setInfo(int info); // Muda a informação no Nó

        int getInfo(); // Retorna informação do nó

        void setAnt(NoListaDupla* ant); // Altera nó anterior

        NoListaDupla* getAnt(); // Retorna nó anterior

        void setProx(NoListaDupla* prox); // Altera proximo nó

        NoListaDupla* getProx(); // Retorna proximo nó


};

#endif