#include "bubbleSort.h"


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

