#include <stdio.h>

int main () {

    int matriz[5][5], buscador, controle = 0;

    for ( int i = 0; i < 5; i++ ) {
        for ( int j = 0; j < 5; j ++ ) {
            printf("Informe um valor pra posicao L: %d, C: %d: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Informe o valor que deseja buscar: ");
    scanf("%d", &buscador);

    for ( int i = 0; i < 5; i++ ) {
        for ( int j = 0; j < 5; j ++ ) {
            if ( buscador == matriz[i][j] ) {
                printf("Valor encontrado na posicao L: %d, C: %d", i, j);
                controle++;
            }

        }
    }

    if ( !controle ) {
        printf("Valor nao encontrado!\n");
    }

    return 0;

}