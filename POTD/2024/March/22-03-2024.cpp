class Solution {
  public:
  vector <int> diagonalSum(Node* root) {
        // Add your code here
        map<int,vector<int>>mp;
        queue<pair<Node*,int>>q;
        q.push({root,0});
        vector<int>ans;
        while(!q.empty())
        {
            Node* curr=q.front().first;
            int diag=q.front().second;
            q.pop();
            mp[diag].push_back(curr->data);
            if(curr->left)
            {
                q.push({curr->left,diag+1});
            }
            if(curr->right)
            {
                q.push({curr->right,diag});
            }
        }
        for(auto it: mp)
        {
            int sum=0;
            for(auto tp: it.second)
            {
                sum+=tp;
            }
            ans.push_back(sum);
        }
        
        return ans;
    }
};
