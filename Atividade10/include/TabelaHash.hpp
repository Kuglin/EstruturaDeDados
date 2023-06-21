#ifndef TABELAHASH_HPP
#define TABELAHASH_HPP

#include "Aluno.hpp"

class TabelaHash {

    private:

        Aluno** tabela;
        int hash(int k);
        int tam_tabela;
    
    public:

        TabelaHash(int n);
        Aluno* get(int k);
        void set(string nome, int matricula, float mediageral);
        void remove(int k);
        string toString();

};

#endif