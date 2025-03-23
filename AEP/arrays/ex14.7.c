// Ler um vetor Z de 10 elementos. Crie um vetor W, com todos os elementos de Z (na ordem inversa). Escrever o vetor W.

#include <stdio.h>

int main(){

    int vetor_Z[10], vetor_W[10], inversor = 9;

    for (int lp_ctrl = 0; lp_ctrl < 10; lp_ctrl++){
        printf("Informe um valor para posicao %d do vetor\n", (lp_ctrl + 1));
        scanf("%d", &vetor_Z[lp_ctrl]);
    }for (int lp_ctrl = 0; lp_ctrl < 10; lp_ctrl++){
        vetor_W[inversor] = vetor_Z[lp_ctrl];
        inversor--;
    }for (int lp_ctrl = 0; lp_ctrl < 10; lp_ctrl++){
        printf("%d ", vetor_W[lp_ctrl]);
    }

    return 0;

}  