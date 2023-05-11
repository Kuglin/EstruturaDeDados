#include "ArvoreBinaria.h"
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    
    ArvoreBinaria *a = new ArvoreBinaria();

    a->insere(1,

        a->insere(2,
            nullptr,
            a->insere(4,nullptr, nullptr)
        ),

        a->insere(3,
            a->insere(5, nullptr, nullptr),
            a->insere(6, nullptr, nullptr)
        )
    );

    ArvoreBinaria *b = new ArvoreBinaria();

    b->insere(1,

        b->insere(2,
            nullptr,
            b->insere(4,nullptr, nullptr)
        ),

        b->insere(3,
            b->insere(5, nullptr, b->insere(7, nullptr, nullptr)),
            b->insere(6, nullptr, nullptr)
        )
    );

    cout << a->igual(b) << "\n";

    cout << a->imprimePos();

    return 0;
}
