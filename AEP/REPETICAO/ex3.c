// Faça um algoritmo para calcular o fatorial de um número.

#include <stdio.h>

int main(){

    int numero_fatorial, resultado=1;

    printf("Informe o numero a saber o fatorial\n");
    scanf("%d", &numero_fatorial);

    while (numero_fatorial > 1){
        printf("%d * %d\n", resultado, numero_fatorial);
        resultado = resultado * numero_fatorial;
        numero_fatorial--;
    }

    printf("%d", resultado);

    return 0;

}