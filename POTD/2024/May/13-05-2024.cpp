class Solution {
  public:
    bool connection(int check, vector<bool>& visited, vector<vector<int>>& adj) {
        vector<int> checker = adj[check];
        checker.push_back(check);
        sort(checker.begin(), checker.end());
        
        for(auto i : adj[check]) {
            visited[i] = true;
            vector<int> temp = adj[i];
            temp.push_back(i);
            sort(temp.begin(), temp.end());
            if(checker != temp) return false;
        }
        //cout << "Yes"<< endl;
        return true;
    }
    
    int findNumberOfGoodComponent(int e, int v, vector<vector<int>> &edges) {
        int ans = 0;
        vector<bool> visited(v + 1, false);
        vector<vector<int>> adj(v + 1, vector<int>());
        //cout << "debug"<< endl;
        
        for(auto i : edges) {
            int s = i[0];
            int e = i[1];
            
            adj[s].push_back(e);
            adj[e].push_back(s);
        }
        
        for(int i = 1; i <= v; i++) {
            if(visited[i] != true) {
                visited[i] = true;
                bool check = connection(i, visited, adj);
                //cout << "Enter"<< endl;
                if(check) ans++;
            } 
        }
        
        return ans;
    }
};
