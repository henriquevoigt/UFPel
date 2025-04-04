// Ler um vetor X de 10 elementos. A seguir copie todos os valores negativos de vetor X para o vetor R (sem deixar elementos vazios entre os valores copiados). Escrever o vetor R.

#include <stdio.h>

int main(){

    int vetor_X[10], vetor_R[10], controle=0;

    for (int lp_ctrl = 0; lp_ctrl < 10; lp_ctrl++){
        vetor_R[lp_ctrl] = 0;
        printf("Informe um valor pra posicao %d do vetor\n", (lp_ctrl + 1));
        scanf("%d", &vetor_X[lp_ctrl]);
        if (vetor_X[lp_ctrl] < 0){
            vetor_R[controle] = vetor_X[lp_ctrl];
            controle++;
        }
    } for (int lp_ctrl = 0; lp_ctrl < 10; lp_ctrl++){
        if (vetor_R[lp_ctrl] != 0){
            printf("%d ", vetor_R[lp_ctrl]);
        }
    }

    return 0;
   
}
