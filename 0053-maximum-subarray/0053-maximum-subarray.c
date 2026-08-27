int maxSubArray(int* nums, int numsSize) {
    int max=nums[0];
    int current=0;
    for(int i=0;i<numsSize;i++){
        current+=nums[i];
        if(current>max){
            max=current;
        }
        if(current<0){
            current=0;
        }
    }
    return max;
}