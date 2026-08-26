bool isHappy(int n) {
    if(n<=0)return false;
    while(n!=1 && n!=4){
        int temp=n;
        int sum=0;
        while(temp>0){
            int digit=temp%10;
            sum+=digit*digit;
            temp/=10;
        }
        n=sum;
    }
    return n==1;
}