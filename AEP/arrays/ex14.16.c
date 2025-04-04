// Ler um vetor M de 10 elementos. Troque a seguir o 1o. elemento com o 6o., o 2o. com o 7o.,etc. até o 5o. com 10o. e escreva o vetor M assim modificado.

#include <stdio.h>

int main(){

    int vetor_M[10], controle;

    for (int lp_ctrl = 0; lp_ctrl < 10; lp_ctrl++){
        printf("Informe um valor pra posicao %d do vetor M\n", (lp_ctrl + 1));
        scanf("%d", &vetor_M[lp_ctrl]);
    }
    for (int lp_ctrl = 0, lp_ctrl2 = 5; lp_ctrl < 5; lp_ctrl ++, lp_ctrl2++){
        controle = vetor_M[lp_ctrl];
        vetor_M[lp_ctrl] = vetor_M[lp_ctrl2];
        vetor_M[lp_ctrl2] = controle;
    }
    for (int lp_ctrl = 0; lp_ctrl < 10; lp_ctrl++){
        printf("%d ", vetor_M[lp_ctrl]);
    }
   
    return 0;
   
}