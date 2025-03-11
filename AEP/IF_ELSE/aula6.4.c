#include <stdio.h>

// Escreva um algoritmo que leia as medidas dos lados de um triângulo e escreva se ele é EQUILÁTERO, ISÓSCELES ou ESCALENO.

int main () {

    int lado_1, lado_2, lado_3;
    
    printf("Qual o valor do lado 1 do triangulo?\n");
    scanf("%d", &lado_1);
    printf("Qual o valor do lado 2 do triangulo?\n");
    scanf("%d", &lado_2);
    printf("Qual o valor do lado 3 do triangulo?\n");
    scanf("%d", &lado_3);

    if (lado_1 == lado_2 && lado_2 == lado_3) {
        printf("Seu triangulo eh um equilatero");
    } else if (lado_1 == lado_2 || lado_2 == lado_3 || lado_1 == lado_3) {
        printf("Seu triangulo eh um isosceles");
    } else if (lado_1 != lado_2 && lado_2 != lado_3 && lado_1 != lado_3) {
        printf("Seu triangulo eh um escaleno");
    }

    return 0;
}