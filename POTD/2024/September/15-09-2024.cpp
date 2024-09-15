class Solution {
  public:
    Node* prev=NULL;
    Node* head=NULL;
    
    Node* bToDLL(Node* root) {
        // code here
        
        if(root==NULL) return NULL;
        flutter(root);
        return head ;
    }
    
    void flutter( Node* root){
        
        if(root==NULL)return;
        
        flutter(root->left);
        if(prev==NULL) head=root;
        else {
            prev->right=root;
            root->left=prev;
        }
        prev=root;
        flutter(root->right);
        
    }
};
