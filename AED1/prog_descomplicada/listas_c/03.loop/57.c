#include <stdio.h>

int main () {

    int a, b, contador = 0;

    printf("Informe A\n");
    scanf("%d", &a);
    printf("informe B\n");
    scanf("%d", &b);

    while ( a > b ) {
        printf("Informe A menor que B!\nInforme A:\n");
        scanf("%d", &a);
        printf("Informe B");
        scanf("%d", &b);
    }

    for (int i = a; i <= b; i++) {
        int primo = 1;

        if ( i <= 1 ) {
            primo = 0;
        } else {
            for ( int j = 2; j * j <= i; j++ ){
                if ( i % j == 0 ) {
                    primo = 0;
                    break;
                }
            }
        }
        
        if ( primo == 1 ) {
            contador++;
        }
    }

    printf("\nPrimos no intervalo: %d\n", contador);

    return 0;
    
}   