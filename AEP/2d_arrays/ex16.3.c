/* Ler uma matriz A de 4 x 4, calcular e escrever as somas dos elementos marcados com o X. Utilizar estruturas de repetição.
                                            XX..     ....      X...     .XXX
                                            XX..     ....      XX..     ..XX
                                            ....     ..XX      XXX.     ...X 
                                            ....     ..XX      XXXX     .... */

#include <stdio.h>

int main(){

    int matriz_A[4][4], contador = 10, resultado = 0;

    for (int linha = 0; linha < 4; linha++){
        for (int coluna = 0; coluna < 4; coluna++){
            matriz_A[linha][coluna] = contador;
            contador += 2;
        }
    }

    printf("Matriz A:\n");
    for (int linha = 0; linha < 4; linha++){
        for (int coluna = 0; coluna < 4; coluna++){
            printf("%d ", matriz_A[linha][coluna]);
        }printf("\n");
    }

    for (int linha = 0; linha < 2; linha++){
        for (int coluna = 0; coluna < 2; coluna++){
            resultado += matriz_A[linha][coluna];
        }
    }
    printf("Resultado 1:\n%d\n", resultado);
    resultado = 0;

    for (int linha = 2; linha < 4; linha++){
        for (int coluna = 2; coluna < 4; coluna++){
            resultado += matriz_A[linha][coluna];
        }
    }
    printf("Resultado 2:\n%d\n", resultado);
    resultado = 0;

    for (int linha = 0; linha < 4; linha++){
        for (int coluna = 0; coluna <= linha; coluna++){
            resultado += matriz_A[linha][coluna];
        }
    }
    printf("Resultado 3:\n%d\n", resultado);
    resultado = 0;

    for (int linha = 2; linha >= 0; linha--){
        for (int coluna = 3; coluna > linha; coluna--){
            resultado += matriz_A[linha][coluna];
        }
    }
    printf("Resultado 4:\n%d\n", resultado);


}