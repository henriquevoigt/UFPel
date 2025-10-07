#include <stdio.h>

int main () {

    int valor = 0, temp;

    for ( int i = 0; i < 10; i++ ){
        printf("Informe um valor positivo\n");
        scanf("%d", &temp);

        while ( temp < 0 ) {
            printf("Apenas valores positivos!\n");
            scanf("%d", &temp);
        }
        
        valor += temp;

    }

    printf("Media: %d\n", (valor/10));
    
    return 0;

}