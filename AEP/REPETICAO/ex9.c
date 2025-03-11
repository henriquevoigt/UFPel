// Faça um algoritmo que calcule a seguinte série: S = 1/1 + 1/2 + 1/3 + 1/4 + 1/5 + 1/6 ... + 1/100

#include <stdio.h>

int main(){

    float resultado=1/1, loop_control=1;
    
    while (loop_control <= 100){
        resultado = resultado + (1 / loop_control);
        printf("%.2f\n", resultado);
        loop_control++;
    }

}