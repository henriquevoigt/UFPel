#include <stdio.h>

// Um posto está vendendo combustíveis com a seguinte tabela de descontos:
// Alcool: Até 20 Litros, desconto de 3% por litro | Acima de 20 Litros, desconto de 5% por litro;
// Gasolina: Até 15 litros, desconto de 3,5% por litro | Acima de 15 litros, desconto de 6% por litro;

// Escreva um algoritmo que leia o número de litros vendidos, o tipo de combustível (codificado da seguinte forma: 
// 1-álcool 2-Gasolina), o preço do combustível, calcule e imprima o valor a ser pago pelo cliente.


int main () {

    float qtd_litros, custo_litro, custo_final, desconto;
    int combustivel;

    printf("Informe o tipo de combustivel\n 1- Alcool\n 2- Gasolina\n");
    scanf("%d", &combustivel);
    printf("Informe a quantidade, em litros, a ser abastecido\n");
    scanf("%f", &qtd_litros);
    printf("Informe o custo por litro, do combustivel\n");
    scanf("%f", &custo_litro);
    
    if (combustivel == 1 && qtd_litros <= 20) {
        desconto = ((qtd_litros * custo_litro) * 3) / 100;  
        custo_final = qtd_litros * custo_litro - desconto;
        printf("Valor Total = %.2f", custo_final);
    } else if (combustivel == 1 && qtd_litros > 20) {
        desconto = ((qtd_litros * custo_litro) * 5) / 100;  
        custo_final = qtd_litros * custo_litro - desconto;
        printf("Valor Total = %.2f", custo_final);
    } else if (combustivel == 2 && qtd_litros <= 15) {
        desconto = ((qtd_litros * custo_litro) * 3.5) / 100;  
        custo_final = qtd_litros * custo_litro - desconto;
        printf("Valor Total = %.2f", custo_final);
    } else if (combustivel == 2 && qtd_litros > 15) {
        desconto = ((qtd_litros * custo_litro) * 6) / 100;  
        custo_final = qtd_litros * custo_litro - desconto;
        printf("Valor Total = %.2f", custo_final);
    } 

    return 0;
}