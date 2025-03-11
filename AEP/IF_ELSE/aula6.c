#include <stdio.h>

// Escreva um algoritmo para ler as coordenadas (X,Y) de um ponto no sistema cartesiano e escrever o quadrante ao qual o ponto pertence.
// Caso o ponto não pertença a nenhum quadrante,escrever se ele está sobre o eixo X, eixo Y ou na origem. Considere que o usuário poderá informar qualquer valor para as coordenadas.

int main () {

    int x, y;

    printf("Qual o valor de X?\n");
    scanf("%d", &x);
    printf("Qual o valor de Y?\n");
    scanf("%d", &y);

    if (x == 0 && y == 0) {
        printf("O ponto esta na ORIGEM");
    } else if (x > 0 && y > 0) {
        printf("Este ponto pertence ao PRIMEIRO quadrante");
    } else if (x < 0 && y > 0) {
        printf("Este ponto pertence ao SEGUNDO quadrante");
    } else if (x < 0 && y < 0) {
        printf("Este ponto pertence ao TERCEIRO quadrante");
    } else if (x > 0 && y < 0) {
        printf("Este ponto pertence ao QUARTO quadrante");
    } else if (x != 0 && y == 0) {
        printf("Este ponto esta sobre o EIXO X");
    } else if (x == 0 && y != 0) {
        printf("Este ponto esta sobre o EIXO Y");
    }

    return 0;

}