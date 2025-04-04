/* Ler um vetor de até 10 elementos. A leitura deverá ser executada até que o vetor fique totalmente preenchido ou seja informado um valor negativo ou zero. Ler 2 valores que representam 2 
posições (índices) no vetor (aceitar apenas índices válidos) , escrever o número de valores maiores que 4 existentes entre (inclusive) as posições informadas (considere que a primeira pode ser
maior que a segunda e vice-versa). */

#include <stdio.h>

int main(){

    int vetor[10], indice_1, indice_2, contador = 0;

    for (int lp_ctrl = 0; lp_ctrl < 10; lp_ctrl++){
        printf("Informe o valor para o indice %d do vetor\n", lp_ctrl);
        scanf("%d", &vetor[lp_ctrl]);
        if (vetor[lp_ctrl] <= 0){
            printf("Leitura finalizada\n");
            break;
        }
    }
    if (vetor[0] <= 0){
        return 0;
    }

    printf("Informe um indice do vetor\n");
    scanf("%d", &indice_1);
    while (indice_1 < 0 || indice_1 > 9){
        printf("Informe um indice valido (0-9)\n");
        scanf("%d", &indice_1);
    }

    printf("Informe outro indice do vetor\n");
    scanf("%d", &indice_2);
    while (indice_2 < 0 || indice_2 > 9){
        printf("Informe um indice valido (0-9)\n");
        scanf("%d", &indice_2);
    }

    if (indice_1 < indice_2){
        for (int lp_ctrl = indice_1; lp_ctrl < indice_2; lp_ctrl++){
            if (vetor[lp_ctrl] > 4){
                contador++;
            }
        }
    }
    else{
        for (int lp_ctrl = indice_2; lp_ctrl > indice_2; lp_ctrl--){
            if (vetor[lp_ctrl] > 4){
                contador++;
            }
        }
    }
    printf("Existem %d numeros maiores que 4 entre os indices apontados", contador);
        
   
}