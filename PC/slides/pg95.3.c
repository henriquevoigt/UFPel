/* Fazer um programa que lê as 3 notas de n alunos (n é fornecido pelo usuário, no início do programa) de uma turma de Programação (V1, V2 e MT, onde MT é a média dos
trabalhos). O programa calcula e imprime a média de cada aluno, usando a fórmula M=(3*v1+3*v2+4*MT)/10. Após, o programa calcula e imprime a média da turma em V1,
em V2 e em MT. Finalmente, o programa conta quantos alunos obtiveram nota maior que a média calculada para V1, imprimindo esta informação. */

int main(){

    int n_alunos;

    printf("Informe quantos alunos serao lidos\n");
    scanf("%d", n_alunos);
    float nota_alunos[n_alunos][3], media_alunos[n_alunos], media_turma_p1 = 0, media_turma_p2 = 0, media_turma_trab = 0;

    for (int aluno = 0; aluno < n_alunos; aluno++){
        printf("Informe a nota da primeira prova\n");
        scanf("%f", &nota_alunos[aluno][0]);
        media_turma_p1 += nota_alunos[aluno][0];
        media_alunos[aluno] += nota_alunos[aluno][0];
        printf("Informe a nota da segunda prova\n");
        scanf("%f", &nota_alunos[aluno][1]);
        media_turma_p2 += nota_alunos[aluno][1];
        media_alunos[aluno] += nota_alunos[aluno][1];
        printf("Informe a media dos trabalhos\n");
        scanf("%f", &nota_alunos[aluno][2]);
        media_turma_trab += nota_alunos[aluno][2];
        media_alunos[aluno] += nota_alunos[aluno][2];
    }

    for (int i = 0; i < n_alunos; i++){
        media_alunos[i] = 0;
        for (int j = 0; j < 3; j++){
            if ()
            media_alunos[i] += nota_alunos[i][j];
        }
        media_alunos[i] = 
    }


    
}