#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// INT menu | INT qtd_pessoas | PESSOA_1 | PESSOA_2 | ... | PESSOA_N | ...

#define TAM 25 // tamanho das strings

#define TAM_METADADOS (sizeof(int) * 2) // int menu + int qtd_pessoas

#define TAM_PESSOA (TAM * sizeof(char) + sizeof(int) + TAM * sizeof(char))  // char nome[25] + int idade + char email[25]

void *AdicionarPessoa ( void *pBuffer );
void *RemoverPessoa ( void *pBuffer );
void *BuscarPessoa ( void *pBuffer );
void ListarTodos ( void *pBuffer );

int main () {

    void *pBuffer = (void *)malloc(TAM_METADADOS); // MENU | QTD_PESSOAS

    *(int *)(pBuffer + sizeof(int)) = 0;

    do {
        
        printf("Informe a opcao desejada:\n1.Adicionar Pessoa\n2.Remover Pessoa\n3.Buscar Pessoa\n4.Listar Todos\n5. Sair\n");
        scanf(" %d", (int *)pBuffer);

        switch ( *(int *)pBuffer) {
            case 1:
                pBuffer = AdicionarPessoa( pBuffer );
                break;
            case 2:
                pBuffer = RemoverPessoa( pBuffer );
                break;
            case 3:
                pBuffer = BuscarPessoa( pBuffer );
                break;
            case 4:
                ListarTodos( pBuffer );
                break;
            case 5:
                break;
            default: 
                continue;
        }   
    } while ( *(int *)pBuffer != 5 );
   
    free(pBuffer);

    return 0;

}

void *AdicionarPessoa ( void *pBuffer ) {

   void *temp = NULL;

   temp = (void *)realloc(pBuffer, TAM_METADADOS + *(int *)(pBuffer + sizeof(int)) * TAM_PESSOA + TAM_PESSOA);

    if ( !temp ) {
        printf("Erro ao alocar memoria!\n");
        exit(1);
    }

    pBuffer = temp;
      

   printf("Informe o nome: (MAXIMO DE 24 CARACTERES)\n"); // total de pessoas * tamanho da pessoa 
   scanf(" %24[^\n]", pBuffer + TAM_METADADOS + (*(int *)(pBuffer + sizeof(int)) * TAM_PESSOA));

   printf("Informe a idade:\n"); // total de pessoas * tamanho da pessoa + nome 
   scanf(" %d", pBuffer + TAM_METADADOS + (*(int *)(pBuffer + sizeof(int)) * TAM_PESSOA) + (TAM * sizeof(char)));

   printf("Informe o email: (MAXIMO DE 24 CARACTERES)\n"); // total de pessoas * tamanho da pessoa + nome + idade
   scanf(" %24[^\n]", pBuffer + TAM_METADADOS + (*(int *)(pBuffer + sizeof(int)) * TAM_PESSOA) + (TAM * sizeof(char)) + sizeof(int)); 

   *(int *)(pBuffer + sizeof(int)) += 1; // int qtd_pessoas++

   return pBuffer;

}

void ListarTodos ( void *pBuffer ) {

    if (*(int *)(pBuffer + sizeof(int)) == 0) {
        printf("Nenhuma pessoa cadastrada!\n");
        return;
    }

    *(int *)pBuffer = 0; // pegando o int menu pra usar como controle do laço

    printf("Listando todos cadastros:\n");

    for ( *(int *)pBuffer; *(int *)pBuffer < *(int *)(pBuffer + sizeof(int)); *(int *)pBuffer+= 1 ) {
        printf("%d. Nome: %s |", *(int *)pBuffer, pBuffer + TAM_METADADOS + (*(int *)pBuffer * TAM_PESSOA));
        printf("Idade: %d |", *(int *)(pBuffer + TAM_METADADOS + *(int *)pBuffer * TAM_PESSOA + (TAM * sizeof(char))));
        printf("E-mail: %s |\n", pBuffer + TAM_METADADOS + *(int *)pBuffer * TAM_PESSOA + (TAM * sizeof(char)) + sizeof(int));
    }

    return;

}

