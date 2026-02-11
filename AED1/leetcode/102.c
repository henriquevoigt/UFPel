/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** levelOrder(struct TreeNode* root, int* returnSize, int** returnColumnSizes) {

    if (!root) {
        *returnSize = 0;
        return NULL;
    }

    struct TreeNode* fila[2001];
    int frente = 0;
    int tras = 0;

    fila[tras++] = root;

    int** resultado = (int**)malloc(sizeof(int*) * 2000);
    *returnColumnSizes = (int*)malloc(sizeof(int) * 2000);
    *returnSize = 0;

    while (frente < tras) {

        int tamanhoNivel = tras - frente;

        resultado[*returnSize] = (int*)malloc(sizeof(int) * tamanhoNivel);
        (*returnColumnSizes)[*returnSize] = tamanhoNivel;

        for (int i = 0; i < tamanhoNivel; i++) {

            struct TreeNode* atual = fila[frente++];

            resultado[*returnSize][i] = atual->val;

            if (atual->left)  fila[tras++] = atual->left;
            if (atual->right) fila[tras++] = atual->right;
        }

        (*returnSize)++;
    }

    return resultado;
}