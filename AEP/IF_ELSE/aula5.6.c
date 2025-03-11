#include <stdio.h>

// Escreva um algoritmo para ler 3 valores e escrever a soma dos 2 maiores. Considere que os usuário não informará valores iguais.

int main () {

    int valor1, valor2, valor3, resultado_soma;

    printf("Insira o primeiro valor\n");
    scanf("%d", &valor1);
    printf("Insira o segundo valor\n");
    scanf("%d", &valor2);
    printf("Insira o terceiro valor\n");
    scanf("%d", &valor3);

    if (valor1 < valor2 && valor1 < valor3) {
        resultado_soma = valor2 + valor3;
    } else if (valor2 < valor1 && valor2 < valor3) {
        resultado_soma = valor1 + valor3;
    } else if (valor3 < valor1 && valor3 < valor2) {
        resultado_soma = valor1 + valor2;
    }

    printf("%d eh a soma entre os 2 maiores valores", resultado_soma);

    return 0;
    
}