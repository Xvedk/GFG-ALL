int findPlatform(vector<int>& arr, vector<int>& dep) {
        // Your code here
        
        int n=arr.size();
        vector<int>dp(2360,0);
        for(int i=0;i<n;i++)
        {
            int x=arr[i];
            int y=dep[i];
            dp[x]++;
            dp[y+1]--;
        }
        int ans=0;
        for(int i=1;i<2360;i++)
        {
            dp[i]=dp[i-1]+dp[i];
            ans=max(ans,dp[i]);
        }
        return ans;
        
    }
