#include <iostream>
using namespace std;

#include "Lista.h"
#include "NoLista.h"



int main(int argc, char const *argv[])
{
    Lista *lista = new Lista();

    lista->insere(10);

    lista->insere(10);

    lista->insere(11);

    lista->imprime();

    return 0;
}
