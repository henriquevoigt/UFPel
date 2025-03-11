/* Escreva um algoritmo que leia 50 valores que representem preços de produtos. Escreva o valor do
produto mais caro e dê um desconto de 12% para o produto mais barato. */

#include <stdio.h>

int main(){

    int lp_ctrl;
    float pdt_informado, pdt_caro=1, pdt_barato=1000;

    for (lp_ctrl = 0; lp_ctrl < 5; lp_ctrl++){
        printf("Informe o valor do produto\n");
        scanf("%f", &pdt_informado);
        if (pdt_informado > pdt_caro){
            pdt_caro = pdt_informado;
        } if (pdt_informado < pdt_barato){
            pdt_barato = pdt_informado;
        }   
    } pdt_barato = pdt_barato * 0.88; 
    printf("%.2f eh o valor do produto mais caro\n", pdt_caro);
    printf("%.2f eh o valor do produto mais barato, com desconto\n", pdt_barato);


}

