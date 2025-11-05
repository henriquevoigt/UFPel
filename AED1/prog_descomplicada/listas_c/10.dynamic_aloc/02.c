#include <stdio.h>
#include <stdlib.h>

int main () {

    int tamanho, *vetor = NULL;

    printf("Informe o tamanho do vetor a ser lido: ");
    scanf("%d", &tamanho);

    vetor = (int *)malloc(tamanho * sizeof( int ));

    if ( vetor == NULL ) {
        printf("Erro ao alocar memoria!\n");
        return 1;
    }

    for ( int i = 0; i < tamanho; i++ ) {
        printf("Informe o valor da posicao %d: ", i);
        scanf("%d", &vetor[i]);
    }

    for ( int i = 0; i < tamanho; i++ ) {
        printf("%d ", vetor[i]);
    }

    free(vetor);

    return 0;

}