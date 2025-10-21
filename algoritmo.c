#include "algoritmo.h"
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

double insertion_sort(int vetor[], int n) {
    clock_t inicio = clock();
    for (int j = 1; j < n; j++) {
        int chave = vetor[j];
        int i = j - 1;
        while (i >= 0 && vetor[i] > chave) {
            vetor[i + 1] = vetor[i];
            i--;
        }
        vetor[i + 1] = chave;
    }
    clock_t fim = clock();
    return (double)(fim - inicio) / CLOCKS_PER_SEC;
}

double bubble_sort(int vetor[], int n){
    clock_t inicio = clock();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i ; j++){
            if (vetor[j]> vetor[j+1]) {
                int temp = vetor[j];
                vetor[j] = vetor[j+1];
                vetor[j+1] = temp;
            }
        }
    }
    clock_t fim = clock();
    return (double)(fim - inicio) / CLOCKS_PER_SEC;
}

double selection_sort(int vetor[], int n) {
    clock_t inicio = clock();
    for (int i = 0; i < n-1; i++){
        int min = i;
        for (int j = i+1; j < n; j++) {
            if(vetor[j] < vetor[min])
                min = j;
        }
        if (vetor[i] != vetor[min]) {
            int aux = vetor[i];
            vetor[i] = vetor[min];
            vetor[min] = aux;
         }
    }
    clock_t fim = clock();
    return (double)(fim - inicio) / CLOCKS_PER_SEC;
}

double shell_sort(int vetor[], int n) {
    clock_t inicio = clock();

    int h = 1;
    while (h < n / 3) {
        h = 3 * h + 1;
    }

    while (h > 0) {
        for (int i = h; i < n; i++) {
            int temp = vetor[i];
            int j = i;
            while (j >= h && vetor[j - h] > temp) {
                vetor[j] = vetor[j - h];
                j -= h;
            }
            vetor[j] = temp;
        }
        h = h / 3;
    }

    clock_t fim = clock();
    return (double)(fim - inicio) / CLOCKS_PER_SEC;
}

void merge(int v[], int p, int q, int r) {
    int i = p, j = q + 1, k = 0;
    int tamanho = r - p + 1; 
    int *w = (int*) malloc(tamanho * sizeof(int));

    if (w == NULL) {
        printf("Erro: memória insuficiente!\n");
        exit(1);
    }
     while (i < q + 1 && j < r + 1) {
        if (v[i] <= v[j])
            w[k++] = v[i++];
        else
            w[k++] = v[j++];
    }

    while (i < q + 1)
        w[k++] = v[i++];

    while (j < r + 1)
        w[k++] = v[j++];

    for (i = p; i <= r; i++)
        v[i] = w[i - p];

    free(w);
}

void merge_sort(int v[], int p, int r) {
    if (p < r) {
        int q = (p + r) / 2;
        merge_sort(v, p, q);
        merge_sort(v, q + 1, r);
        merge(v, p, q, r);
    }
}