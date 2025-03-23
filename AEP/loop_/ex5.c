/* A série de Fibonacci é uma sequência de números em que os dois primeiros são 0 e 1 e a partir daí cada número é a soma dos anteriores, ou seja
Tn = Tn-1 + Tn-2
Faça um algoritmo que escreve os x primeiros termos da série e a soma destes termos. */

#include <stdio.h>

int main (){

    int controle=0, sequencia_P1, sequencia_P2=1, sequencia_P3=0;

        while (controle <= 10){
            (sequencia_P1 = sequencia_P2 + sequencia_P3);
            printf("%d\n", sequencia_P1);
            (sequencia_P3 = sequencia_P2), (sequencia_P2 = sequencia_P1);
            controle++;
        }

    return 0;

}