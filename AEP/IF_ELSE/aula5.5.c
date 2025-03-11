// Escreva um algoritmo para ler 3 valores e escrever o maior deles. Considere que os usuário não informará valores iguais.

#include <stdio.h>

int main () {

    int valor1, valor2, valor3;

    printf("Informe um valor\n");
    scanf("%d", &valor1);
    printf("Informe um outro valor\n");
    scanf("%d", &valor2);
    printf("Informe mais um valor\n");
    scanf("%d", &valor3);
    printf("Processando...\n");

    if (valor1 > valor2 && valor1 > valor3) {
        printf("O maior numero informado eh %d", valor1);
    } else if (valor2 > valor1 && valor2 > valor3) {
        printf("O maior numero informado eh %d", valor2);
    } else if (valor3 > valor1 && valor3 > valor2) {
        printf("O maior numero informado eh %d", valor3);
    } 

    return 0;

}