#include <stdio.h>

// Faça um algoritmo que leia 3 números e diga se podem ser lados de um triângulo. 

int main (){

int a,b,c;




printf("Diga o valor A\n");
scanf("%d", &a);
printf("Diga o valor B\n");
scanf("%d", &b);
printf("Diga o valor C\n");
scanf("%d", &c);

if (a < (b + c) && b < (c + a) && c < (a + b))
    printf("Esses valores podem ser lados de um triangulo");
else 
    printf("Esses valores nao podem ser lados de um triangulo");

}