/**
 * @author Guilherme Eduardo Kuglin
 * @date 2023, March 7
 * @version 2023, March 8
**/

#ifndef MERGESORT_H
#define MERGESORT_H

void merge(int v[], int comeco,int meio, int fim, int vAux[]);

void mergeSort(int v[], int comeco, int fim, int vAux[]);

void mergeSort(int v[], int n);

#endif