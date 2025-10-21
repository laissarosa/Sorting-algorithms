#include <stdio.h>
#include "array.h"
#include <stdlib.h>
#include <time.h>

void gerar_instancia(int vetor[], int n, char tipo) {
    if (tipo == 'c') { //gera crescente
        for (int i = 0; i < n; i++) {
            vetor[i] = i + 1;
        }
    } else if (tipo == 'd') { //decrescente
        for (int i = 0; i < n; i++) {
            vetor[i] = n - i;
        }
    } else if (tipo == 'r') { //random
        srand(time(NULL));
        for (int i = 0; i < n; i++) {
            vetor[i] = rand() % (n * 10);
        }
    }
}
