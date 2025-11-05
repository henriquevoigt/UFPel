#include <stdio.h>
#include <stdlib.h>

int main () {

    int tamanho, *vetor = NULL, qtd_multiplos = 0, *multiplos = NULL, x, *temp;

    printf("Informe o tamanho do vetor: ");
    scanf("%d", &tamanho);

    vetor = (int *)malloc(tamanho * sizeof( int ));

    if ( vetor == NULL ) {
        printf("Erro ao alocar memoria!\n");
        return 1;
    }

    for ( int i = 0; i < tamanho; i++ ) {
        printf("Informe o valor da posicao %d: ", i);
        scanf("%d", &vetor[i]);
    }

    printf("Informe um valor de X: ");
    scanf("%d", &x);

    for ( int i = 0; i < tamanho; i++ ) {
        if ( vetor[i] % x == 0 ) {
            qtd_multiplos++;
            temp = (int *)realloc(multiplos, qtd_multiplos * sizeof( int ));
            if ( temp == NULL ) {
                printf("Falha ao alocar memoria!\n");
                free(vetor);
                free(multiplos);
                return 1;
            } 
            multiplos = temp;
            multiplos[qtd_multiplos - 1] = vetor[i];
            
        }
    }

    printf("Total de multiplos de X: %d\nMultiplos: ", qtd_multiplos);

    for ( int i = 0; i < qtd_multiplos; i++ ) {
        printf("%d ", multiplos[i]);
    }

    printf("\n");

    free(vetor);
    free(multiplos);

    return 0;
    
}