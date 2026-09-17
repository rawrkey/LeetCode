/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
    int maxSize;
    if(nums1Size<nums2Size){
        maxSize=nums1Size;
    }else{
        maxSize=nums2Size;
    }
    int count=0;
    int* intersection=malloc(maxSize*sizeof(int));
    for(int i=0;i<nums1Size;i++){
        for(int j=0;j<nums2Size;j++){
            if(nums1[i]==nums2[j]){
                bool added=false;
                for(int k=0;k<count;k++){
                    if(intersection[k]==nums1[i]){
                        added=true;
                        break;
                    }
                }
                if(!added){
                    intersection[count]=nums1[i];
                    count++;
                }
                break;
            }
        }
    }
    *returnSize=count;
    return intersection;
}