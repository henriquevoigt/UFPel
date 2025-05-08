/* Considere a seguinte série 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, . . . e um inteiro positivo n. Deseja-se: i) imprimir os n primeiros termos da série; e, ii) calcular e
imprimir a soma dos n primeiros termos. Desenvolva dois programas utilizando for e do while que resolvam este problema. */

#include <stdio.h>

int lp_for(){

    int controle, fibo_n1 = 1, fibo_n2 = 1, fibo_n3 = 1, somador = 1;

    printf("Quantos termos deseja imprimir da serie de fibonacci?\n");
    scanf("%d", &controle);

    for (int i = 0; i < controle; i++){
        printf("%d ", fibo_n3);
        fibo_n3 = (fibo_n1 + fibo_n2);
        fibo_n1 = fibo_n2;
        fibo_n2 = fibo_n3;
        somador += fibo_n3;
    }

    printf("\tTotal da soma dos %d primeiros termos: %d\n", controle, somador);
    
    return 0;

}

int lp_dowhile(){

    int lp_ctrl = 0, controle, fibo_n1 = 1, fibo_n2 = 1, fibo_n3 = 1, somador = 1;

    printf("Quantos termos deseja imprimir da serie de fibonacci?\n");
    scanf("%d", &controle);

    do{
        printf("%d ", fibo_n3);
        fibo_n3 = (fibo_n1 + fibo_n2);
        fibo_n1 = fibo_n2;
        fibo_n2 = fibo_n3;
        somador += fibo_n3;
        lp_ctrl++;
    }
    while(lp_ctrl < controle);

    printf("\tTotal da soma dos %d primeiros termos: %d\n", controle, somador);

    return 0;

}

int main(){

    int controle;

    printf("Deseja fazer utilizando FOR ou DO WHILE?\nFOR digite 1\nDO WHILE digite 2\n");
    scanf("%d", &controle);
    switch (controle){

        case 1:

        lp_for();
        break;

        case 2:

        lp_dowhile();
        break;
    }

    return 0;

}

