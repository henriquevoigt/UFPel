#include <stdio.h>

int main () {

    int vetor[8], temp = 0, soma = 0;

    for ( int i = 0; i < 8; i++ ) {
        printf("Informe o valor pora posicao %d: ", i);
        scanf("%d", &vetor[i]);
    }

    printf("Informe X: "); scanf("%d", &temp);
    soma = vetor[temp];
    printf("Informe Y: "); scanf("%d", &temp);
    soma += vetor[temp];

    printf("Soma: %d\n", soma);

    return 0;
}