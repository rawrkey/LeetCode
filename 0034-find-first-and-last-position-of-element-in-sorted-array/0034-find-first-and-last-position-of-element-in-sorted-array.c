/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* searchRange(int* nums, int numsSize, int target, int* returnSize) {
    int *ret=malloc(2*sizeof(int));
    *returnSize=2;
    int left=0;
    int right=numsSize-1;
    ret[0] = -1;
    ret[1] = -1;
    while(left<=right){
        int mid=left + (right-left)/2;
        if(nums[mid]==target){
            ret[0]=mid;
            right=mid-1;
        }else if(nums[mid]>target){
            right=mid-1;
        }else{
            left=mid+1;
        }
        
    }
    left=0;
    right=numsSize-1;
    while(left<=right){
        int mid=left + (right-left)/2;
        if(nums[mid]==target){
            ret[1]=mid;
            left=mid+1;
        }else if(nums[mid]>target){
            right=mid-1;
        }else{
            left=mid+1;
        }
        
    }
    return ret;
}