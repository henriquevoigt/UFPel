#include <stdio.h>

int main () {

    int matriz[4][4], acumulador = 0;

    for ( int i = 0; i < 4; i++ ) {
        for ( int j = 0; j < 4; j++ ) {
            printf("Informe um valor pra posicao %d, %d\n", i, j);
            scanf("%d", &matriz[i][j]);
            if ( matriz[i][j] > 10 ) {
                acumulador++;
            }
        }
    }

    printf("\nNumeros maiores que 10: | %d |\n", acumulador);

    return 0;

}