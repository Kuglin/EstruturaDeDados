#include "MergeSort.h"

void merge(int v[], int comeco, int meio, int fim, int vAux[])
{

    int esq = comeco;;
    int dir = meio;

    for (int i = comeco; i < fim; i++)
    {
        if ((esq < meio) && ((dir >= fim) || (v[esq] < v[dir])))
        {
            vAux[i] = v[esq];
            esq++;
        }

        else 
        {
            vAux[i] = v[dir];
            dir++;
        }
    }

    for (int i = comeco; i < fim; i++) 
        v[i] = vAux[i];

};

void mergeSort(int v[], int comeco, int fim, int vAux[])
{

    if ((fim - comeco) < 2)
        return;
    
    int meio = ((comeco + fim) / 2);

    mergeSort(v, comeco, meio, vAux);
    mergeSort(v, meio, fim, vAux);
    merge(v, comeco, meio, fim, vAux);

};

void mergeSort(int v[], int n)
{

    int vAux[n];
    mergeSort(v, 0, n, vAux);
    
};