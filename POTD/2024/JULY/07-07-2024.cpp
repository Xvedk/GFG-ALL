class Solution {
  public:
    bool fin = false;
    void inorder(struct Node *root, int target, vector<int>& ans){
        if(!root)
            return;
        if(root->data == target){
            fin = true;
            return;
        }
        if(!fin)
            inorder(root->left, target, ans);
        if(!fin)
            inorder(root->right, target, ans);
        if(fin){
            ans.push_back(root->data);
            return;
        }
    }
    // Function should return all the ancestor of the target node
    vector<int> Ancestors(struct Node *root, int target) {
        // Code here
        vector<int> ans;
        if(root->data == target){
            return {};
        }
        inorder(root, target, ans);
        return ans;
    }
};
