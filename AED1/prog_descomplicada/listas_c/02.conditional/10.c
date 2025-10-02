#include <stdio.h>

int main () {

    int sexo;
    float altura;

    scanf("%d", &sexo);
    scanf("%f", &altura);

    if ( sexo == 1 ){
        printf("\nPeso ideal:%.fkg\n", (72.7 * altura) - 58);
    } else {
        printf("\nPeso ideal:%.fkg\n", (62.1 * altura) - 44.7);
    }

    return 0;
    
}