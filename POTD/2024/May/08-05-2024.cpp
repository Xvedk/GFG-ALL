class Solution {
     private:
    void findingPaths(Node *root, vector<vector<int>> &paths, vector<int> &path){
        if(root == NULL)
            return;
        
        path.push_back(root->data);
        
        if(root->left == NULL && root->right == NULL)
            paths.push_back(path);
            
        findingPaths(root->left, paths, path);
        findingPaths(root->right, paths, path);
        
        path.pop_back();
    }
  public:
    vector<vector<int>> Paths(Node* root) {
        // code here
    vector<vector<int>> paths;
        vector<int> path;
        
        findingPaths(root, paths, path);
        
        return paths;
    }
