class Solution {
  public:
    bool dfs(int u, int target, vector<bool> &visited, vector<vector<int>> &adj) {
        if (u == target) return true;
        visited[u] = true;
        for (int v : adj[u]) {
            if (!visited[v] && dfs(v, target, visited, adj))
                return true;
        }
        return false;
    }
    
    bool isBridge(int V, vector<vector<int>> &edges, int c, int d) {
        vector<vector<int>> adj(V);
        for (auto &e : edges) {
            if ((e[0] == c && e[1] == d) || (e[0] == d && e[1] == c)) continue;
            adj[e[0]].push_back(e[1]);
            adj[e[1]].push_back(e[0]);
        }
        vector<bool> visited(V, false);
        return !dfs(c, d, visited, adj);
    }
};
