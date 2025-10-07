#include <stdio.h>

int main () {

    int maior = 0, menor, temp;

    for ( int i = 0; i < 10; i++ ){
        printf("Informe um valor positivo\n");
        scanf("%d", &temp);
        
        if ( maior < temp ){
            maior = temp;
        }
        if ( i == 0 ) {
            menor = temp;
        }
        if ( menor > temp ){
            menor = temp;
        }
    }

    printf("Maior: %d \t Menor: %d", maior, menor);

    return 0;
    
}