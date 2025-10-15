#include <stdio.h>

int main () {

    int vetor[10], acumulador = 0;

    for ( int i = 0; i < 10; i++ ) {
        printf("Informe um valor pra posicao %d: ", i);
        scanf("%d", &vetor[i]);
        if ( vetor[i] % 2 == 0 ) {
            acumulador++;
        }
    }

    printf("Total de pares: %d\n", acumulador);

    return 0;
    
}