/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

int* sortedSquares(int* nums, int numsSize, int* returnSize) {
    int* resultado = (int*)malloc(numsSize * sizeof(int));
    *returnSize = numsSize;

    int esquerda = 0;
    int direita = numsSize - 1;
    int posicao = numsSize - 1;

    while ( esquerda <= direita ) {
        int quadradoEsq = nums[esquerda] * nums[esquerda];
        int quadradoDir = nums[direita] * nums[direita];

        if ( quadradoEsq > quadradoDir ) {
            resultado[posicao] = quadradoEsq;
            esquerda++;
        } else {
            resultado[posicao] = quadradoDir;
            direita--;
        }
        posicao--;
    }

    return resultado;
}