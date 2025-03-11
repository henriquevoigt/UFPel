#include <stdio.h>

// Escreva um algoritmo que leia a idade de 2 homens e 2 mulheres (considere que a idade dos homens será sempre diferente, assim como das mulheres).
// Calcule e escreva a soma das idades do homem mais velho com a mulher mais nova, e o produto das idades do homem mais novo com a mulher mais velha.

int main () {

    int idade_homem1, idade_homem2, idade_mulher1, idade_mulher2, idade_somatorio1, idade_somatorio2;

    printf("Qual a idade do primeiro homem?\n");
    scanf("%d", &idade_homem1);
    printf("Qual a idade do segundo homem?\n");
    scanf("%d", &idade_homem2);
    printf("Qual a idade da primeiro mulher?\n");
    scanf("%d", &idade_mulher1);
    printf("Qual a idade da segunda mulher?\n");
    scanf("%d", &idade_mulher2);

    if (idade_homem1 > idade_homem2 && idade_mulher1 > idade_mulher2) {
        idade_somatorio1 = idade_homem1 + idade_mulher2;
        idade_somatorio2 = idade_homem2 * idade_mulher1;
        printf("A soma do homem mais velho com a mulher mais nova eh %d\n O produto do homem mais novo com a mulher mais velha eh %d", idade_somatorio1, idade_somatorio2);
    } else if (idade_homem1 < idade_homem2 && idade_mulher1 < idade_mulher2) {
        idade_somatorio1 = idade_homem2 + idade_mulher1;
        idade_somatorio2 = idade_homem1 * idade_mulher2;
        printf("A soma do homem mais velho com a mulher mais nova eh %d\n O produto do homem mais novo com a mulher mais velha eh %d", idade_somatorio1, idade_somatorio2);
    } else if (idade_homem1 > idade_homem2 && idade_mulher1 < idade_mulher2) {
        idade_somatorio1 = idade_homem1 + idade_mulher1;
        idade_somatorio2 = idade_homem2 * idade_mulher2;
        printf("A soma do homem mais velho com a mulher mais nova eh %d\n O produto do homem mais novo com a mulher mais velha eh %d", idade_somatorio1, idade_somatorio2);
    } else {
        idade_somatorio1 = idade_homem2 + idade_mulher2;
        idade_somatorio2 = idade_homem1 * idade_mulher1;
        printf("A soma do homem mais velho com a mulher mais nova eh %d\n O produto do homem mais novo com a mulher mais velha eh %d", idade_somatorio1, idade_somatorio2);
    }    
    return 0;
}