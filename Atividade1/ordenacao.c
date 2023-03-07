#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void bubbleSort(int v[], int n)
{
    int i, j;

    for (i = n; i>1; i--)
    {   

        for (j = 0; j < i-1; j++)
        {
            if (v[j] > v[j+1]){
                int temp = v[j];
                v[j] = v[j+1];
                v[j+1] = temp;
            }
        }
    }
};

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
}

void mergeSort(int v[], int comeco, int fim, int vAux[])
{
    if ((fim - comeco) < 2)
        return;
    
    int meio = ((comeco + fim) / 2);

    mergeSort(v, comeco, meio, vAux);
    mergeSort(v, meio, fim, vAux);
    merge(v, comeco, meio, fim, vAux);

}

void mergeSort(int v[], int n)
{
    int vAux[n];
    mergeSort(v, 0, n, vAux);
}

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

int main(int argc, char const *argv[])
{   

    for (int i = 10; i < 10001; i *= 10){

        printf("3 Algoritimos de Ordenação de Vetoroes com %d Elementos: \n", i);
        printf("\n");
        printf("Bubble Sort: %f segundos.\n", calcularTempoExecucaoBubble(i));
        printf("Quick Sort:  %f segundos.\n", calcularTempoExecucaoQuick(i));
        printf("Merge Sort:  %f segundos.\n", calcularTempoExecucaoMerge(i));
        printf("\n");
    }

    return 0;
}
