class Solution {
  public:
      void inorder(Node* root){
          if(root==NULL){
              return;
          }
          inorder(root->left);
          cout<<root->data<<" ";
          inorder(root->right);
      }
    Node *RemoveHalfNodes(Node *root) {
        // code here
        if(root==NULL){
            return NULL;
        }
        
        root->left=RemoveHalfNodes(root->left);
        root->right=RemoveHalfNodes(root->right); 
        
        if(root->left==NULL&&root->right!=NULL){
            Node* newRoot=root->right;
            delete root;
            return newRoot;
        }
        
        if(root->right==NULL&&root->left!=NULL){
            Node* newRoot=root->left;
            delete root;
            return newRoot;
        }
        
        return root;
    }
};
