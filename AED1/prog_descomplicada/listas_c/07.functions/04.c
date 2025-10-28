#include <stdio.h>

void VerificaQuadrado ( int valor );

int main () {

    int valor;

    printf("Informe o valor: ");
    scanf("%d", &valor);

    VerificaQuadrado ( valor );

    return 0;

}

void VerificaQuadrado ( int valor ) {

    int controle = 0;

    for ( int i = 0; i < valor; i++ ) {
        if ( i * i == valor ) {
            printf("%d eh quadrado perfeito de %d\n", valor, i);
            controle++;
            break;
        }
    }

    if ( controle == 0 ) {
        printf("%d nao eh quadrado perfeito!\n", valor);
    }

    return;
}