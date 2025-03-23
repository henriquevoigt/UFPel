// Faça um algoritmo que leio um valor N e calcule a seguinte série: (Valor positivo e inteiro)
// S = 1/1 + 1/2 + 1/3 + 1/4 + ... + 1/N

#include <stdio.h>

int main(){

    float resultado=1/1, loop_control=1, entrada_quantidade;
    
    printf("Informe quantas vezes voce deseja fazer a operacao\n");
    scanf("%f", &entrada_quantidade);

    while (loop_control <= entrada_quantidade){
        resultado = resultado + (1 / loop_control);
        printf("%.2f\n", resultado);
        loop_control++;
    }

}