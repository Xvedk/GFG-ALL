class Solution{
public:
    vector<vector<int>> ans;
    bool check(vector<vector<int>>& board, int i, int j) {
        for(int k = 0; k < j; k++) {
            if(board[i][k] == 1) return false;
        }
        int x = i, y = j;
        while(x >= 0 && y >= 0) if(board[x--][y--] == 1) return false;
        x = i, y = j;
        while(x < board.size() && y >= 0) if(board[x++][y--] == 1) return false;
        return true;
    }
    
    void solve(vector<vector<int>>& board, int j, vector<int>& path) {
        if(j >= board.size()) {
            ans.push_back(path);
            return;
        }
        
        for(int k = 0; k < board.size(); k++) {
            if(check(board, k, j)) {
                board[k][j] = 1;
                path.push_back(k + 1);
                solve(board, j + 1, path);
                board[k][j] = 0;
                path.pop_back();
                
            }
        }
    }
    
    vector<vector<int>> nQueen(int n) {
        vector<vector<int>> board(n, vector<int>(n));
        vector<int> path;
        solve(board, 0, path);     
        return ans;
    }
};
