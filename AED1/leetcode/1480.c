/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* runningSum(int* nums, int numsSize, int* returnSize) {
    
    int *sum;

    sum = (int *)malloc(numsSize * sizeof( int ));

    if ( !sum ) {
        printf("Fail!\n");
        exit(0);
    }

    for ( int i = 0; i < numsSize; i++ ) {
        if ( i == 0 ) {
            sum[i] = nums[i];
        } else {
            sum[i] = ( sum[i - 1] + nums[i] );
        }        
    }

    *returnSize = numsSize;
    
    return sum;

}