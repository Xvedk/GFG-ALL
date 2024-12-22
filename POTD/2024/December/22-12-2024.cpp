class Solution {
  public:
    bool matSearch(vector<vector<int>> &mat, int x) {
        int n=mat.size();
        int m=mat[0].size();
        for(int j=0;j<m;j++){
            int low=mat[0][j];
            int high=mat[n-1][j];
            if(x>=low && x<=high){
                for(int i=0;i<n;i++){
                    if(x==mat[i][j])
                    return true;
                }
            }
        }
        return false;
    }
};
