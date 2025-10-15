#include <stdio.h>

int main () {

    int vetor[20], ja_existe;

    for ( int i = 0; i < 20; i++ ) {
        printf("Informe o valor da posicao %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("\nVetor sem repeticoes: |");

    for (int i = 0; i < 20; i++ ) {
        ja_existe = 0; 

        for ( int j = 0; j < i; j++ ) {
            if (vetor[i] == vetor[j]) {
                ja_existe = 1;
                break;
            }
        }

        if (!ja_existe) {
            printf(" %d |", vetor[i]);
        }
    }

    printf("\n");

    return 0;

}
