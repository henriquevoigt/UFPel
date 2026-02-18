/**
 * Definition for a binary tree node.
 * struct TreeNode {
 * int val;
 * struct TreeNode *left;
 * struct TreeNode *right;
 * };
 */

struct TreeNode* lista[10000];
int contagem = 0;

void extrairNos(struct TreeNode* root) {
    if (root == NULL) return;
    
    extrairNos(root->left);
    
    lista[contagem++] = root; 
    
    extrairNos(root->right);
}

struct TreeNode* construirArvore(int inicio, int fim) {
    if (inicio > fim) return NULL;
    
    int meio = inicio + (fim - inicio) / 2;
    struct TreeNode* raiz = lista[meio];
    
    raiz->left = construirArvore(inicio, meio - 1);
    
    raiz->right = construirArvore(meio + 1, fim);
    
    return raiz;
}

struct TreeNode* balanceBST(struct TreeNode* root) {

    contagem = 0;
    
    extrairNos(root);
    
    return construirArvore(0, contagem - 1);
}