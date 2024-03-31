class Solution {
  public:
    void findFromBST(int &ans, Node* root, int &n){
        if(root==NULL) return;
        if(root->key==n){
            ans = n;
            return;
        }
        if(root->key<n){
            ans = root->key;
            findFromBST(ans, root->right, n);
        }
        else{
            findFromBST(ans, root->left, n);
        }
        return;
    }
    
    int findMaxForN(Node* root, int n) {
        int ans = -1;
        findFromBST(ans, root, n);
        if(ans==-1) return -1;
        return ans;
    }
};
