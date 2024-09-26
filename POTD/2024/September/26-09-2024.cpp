class Solution {
  public:
    int maxStep(vector<int>& arr) {
        int n = arr.size(), res = 0; int dp[n+1]; memset(dp,0,sizeof(dp));
        for ( int i = 1; i<n; i++ ){
            if ( arr[i] > arr[i-1] ) dp[i] = dp[i-1] + 1;
            res = max(res, dp[i]);
        } return res;
    }
};
