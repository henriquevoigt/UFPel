#include <stdio.h>

int main () {

    int matriz[3][3], soma = 0;

     for ( int i = 0; i < 3; i++ ) {
        for ( int j = 0; j < 3; j ++ ) {
            printf("\nInforme um valor pra posicao L: %d, C: %d: ", i, j);
            scanf("%d", &matriz[i][j]);

            if ( j == i ) {
                soma += matriz[i][j];
            }
        }
    }

    printf("Soma: %d\n", soma);

    return 0;

}