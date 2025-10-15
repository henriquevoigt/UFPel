#include <stdio.h>

int main () {

    int vetor[5] = {0, 0, 0, 0, 0}, maior = 0, menor = 0;
    float media = 0;

    for ( int i = 0; i < 5; i++ ) {
        printf("Informe um valor pra posicao %d: ", i + 1);
        scanf("%d", &vetor[i]);

        if ( i == 0 ) {
            maior = vetor[i];
            menor = vetor[i];
        }

        if ( vetor[i] > maior ) {
            maior = vetor[i];
        }

        if ( vetor[i] < menor ) {
            menor = vetor[i];
        }

        media += vetor[i];
    }

    media = media / 5;

    printf("Maior: |%d| Menor: |%d| Media: |%.2f|\n", maior, menor, media);
    printf("Valores lidos: |");

    for ( int i = 0; i < 5; i++ ) {
        printf(" %d |", vetor[i]);
    }

    return 0;

}