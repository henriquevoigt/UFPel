// Escreva um algoritmo para ler 2 valores e uma das seguintes operações a serem executadas (codificada da seguinte forma: 1.Adição, 2.Subtração, 3.Divisão, 4.Multiplicação).
// Calcular e escrever o resultado dessa operação sobre os dois valores lidos.

#include <stdio.h>

int main () {

    int valor1, valor2, resultado, operacao;

    printf("Informe o primeiro numero\n");
    scanf("%d", &valor1);
    printf("Informe o segundo numero\n");
    scanf("%d", &valor2);
    printf("Informe qual operacao deseja realizar\n 1. Adicao\n 2. Subtracao\n 3. Divisao\n 4. Multiplicacao\n");
    scanf("%d", &operacao);

    if (operacao == 1) {
        resultado = valor1 + valor2;
        printf("%d", resultado);
    } else if (operacao == 2) {
        resultado = valor1 - valor2;
        printf("%d", resultado);
    } else if (operacao == 3) {
        resultado = valor1 / valor2;
        printf("%d", resultado);
    } else if (operacao == 4) {
        resultado = valor1 * valor2;
        printf("%d", resultado);
    } else
        printf("Operacao invalida");

    return 0;

}