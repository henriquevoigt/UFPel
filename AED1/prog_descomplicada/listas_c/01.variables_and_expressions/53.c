#include <stdio.h>

int main () {

    float comprimento, largura, preco;

    printf("\nInforme o comprimento do terreno:\n");
    scanf("%f", &comprimento);
    printf("\nInforme a largura do terreno\n");
    scanf("%f", &largura);
    printf("\nInforme o preco da cerca\n");
    scanf("%f", &preco);

    printf("\nO custo pra cercar o terreno eh de R$%.2f\n", ((comprimento * 2 + largura * 2) * preco));

    return 0;

}