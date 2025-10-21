#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "menu.h"
#include "algoritmo.h"
#include "array.h"
#include "salvar_instancia.h"

int main() {
    int opcao, n;
    char tipo;
    double tempo;

    opcao = exibir_menu(&tipo, &n);
    int *vetor = malloc(n * sizeof(int));
    gerar_instancia(vetor, n, tipo);

    switch(opcao){
        case 1:                                              
            salvar_entrada(vetor, n, tipo, "Insertion Sort");
            tempo = insertion_sort(vetor, n);
            salvar_saida (vetor, n, tipo, "Insertion Sort");
            salvar_tempo(n, tempo, tipo, "Insertion Sort");
            printf("ALGORITMO INSERTION SORT\nVETOR %d ELEMENTOS\nTIPO DE ORDENACAO: %c\nORDENADO COM SUCESSO\n",n, tipo);
            break;
        case 2:
            salvar_entrada(vetor, n, tipo, "Selection Sort");
            tempo = selection_sort(vetor, n);
            salvar_saida (vetor, n, tipo, "Selection Sort");
            salvar_tempo(n, tempo, tipo, "Selection Sort");
            printf("ALGORITMO SELECTION SORT\nVETOR %d ELEMENTOS\nTIPO DE ORDENACAO: %c\nORDENADO COM SUCESSO\n",n, tipo);
            break;
        case 3:
            salvar_entrada(vetor, n, tipo, "Bubble Sort");
            tempo = bubble_sort(vetor, n);
            salvar_saida (vetor, n, tipo, "Bubble Sort");
            salvar_tempo(n, tempo, tipo, "Bubble Sort");
            printf("ALGORITMO BUBBLE SORT\nVETOR %d ELEMENTOS\nTIPO DE ORDENACAO: %c\nORDENADO COM SUCESSO\n",n, tipo);
            break;
        case 4:
            salvar_entrada(vetor, n, tipo, "Shell Sort");
            tempo = shell_sort(vetor, n);
            salvar_saida (vetor, n, tipo, "Shell Sort");
            salvar_tempo(n, tempo, tipo, "Shell Sort");
            printf("ALGORITMO SHELL SORT\nVETOR %d ELEMENTOS\nTIPO DE ORDENACAO: %c\nORDENADO COM SUCESSO\n",n, tipo);
            break;
        case 5: 
            salvar_entrada(vetor, n, tipo, "Merge Sort");
            clock_t inicio = clock();
            merge_sort(vetor, 0, n-1);
            clock_t fim = clock();
            tempo = (double)(fim - inicio) / CLOCKS_PER_SEC;
            salvar_saida (vetor, n, tipo, "Merge Sort");
            salvar_tempo(n, tempo, tipo, "Merge Sort");
            printf("ALGORITMO MERGE SORT\nVETOR %d ELEMENTOS\nTIPO DE ORDENACAO: %c\nORDENADO COM SUCESSO\n",n, tipo);
            break;
        case 6:
            printf("Voce saiu!");
            break;
    }
free(vetor);
return 0;
}
