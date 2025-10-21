#include "salvar_instancia.h"
#include <stdio.h>
#include <windows.h>
#include <string.h>

void criar_pastas(const char *caminho) {
    char temp[300];
    strcpy(temp, caminho);

    for (char *p = temp + 3; *p; p++) {
        if (*p == '\\') {
            *p = '\0';
            CreateDirectory(temp, NULL);
            *p = '\\';
        }
    }
    CreateDirectory(temp, NULL);
}

void salvar_entrada(int vetor[], int n, char tipo, const char *algoritmo) {
    char pasta[300];
    sprintf(pasta,
    "C:\\Users\\laiss\\OneDrive\\Desktop\\2025-2\\PA\\trabalho\\%s\\Arquivos de Entrada\\%s", algoritmo, 
    (tipo=='c' ? "Crescente" : (tipo=='d' ? "Decrescente" : "Random")));
    criar_pastas(pasta);

    char caminho[300];
    sprintf(caminho, "%s\\Entrada%s%d.txt", pasta,
        (tipo=='c' ? "Crescente" : (tipo=='d' ? "Decrescente" : "Random")), n);
    
    FILE *f = fopen(caminho, "w");
    if (!f){
        printf("Nao foi possivel abrir o arquivo! \n\n"); 
        return;
    }

    fprintf(f, "%d\n", n);
    for (int i = 0; i < n; i++) {
        fprintf(f, "%d\r\n", vetor[i]);
    }
    fclose(f);
}

void salvar_saida(int vetor[], int n, char tipo, const char *algoritmo) {
    char pasta[300];
    sprintf(pasta,
    "C:\\Users\\laiss\\OneDrive\\Desktop\\2025-2\\PA\\trabalho\\%s\\Arquivos de Saida\\%s", algoritmo,
    (tipo=='c' ? "Crescente" : (tipo=='d' ? "Decrescente" : "Random")));
    criar_pastas(pasta);

    char caminho[300];
    sprintf(caminho, "%s\\Saida%s%d.txt", pasta,
        (tipo=='c' ? "Crescente" : (tipo=='d' ? "Decrescente" : "Random")), n);
        
    FILE *f = fopen(caminho, "w");
    if (!f) {
        printf("Erro ao abrir o arquivo %s \n", caminho);
        return;
    }

    fprintf(f, "%d\n", n);
    for (int i = 0; i < n; i++) {
        fprintf(f, "%d\r\n", vetor[i]);
    }
    fclose(f);
}

void salvar_tempo(int n, double tempo, char tipo, const char *algoritmo) {
    char pasta[300];
    sprintf(pasta,
    "C:\\Users\\laiss\\OneDrive\\Desktop\\2025-2\\PA\\trabalho\\%s\\Arquivos de Tempo\\%s",algoritmo, 
    (tipo=='c' ? "Crescente" : (tipo=='d' ? "Decrescente" : "Random")));
    criar_pastas(pasta);

    char caminho[300];
    sprintf(caminho, "%s\\Tempo%s%d.txt", pasta,
        (tipo=='c' ? "Crescente" : (tipo=='d' ? "Decrescente" : "Random")), n);

    FILE *f = fopen(caminho, "w");
    if (!f){
        printf("Erro ao abrir o arquivo %s \n", caminho);
        return;
    }
    fprintf(f, "Tamanho: %d\n", n);
    fprintf(f, "Tempo gasto: %lf segundos\n", tempo);
    fclose(f);
}
