#include <stdio.h>

void CalculaRecursiva ( int x[10], int i, int menor );

int main () {

    int x[10];

    for ( int i = 0; i < 10; i++ ){
    printf("Informe X%d: ", i);
    scanf("%d", &x[i]);
    }

    CalculaRecursiva ( x, 0, 0);

    return 0;

}

void CalculaRecursiva ( int x[10], int i, int menor ) {

    if ( i == 0 ) {
        menor = x[i];
    }

    if ( i == 10 ) {
        printf("Menor = %d", menor);
        return;
    } else {
        if ( x[i] < menor ) {
            menor = x[i];
        }
        CalculaRecursiva ( x, i + 1, menor );
    }

}