/* Fac¸a um programa que receba do usu ´ario um vetor com 10 posic¸ ˜oes. Em seguida dever ´a
ser impresso o maior e o menor elemento do vetor */

#include <stdio.h> 

int main () {

    int vetor[10], menor = 0, maior = 0;

    for ( int i = 0; i < 10; i++ ) {
        printf("Informe um valor pra posicao %d: ", i);
        scanf("%d", &vetor[i]);
        
        if ( i == 0 ) {
            menor = vetor[i];
            maior = vetor[i];
        }
        if ( menor > vetor[i] ) {
            menor = vetor[i];
        }
        if ( maior < vetor[i] ) {
            maior = vetor[i];
        }
    }

    printf("Maior: %d\t Menor: %d\n", maior, menor);

    return 0;

}