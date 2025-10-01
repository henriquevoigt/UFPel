#include <stdio.h>

int main () {

    float temperatura;
    scanf("%f", &temperatura);
    printf("Temperatura em F: \n%.1f\n", (temperatura * (9/5) + 32));

    return 0;

}