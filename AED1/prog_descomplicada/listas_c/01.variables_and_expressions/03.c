#include <stdio.h>

int main () {

    int numero_a, numero_b, numero_c;
    printf("Informe o primeiro valor:\n");
    scanf("%d", &numero_a);
    printf("Informe o segundo valor:\n");
    scanf("%d", &numero_b);
    printf("Informe o terceiro valor:\n");
    scanf("%d", &numero_c);
    printf("\n%d\n", (numero_a + numero_b + numero_c));

    return 0;

}