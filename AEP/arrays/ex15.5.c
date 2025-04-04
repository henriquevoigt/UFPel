/* Ler 2 vetores X e Y de 10 elementos cada um (ocupando as posições de 0 a 9 em cada vetor). Intercalar os elementos desses 2 vetores formando assim, um novo vetor R de 20 elementos,
onde nas posições pares de R (0,2,4,...,8) estejam os elementos de X e nas posições ímpares (1,3,...,9) os elementos de Y. Após a geração completa do vetor R, escreva-o. */

#include <stdio.h>

int main(){

    int vetor_X[10], vetor_Y[10], vetor_R[20];

    for (int lp_ctrl = 0; lp_ctrl < 10; lp_ctrl++){
        printf("Informe um valor para posicao %d do vetor X\n", (lp_ctrl + 1));
        scanf("%d", &vetor_X[lp_ctrl]);
    }
    for (int lp_ctrl = 0; lp_ctrl < 10; lp_ctrl++){
        printf("Informe um valor para posicao %d do vetor Y\n", (lp_ctrl + 1));
        scanf("%d", &vetor_Y[lp_ctrl]);
    }
    for (int lp_ctrl_R = 0, lp_ctrl_X = 0, lp_ctrl_Y = 0; lp_ctrl_R < 20; lp_ctrl_R++){
        if (lp_ctrl_R % 2 == 0){
            vetor_R[lp_ctrl_R] = vetor_X[lp_ctrl_X];
            lp_ctrl_X++;
        }
        else{
            vetor_R[lp_ctrl_R] = vetor_Y[lp_ctrl_Y];
            lp_ctrl_Y++;
        }
        printf("%d ", vetor_R[lp_ctrl_R]);
    }
    
    return 0;
}