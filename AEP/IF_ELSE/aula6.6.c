#include <stdio.h>

// Escreva um algoritmo que leia o valor de 3 ângulos de um triângulo e escreva se o triângulo é acutângulo, retângulo ou obtusângulo.

int main () {

    int angulo_1, angulo_2, angulo_3;

    printf("Digite o valor do primeiro angulo\n");
    scanf("%d", &angulo_1);
    printf("Digite o valor do segundo angulo\n");
    scanf("%d", &angulo_2);
    printf("Digite o valor do terceiro angulo\n");
    scanf("%d", &angulo_3);

    if (angulo_1 == 90 || angulo_2 == 90 || angulo_3 == 90 ) {
        printf("Seu triangulo eh retangulo");
    } else if (angulo_1 > 90 || angulo_2 > 90 || angulo_3 > 90 ) {
        printf("Seu triangulo eh obtusangulo");
    } else if (angulo_1 < 90 && angulo_2 < 90 && angulo_3 < 90) {
        printf("Seu triangulo eh acutangulo");
    }
    
    return 0;

}