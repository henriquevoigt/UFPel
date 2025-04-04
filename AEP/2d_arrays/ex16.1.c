/* Ler uma matriz M 5 x 5, calcular e escrever as seguintes somas:
a) da linha 3 de M
b) da coluna 2 de M
c) da diagonal principal
d) da diagonal secundária
e) de todos os elementos da matriz 
Obs: Na figura abaixo o X indica os elementos que devem ser somados
Linha 3   Coluna 2   Diagonal Principal  Diagonal Secundária  Todos os elementos
=======   ========   ==================  ===================  ==================
.....      ..X..           X....              ....X               XXXXX
.....      ..X..           .X...              ...X.               XXXXX
.....      ..X..           ..X..              ..X..               XXXXX
XXXXX      ..X..           ...X.              .X...               XXXXX
.....      ..X..           ....X              X....               XXXXX */

#include <stdio.h>

int main(){

    int matriz_M[5][5], contador = 10, somador = 0;

    for (int linha = 0, somador = 0; linha < 5; linha++){
        for (int coluna = 0; coluna < 5; coluna++){
            matriz_M[linha][coluna] = contador;
            contador += 2;
        }
    }
    
    for (int coluna = 0; coluna < 5; coluna++){ // A
        somador += matriz_M[3][coluna];
    }
    printf("Somas da linha 3: %d \n", somador);
    somador = 0;

    for (int linha = 0; linha < 5; linha++){    // B
        somador += matriz_M[linha][2];
    }
    printf("Somas da coluna 2: %d \n", somador);
    somador = 0;

    for (int lc = 0; lc < 5; lc++){    // C
        somador += matriz_M[lc][lc];
    }
    printf("Somas da diag. principal: %d \n", somador);
    somador = 0;

    for (int lc = 4; lc >= 0; lc--){    // D
        somador += matriz_M[lc][lc];
    }
    printf("Somas da diag. secundaria: %d \n", somador);
    somador = 0;

    for (int linha = 0; linha < 5; linha++){    // E
        for (int coluna = 0; coluna < 5; coluna++){
            somador += matriz_M[linha][coluna];
        }
    }    
    printf("Somas de todos elementos: %d \n", somador);
    
    return 0;
    
}

    


