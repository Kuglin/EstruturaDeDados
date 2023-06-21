#include "TabelaHash.hpp"
#include "Aluno.hpp"
#include <iostream>
using namespace std;


int main(int argc, char const *argv[])
{
    
    TabelaHash *tabela = new TabelaHash(13);

    tabela->set("Pedro", 123, 9.2);
    tabela->set("Pedrinho", 234, 5.7);
    tabela->set("Pedrão", 650, 8.1);
    tabela->set("Carlos", 679, 7.2);
    tabela->set("Carlinhos", 901, 1.5);
    tabela->set("Carlão", 313, 10.0);

    cout << tabela->toString() << "\n";
    tabela->remove(650);
    cout << tabela->toString() << "\n";
    cout << tabela->get(901)->get_nome() << "\n";
    
    return 0;
}
