#include "funcoesAuxiliares.h"

#include "bubbleSort.h"
#include "quickSort.h"
#include "mergeSort.h"

#include <time.h>
#include <stdlib.h>

int* criarVetorEmbaralhado(int n, int v[])
{   
    int r,
        aux;

    for (int i = 0; i<n; i++)
        v[i] = i;

    for (int i = 0; i<n; i++){
        r = rand() % 20;
        aux = v[r];
        v[r] = v[i];
        v[i] = aux;
    }

    return v;
}


double calcularTempoExecucaoQuick(int n)
{
    double tempoExec = 0.0;

    int v[n];
    criarVetorEmbaralhado(n, v);

    clock_t begin = clock();

    quickSort(v, n);

    clock_t end = clock();
    tempoExec += (double)(end - begin) / CLOCKS_PER_SEC;

    return tempoExec;
}

double calcularTempoExecucaoMerge(int n)
{
    double tempoExec = 0.0;

    int v[n];
    criarVetorEmbaralhado(n, v);

    clock_t begin = clock();

    mergeSort(v, n);

    clock_t end = clock();
    tempoExec += (double)(end - begin) / CLOCKS_PER_SEC;

    return tempoExec;
}

double calcularTempoExecucaoBubble(int n)
{
    double tempoExec = 0.0;

    int v[n];
    criarVetorEmbaralhado(n, v);

    clock_t begin = clock();

    bubbleSort(v, n);

    clock_t end = clock();
    tempoExec += (double)(end - begin) / CLOCKS_PER_SEC;

    return tempoExec;
}
