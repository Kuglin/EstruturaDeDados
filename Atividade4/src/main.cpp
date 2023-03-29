#include "NoListaDupla.h"
#include "ListaDupla.h"

#include <iostream>
using namespace std;


int main(int argc, char const *argv[])
{
    ListaDupla* l = new ListaDupla();
    ListaDupla* l2 = new ListaDupla();

    for (int i = 0; i <= 10; i++)
        l->insere(i);

    for (int i = 0; i <= 10; i++)
        l2->insere(i);

    l->retira(1);

    l->insereFim(242);

    l->merge(l2);

    l->imprime();

    l->libera();

    l->imprime();

    return 0;
}