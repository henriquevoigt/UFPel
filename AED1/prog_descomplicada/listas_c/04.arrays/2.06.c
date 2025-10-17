#include <stdio.h>

int main () {

    int matriz_a[4][4], matriz_b[4][4], matriz_c[4][4];

     for ( int i = 0; i < 5; i++ ) {
        for ( int j = 0; j < 5; j ++ ) {
            printf("\nMatria A:\nInforme um valor pra posicao L: %d, C: %d: ", i, j);
            scanf("%d", &matriz_a[i][j]);
        }
    }

     for ( int i = 0; i < 5; i++ ) {
        for ( int j = 0; j < 5; j ++ ) {
            printf("\nMatriz B:\nInforme um valor pra posicao L: %d, C: %d: ", i, j);
            scanf("%d", &matriz_b[i][j]);
        }
    }

     for ( int i = 0; i < 5; i++ ) {
        for ( int j = 0; j < 5; j ++ ) {
            if ( matriz_a[i][j] > matriz_b[i][j] ) {
                matriz_c[i][j] = matriz_a[i][j];
            } else {
                matriz_c[i][j] = matriz_b[i][j];
            }
            printf(" %d |", matriz_c[i][j]);
        }
        printf("\n");
    }

    return 0;

}