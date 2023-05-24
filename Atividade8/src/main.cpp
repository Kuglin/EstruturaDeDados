#include "funcAux.hpp"
#include "Busca.hpp"
#include <iostream>
#include <time.h>
#include <stdio.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int *v;

    Busca *b = new Busca();

    printf("Busca Binaria: \n\n");

    for (int i = 10; i<10000001; i *= 10) {
        
        double tempoExec = 0.0;

        v = criarVetor(i);

        clock_t begin = clock();

        int pos = b->buscaLinear(v, i, i-1);

        clock_t end = clock();
        tempoExec += ((double)(end - begin) / (CLOCKS_PER_SEC));

        
        // cout << "Busca Linear do valor " << i-1 << " com " << i << " Elementos. Pos: " << pos << " Tempo: " << tempoExec << " ms \n";

        printf("Busca Linear do valor %d com %d Elementos. Pos: %d, Tempo %f segundos\n", i-1, i, pos, tempoExec);

    }

    printf("\nBusca Linear\n\n");

    for (int i = 10; i<1000000001; i *= 10) {
        
        double tempoExec = 0.0;

        v = criarVetor(i);

        clock_t begin = clock();

        int pos = b->buscaBinaria(v, i, i-1);

        clock_t end = clock();
        tempoExec += (double)(end - begin) / CLOCKS_PER_SEC;

        
        printf("Busca Binaria do valor %d com %d Elementos. Pos: %d, Tempo %f segundos\n", i-1, i, pos, tempoExec);
    
    }

    return 0;
}
