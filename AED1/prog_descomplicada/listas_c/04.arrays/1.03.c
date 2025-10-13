#include <stdio.h>

int main () {

    float vetor_a[10], vetor_b[10];

    for ( int i = 0; i < 10; i++ ) {
        printf("\nInforme o valor da posicao %d:\n", i);
        scanf("%f", &vetor_a[i]);

        vetor_b[i] = ( vetor_a[i] * vetor_a[i] );
    }

    printf("\nVetor B:  ");

    for ( int i = 0; i < 10; i++ ) {
        printf("%.2f  ", vetor_b[i]);
    }
    
    return 0;

}