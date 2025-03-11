// Receber um numero e mostrar todos os numeros pares de 0 até o número.

#include <stdio.h>

int main () {

    int numero, controle;

    controle = 0;

    printf("Informe o numero\n");
    scanf("%d", &numero);

    while (controle <= numero) {
        if (controle % 2 == 0) {
            printf("%d ", controle);
        } 
        controle++;


    }

    return 0;
}