void *BuscarPessoa ( void *pBuffer ) {

    void *temp = NULL; // alocando + TAM no pBuffer, pra busca da string que será informada

    temp = (void *)realloc(pBuffer, TAM_METADADOS + *(int *)(pBuffer + sizeof(int)) * TAM_PESSOA + TAM);

    if ( !temp ) {
        printf("Erro ao alocar memoria!\n");
        exit(1);
    }

    pBuffer = temp;

    *(int *)pBuffer = 0; // pegando o int menu pra usar como controle do laço

    printf("Informe o nome que deseja buscar: (MAXIMO DE 24 CARACTERES)\n");
    scanf(" %24[^\n]", pBuffer + TAM_METADADOS + (*(int *)(pBuffer + sizeof(int)) * TAM_PESSOA));

    for ( *(int *)pBuffer; *(int *)pBuffer < *(int *)(pBuffer + sizeof(int)); *(int *)pBuffer+= 1 ) {

        if ( !strcmp(pBuffer + TAM_METADADOS + (*(int *)pBuffer * TAM_PESSOA), pBuffer + TAM_METADADOS + (*(int *)(pBuffer + sizeof(int)) * TAM_PESSOA)) ){
            printf("%d. Nome: %s |", *(int *)pBuffer, pBuffer + TAM_METADADOS + (*(int *)pBuffer * TAM_PESSOA));
            printf(" Idade: %d |", *(int *)(pBuffer + TAM_METADADOS + *(int *)pBuffer * TAM_PESSOA + (TAM * sizeof(char))));
            printf(" E-mail: %s |\n", pBuffer + TAM_METADADOS + *(int *)pBuffer * TAM_PESSOA + (TAM * sizeof(char)) + sizeof(int));

            break;
        }
    }

    if ( *(int *)pBuffer == *(int *)(pBuffer + sizeof(int)) ) {
        printf("Pessoa nao encontrada.\n");
    }

    temp = (void *)realloc(pBuffer, TAM_METADADOS + *(int *)(pBuffer + sizeof(int)) * TAM_PESSOA); // encolhendo o pBuffer novamente

    if ( !temp ) {
        printf("Erro ao alocar memoria!\n");
        exit(1);
    }

    pBuffer = temp; // retornando endereço atualizado (pode ter mudado de lugar no realloc)

    return pBuffer;
    
}

void *RemoverPessoa ( void *pBuffer ) {

    void *temp = NULL; // alocando + TAM no pBuffer, pra busca da string que será informada

    temp = (void *)realloc(pBuffer, TAM_METADADOS + *(int *)(pBuffer + sizeof(int)) * TAM_PESSOA + TAM);

    if ( !temp ) {
        printf("Erro ao alocar memoria!\n");
        exit(1);
    }

    pBuffer = temp;

    *(int *)pBuffer = 0; // pegando o int menu pra usar como controle do laço

    printf("Informe o nome que deseja buscar: (MAXIMO DE 24 CARACTERES)\n");
    scanf(" %24[^\n]", pBuffer + TAM_METADADOS + (*(int *)(pBuffer + sizeof(int)) * TAM_PESSOA));

    for ( *(int *)pBuffer; *(int *)pBuffer < *(int *)(pBuffer + sizeof(int)); *(int *)pBuffer+= 1 ) {

        if ( !strcmp(pBuffer + TAM_METADADOS + (*(int *)pBuffer * TAM_PESSOA), pBuffer + TAM_METADADOS + (*(int *)(pBuffer + sizeof(int)) * TAM_PESSOA)) ){
            memmove(pBuffer + TAM_METADADOS + (*(int *)pBuffer * TAM_PESSOA), pBuffer + TAM_METADADOS + ((*(int *)pBuffer + 1) * TAM_PESSOA), (*(int *)(pBuffer + sizeof(int)) - *(int *)pBuffer - 1) * TAM_PESSOA);
            break;
        }
    }

    if ( *(int *)pBuffer == *(int *)(pBuffer + sizeof(int)) ) {
        printf("Pessoa nao encontrada.\n");
    } else {
        *(int *)(pBuffer + sizeof(int)) -= 1; // qtd_pessoas--
    }

    temp = (void *)realloc(pBuffer, TAM_METADADOS + *(int *)(pBuffer + sizeof(int)) * TAM_PESSOA); // encolhendo o pBuffer novamente

    if ( !temp ) {
        printf("Erro ao alocar memoria!\n");
        exit(1);
    }

    pBuffer = temp; // retornando endereço atualizado (pode ter mudado de lugar no realloc)

    return pBuffer;
    
}