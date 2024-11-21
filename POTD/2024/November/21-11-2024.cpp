class Solution {
  public:
    int maximumProfit(vector<int> &prices) {
        int t=prices.front();
        int ans=0;
        for(int i=1;i<prices.size();i++){
            if(prices[i]>t)ans+=prices[i]-t,t=prices[i];
            else t=prices[i];
        }
        return ans;
    }
};

