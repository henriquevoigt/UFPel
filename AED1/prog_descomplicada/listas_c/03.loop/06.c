#include <stdio.h>

int main () {

    int valores = 0, temp = 0;

    for ( int i = 0; i < 10; i++ ) {
        printf("Informe um valor\n");
        scanf("%d", &temp);
        valores += temp;
    }

    valores = valores/10;

    printf("%d", valores);

    return 0;
    
}