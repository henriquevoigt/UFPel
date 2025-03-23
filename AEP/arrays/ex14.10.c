// Ler um vetor C para armazenar 10 códigos e uma variável A que contenha um código. Escrever a mensagem ACHEI se o código armazenado em A estiver no vetor C, e NÃO ACHEI caso contrário.

#include <stdio.h>

int main(){

    int vetor_C[10], controle, ocorrencia = 0;

    printf("Qual valor voce quer encontrar?\n");
    scanf("%d", &controle);
    for (int lp_ctrl = 0; lp_ctrl < 10; lp_ctrl++){
        printf("Informe um codigo pra posicao %d do vetor\n", lp_ctrl + 1);
        scanf("%d", &vetor_C[lp_ctrl]);
        if (vetor_C[lp_ctrl] == controle){
            ocorrencia++;
        }
    }if (ocorrencia > 0){
        printf("ACHEI");
    } else{
        printf("NAO ACHEI");
    }

    return 0;

}