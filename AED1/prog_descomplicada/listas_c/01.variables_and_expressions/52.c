#include <stdio.h>

int main () {

    float amigo_a, amigo_b, amigo_c, premio, temp;

    scanf("%f", &amigo_a);
    scanf("%f", &amigo_b);
    scanf("%f", &amigo_c);
    scanf("%f", &premio);

    temp = (amigo_a + amigo_b + amigo_c);

    printf("\nAmigo A ganhou: R$%.2f\n", (amigo_a / temp) * premio);
    printf("\nAmigo B ganhou: R$%.2f\n", (amigo_b / temp) * premio);
    printf("\nAmigo C ganhou: R$%.2f\n", (amigo_c / temp) * premio);

    return 0;

}