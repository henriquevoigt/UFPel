/* Ler um vetor B de 9 elementos e um valor X. Incluir o valor X na primeira posição do vetor B fazendo com que os elementos existentes dentro do vetor sejam deslocados de uma posição
para o final(Considere que existe espaço no vetor para o deslocamento). Logo após o processamento escrever o vetor B. */

#include <stdio.h>

int main(){

    int vetor_B[10], valor_X;

    for (int lp_ctrl = 0; lp_ctrl < 9; lp_ctrl++){
        printf("Informe um valor para a posicao %d do vetor\n", lp_ctrl);
        scanf("%d", &vetor_B[lp_ctrl]);
    }

    printf("Informe um valor para atribuir na primeira posicao do vetor\n");
    scanf("%d", &valor_X);

    for (int lp_ctrl = 10, lp_ctrl2 = 9; lp_ctrl > 0; lp_ctrl--, lp_ctrl2--){
        vetor_B[lp_ctrl] = vetor_B[lp_ctrl2];
    }

    vetor_B[0] = valor_X;

    for (int lp_ctrl = 0; lp_ctrl < 10; lp_ctrl++){
        printf("%d ", vetor_B[lp_ctrl]);
    }

    return 0;
   
}