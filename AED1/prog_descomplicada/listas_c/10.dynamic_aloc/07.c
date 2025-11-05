#include <stdio.h>
#include <stdlib.h>

int main () {

    int sorteados[6], escolhidos[6], *acertados = NULL, acertos = 0;

    for ( int i = 0; i < 6; i++ ) {
        printf("Informe o %d valor sorteado: ", i + 1);
        scanf("%d", &sorteados[i]);
    }
    
    for ( int i = 0; i < 6; i++ ) {
        printf("Informe o %d valor escolhido: ", i + 1);
        scanf("%d", &escolhidos[i]);
    }

    for ( int i = 0; i < 6; i++ ) {
        for ( int j = 0; j < 6; j++ ) {
            if ( escolhidos[j] == sorteados[i] ) {
                acertos++;
            }
        }
    }

    if ( acertos > 0 ) {

        int controle = 0;

        acertados = (int *)malloc(acertos * sizeof( int ));

        if ( acertados == NULL ) {
            printf("Erro ao alocar memoria!\n");
            return 1;
        }

        for ( int i = 0; i < 6; i++ ) {
            for ( int j = 0; j < 6; j++ ) {
                if ( escolhidos[j] == sorteados[i] ) {
                    acertados[controle] = sorteados[i];
                    controle++;
                }
            }
        }
    }

    printf("Total de acertos: %d\nAcertos: ", acertos);

    for ( int i = 0; i < acertos; i++ ) {
        printf("%d ", acertados[i]);
    }

    printf("\n");

    free(acertados);

    return 0;

}