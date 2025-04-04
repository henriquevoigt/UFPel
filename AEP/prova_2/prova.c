#include <stdio.h>
#include <string.h>

#define tam 20 // tamanho da lista de funcionarios

struct t_data {
    int dia, mes, ano;
};

struct t_funcionario{
    int codigo;
    char nome[80], endereco[100];
    struct t_data aniversario;
    float salario;
};

struct lista_funcionario {
    struct t_funcionario fun[tam]; // vetor de funcionarios
    int num; // numero de funcionarios armazenados
};

// prototipo das funções


struct t_data leData(){

    struct t_data data;

    printf("Informe o dia\n");
    scanf("%d", &data.dia);
    printf("Informe o mes\n");
    scanf("%d", &data.mes);
    printf("Informe o ano\n");
    scanf("%d", &data.ano);
    
    return data;

}

struct t_funcionario leFuncionario(){

    struct t_funcionario funcionario;

    printf("Informe o codigo\n");
    scanf("%d", &funcionario.codigo);
    getchar();
    printf("Informe o nome\n");
    scanf("%[^\n]s", funcionario.nome);
    getchar();
    printf("Informe o endereco\n");
    scanf("%[^\n]s", funcionario.endereco);
    getchar();
    printf("Informe a data de nascimento\n");
    funcionario.aniversario = leData();
    printf("Informe o salario\n");
    scanf("%f", &funcionario.salario);
    
    return funcionario;

}

void mostraAniversariante(struct lista_funcionario cad, struct t_data dma){
    int contador = 0;
    for (int i = 0; i < cad.num; i++){
        if (cad.fun[i].aniversario.dia == dma.dia && cad.fun[i].aniversario.mes == dma.mes){
            printf("Aniversariante(s) do dia:\n %s", cad.fun[i].nome);
            contador++;
        }        
    }   
    if (contador == 0){
        printf("Nenhum aniversariante do dia\n");
    }
    
}


int main (){

    struct lista_funcionario cadastro;
    cadastro.num = 0;
    int op = 1;
    struct t_data dia;

    while (op){
        printf("\n1.Incluir\n\n2.Listar Todos\n\n3.Pesquisar Aniversariante\n\n0.Sair\n\nQual operacao deseja realizar?\n\n");
        scanf("%d", &op);

        switch (op){
            case 1:
                if (cadastro.num < tam){
                    cadastro.fun[cadastro.num] = leFuncionario();
                    cadastro.num++;
                }
                else
                    printf("Vetor cheio\n");
                break;
                
            case 2: 
                if (cadastro.num > 0)
                    for (int i = 0; i < cadastro.num; i++){
                        printf("Cod: %d\tNome: %s\n", cadastro.fun[i].codigo,cadastro.fun[i].nome);
                    }
                else
                    printf("Nenhum registro a ser mostrado\n");
                break;

            case 3:
                dia = leData();
                mostraAniversariante(cadastro, dia);   
                break;

            default:
                    printf("Fim...");
        }
    }
}

