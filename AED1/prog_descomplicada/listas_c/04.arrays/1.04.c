/* Fac¸a um programa que leia um vetor de 8 posic¸ ˜oes e, em seguida, leia tamb ´em dois va-
lores X e Y quaisquer correspondentes a duas posic¸ ˜oes no vetor. Ao final seu programa
dever ´a escrever a soma dos valores encontrados nas respectivas posic¸ ˜oes X e Y . */

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