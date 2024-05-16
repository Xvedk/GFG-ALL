lass Solution {
    void dfs(int node, vector<vector<int>>& adj, vector<bool>& visited, vector<int>& componentSizes, int& totalEdgesToRemove) {
        visited[node] = true;
        componentSizes[node] = 1;

        for (int neighbor : adj[node]) {
            if (!visited[neighbor]) {
                dfs(neighbor, adj, visited, componentSizes, totalEdgesToRemove);
                componentSizes[node] += componentSizes[neighbor];

                if (componentSizes[neighbor] % 2 == 0) {
                    totalEdgesToRemove++;
                }
            }
        }
    }
public:
	int minimumEdgeRemove(int n, vector<vector<int>>edges){
	    vector<vector<int>> adj(n + 1);
        for (auto edge : edges) {
            adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]);
        }

        vector<bool> visited(n + 1, false);
        vector<int> componentSizes(n + 1, 0);
        int totalEdgesToRemove = 0;

        for (int i = 1; i <= n; i++) {
            if (!visited[i]) {
                dfs(i, adj, visited, componentSizes, totalEdgesToRemove);
            }
        }

        return totalEdgesToRemove;
	}
};
