/* Ler 2 matrizes, A 4 x 6 e B 4 x 6 e criar :
a) uma matriz S que seja a soma de A e B.
b) uma matriz D que seja a diferença de A e B. (A – B).
Escrever as matrizes S e D após todo cálculo estar concluído. */

#include <stdio.h>

int main(){

    int matriz_A[4][6], matriz_B[4][6], matriz_S[4][6], matriz_D[4][6], contador = 10, somador = 0;

    for (int linha = 0; linha < 4; linha++){
        for (int coluna = 0; coluna < 6; coluna++){
            matriz_A[linha][coluna] = contador;
            contador += 2;
        }
    }
    contador = 10;
    for (int linha = 0; linha < 4; linha++){
        for (int coluna = 0; coluna < 6; coluna++){
            matriz_B[linha][coluna] = contador;
            contador += 2;
        }
    }
// -----------------------------------------------------------------
    printf("Matrizes A \n");
    for (int linha = 0; linha < 4; linha++){
        for (int coluna = 0; coluna < 6; coluna++){
            printf("%d ", matriz_A[linha][coluna]);
        }printf("\n");
    }printf("Matrizes B \n");
        for (int linha = 0; linha < 4; linha++){
            for (int coluna = 0; coluna < 6; coluna++){
                printf("%d ", matriz_B[linha][coluna]);
            }printf("\n");   
// ------------------------------------------------------------------                 
        }
    for (int linha = 0; linha < 4; linha++){
        for (int coluna = 0; coluna < 6; coluna++){
            matriz_S[linha][coluna] = matriz_A[linha][coluna] + matriz_B[linha][coluna];
        }
    }
    
    for (int linha = 0; linha < 4; linha++){
        for (int coluna = 0; coluna < 6; coluna++){
            matriz_D[linha][coluna] = matriz_A[linha][coluna] - matriz_B[linha][coluna];
        }
    }
    printf("Matrizes A e B somadas:\n");
    for (int linha = 0; linha < 4; linha++){
        for (int coluna = 0; coluna < 6; coluna++){
            printf("%d ", matriz_S[linha][coluna]);
        }printf("\n");
    }
    printf("Matrizes A e B subtraidas\n");
    for (int linha = 0; linha < 4; linha++){
        for (int coluna = 0; coluna < 6; coluna++){
            printf("%d ", matriz_D[linha][coluna]);
        }printf("\n");
    }
}
