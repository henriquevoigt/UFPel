#include <stdio.h>

int main () {

    int vetor[5] = {0, 0, 0, 0, 0}, maior = 0, menor = 0;

    for ( int i = 0; i < 5; i++ ) {
        printf("Informe um valor pra posicao %d: ", i + 1);
        scanf("%d", &vetor[i]);

        if ( i == 0 ) {
            maior = vetor[i];
            menor = vetor[i];
        }

        if ( maior < vetor[i] ) {
            maior = vetor[i];
        }

        if ( menor > vetor[i] ) {
            menor = vetor[i];
        }
        
    }

    for ( int i = 0; i < 5; i++ ) {
        if ( menor == vetor[i] ) {
            printf("Menor valor se encontra na posicao: | %d |\n", i + 1);
        }
        if ( maior == vetor[i] ) {
            printf("Maior valor se encontra na posicao: | %d |\n", i + 1);
        }
    }

    return 0;

}