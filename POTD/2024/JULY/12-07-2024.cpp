class Solution {
  public:
    bool hasPathSum(Node *root, int target) {
        if(!root)return false;
        target-=root->data;
        if(!root->left and !root->right)return target==0;
        else return hasPathSum(root->left,target) or hasPathSum(root->right,target);
        
    }

};
