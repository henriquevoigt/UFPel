#include <stdio.h>
#include <stdlib.h>

int main () {

    int *vetor = NULL, tamanho, pares = 0, impares = 0;

    printf("Informe o tamanho do vetor: ");
    scanf("%d", &tamanho);

    vetor = (int *)malloc(tamanho * sizeof( int ));

    if ( vetor == NULL ) {
        printf("Falha ao alocar memoria!\n");
        return 1;
    }

    for ( int i = 0; i < tamanho; i++ ) {
        printf("Informe o valor pra posicao %d: ", i);
        scanf("%d", &vetor[i]);

        if ( vetor[i] % 2 == 0 ) {
            pares++;
        } else {
            impares++;
        }
    }

    printf("Total de pares: %d | Total de impares: %d\n", pares, impares);

    free(vetor);

    return 0;

}