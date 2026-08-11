int missingNumber(int* nums, int numsSize) {
    int xorResult=0;
    for(int i=0;i<numsSize;i++){
        xorResult^=i;
        xorResult^=nums[i];
    }
    xorResult^=numsSize;
    return xorResult;
}