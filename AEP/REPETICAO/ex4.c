// Ler um valor inteiro (aceitar somente valores entre 1 e 10) e escrever a tabuada de 10 a 1 do valor lido.

#include <stdio.h>

int main(){

    int valor_entrada=0, valor_operacao, controle=1;

    while (valor_entrada < 1 || valor_entrada > 10){
        printf("Informe um numero entre 1 e 10 que deseja saber a tabuada\n");
        scanf("%d", &valor_entrada);
    } while (controle <= 10){
        (valor_operacao = valor_entrada * controle);
        printf("%d x %d = %d\n", valor_entrada, controle, valor_operacao);
        controle++;
    }
    return 0;
    
}