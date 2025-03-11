// Faça um algoritmo que lê um valor X e calcula e mostra os 20 primeiros termos da série:
// S = 1 + 1/x² + 1/x³ ...

#include <stdio.h>

int main(){

    float resultado=1, loop_control=1, valor_entrada, valor_potencia=2;

    printf("Informe o valor desejado\n");
    scanf("%f", &valor_entrada);

    while (loop_control <= 20){
        resultado += (1 / (valor_entrada * valor_potencia));
        printf("%.3f\n", resultado);
        valor_potencia++;
        loop_control++;
    }
}