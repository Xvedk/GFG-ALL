class Solution {
  public:
    bool findPair(Node* root, int target, unordered_set<int>& seen) {
        if (!root) return false;
    
        if (seen.find(target - root->data) != seen.end()) 
            return true;
    
        seen.insert(root->data);
    
        return findPair(root->left, target, seen) || findPair(root->right, target, seen);
    }
    
    bool findTarget(Node* root, int target) {
        unordered_set<int> seen;
        return findPair(root, target, seen);
    }
};
