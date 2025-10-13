/* Escreva um programa que leia 10 n ´umeros inteiros e os armazene em um vetor. Imprima
o vetor, o maior elemento e a posic¸ ˜ao que ele se encontra. */

#include <stdio.h>

int main () {

    int vetor[10], maior = 0, p_maior = 0;

    for ( int i = 0; i < 10; i++ ) {
        printf("Informe um valor pra posicao %d: ", i);
        scanf("%d", &vetor[i]);

        if ( i == 0 ) {
            maior = vetor[i];
        }
        if ( maior < vetor[i] ) {
            maior = vetor[i];
            p_maior = i;
        }
    }

    printf("\n====| Leitura concluida! |====\n\nImprimindo o vetor:\n|");

    for ( int i = 0; i < 10; i++ ) {
        printf(" %d |", vetor[i]);
    }

    printf("\nMaior valor: %d na posicao %d", maior, p_maior);

    return 0;
        
}