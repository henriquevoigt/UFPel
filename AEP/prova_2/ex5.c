/* Para a matriz M(5 X 5) declarada abaixo:
 {0, 1, 1, 0, 0}
 {0, 0, 0, 1, 0}
 {1, 1, 0, 1, 0}
 {0, 1, 0, 0, 0}
 {1, 1, 0, 0, 0}
Suponto que a matriz represente	um campo minado, onde “1“ represente uma mina e	“0“ represente campo limpo. Escreva um algoritmo que leia a matriz e um conjunto de dez pares de valores
(l , c) que representem os índices da matriz. Conte quantas minas foram descobretas e mostre este resultado. */

#include <stdio.h>

int main(){

    int matriz_campo[5][5] = {{0,1,1,0,0},{0,0,0,1,0},{1,1,0,1,0},{0,1,0,0,0},{1,1,0,0,0}}, minas = 0, linha, coluna;

    for (int i = 0; i < 10; i++){
        printf("Escolha uma linha\n");
        scanf("%d", &linha);
        printf("Escolha uma coluna\n");
        scanf("%d", &coluna);

        if (matriz_campo[linha][coluna] == 1){
            minas++;
        }    
    }

    printf("Minas descobertas: %d", minas);

}