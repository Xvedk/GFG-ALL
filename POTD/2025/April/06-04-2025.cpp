class Solution {
  public:
    vector<int> topoSort(int V, vector<vector<int>>& edges) {
        // code here
        
        // first we convert given edges into adjecent
        vector<int> adj[V];
        for(auto it: edges) {
            int u = it[0], v = it[1];
            adj[u].push_back(v);
        }
        
        // now we calculate in-degree of the nodes
        int inDegree[V] = {0};
        for(int i=0; i<V; i++) {
            for(auto it: adj[i])
                inDegree[it]++;
        }
        
        // then we push the node in queue who have in-degree value = 0
        queue<int> q;
        for(int i=0; i<V; i++) {
            if(inDegree[i] == 0)
                q.push(i);
        }
        
        // now we approach through BFS
        vector<int> res;
        while(!q.empty()) {
            int node = q.front();
            q.pop();
            
            res.push_back(node);
            
            for(auto it: adj[node]) {
                inDegree[it]--;
                if(inDegree[it] == 0)
                    q.push(it);
            }
        }
        
        return res;
    }
};
