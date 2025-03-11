#include <stdio.h>

// Faça um algoritmo que leia um número e mostre se ele é positivo, negativo ou zero.

int main (){

// variaveis

int a;

printf("Digite um numero\n");
scanf("%d", &a);

if (a > 0)
    printf("Este numero eh positivo");
else if (a < 0)
    printf("Este numero eh negativo");
else 
    printf("Este numero eh zero");

 return 0;
}