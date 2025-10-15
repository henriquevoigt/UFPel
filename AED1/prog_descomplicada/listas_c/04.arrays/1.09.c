#include <stdio.h>

int main () {

    int vetor[6];

    for ( int i = 0; i < 6; i++ ) {
        printf("Informe um valor pra posicao %d: ", i);
        scanf("%d", &vetor[i]);

        while ( vetor[i] % 2 != 0 ) {
            printf("Apenas valores pares! Insira novamente: ");
            scanf("%d", &vetor[i]);
        }
    }

    printf("\n====| Leitura concluida! |====\n\n|");

    for ( int i = 5; i >= 0; i-- ) {
        printf(" %d |", vetor[i]);
    }

    return 0;

}