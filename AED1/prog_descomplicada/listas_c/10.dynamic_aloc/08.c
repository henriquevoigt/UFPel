#include <stdio.h>
#include <stdlib.h>

int main () {

    int *vetor = NULL, tamanho = 1500, contador = 0;

    vetor = (int *)calloc(tamanho, sizeof( int ));

    if ( vetor == NULL ) {
        printf("Falha ao alocar memoria!\n");
        return 1;
    }

    for ( int i = 0; i < tamanho; i++ ) {
        if ( vetor[i] == 0 ) {
            contador++;
        }
        vetor[i] = i;
    }

    for ( int i = 0; i < 10; i++ ) {
        printf(" %d ", vetor[i]);
    }

    printf("\n");

    for ( int i = tamanho - 1; i > tamanho - 11; i-- ) {
        printf(" %d ", vetor[i]);
    }

    free(vetor);

    return 0;

}