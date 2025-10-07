#include <stdio.h>

int main () {

    int ciclos;

    printf("Quantos numeros deseja ler?\n");
    scanf("%d", &ciclos);

    for ( int i = 0; i < ciclos; i++ ) {
        if ( i % 2 != 0 ){
            printf("%d\n", i);
        }
    }

    return 0;

}