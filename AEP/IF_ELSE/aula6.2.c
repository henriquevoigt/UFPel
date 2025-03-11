#include <stdio.h>

// Escreva um algoritmo para ler as 4 notas obtidas por um aluno em 4 avaliações. 
// Calcular a média usando a seguinte fórmula: Media = (N1 + N2 * 2 + N3 * 3 + N4)/7

int main () {

    float aluno_Nota1, aluno_Nota2, aluno_Nota3, aluno_Nota4, media;

    printf("Insira a nota da primeira avaliacao\n");
    scanf("%f", &aluno_Nota1);
    printf("Insira a nota da segunda avaliacao\n");
    scanf("%f", &aluno_Nota2);
    printf("Insira a nota da terceira avaliacao\n");
    scanf("%f", &aluno_Nota3);
    printf("Insira a nota da quarta avaliacao\n");
    scanf("%f", &aluno_Nota4);

    media = ((aluno_Nota1 + aluno_Nota2 * 2 + aluno_Nota3 * 3 + aluno_Nota4)/7);

    if (media < 6) {
        printf("Sua media ficou em %.2f e seu conceito eh D", media);
    } else if (media >= 6 && media < 7.5) {
        printf("Sua media ficou em %.2f e seu conceito eh C", media);
    } else if (media >= 7.5 && media < 9) {
        printf("Sua media ficou em %.2f e seu conceito eh B", media); 
    } else if (media >= 9) {
        printf("Sua media ficou em %.2f e seu conceito eh A", media);
    }

    return 0;

}