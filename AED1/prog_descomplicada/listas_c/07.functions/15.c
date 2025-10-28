#include <stdio.h>
#include <stdlib.h>

int VerificaTriangulo ( float lado[3] );
void DeterminaTriangulo ( float lado[3] );

int main () {

    float lado[3];

    for ( int i = 0; i < 3; i++ ) {
        printf("Informe o valor do lado %d: ", i+1);
        scanf("%f", &lado[i]);
        while ( lado[i] <= 0 ) {
            printf("Informe um valor maior que 0!\n");
            scanf("%f", &lado[i]);
        }
    }

    if ( VerificaTriangulo ( lado ) ) {
        DeterminaTriangulo ( lado );
    } else {
        printf("Nao eh triangulo!\n");
        exit(0);
    }

    return 0;

}

int VerificaTriangulo ( float lado[3] ) {

    if ( lado[0] < (lado[1] + lado[2]) &&
         lado[1] < (lado[0] + lado[2]) &&
         lado[2] < (lado[1] + lado[0]) ){

        return 1;
    } else {
        return 0;
    } 

}

void DeterminaTriangulo ( float lado[3] ) {

    if ( lado[0] == lado[1] && lado[0] == lado[2] ) {
        printf("Triangulo equilatero!\n");
    } else if ( lado[0] == lado[1] || lado[0] == lado[2] || lado[1] == lado[2] ) {
        printf("Triangulo isosceles!\n");
    } else {
        printf("Triangulo escaleno!\n");
    }

    return;

}