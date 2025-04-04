// Ler um vetor R de 5 elementos contendo o gabarito da LOTO. A seguir ler um vetor A de 10 elementos contendo uma aposta. A seguir imprima quantos pontos fez o apostador.

#include <stdio.h>

int main(){

    int vetor_R[5], vetor_A[10], pontos = 0;

    for (int lp_ctrl = 0; lp_ctrl < 5; lp_ctrl++){
        printf("Informe o valor %d do gabarito da LOTO\n", (lp_ctrl + 1));
        scanf("%d", &vetor_R[lp_ctrl]);
    }
    for (int lp_ctrl = 0; lp_ctrl < 10; lp_ctrl++){
        printf("Informe o valor %d da aposta da LOTO\n", (lp_ctrl + 1));
        scanf("%d", &vetor_A[lp_ctrl]);
    }
    for (int lp_ctrl = 0; lp_ctrl < 5; lp_ctrl++){
        for (int lp_ctrl2 = 0; lp_ctrl2 < 10; lp_ctrl2++){
        if (vetor_A[lp_ctrl2] == vetor_R[lp_ctrl]){ 
            pontos++;
        }
        }
        
    } printf("Total de pontos feitos: %d", pontos);

    return 0;

}

