// Escreva um algoritmo para ler as coordenadas (X,Y) de um ponto no sistema cartesiano e escrever o quadrante ao qual o ponto pertence.
// Considere que o usuário não informará nenhuma coordenada igual a zero.

#include <stdio.h>

int main () {

    int x, y;

    printf("Qual o valor de X?\n");
    scanf("%d", &x);
    printf("Qual o valor de Y?\n");
    scanf("%d", &y);

    if (x > 0 && y > 0) {
        printf("Este ponto pertence ao PRIMEIRO quadrante");
    } else if (x < 0 && y > 0) {
        printf("Este ponto pertence ao SEGUNDO quadrante");
    } else if (x < 0 && y < 0) {
        printf("Este ponto pertence ao TERCEIRO quadrante");
    } else if (x > 0 && y < 0) {
        printf("Este ponto pertence ao QUARTO quadrante");
    }
    return 0;
    
}