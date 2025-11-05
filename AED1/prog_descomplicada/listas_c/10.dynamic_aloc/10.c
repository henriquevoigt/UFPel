#include <stdio.h>
#include <stdlib.h>

int main () {

    int quantidade;
    double *vetor = NULL;

    printf("Informe quantos valores deseja armazenar: ");
    scanf("%d", &quantidade);

    while ( quantidade < 10 ) {
        printf("Menor valor aceito eh 10! Tente novamente: ");
        scanf("%d", &quantidade);
    }

    vetor = (double *)malloc(quantidade * sizeof( double ));
    if ( vetor == NULL ) {
        printf("Erro ao alocar memoria!\n");
        return 1;
    }

    for ( int i = 0; i < 10; i++ ) {
        vetor[i] = (rand() % 101);
        printf("%.0f ", vetor[i]);
    }

    free(vetor);

    return 0;

}