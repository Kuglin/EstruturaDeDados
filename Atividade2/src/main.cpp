#include <iostream>
using namespace std;

#include "Lista.h"
#include "NoLista.h"



int main(int argc, char const *argv[])
{
    Lista *lista = new Lista();

    for (int i=0; i<20; i++)
        lista->insere(i);

    cout << lista->busca(1)->getInfo();

    return 0;
}
