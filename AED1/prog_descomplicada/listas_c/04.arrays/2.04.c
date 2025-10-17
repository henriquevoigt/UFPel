#include <stdio.h>

int main () {

    int matriz[4][4], maior;

    for ( int i = 0; i < 4; i++ ) {
        for ( int j = 0; j < 4; j ++ ) {
            printf("Informe um valor pra posicao L: %d, C: %d: ", i, j);
            scanf("%d", &matriz[i][j]);

            if ( i == 0 && j == 0 ) {
                maior = matriz[i][j];
            }

            if ( maior < matriz[i][j] ) {
                maior = matriz[i][j];
            }
        }
    }

    for ( int i = 0; i < 4; i++ ) {
        for ( int j = 0; j < 4; j++ ) {
            if ( matriz[i][j] == maior ) {
                printf("Posicao do maior valor: L: %d, C: %d | Valor: %d\n", i, j, maior);
            }
        }
    }

    return 0;

}