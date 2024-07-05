class Solution {
  public:
    // Function to find the vertical width of a Binary Tree.
    int verticalWidth(Node* root) {
        // code here
        
        // base case
        if(root==NULL)
        return 0;
        // create set for store unique index
        set<int> s;
        // create queue of pair 
        queue<pair<int,Node*>> q;
        
        // initial step 
        // insert 0 index and root node
        q.push({0,root});
        
        while(!q.empty()){
          pair<int,Node*> p = q.front();
          q.pop();
           s.insert(p.first);
           
           // check for element is present in left side of tree
          if((p.second)->left!=NULL){
              q.push({(p.first)+1,(p.second)->left});
          }
          // check for element is present in right side of tree
          if((p.second)->right!=NULL){
              q.push({(p.first)-1,(p.second)->right});
          }
        }
        //return the size of the set
        return s.size();
    }


};
