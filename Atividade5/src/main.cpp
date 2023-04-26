#include "FilaVetor.h"
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {

    FilaVetor *f1 = new FilaVetor(10);
    FilaVetor *f2 = new FilaVetor(10);

    for (int i = 0; i < 10; i++) {
        f1->enqueue(i);
        f2->enqueue(i*2);
    }

    cout << f1->toString() << " :Lista 1 \n";
    cout << f2->toString() << " :Lista 2 \n";

    FilaVetor *f3 = f1->merge(f2);

    cout << f3->toString() << ": Lista Concatenada \n";
    
    return 0;
}