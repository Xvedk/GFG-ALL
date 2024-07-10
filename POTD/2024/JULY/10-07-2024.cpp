class Solution {
  public:
    int maxSquare(int n, int m, vector<vector<int>> mat) {
        // code here
        int maxi=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(i==0 || j==0){
                    if(mat[i][j]==1){
                        maxi==1;
                    }
                }
                else if(mat[i][j]==1){
                    mat[i][j]=1+(min({mat[i-1][j],mat[i][j-1],mat[i-1][j-1]}));
                }
                else{
                    mat[i][j]=0;
                }
                maxi=max(maxi,mat[i][j]);
            }
        }
        
        // for(int i=0;i<n;i++){
        //     for(int j=0;j<m;j++){
        //         cout<<mat[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
        return maxi;
    }
};
