/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
    int* resultado = (int*)malloc(nums1Size * sizeof(int));
    int k = 0;

    for ( int i = 0; i < nums1Size; i++ ) {
        int achouNoSegundo = 0;
        
        for ( int j = 0; j < nums2Size; j++ ) {
            if ( nums1[i] == nums2[j] ) {
                achouNoSegundo = 1;
                break;
            }
        }

        if ( achouNoSegundo == 1 ) {
            int jaAdicionado = 0;
            for ( int x = 0; x < k; x++ ) {
                if ( resultado[x] == nums1[i] ) {
                    jaAdicionado = 1;
                    break;
                }
            }

            if ( jaAdicionado == 0 ) {
                resultado[k] = nums1[i];
                k++;
            }
        }
    }

    *returnSize = k;
    return resultado;
}