/* Crie um programa que l ˆe 6 valores inteiros e, em seguida, mostre na tela os valores lidos
na ordem inversa. */

#include <stdio.h>

int main () {

    int vetor[6];

    for ( int i = 0; i < 6; i++ ) {
        printf("Informe um valor para a posicao %d: ", i);
        scanf("%d", &vetor[i]);
    }

    printf("\n====| Leitura concluida! |====\n\n");

    for ( int i = 5; i >= 0; i-- ) {
        printf("%d ", vetor[i]);
    }

    return 0;

}