#include "ArvoreBinariaBusca.hpp"
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{

    ArvoreBinariaBusca* a = new ArvoreBinariaBusca();

    a->insere(6);
    a->insere(2);
    a->insere(1);
    a->insere(4);
    a->insere(3);
    a->insere(8);

    cout << a->toString() << "\n";

    a->retira(6);

    cout << a->toString() << "\n";

    cout << a->somarFolhas() << "\n";

    cout << a->maioresX(3) << "\n";

    return 0;
}
