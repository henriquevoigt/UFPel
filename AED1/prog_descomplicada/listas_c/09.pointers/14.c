#include <stdio.h>

void PreencheArray ( int *vetor, int x);

int main () {

    int vetor[5], x;

    printf("Informe o valor de X: ");
    scanf("%d", &x);

    PreencheArray ( vetor, x );

    for ( int i = 0; i < 5; i++ ) {
        printf("Vetor[%d]: %d\n", i, vetor[i]);
    }

    return 0;

}

void PreencheArray ( int *vetor, int x) {

    int *p = vetor;

    for ( int i = 0; i < 5; i++ ) {
        *p = x;
        p++;
    }

    return;

}