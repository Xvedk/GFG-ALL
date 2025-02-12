class Solution {
  public:
    // Return the Kth smallest element in the given BST
    void in(Node*root,vector<int>&ans)
    {
        if(root==NULL)
        {
            return ;
        }
        in(root->left,ans);
        ans.push_back(root->data);
        in(root->right,ans);
    }
    int kthSmallest(Node *root, int k) {
        // add code here.
        vector<int>ans;
        in(root,ans);
        sort(ans.begin(),ans.end());
        
        int n=ans.size();
        if(n<k)
        {
            return -1;
        }
        
        return ans[k-1];
    }
};
