#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define ALPHABET_SIZE 256 // tamanho 256 suporta a tabela ASCII estendida e bytes de caracteres UTF-8

typedef struct TrieNode {
    struct TrieNode *children[ALPHABET_SIZE];
    bool isEndOfWord;
} TrieNode;

TrieNode* criarNo();

void inserir(TrieNode *root, const char *key);

// função auxiliar recursiva (DFS) para buscar e imprimir palavras a partir de um nó
void dfs_imprimir_palavras(TrieNode* root, char* buffer, int profundidade, bool* encontrou_alguma);

void buscar_por_prefixo(TrieNode *root, const char *prefixo);

void liberar_trie(TrieNode* root);

int main() {

    TrieNode *root = criarNo();

    // inserindo o conjunto de palavras do exemplo do enunciado
    inserir(root, "mar");
    inserir(root, "maré");
    inserir(root, "maravilha");
    
    // outras palavras para teste
    inserir(root, "martelo");
    inserir(root, "massa");
    inserir(root, "bola");

    buscar_por_prefixo(root, "mar");  // teste 1: prefixo que é uma palavra completa e também prefixo de outras (condição ii)

    buscar_por_prefixo(root, "ma");   // teste 2: prefixo comum

    buscar_por_prefixo(root, "sol");   // teste 3: prefixo que não existe na árvore (condição i)

    liberar_trie(root);

    return 0;
}

TrieNode* criarNo() {
    TrieNode *pNode = (TrieNode *)malloc(sizeof(TrieNode));
    if (pNode) {
        pNode->isEndOfWord = false;
        for (int i = 0; i < ALPHABET_SIZE; i++) {
            pNode->children[i] = NULL;
        }
    }
    return pNode;
}

void inserir(TrieNode *root, const char *key) {
    TrieNode *pCrawl = root;
    int length = strlen(key);

    for (int level = 0; level < length; level++) {
        // usa unsigned char para evitar índices negativos com caracteres acentuados
        unsigned char index = (unsigned char)key[level]; 
        
        if (!pCrawl->children[index]) {
            pCrawl->children[index] = criarNo();
        }
        pCrawl = pCrawl->children[index];
    }
    pCrawl->isEndOfWord = true;
}

void dfs_imprimir_palavras(TrieNode* root, char* buffer, int profundidade, bool* encontrou_alguma) {
    if (!root) return;

    // condição ii: Se o nó atual for fim de uma palavra, imprime o buffer.
    if (root->isEndOfWord) {
        buffer[profundidade] = '\0'; // Adiciona o terminador de string
        printf(" - %s\n", buffer);
        *encontrou_alguma = true;
    }

    for (int i = 0; i < ALPHABET_SIZE; i++) {
        if (root->children[i]) {
            buffer[profundidade] = i; // adiciona o caractere atual ao buffer
            dfs_imprimir_palavras(root->children[i], buffer, profundidade + 1, encontrou_alguma);
        }
    }
}

void buscar_por_prefixo(TrieNode *root, const char *prefixo) {
    TrieNode *pCrawl = root;
    int length = strlen(prefixo);
    char buffer[1024]; // buffer local para reconstruir as palavras
    bool encontrou_alguma = false;

    for (int level = 0; level < length; level++) {
        unsigned char index = (unsigned char)prefixo[level];
        
        // condição i: se o prefixo não existir, a busca para (simulando retorno de lista vazia)
        if (!pCrawl->children[index]) {
            printf("\nBusca por '%s': [Lista Vazia] Nenhum resultado encontrado.\n", prefixo);
            return;
        }
        
        pCrawl = pCrawl->children[index];
        buffer[level] = prefixo[level]; // vai guardando o prefixo no buffer
    }

    // se chegou aqui, o prefixo existe.
    printf("\nBusca por '%s' - Resultados encontrados:\n", prefixo);
    dfs_imprimir_palavras(pCrawl, buffer, length, &encontrou_alguma);
}

void liberar_trie(TrieNode* root) {
    if (!root) return;
 
    for (int i = 0; i < ALPHABET_SIZE; i++) {
        if (root->children[i]) {
            liberar_trie(root->children[i]);
        }
    }

    free(root);
}