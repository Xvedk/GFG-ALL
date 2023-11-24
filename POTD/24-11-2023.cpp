class Solution{
public:
    vector<long long> nthRowOfPascalTriangle(int n) {
        const long long mod = 1e9 + 7;
        vector<vector<long long>> ans(n, vector<long long> (n, 1));
        
        for(int i = 2; i < n; i++){
            for(int j = 1; j < i; j++){
                ans[i][j] = (ans[i - 1][j - 1] + ans[i - 1][j]) % mod;
            }
        }
        
        return ans.back();
    }
};
