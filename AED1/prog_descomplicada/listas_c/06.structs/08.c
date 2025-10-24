#include <stdio.h>

typedef struct {
    int dia;
    int mes;
    int ano;
} Data;


typedef struct {
    char nome[100];
    int idade;
    char sexo;
    char cpf[12];
    Data aniversario;
    int setor;
    char cargo[30];
    int salario;
} Cadastro;

int main () {

    Cadastro cadastro;
    Data data;

    printf("Informe o nome do funcionario: "); scanf("%[^\n]", &cadastro.nome); getchar();
    printf("Informe a idade: "); scanf("%d", &cadastro.idade); getchar();
    printf("Informe o sexo (M/F): "); scanf("%c", &cadastro.sexo); getchar();
    printf("Informe o CPF: "); scanf("%11s", &cadastro.cpf); getchar();
    printf("Informe a data de aniversario:\n Dia: "); scanf("%d", &cadastro.aniversario.dia);
    printf("Mes: "); scanf("%d", &cadastro.aniversario.mes);
    printf("Ano: "); scanf("%d", &cadastro.aniversario.ano);
    printf("Informe o codigo do setor: ");  scanf("%d", &cadastro.setor); getchar();
    while ( cadastro.setor > 99 || cadastro.setor < 0 ) {
        printf("Informe um codigo valido! (0 - 99)\n");
        scanf("%d", &cadastro.setor);
        getchar();
    }
    printf("Informe o cargo: "); scanf("%[^\n]", &cadastro.cargo); getchar();
    printf("Informe o salario: R$ ");  scanf("%d", &cadastro.salario);
   
    printf("\n ===== Cadastro Concluido! ===== ");

    /* ================================== */

    printf("\n\nNome: %s\nIdade: %d\nSexo: %c", cadastro.nome, cadastro.idade, cadastro.sexo);
    printf("\nCPF: %s\nAniversario: %.2d/%.2d/%d", cadastro.cpf, cadastro.aniversario.dia, cadastro.aniversario.mes, cadastro.aniversario.ano);
    printf("\nCodigo do setor: %d\nCargo: %s\nSalario: R$ %.d", cadastro.setor, cadastro.cargo, cadastro.salario);
    printf("\n");

    return 0;
    
}