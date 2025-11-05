#include <stdio.h>
#include <stdlib.h>

int VerificaMatriz ( int x, int **matriz, int linhas, int colunas );

int main () {

    int **matriz = NULL, linhas, colunas, controle;

    printf("Informe quantas linhas: ");
    scanf("%d", &linhas);
    printf("Informe quantas colunas: ");
    scanf("%d", &colunas);

    matriz = (int **)malloc(linhas * sizeof( int * ));
    if ( !matriz ) {
        printf("Erro ao alocar memoria!\n");
        return 1;
    }

    for ( int i = 0; i < linhas; i++ ) {
        matriz[i] = (int *)malloc(colunas * sizeof( int ));
        if ( !matriz[i] ) {
            printf("Erro ao alocar memoria!\n");
            for ( int j = 0; j < i; j++ ) {
                free(matriz[j]);
            }
            free(matriz);
            return 1;
        }
    }

    printf("Matriz alocada!\n");

    for ( int i = 0; i < linhas; i++ ) {
        for ( int j = 0; j < colunas; j++ ) {
            printf("Informe um valor pra posicao %d | %d: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Informe um valor a ser verificado: ");
    scanf("%d", &controle);

    printf("Consta na matriz? ( 1 - SIM | 0 - NAO ): %d\n", VerificaMatriz ( controle, matriz, linhas, colunas ));

    for ( int i = linhas - 1; i >= 0; i++ ) {
        free(matriz[i]);
    }
    free(matriz);

    return 0;
}

int VerificaMatriz ( int x, int **matriz, int linhas, int colunas ) {

    for ( int i = 0; i < linhas; i++ ) {
        for ( int j = 0; j < colunas; j++ ) {
            if ( matriz[i][j] == x ) {
                return 1;
            }
        }
    }

    return 0;

}