int dosum(int a){
    int sum=0;
    while (a != 0) {
        sum += (a % 10); 
        a /= 10; 
    }
    return sum; 
}
int doProd(int a){
    int rem,prod=1;
    while(a!=0){
        rem=a%10;
        prod *=rem;
        a/=10;
    }
    return prod;
}
bool checkDivisibility(int n) {
    int sum=dosum(n);
    int prod=doProd(n);
    int dev=sum+prod;
    if(dev==0){
        return false;
    }
    return (n%dev==0);
}