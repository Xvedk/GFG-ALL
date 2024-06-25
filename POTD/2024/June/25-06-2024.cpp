class Solution {
  public:
    vector<vector<int>> rotateMatrix(int k, vector<vector<int>> mat) {
        // code here 
        vector<vector<int>>ans;
        int n=mat.size();
        int m=mat[0].size(); 

        for(int i=0;i<n;++i){
            vector<int>v;
            int t=k%m;
            for(int j=0;j<m;++j){
                v.push_back(mat[i][t]);
                t=(t+1)%m; 
            }
            ans.push_back(v); 
        }
        return ans; 
    }
};
