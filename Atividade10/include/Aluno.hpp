#ifndef ALUNO_HPP
#define ALUNO_HPP

#include <iostream>
using namespace std;

class Aluno {

    private:

        string nome;
        int matricula;
        float mediageral;

    public:
        
        Aluno() {};

        string get_nome();
        void set_nome(string novo_nome);

        int get_matricula();
        void set_matricula(int nova_matricula);

        float get_mediageral();
        void set_mediageral(float nova_mediageral);

};

#endif