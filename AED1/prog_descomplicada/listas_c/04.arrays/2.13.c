#include <stdio.h>

int main () {

    int matriz[4][4];

     for ( int i = 0; i < 4; i++ ) {
        for ( int j = 0; j < 4; j ++ ) {
            printf("\nMatria A:\nInforme um valor ( entre 1 e 20 ) pra posicao L: %d, C: %d: ", i, j);
            scanf("%d", &matriz[i][j]);

            while ( matriz[i][j] > 20 || matriz[i][j] < 1 ) {
                printf("Apenas no intervalo entre 1 e 20! Informe novamente: ");
                scanf("%d", &matriz[i][j]);
            }
        }
    }

     for ( int i = 0; i < 4; i++ ) {
        for ( int j = 0; j < 4; j ++ ) {
            if ( i < j ) {
                matriz[i][j] = 0;
            }
            printf(" %d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;

}
