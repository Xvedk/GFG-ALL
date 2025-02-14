class Solution {
  public:
    void inorder(Node* root,vector<int> &v){
        if(!root)
            return ;
        inorder(root->left,v);
        v.push_back(root->data);
        inorder(root->right,v);
        return ;
    }
    void inorder2(Node* root,vector<int> &v,int &i){
        if(!root)
            return ;
        inorder2(root->left,v,i);
        root->data=v[i++];
        inorder2(root->right,v,i);
        return ;
    }
    void correctBST(Node* root) {
        // add code here.
        vector<int> v;
        inorder(root,v);
        sort(v.begin(),v.end());
        int i=0;
        inorder2(root,v,i);
        return;
    }
};
