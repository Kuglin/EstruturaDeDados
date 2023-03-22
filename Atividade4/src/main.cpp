#include "NoListaDupla.h"
#include "ListaDupla.h"

#include <iostream>
using namespace std;


int main(int argc, char const *argv[])
{
    ListaDupla* l = new ListaDupla();

    for (int i = 0; i <= 20; i++)
        l->insere(i);

    l->retira(1);

    l->insereFim(242);

    l->imprime();

    // l->libera();

    // l->imprime();

    return 0;
}
