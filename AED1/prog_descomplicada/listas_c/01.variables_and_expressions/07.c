#include <stdio.h>

int main () {

    float temperatura;
    scanf("%f", &temperatura);
    printf("Temperatura em C: \n%.1f\n", (5 * (temperatura - 32)/9));

    return 0;

}