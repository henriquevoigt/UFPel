#include <stdio.h>

int valor[6];

int main () {

    for ( int i = 0; i < 6; i++ ) {
        printf("Informe um valor pra posicao %d: ", i + 1);
        scanf("%d", &valor[i]);
    }
    
    printf("Valores no vetor: |");

    for ( int i = 0; i < 6; i++ ) {
        printf(" %d |", valor[i]);
    }

    return 0;

}