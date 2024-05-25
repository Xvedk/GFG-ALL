class Solution {

  public:
  
    int findMinCost(string x, string y, int costX, int costY) {
        
        vector<vector<int>> dp(x.length()+1, vector<int> (y.length()+1, 0));
        
        for(int i = 1; i <= x.length(); i++){
            
            for(int j = 1; j <= y.length(); j++){
                
                if(x[i-1] == y[j-1])    dp[i][j] = dp[i-1][j-1]+1;
                
                else    dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
        int lcs = dp[x.length()][y.length()];
        
        return (x.length()-lcs)*costX + (y.length()-lcs)*costY;
    }
};
