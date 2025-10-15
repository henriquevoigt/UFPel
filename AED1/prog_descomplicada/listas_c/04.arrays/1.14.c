#include <stdio.h>

int main () {

    int vetor[10], repetido = 0;

    for ( int i = 0; i < 10; i++ ) {
        printf("Digite um valor pra posicao %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("\nValores repetidos: |");
    repetido = 0;

    for ( int i = 0; i < 10; i++ ) {
        int ja_mostrado = 0;

        for ( int j = 0; j < i; j++ ) {
            if ( vetor[i] == vetor[j] ) {
                ja_mostrado = 1;
                break;
            }
        }

        if ( ja_mostrado ) {
            continue;
        }

        for ( int j = i + 1; j < 10; j++ ) {
            if ( vetor[i] == vetor[j] ) {
                printf(" %d |", vetor[i]);
                repetido = 1;
                break;
            }
        }
    }

    if ( !repetido )
        printf("Nao ha valores repetidos.\n");

    return 0;

}
