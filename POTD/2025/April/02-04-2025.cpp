class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
   vector<int> bfs(vector<vector<int>> &adj) {

        // Code here

        int n=adj.size();

        vector<bool>vis(n, 0);

        queue<int>q;

        q.push(0);

        vis[0]=1;

        vector<int>ans;
      while(!q.empty()){

            int node=q.front();

            q.pop();

            ans.push_back(node);

            for(int &ngbr:adj[node]){

                if(!vis[ngbr]){

                    vis[ngbr]=1;

                    q.push(ngbr);

                }

            }

        }

        return ans;

    }
};
