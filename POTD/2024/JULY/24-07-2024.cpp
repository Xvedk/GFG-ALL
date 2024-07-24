class Solution {
  public:
    // Function to check whether a Binary Tree is BST or not.
    bool isBST(Node* root) {
        // Your code here
        
        vector<int>inor;
        
        inorder(root,inor);
        
        vector<int>check=inor;
        sort(check.begin(),check.end());
        
        if(check[0]!=inor[0]) return false;
        for(int i=1; i<check.size();i++){ 
            if(check[i]==check[i-1]) return false;
            else if(check[i]!=inor[i]) return false;
            }
        return true;
    }
    
    void inorder(Node* root,vector<int>&ans){
        
        if(root==NULL) return ;
        
        inorder(root->left,ans);
        ans.push_back(root->data);
        inorder(root->right,ans);
        
        return ;
    }
};
