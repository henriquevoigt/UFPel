#include <stdio.h>

typedef struct {
    int dia;
    int mes;
    int ano;
} Data;

void ImprimeData (Data data);

int main () {

    Data data;

    printf("Informe o dia: ");
    scanf("%d", &data.dia);
    printf("Informe o mes: ");
    scanf("%d", &data.mes);
    printf("Informe o ano: ");
    scanf("%d", &data.ano);

    ImprimeData (data);

    return 0;

}

void ImprimeData ( Data data ) {

    switch ( data.mes ) {
        case 1: printf("\n%d de janeiro de %d", data.dia, data.ano);
        break;
        case 2: printf("\n%d de fevereiro de %d", data.dia, data.ano);
        break;
        case 3: printf("\n%d de marco de %d", data.dia, data.ano);
        break;
        case 4: printf("\n%d de abril de %d", data.dia, data.ano);
        break;
        case 5: printf("\n%d de maio de %d", data.dia, data.ano);
        break;
        case 6: printf("\n%d de junho de %d", data.dia, data.ano);
        break;
        case 7: printf("\n%d de julho de %d", data.dia, data.ano);
        break;
        case 8: printf("\n%d de agosto de %d", data.dia, data.ano);
        break;
        case 9: printf("\n%d de setembro de %d", data.dia, data.ano);
        break;
        case 10: printf("\n%d de outubro de %d", data.dia, data.ano);
        break;
        case 11: printf("\n%d de novembro de %d", data.dia, data.ano);
        break;
        case 12: printf("\n%d de dezembro de %d", data.dia, data.ano);
        break;

        default: printf("Mes invalido: %d", data.mes);
        return;

    }
}