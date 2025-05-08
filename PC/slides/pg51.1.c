/* Escreva um programa que lê as coordenadas de n pontos no plano cartesiano (x, y) e identifica se estes pontos pertencem: i) ao 1o. quadrante; ii) ao 2o. quadrante; 
iii) ao 3o. quadrante; iv) ao quarto quadrante; ou estão sobre v) o eixo dos “x”; vi) o eixo dos “y”; ou vii) estão na origem.
Feito isso, o programa escreverá os totais de pontos em cada uma destas situações.*/

#include <stdio.h>

int main(){

    int valor_X, valor_Y, qtd_1 = 0, qtd_2 = 0, qtd_3 = 0, qtd_4 = 0, qtd_origem = 0, qtd_X = 0, qtd_Y = 0, controle;

    printf("Quantos pontos deseja fazer a leitura?\n");
    scanf("%d", &controle);

    for (int i = 0; i < controle; i++){
        printf("Informe o valor de X\n");
        scanf("%d", &valor_X);
        printf("Informe o valor de Y\n");
        scanf("%d", &valor_Y);

        if (valor_X > 0){
            if (valor_Y > 0){
                qtd_1++;
                printf("Coordenada: (%d,%d), Quadrante 1\n", valor_X, valor_Y);
            }
            else if (valor_Y == 0){
                qtd_X++;
                printf("Coordenada: (%d,%d), Sobre o eixo X\n", valor_X, valor_Y);
            }
            else{
                qtd_4++;
                printf("Coordenada: (%d,%d), Quadrante 4\n", valor_X, valor_Y);
            }
        }
        else if (valor_X < 0){
            if (valor_Y > 0){
                qtd_2++;
                printf("Coordenada: (%d,%d), Quadrante 2\n", valor_X, valor_Y);
            }
            else if (valor_Y == 0){
                qtd_X++;
                printf("Coordenada: (%d,%d), Sobre o eixo X\n", valor_X, valor_Y);
            }
            else{
                qtd_3++;
                printf("Coordenada: (%d,%d), Quadrante 3\n", valor_X, valor_Y);
            }
        }
        else{
            if (valor_Y > 0 || valor_Y < 0){
                qtd_Y++;
                printf("Coordenada: (%d,%d), Sobre o eixo Y\n", valor_X, valor_Y);
            }
            else{
                qtd_origem++;
                printf("Coordenada: (%d,%d), Na origem\n", valor_X, valor_Y);
            }

        }
    }

    printf("Foram lidos %d pontos na origem, %d no eixo X, %d no eixo Y\n %d no quadrante 1, %d no quadrante 2\n %d no quadrante 3 e %d no quadrante 4\n", qtd_origem, qtd_X, qtd_Y, qtd_1, qtd_2, qtd_3, qtd_4);

    return 0;
}

