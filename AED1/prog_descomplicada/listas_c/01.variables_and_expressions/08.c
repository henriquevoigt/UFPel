#include <stdio.h>

int main () {

    float temperatura;
    scanf("%f", &temperatura);
    printf("Temperatura em C: \n%.1f\n", (temperatura - 273.15));

    return 0;

}