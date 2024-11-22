class Solution {
  public:
    int maximumProfit(vector<int> &prices) {
    // code here
    int n=prices.size();
    int i=0;
    int j=i+1;
    int maxProfit=0;
    while(j<n){
        if(prices[i]<=prices[j]){
            maxProfit=max(maxProfit,prices[j]-prices[i]);
            j++;
        }else{
            i=j;
            j++;
        }
    }
    return maxProfit;
    }
};
