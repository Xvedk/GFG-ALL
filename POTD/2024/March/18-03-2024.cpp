class Solution
{
    public:
    //Function to return the level order traversal of a tree.
    vector<int> levelOrder(Node* root)
    {
        
      vector<int>v;
      if(root==NULL)return v;
      queue<Node*>q;
      q.push(root);
      while(!q.empty())
      {
          Node*curr=q.front();
          int p=curr->data;
          v.push_back(p);
          q.pop();
          if(curr->left)
          q.push(curr->left);
          if(curr->right)
          q.push(curr->right);
      }
      return v;
    }
};
