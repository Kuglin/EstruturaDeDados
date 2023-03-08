#include <iostream>
using namespace std;

#include "Lista.h"
#include "NoLista.h"

int main(int argc, char const *argv[])
{
    Lista *lista = new Lista();

    for (int i=20; i>=0; i--)
        lista->insere(i);

    cout << "Lista depois de 0 a 20: " << lista << "\n";
    cout << "Comprimento da Lista: " << lista->comprimento() << "\n";
    cout << "Elemento após o 9: " << lista->busca(9)->getProx() << "\n";




    return 0;
}
