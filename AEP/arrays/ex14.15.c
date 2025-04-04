// Ler um vetor U de 10 elementos. Troque a seguir o 1o. elemento com o último, o 2o. com o penúltimo, etc. até o 5o. com o 6o. e escreva o vetor U assim modificado.

#include <stdio.h>

int main(){

    int vetor_U[10], controle; 

    for (int lp_ctrl = 0; lp_ctrl < 10; lp_ctrl++){
        printf("Informe um valor pra posicao %d do vetor U\n", (lp_ctrl + 1));
        scanf("%d", &vetor_U[lp_ctrl]);
    } 
    for (int lp_ctrl = 0, lp_ctrl2 = 9; lp_ctrl < 5; lp_ctrl++, lp_ctrl2--){
        controle = vetor_U[lp_ctrl];
        vetor_U[lp_ctrl] = vetor_U[lp_ctrl2];
        vetor_U[lp_ctrl2] = controle;
    }
    for (int lp_ctrl = 0; lp_ctrl < 10; lp_ctrl++){
        printf("%d ", vetor_U[lp_ctrl]);
    }
   
    return 0;

}
