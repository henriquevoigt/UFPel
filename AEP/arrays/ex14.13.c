/* Ler 2 vetores: R de 5 elementos e S de 10 elementos. Gere um vetor X de 15 elementos cuja as 5primeiras posições contenha os elementos de R e as 10 últimas posições os elementos de S. 
Escrever o vetor X. */

#include <stdio.h>

int main(){

    int vetor_R[5], vetor_S[10], vetor_X[15];

    for (int lp_ctrl = 0; lp_ctrl < 5; lp_ctrl++){
        printf("Informe um valor para a posicao %d do vetor R\n", (lp_ctrl + 1));
        scanf("%d", &vetor_R[lp_ctrl]);
        vetor_X[lp_ctrl] = vetor_R[lp_ctrl];
    } for (int lp_ctrl = 0; lp_ctrl < 10; lp_ctrl++){
        printf("Informe um valor para a posicao %d do vetor S\n", (lp_ctrl + 1));
        scanf("%d", &vetor_S[lp_ctrl]);
        vetor_X[lp_ctrl + 5] = vetor_S[lp_ctrl];
    } for (int lp_ctrl = 0; lp_ctrl < 15; lp_ctrl++){
        printf("%d ", vetor_X[lp_ctrl]);
    }
   
    return 0;

}