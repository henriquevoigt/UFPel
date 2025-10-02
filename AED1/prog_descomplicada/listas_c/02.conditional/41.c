#include <stdio.h>

int main () {

    int peso;
    float altura, imc;

    scanf("%d", &peso);
    scanf("%f", &altura);

    imc = ( peso / (altura * altura) );

    if ( imc < 18.5 ){
        printf("\nAbaixo do peso\n");
    } else if ( imc >= 18.5 && imc <= 24.9 ){
        printf("\nSaudavel\n");
    } else if ( imc >= 25.0 && imc <= 29.9 ){
        printf("\nPeso em excesso\n");
    } else if ( imc >= 30.0 && imc <= 34.9 ){
        printf("\nObesidade grau 1\n");
    } else if ( imc >= 35.0 && imc <= 39.9 ){
        printf("\nObesidade grau 2 (severa)\n");
    } else {
        printf("\nObesidade grau 3 (morbida)\n");
    }

    return 0;
    
}