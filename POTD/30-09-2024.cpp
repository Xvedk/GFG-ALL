class Solution {
  public:
    vector<int> res;
    void rec( Node *root ){
        if ( root == NULL ) return;
        res.push_back(root->data);
        rec(root->left); rec(root->right);
    }
    vector<int> merge(Node *root1, Node *root2) {
        rec(root1); rec(root2);
        sort(res.begin(),res.end());
        return res;
    }
};
