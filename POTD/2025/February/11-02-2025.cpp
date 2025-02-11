class Solution {
  public:
    // Function to check whether a Binary Tree is BST or not.
    
    bool solve(Node* node, int mini, int maxi){
        if(!node) return 1;
        bool lft=solve(node->left, mini, node->data);
        bool rgt=solve(node->right, node->data, maxi);
        if(node->data>=mini && node->data<=maxi && lft && rgt) return 1;
        else return 0;
    }
    
    bool isBST(Node* root) {
        // Your code here
        return solve(root, -1e9, 1e9);
    }
};
