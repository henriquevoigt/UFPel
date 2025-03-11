#include <stdio.h>
#include <string.h>
//  Faça um algoritmo que leia um número inteiro e mostre uma mensagem indicando se este número é par ou ímpar, e se é positivo, negativo ou zero.

int main (){

    // variaveis

    int numero, divisor;
    char carac1[10],carac2[10];
    divisor = 2;


    printf("Digite um numero para saber suas caracteristicas\n");
    scanf("%d", &numero);

    // decisão

    if (numero > 0)
        strcpy(carac1,"Positivo");
    else if (numero < 0)
        strcpy(carac1,"Negativo");
    else if (numero == 0)
        strcpy(carac1,"Zero");

    if (numero % divisor == 0)
        strcpy(carac2,"Par");
    else
        strcpy(carac2,"Impar");
    printf("O numero %d eh %s e %s", numero, carac1, carac2);

        return 0;
}


