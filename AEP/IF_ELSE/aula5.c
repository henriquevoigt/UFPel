#include <stdio.h>
#include <string.h>

// Escrever um algoritmo que leia as notas da 1º e 2º avaliações, calcule a média e escreva se foi APROV, REPROV ou EXAME. Pra ter direito ao exame, media meinima de 3 pontos.

// Dados necessários: Nota 1, Nota 2, gerar Média 1 com as notas.

int main () {

    float prova1, prova2, media;
    int codigo;

    printf("Insira o codigo do aluno\n");
    scanf("%d", &codigo);
    printf("Insira a nota da primeira prova\n");
    scanf("%f", &prova1);
    printf("Insira a nota da segunda prova\n");
    scanf("%f", &prova2);

    media = (prova1 + prova2)/2;

    if (media > 6)
        printf("Aluno %d, sua media ficou em %.2f, e voce esta APROVADO", codigo, media);
        else if  (media < 6 && media > 3)
        printf("Aluno %d, sua media ficou em %.2f, e voce esta em EXAME", codigo, media);
        else if (media < 3)
        printf("Aluno %d, sua media ficou em %.2f, e voce esta REPROVADO", codigo, media);

    return 0;
           
}