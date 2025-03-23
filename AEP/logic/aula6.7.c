#include <stdio.h>

// Um mercado está vendendo frutas com a seguinte tabela de preços:
// Até 5KG:       Morango R$ 5,00 p/Kg | Maçã: R$ 3,00 p/Kg
// Acima de 5KG:  Morango R$ 4,00 p/Kg | Maçã: R$ 2,00 p/Kg
// Se compras acima de 8Kg ou valor total > R$ 35,00, desconto de 20% sobre o total.


int main () {

    float qtd_morango, custo_morango, qtd_maca, custo_maca, valor_total, desconto;

    printf("Insira a quantidade, em KG, comprada de Morangos\n");
    scanf("%f", &qtd_morango);
    printf("Insira a quantidade, em KG, comprado de Macas\n");
    scanf("%f", &qtd_maca);

    if (qtd_morango <= 5) {
        custo_morango = 5;
    } else {
        custo_morango = 4;
    } if (qtd_maca <= 5) {
        custo_maca = 3; 
    } else {
        custo_maca = 2;
    } valor_total = (qtd_morango * custo_morango) + (qtd_maca * custo_maca);

    if (valor_total >= 35 || qtd_morango + qtd_maca > 8) {
        desconto = (valor_total * 20) / 100;
        valor_total = valor_total - desconto;
        printf("Total de R$ %.2f", valor_total);
    } else {
        printf("Total de R$ %.2f", valor_total);
    }
    return 0;

}