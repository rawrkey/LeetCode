int maxProfit(int* prices, int pricesSize) {
    if(pricesSize<2)return 0;
    int buy1=prices[0];
    int profit1=0;
    int buy2=prices[0];
    int profit2=0;
    for(int i=0;i<pricesSize;i++){
        if(prices[i]<buy1){
            buy1=prices[i];
        }
        if(prices[i]-buy1>profit1){
            profit1=prices[i]-buy1;
        }
        if(prices[i]-profit1<buy2){
            buy2=prices[i]-profit1;
        }
        if(prices[i]-buy2>profit2){
            profit2=prices[i]-buy2;
        }
    }
    return profit2;
}