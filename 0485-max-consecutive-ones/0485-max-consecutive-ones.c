int findMaxConsecutiveOnes(int* nums, int numsSize) {
    int count=0,newCount=0;
    for(int i=0;i<numsSize;i++){
        if(nums[i]==1){
            count++;
            if(count>newCount){
                newCount=count;
            }
        }else{
            count=0;
        }
    }
    return newCount;
}