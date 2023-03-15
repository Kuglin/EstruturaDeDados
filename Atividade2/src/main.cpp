#include <iostream>
using namespace std;

#include "Lista.h"
#include "NoLista.h"

int main(int argc, char const *argv[])
{
    Lista *lista = new Lista();

    for (int i=20; i>=0; i--)
        lista->insere(i);

    lista->libera();

    cout << lista;






    return 0;
}
