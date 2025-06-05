class Solution {
  public:
    int solve(vector<vector<int>>&adj,int curr,int& src,int& dest,vector<int>&dp){
        if(curr==dest){
            return 1;
        }
        if(dp[curr]!=-1){
            return dp[curr];
        }
        int ans = 0;
        for(auto it:adj[curr]){
            ans += solve(adj,it,src,dest,dp);
        }
        return dp[curr]=ans;
    }
    int countPaths(vector<vector<int>>& edges, int V, int src, int dest) {
        // Code here
        vector<vector<int>>adj(V);
        vector<int>dp(V,-1);
        for(auto it:edges){
            adj[it[0]].push_back(it[1]);
        }
        return solve(adj,src,src,dest,dp);
    }
};
