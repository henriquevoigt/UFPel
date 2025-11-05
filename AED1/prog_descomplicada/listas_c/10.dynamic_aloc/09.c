#include <stdio.h>
#include <stdlib.h>

int main () {

    int *vetor = NULL, entrada = 0, *temp, controle = 0;

    while ( 1 ) {
        printf("Informe um numero a ser alocado no vetor: ");
        scanf("%d", &entrada);
        if ( entrada < 0 ) {
            printf("Programa encerrado!\n");
            break;
        }
        controle++;
        temp = (int *)realloc(vetor, controle * sizeof( int ));
        if ( temp == NULL ) {
            printf("Erro ao alocar memoria!\n");
            free(vetor);
            return 1;
        }
        vetor = temp;
        vetor[controle - 1] = entrada;
    }

    printf("Valores lidos: ");

    for ( int i = 0; i < controle; i++ ) {
        printf("%d ", vetor[i]);
    }

    free(vetor);

    return 0;
    
}