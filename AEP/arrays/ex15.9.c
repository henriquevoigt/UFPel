/*  Ler um vetor B de 9 elementos(reserve espaço para 10 elementos),um valor X e um valor P que representa um posição dentro do vetor (validar o valor P aceitando apenas valores válidos: 0 a 8).
Incluir o valor X na posição P do vetor B fazendo com que os elementos existentes dentro do vetor (da posição em diante) sejam deslocados de uma posição para o final (Considere que existe
espaço no vetor para o deslocamento). Logo após o processamento escrever o vetor B. */

#include <stdio.h>

int main(){

    int vetor_B[10], valor_X, valor_P;

    for (int lp_ctrl = 0; lp_ctrl < 9; lp_ctrl++){
        printf("Informe um valor para o indice %d do vetor\n", lp_ctrl);
        scanf("%d", &vetor_B[lp_ctrl]);
    }

    printf("Informe um valor para atribuir no vetor\n");
    scanf("%d", &valor_X);
    printf("Informe em qual indice esse valor deve ser atribuido\n");
    scanf("%d", &valor_P);
    while (valor_P < 0 || valor_P > 9){
        printf("Apenas entre 0 e 8");
        scanf("%d", &valor_P);
    }
    
    for (int lp_ctrl = 9, lp_ctrl2 = 8; lp_ctrl > (valor_P); lp_ctrl--, lp_ctrl2--){
        vetor_B[lp_ctrl] = vetor_B[lp_ctrl2];
    }

    vetor_B[valor_P] = valor_X;

    for (int lp_ctrl = 0; lp_ctrl < 10; lp_ctrl++){
        printf("%d ", vetor_B[lp_ctrl]);
    }

    return 0;
   
}