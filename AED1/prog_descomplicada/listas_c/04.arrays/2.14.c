#include <stdio.h>
#include <stdlib.h>

int main () {

    int matriz[5][5], qtd_usados = 0, temp = 0;

    for ( int cartelas = 0; cartelas < 4; cartelas++ ) {
        int usados[100] = {100};
        srand(cartelas);
        for ( int i = 0; i < 5; i++ ) {
            for ( int j = 0; j < 5; j ++ ) {
                int controle = 0;
                while ( controle == 0 ) {
                    temp = ( rand() % 100 );
                    for ( int k = 0; k <= qtd_usados; k++ ) {
                        if ( temp == usados[k] ) {
                            controle = 0;
                            break;
                        } else {
                            controle = 1;
                        }
                    }
                    if ( controle == 1 ) {
                        matriz[i][j] = temp;
                        usados[qtd_usados] = matriz[i][j];
                        qtd_usados++;
                        break;
                    }
                }
                
            }
        }
        printf("\nCartela %d:\n", cartelas + 1);
        for ( int i = 0; i < 5; i++ ) {
            for ( int j = 0; j < 5; j ++ ) {
                printf(" %d ", matriz[i][j]);
            }
            printf("\n");
        }
    }

    return 0;

}