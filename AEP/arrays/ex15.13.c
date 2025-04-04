/* Um armazém trabalha com 10 mercadorias diferentes identificadas pelos números inteiros de 0 a 9. O dono do armazém anota a quantidade de cada mercadoria vendida durante o mês. 
Ele tem uma tabela que indica para cada mercadoria o preço de venda. Escreva um algoritmo que leia a quantidade vendida de cada produto no final do mês (armazenando-os em um vetor Q) e o  preço
de venda de cada um (armazenado-os em um vetor P). Logo após calcular e escrever o faturamento mensal do armazém. */

#include <stdio.h>

int main(){

    int vetor_Q[10];
    float vetor_P[10], faturamento = 0;

    for (int lp_ctrl = 0; lp_ctrl < 10; lp_ctrl++){
        printf("Informe a quantidade vendida do produto %d\n", lp_ctrl);
        scanf("%d", &vetor_Q[lp_ctrl]);
    }

    for (int lp_ctrl = 0; lp_ctrl < 10; lp_ctrl++){
        printf("Informe o valor do produto %d\n", lp_ctrl);
        scanf("%f", &vetor_P[lp_ctrl]);
    }

    for (int lp_ctrl = 0; lp_ctrl < 10; lp_ctrl++){
        faturamento += (vetor_Q[lp_ctrl] * vetor_P[lp_ctrl]);
    }

    printf("Faturamento total do mes: %.2f", faturamento);

}