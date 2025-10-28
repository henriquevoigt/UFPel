#include <stdio.h>
#include <stdlib.h>

void CalculaValor ( float x, float y, char op );

int main () {

    float x, y;
    char op;

    printf("Informe o primeiro valor: ");
    scanf("%f", &x);
    printf("Informe o segundo valor: ");
    scanf("%f", &y);
    getchar();
    printf("Informe a operacao (+,-,*,/):  ");
    scanf("%c", &op);

    CalculaValor ( x, y, op );

    return 0;

}

void CalculaValor ( float x, float y, char op ) {

    float resultado = 0;

    switch ( op ) {

        case '+': resultado = ( x + y ); 
            break;
        
        case '-': resultado = ( x - y );
            break;
        
        case '*': resultado = ( x * y );
            break;

        case '/': resultado = ( x / y );
            break;

        default:
            printf("Operacao invalida!\n");
            exit(0);
    }

    printf("Resultado: %.2f\n", resultado);

    return;

}