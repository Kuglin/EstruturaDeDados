#include "quickSort.h"

void quickSort(int v[], int comeco, int fim)
{
    int i = comeco,
        j = fim - 1,
        pivo,
        aux;

    pivo = v[(comeco + fim) / 2];
    while (i <= j)
    {   
        
        while (v[i] < pivo && i < fim)
            i++;

        while (v[j] > pivo && j > comeco)
            j--;
        
        if (i <= j)
        {
            aux = v[i];
            v[i] = v[j];
            v[j] = aux;
            i++;
            j--;
        }
    }

    if (j > comeco)
        quickSort(v, comeco, j+1);
    
    if (i < fim)
        quickSort(v, i, fim);
}

void quickSort(int v[], int n)
{
    quickSort(v, 0, n);
}

