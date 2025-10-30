#include <stdio.h>

float CalculaS ( float x );

int main () {

    float x;

    printf("Informe X: ");
    scanf("%f", &x);

    printf("Resultado: %.2f", CalculaS ( x ));

    return 0;

}

float CalculaS ( float x ) {

    if ( x == 1 ) {
        return 2;
    } else {
        float valor_atual = (( 1 + (x * x)) / x );

        return valor_atual + CalculaS ( x - 1 );
    }
}