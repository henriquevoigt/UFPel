// Faça um programa que recebe um número inteiro e verifica se o número é primo ou não, escrevendo uma mensagem apropriada.

#include <stdio.h>

int main(){

    int valor = 1, somador = 0;

    while (valor > 0){
        printf("Informe um valor para saber se eh primo\n");
        scanf("%d", &valor);

        for (int i = valor; i > 0; i--){
            if (valor % i == 0){
            somador ++;
            }
        }
        
        if (somador <= 2){
            printf("Numero %d eh primo\n", valor);
        }
        else{
            printf("Numero %d nao eh primo\n", valor);
        }

        somador = 0;

    }

}