int maxArea(int* height, int heightSize) {
    int left=0;
    int right=heightSize-1;
    int maxWater=0;
    while(left<right){
        int currArea=0;
        if(height[left]<height[right]){
            currArea=height[left]*(right-left);
            left++;
        }else{
            currArea=height[right]*(right-left);
            right--;
        }
        if(currArea>maxWater){
            maxWater=currArea;
        }
    }
    return maxWater;
}