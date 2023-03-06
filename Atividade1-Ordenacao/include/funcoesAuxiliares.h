/**
 * @author Guilherme Eduardo Kuglin
 * @date 2023, March 5
 * @version 2023, March 5
**/

#ifndef FUNCOESAUXILIARES_H
#define FUNCOESAUXILIARES_H

#include "bubbleSort.h"
#include "quickSort.h"
#include "mergeSort.h"

int* criarVetorEmbaralhado(int n, int v[]);

double calcularTempoExecucaoBubble(int n);

double calcularTempoExecucaoQuick(int n);

double calcularTempoExecucaoMerge(int n);

#endif