class Solution {
  public:
    int func(Node* root)
    {
        if(root==NULL)return 0;
        if(root->left==NULL&&root->right==NULL)return root->data;
        int left=func(root->left);
        if(left==-1)return -1;
        int right=func(root->right);
        if(right==-1)return -1;
        if(left+right!=root->data)return -1;
        return left+right+root->data;
        
    }
    bool isSumTree(Node* root) {
        // Your code here
        return func(root)==-1?false:true;
    }
};
