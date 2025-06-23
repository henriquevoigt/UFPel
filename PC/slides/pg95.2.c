/* Faça um programa que lê n x m valores decimais, armazenando-os em uma matriz com n linhas e m colunas. Após, para cada linha da matriz, o algoritmo calcula a média e 
conta quantos elementos estão acima da média calculada, imprimindo estas informações. */

#include <stdio.h>

float leMatriz(){}

int main (){

    int linhas, colunas;

    printf("Qual o tamanho da matriz que deseja? Informe o numero de linhas\n");
    scanf("%d", linhas);
    printf("Informe o numero de colunas\n");
    scanf("%d", colunas);

    printf("%.2f", leMatriz(linhas, colunas));
    
}

float leMatriz(int linhas, int colunas){

    float matriz[linhas][colunas], media[linhas];

    for (int i = 0; i < linhas; i++){
        media[i] = 0;
    }

    for (int linha = 0; linha < linhas; linha++){
        for (int coluna = 0; coluna < colunas; coluna++){
            printf("Informe o valor da linha %d coluna %d\n");
            scanf("%f", &matriz[linha][coluna]);
        }
    }

    for (int coluna = 0; coluna < colunas; coluna++){
        for (int linha = 0; linha < linhas; linha++){
            
        }
    }

}