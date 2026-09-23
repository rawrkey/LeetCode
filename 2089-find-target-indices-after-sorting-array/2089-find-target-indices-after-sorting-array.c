/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* targetIndices(int* nums, int numsSize, int target, int* returnSize) {
    int temp;
    for(int i=0;i<numsSize;i++){
        for(int j=i+1;j<numsSize;j++){
            if(nums[i]>nums[j]){
                temp=nums[i];
                nums[i]=nums[j];
                nums[j]=temp;
            }
        }
    }
    int count = 0;

    for(int i = 0; i < numsSize; i++){
        if(nums[i] == target){
            count++;
        }
    }
    int *ret=malloc(count*sizeof(int));
    *returnSize=count;
    int k=0;
    for(int i=0;i<numsSize;i++){
        if(nums[i]==target){
            ret[k]=i;
            k++;
        }
    }
    return ret;
}