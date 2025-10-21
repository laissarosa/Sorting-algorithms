#include "menu.h"
#include <stdio.h>

int exibir_menu(char *tipo, int *n) {
    int opcao;

    do {
        printf("========== **MENU** ==========\n");
        printf("1 - Insertion Sort\n");
        printf("2 - Selection Sort\n");
        printf("3 - Bubble Sort\n");
        printf("4 - Shell Sort\n");
        printf("5 - Merge Sort\n");
        printf("6 - Sair\n");
        printf("\n**==========================**\n");

        printf("Escolha uma Opcao: \n");
        scanf("%d", &opcao);

    } while (opcao < 1 || opcao > 6);

    if (opcao != 6) {
        printf("\n========== **TIPO DE ENTRADA** ==========\n");
        printf("r - Random\n");
        printf("c - Crescente\n");
        printf("d - Decrescente\n");
        printf("\n**==========================**\n");
        scanf(" %c", tipo);

        printf("\n========== **TAMANHO DE ENTRADA** ==========\n");
        printf("10\n");
        printf("100\n");
        printf("1000\n");
        printf("100000\n");
        printf("1000000\n");
        printf("10000000\n");
        printf("\n**==========================**\n");
        scanf("%d", n);
    }

    return opcao;
}
