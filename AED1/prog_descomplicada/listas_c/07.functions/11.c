#include <stdio.h>
#include <stdlib.h>

float CalculaNota ( float nota_a, float nota_b, float nota_c, char op );

int main () {

    float nota_a, nota_b, nota_c, resultado;
    char op;

    printf("Informe a nota_a: ");
    scanf("%f", &nota_a);
    printf("Informe a nota_b: ");
    scanf("%f", &nota_b);
    printf("Informe a nota_c: ");
    scanf("%f", &nota_c);
    getchar();
    printf("Informe a operacao: ");
    scanf("%c", &op);

    resultado = CalculaNota ( nota_a, nota_b, nota_c, op );

    printf("Operacao: %c | Nota: %.2f", op, resultado);

    return 0;

}

float CalculaNota ( float nota_a, float nota_b, float nota_c, char op ) {

    float resultado;

    switch ( op ) {

        case 'a': resultado = ( (nota_a + nota_b + nota_c) / 3.0 );
            break;

        case 'p': resultado = ( (nota_a * 5) + (nota_b * 3) + (nota_c * 2) / 10.0 );
            break;

        default: printf("Operacao invalida");
            exit(0);
    }

    return resultado;

}