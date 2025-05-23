/* Faça um programa que recebe um número inteiro e imprime o somatório de seus divisores. */

#include <stdio.h>

int main(){

    int valor, somador = 0;

    printf("Informe um numero inteiro\n");
    scanf("%d", &valor);

    for (int i = valor; i > 0; i--){
        if (valor % i == 0){
            somador += i;
        }
    }

    printf("Somatorio de seus divisores: %d", somador);
    
}