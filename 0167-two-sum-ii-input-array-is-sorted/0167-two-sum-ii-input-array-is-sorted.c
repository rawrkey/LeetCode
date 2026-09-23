/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* numbers, int numbersSize, int target, int* returnSize) {
    int *ret=malloc(2*sizeof(int));
    *returnSize=2;
    int left=0;
    int right=numbersSize-1;
    while(left<right){
        if((numbers[left]+numbers[right])==target){
            ret[0]=left+1;
            ret[1]=right+1;
            break;
        }else if((numbers[left]+numbers[right])>target){
            right--;
        }else{
            left++;
        }
    }
    return ret;

}