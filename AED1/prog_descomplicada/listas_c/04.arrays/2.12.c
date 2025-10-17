#include <stdio.h>

int main () {

    int matriz_a[3][3], matriz_b[3][3];

     for ( int i = 0; i < 3; i++ ) {
        for ( int j = 0; j < 3; j ++ ) {
            printf("\nInforme um valor pra posicao L: %d, C: %d: ", i, j);
            scanf("%d", &matriz_a[i][j]);
        }
    }

    for ( int i = 0; i < 3; i++ ) {
        for ( int j = 0; j < 3; j ++ ) {
            matriz_b[j][i] = matriz_a[i][j];
        }
    }   

    for ( int i = 0; i < 3; i++ ) {
        for ( int j = 0; j < 3; j ++ ) {
            printf(" %d ", matriz_b[i][j]);
        }
        printf("\n");
    } 

    return 0;

}