class Solution{
  public:
  
    void find(Node *root , int pos , int &l , int &r)
    {
        if(!root)
        return;
        
        l=min(l,pos);
        r=max(r,pos);
        
        find(root->left , pos-1 , l , r);
        find(root->right , pos+1 , l , r);
    }
    
    vector <int> verticalSum(Node *root) {
        // add code here.
        
        int l=0 , r=0;
        find(root , 0 , l , r);
        vector<int> ans(r-l+1,0);
        //vector<bool> visit(r-l+1,0);
        
        queue<Node *>q;
        queue<int>q1;
        q.push(root);
        q1.push(-1*l);
        
        while(!q.empty())
        {
            Node *temp=q.front();
            q.pop();
            int index=q1.front();
            q1.pop();
            
            ans[index]+=temp->data;
            
            if(temp->left)
            {
                q.push(temp->left);
                q1.push(index-1);
            }
            if(temp->right)
            {
                q.push(temp->right);
                q1.push(index+1);
            }
        }
        
        return ans;
    }
};
