#include <stdio.h>

// Escreva um algoritmo para ler 2 valores e se o segundo  valor informado for ZERO, deve ser mostrada uma mensagem de valor inválido e deve ser lido um novo
// valor (ou seja, para o segundo valor não pode ser aceito o valor zero), e imprimir o resultado da divisão do primeiro valor lido pelo segundo valor lido. 

int main (){

    int valor_1, valor_2, resultado;

    printf("Informe o primeiro valor\n");
    scanf("%d", &valor_1);
    printf("Informe o segundo valor\n");
    scanf("%d", &valor_2);

    while (valor_2 == 0) {
        printf("Valor invalido, insira outro valor diferente de 0\n");
        scanf("%d", &valor_2);
    }

    resultado = (valor_1 / valor_2);

    printf("Resultado da divisao do primeiro valor pelo segundo eh %d", resultado);

    return 0;

}