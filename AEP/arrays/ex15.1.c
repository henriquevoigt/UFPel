// Ler 2 vetores, R de 5 elementos e S de 10 elementos. Gere um vetor X que possua os elementos comuns a R e a S. Considere que no mesmo vetor não haverá números repetidos. Escrever o vetor X.

#include <stdio.h>

int main(){

    int vetor_R[5], vetor_S[10], vetor_X[10];

    for (int lp_ctrl = 0; lp_ctrl < 5; lp_ctrl++){
        printf("Informe um valor pra posicao %d do vetor R\n", (lp_ctrl + 1));
        scanf("%d", &vetor_R[lp_ctrl]);
    }
    for (int lp_ctrl = 0, lp_ctrl2 = 0; lp_ctrl < 10; lp_ctrl++){
        vetor_X[lp_ctrl] = 0;
        printf("Informe um valor pra posicao %d do vetor S\n", (lp_ctrl + 1));
        scanf("%d", &vetor_S[lp_ctrl]);
        if (vetor_R[lp_ctrl] == vetor_S[lp_ctrl]){
            vetor_X[lp_ctrl] = vetor_R[lp_ctrl];
            lp_ctrl2++;
        }    
    }
    for (int lp_ctrl = 0; lp_ctrl < 10; lp_ctrl++){
        if (vetor_X[lp_ctrl] != 0){
            printf("%d ", vetor_X[lp_ctrl]);
        }
    }
    
    return 0;
   
}
