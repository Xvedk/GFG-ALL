class Solution {
  public:
    void setMatrixZeroes(vector<vector<int>> &mat) {
        // code here
        set<int> r,c;
        int n=mat.size(),m=mat[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j]==0){
                    r.insert(i);c.insert(j);
                }
            }
        }
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(r.count(i) || c.count(j)){
                    mat[i][j]=0;
                }
            }
        }
    }
};
