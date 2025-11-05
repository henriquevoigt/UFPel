#include <stdio.h>
#include <stdlib.h>

int main () {

    int tamanho, *memoria = NULL, opcao = 1;

    printf("Informe total de bytes desejados (DEVE SER MULTIPLO DO TIPO INTEIRO!): ");
    scanf("%d", &tamanho);

    while ( tamanho % sizeof( int ) != 0 ) {
        printf("Deve ser multiplo do tipo INTEIRO! Informe novamente: ");
        scanf("%d", &tamanho);
    }

    memoria = (int *)calloc(tamanho, 1);

    while ( opcao != 0 ) {

        printf("Escolha uma opcao:\n0. Sair\n1. Inserir valor em uma posicao\n2. Consultar valor em uma posicao\n");
        scanf("%d", &opcao);

        while ( opcao > 2 || opcao < 0 ) {
            printf("Apenas de 0 a 2! Tente novamente: ");
            scanf("%d", &opcao);
        }

        switch ( opcao ) {

            case 1: {

                int valor, posicao;

                printf("Informe o valor que deseja inserir: ");
                scanf("%d", &valor);
                printf("Informe a posicao que deseja inserir: ");
                scanf("%d", &posicao);

                while ( posicao >= tamanho / sizeof( int ) || posicao < 0 ) {
                    printf("Posicao invalida! Insira valor dentro do escopo alocado!\n Tente novamente: ");
                    scanf("%d", &posicao);
                }

                memoria[posicao] = valor;

                break;
            }
        
            case 2: { 

                int posicao;

                printf("Informe a posicao que deseja consultar: ");
                scanf("%d", &posicao);

                while ( posicao >= tamanho / sizeof( int ) || posicao < 0 ) {
                    printf("Posicao invalida! Insira valor dentro do escopo alocado!\n Tente novamente: ");
                    scanf("%d", &posicao);
                }

                printf("Valor na posicao %d: %d\n", posicao, memoria[posicao]);

                break;
            }
        }
    }

    free(memoria);

    return 0;

}